/*
 * XREFs of HvlMapDeviceInterrupt @ 0x1405BFEF0
 * Callers:
 *     <none>
 * Callees:
 *     HvlpAffinityToHvProcessorSet @ 0x1402F46DC (HvlpAffinityToHvProcessorSet.c)
 *     HvlpHvStatusIsInsufficientMemory @ 0x1402F4C78 (HvlpHvStatusIsInsufficientMemory.c)
 *     HvlpHvToNtStatus @ 0x1402F4CA0 (HvlpHvToNtStatus.c)
 *     HvlpReleaseHypercallPage @ 0x14032D8C0 (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x14032D9A0 (HvlpAcquireHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14032DB30 (HvcallInitiateHypercall.c)
 *     HvlpHandleInsufficientMemory @ 0x140533814 (HvlpHandleInsufficientMemory.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall HvlMapDeviceInterrupt(__int64 a1, _OWORD *a2, __int64 *a3, _OWORD *a4)
{
  unsigned int v8; // edi
  __int64 v9; // rcx
  __int64 v10; // rdx
  _QWORD *v11; // r14
  _QWORD *v12; // rbx
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned int v17; // eax
  unsigned __int64 v18; // rdx
  __int16 v19; // ax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int16 v23; // bx
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int128 v28; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v29; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v30; // [rsp+40h] [rbp-C0h]
  __int128 v31; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v32; // [rsp+58h] [rbp-A8h]
  __int64 v33; // [rsp+60h] [rbp-A0h]
  __int64 v34; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v35[33]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v36[112]; // [rsp+180h] [rbp+80h] BYREF
  _BYTE v37[288]; // [rsp+1F0h] [rbp+F0h] BYREF

  v29 = 0LL;
  LODWORD(v30) = 0;
  v32 = 0LL;
  LODWORD(v33) = 0;
  v28 = 0LL;
  v31 = 0LL;
  memset_0(&v34, 0, 0x108uLL);
  v8 = 0;
  if ( a3 )
  {
    v34 = 2097153LL;
    memset_0(v35, 0, 0x100uLL);
    v9 = *((unsigned __int16 *)a3 + 4);
    v10 = *a3;
    if ( (unsigned __int16)v34 <= (unsigned __int16)v9 )
    {
      if ( WORD1(v34) <= (unsigned __int16)v9 )
        goto LABEL_6;
      LOWORD(v34) = v9 + 1;
    }
    v35[v9] |= v10;
  }
  while ( 1 )
  {
LABEL_6:
    v11 = HvlpAcquireHypercallPage((__int64)&v31, 2, (__int64)v36, 56LL);
    v12 = HvlpAcquireHypercallPage((__int64)&v28, 1, (__int64)v37, 144LL);
    memset_0(v12, 0, 0x48uLL);
    *(_OWORD *)(v12 + 5) = *a2;
    *(_OWORD *)(v12 + 7) = a2[1];
    if ( a3 )
    {
      v13 = HvlpAffinityToHvProcessorSet((__int64)&v34, v12 + 8, (v28 & 2) != 0 ? 64 : 4016);
      if ( v13 == -1 )
      {
        HvlpReleaseHypercallPage((unsigned int *)&v28, v14, v15, v16);
        v12 = HvlpAcquireHypercallPage((__int64)&v28, 1, 0LL, 0LL);
        memset_0(v12, 0, 0x48uLL);
        *(_OWORD *)(v12 + 5) = *a2;
        *(_OWORD *)(v12 + 7) = a2[1];
        v13 = HvlpAffinityToHvProcessorSet((__int64)&v34, v12 + 8, 0xFB0u);
      }
      *((_DWORD *)v12 + 15) |= 2u;
      v17 = v13 + 80;
      v8 = v17 - 72;
      if ( v17 <= 0x48 )
        v8 = 0;
    }
    else
    {
      *(_OWORD *)(v12 + 7) = 0LL;
    }
    v18 = v30;
    *v12 = -1LL;
    v12[1] = a1;
    v19 = HvcallInitiateHypercall(((v8 + 7) << 14) & 0x3FE0000 | 0x7CLL, v18);
    v8 = 0;
    v23 = v19;
    if ( !v19 )
      *a4 = *(_OWORD *)v11;
    HvlpReleaseHypercallPage((unsigned int *)&v28, v20, v21, v22);
    HvlpReleaseHypercallPage((unsigned int *)&v31, v24, v25, v26);
    if ( !HvlpHvStatusIsInsufficientMemory(v23) )
      break;
    if ( (int)HvlpHandleInsufficientMemory(v23) < 0 )
      return 3221225626LL;
  }
  return HvlpHvToNtStatus(v23);
}
