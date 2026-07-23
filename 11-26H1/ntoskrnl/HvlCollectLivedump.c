/*
 * XREFs of HvlCollectLivedump @ 0x1405C2B14
 * Callers:
 *     IopLiveDumpCollectPages @ 0x1405D1168 (IopLiveDumpCollectPages.c)
 * Callees:
 *     HvlpReleaseHypercallPage @ 0x14032D8C0 (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x14032D9A0 (HvlpAcquireHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14032DB30 (HvcallInitiateHypercall.c)
 *     VslpEnterIumSecureMode @ 0x14036A34C (VslpEnterIumSecureMode.c)
 *     HvlpSnapshotCrashArea @ 0x1405C3764 (HvlpSnapshotCrashArea.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall HvlCollectLivedump(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  __int64 result; // rax
  _QWORD *v9; // rbx
  _QWORD *v10; // rax
  unsigned __int64 v11; // rdx
  _QWORD *v12; // r15
  __int16 v13; // ax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // esi
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  void *v21; // rcx
  unsigned int v22; // ebx
  __int128 v23; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v24; // [rsp+38h] [rbp-C8h]
  __int128 v25; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v26; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v27; // [rsp+58h] [rbp-A8h]
  _BYTE v28[8]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v29; // [rsp+68h] [rbp-98h]
  _BYTE v30[32]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v31[64]; // [rsp+F0h] [rbp-10h] BYREF

  v25 = 0LL;
  v26 = 0LL;
  LODWORD(v27) = 0;
  LODWORD(v24) = 0;
  HvlpSnapshotCrashArea(a1, a2, a3, a4, 0LL, 0LL, 0LL);
  if ( VslVsmEnabled )
  {
    memset_0(v28, 0, 0x68uLL);
    v29 = (-(__int64)((a1 & 2) != 0) & 0xFFFFFFFFFFFFFFEBuLL) + 24;
    result = VslpEnterIumSecureMode(2u, 0x10Du, 0, (__int64)v28);
    if ( (int)result >= 0 )
    {
      *(_OWORD *)(a4 + 16) = HvlSkCrashdumpGuid;
      *a3 = 0LL;
    }
  }
  else if ( (HvlpRootFlags & 2) != 0 && VslpReservedTransferLock.WaitBlock[3].WaitListEntry.Flink )
  {
    v9 = HvlpAcquireHypercallPage((__int64)&v25, 1, (__int64)v31, 32LL);
    v10 = HvlpAcquireHypercallPage((__int64)&v23, 2, (__int64)v30, 16LL);
    v11 = v27;
    v12 = v10;
    *v9 = a1;
    *(_OWORD *)(v9 + 1) = *(_OWORD *)a2;
    v9[3] = *(_QWORD *)(a2 + 16);
    v13 = HvcallInitiateHypercall(142LL, v11);
    if ( !v13 || v13 == 51 )
    {
      v17 = 0;
      *a3 = *v12;
    }
    else
    {
      v17 = -1073741823;
    }
    HvlpReleaseHypercallPage((unsigned int *)&v23, v14, v15, v16);
    HvlpReleaseHypercallPage((unsigned int *)&v25, v18, v19, v20);
    if ( v17 >= 0 )
    {
      v21 = *(void **)(a4 + 32);
      v22 = *(_DWORD *)&VslpReservedTransferLock.WaitBlockFill11[160] << 12;
      if ( v21 == *(void **)a4 && *(_DWORD *)(a4 + 8) >= v22 )
        memmove(v21, VslpReservedTransferLock.WaitBlock[3].WaitListEntry.Flink, v22);
      else
        *(_QWORD *)(a4 + 32) = VslpReservedTransferLock.WaitBlock[3].WaitListEntry.Flink;
      *(_DWORD *)(a4 + 40) = v22;
      *(_OWORD *)(a4 + 16) = HvlCrashdumpGuid;
    }
    return (unsigned int)v17;
  }
  else
  {
    return 3221225659LL;
  }
  return result;
}
