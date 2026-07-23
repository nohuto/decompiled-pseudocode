/*
 * XREFs of HvlDmaGetHybridPassthroughReservedRegions @ 0x1405BEE70
 * Callers:
 *     <none>
 * Callees:
 *     HvlpHvToNtStatus @ 0x1402F4CA0 (HvlpHvToNtStatus.c)
 *     HvlpReleaseHypercallPage @ 0x14032D8C0 (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x14032D9A0 (HvlpAcquireHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14032DB30 (HvcallInitiateHypercall.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall HvlDmaGetHybridPassthroughReservedRegions(__int64 a1)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rdi
  unsigned __int64 v4; // rdx
  __int64 v5; // rdx
  unsigned __int16 v6; // bx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int128 v13; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v14; // [rsp+30h] [rbp-D0h]
  __int64 v15; // [rsp+38h] [rbp-C8h]
  __int128 v16; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v17; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v18; // [rsp+58h] [rbp-A8h]
  _BYTE v19[48]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v20[8144]; // [rsp+90h] [rbp-70h] BYREF

  v17 = 0LL;
  LODWORD(v18) = 0;
  v14 = 0LL;
  LODWORD(v15) = 0;
  v16 = 0LL;
  v13 = 0LL;
  v2 = HvlpAcquireHypercallPage((__int64)&v16, 1, (__int64)v19, 24LL);
  v3 = HvlpAcquireHypercallPage((__int64)&v13, 2, (__int64)v20, 4072LL);
  *(_QWORD *)((char *)v2 + 12) = 0LL;
  *((_DWORD *)v2 + 5) = 0;
  v4 = v18;
  *v2 = HvlPartitionId;
  *((_DWORD *)v2 + 2) = 589824;
  v6 = HvcallInitiateHypercall(257LL, v4);
  if ( !v6 )
  {
    *(_QWORD *)a1 = *v3;
    *(_OWORD *)(a1 + 24) = *(_OWORD *)(v3 + 1);
    *(_OWORD *)(a1 + 40) = *(_OWORD *)(v3 + 3);
    *(_OWORD *)(a1 + 56) = *(_OWORD *)(v3 + 5);
    *(_OWORD *)(a1 + 72) = *(_OWORD *)(v3 + 7);
    *(_DWORD *)(a1 + 8) = 512;
    *(_QWORD *)(a1 + 16) = a1 + 24;
  }
  HvlpReleaseHypercallPage((unsigned int *)&v13, v5, v7, v8);
  HvlpReleaseHypercallPage((unsigned int *)&v16, v9, v10, v11);
  return HvlpHvToNtStatus(v6);
}
