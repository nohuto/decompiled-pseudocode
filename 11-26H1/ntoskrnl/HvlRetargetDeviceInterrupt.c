/*
 * XREFs of HvlRetargetDeviceInterrupt @ 0x1402F4200
 * Callers:
 *     <none>
 * Callees:
 *     HvlpAffinityToHvProcessorSet @ 0x1402F46DC (HvlpAffinityToHvProcessorSet.c)
 *     HvlpHvToNtStatus @ 0x1402F4CA0 (HvlpHvToNtStatus.c)
 *     HvlpReleaseHypercallPage @ 0x14032D8C0 (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x14032D9A0 (HvlpAcquireHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14032DB30 (HvcallInitiateHypercall.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall HvlRetargetDeviceInterrupt(__int64 a1, _OWORD *a2, _OWORD *a3, __int64 *a4, _OWORD *a5)
{
  _OWORD *v9; // r14
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rdx
  int v13; // eax
  unsigned int v14; // ebx
  __int64 v15; // r8
  __int64 v16; // rcx
  int v17; // eax
  unsigned __int16 v18; // ax
  unsigned int v19; // ebx
  __int64 v21; // rax
  __m256i v22; // [rsp+28h] [rbp-E0h] BYREF
  __m256i v23; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v24; // [rsp+68h] [rbp-A0h]
  __int64 v25; // [rsp+78h] [rbp-90h] BYREF
  _QWORD v26[33]; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v27[32]; // [rsp+188h] [rbp+80h] BYREF
  _BYTE v28[256]; // [rsp+1A8h] [rbp+A0h] BYREF

  v23.m256i_i32[0] = 0;
  LODWORD(v24) = 0;
  memset(&v22.m256i_u64[1], 0, 24);
  memset(&v23.m256i_u64[1], 0, 24);
  memset_0(v26, 0, 0x100uLL);
  v9 = 0LL;
  v10 = HvlpAcquireHypercallPage(&v22.m256i_u64[1], 1LL, v28, 128LL);
  *(_OWORD *)v10 = 0LL;
  *(_OWORD *)(v10 + 16) = 0LL;
  *(_OWORD *)(v10 + 32) = 0LL;
  *(_QWORD *)(v10 + 48) = 0LL;
  *(_OWORD *)(v10 + 40) = *a3;
  v25 = 2097153LL;
  memset_0(v26, 0, 0x100uLL);
  v11 = *((unsigned __int16 *)a4 + 4);
  v12 = *a4;
  if ( (unsigned __int16)v25 > (unsigned __int16)v11 )
    goto LABEL_2;
  if ( WORD1(v25) > (unsigned __int16)v11 )
  {
    LOWORD(v25) = v11 + 1;
LABEL_2:
    v26[v11] |= v12;
  }
  v13 = HvlpAffinityToHvProcessorSet(&v25, v10 + 48, (v22.m256i_i8[8] & 2) != 0 ? 64 : 4032);
  if ( v13 == -1 )
  {
    HvlpReleaseHypercallPage(&v22.m256i_u64[1]);
    v10 = HvlpAcquireHypercallPage(&v22.m256i_u64[1], 1LL, 0LL, 0LL);
    *(_OWORD *)v10 = 0LL;
    *(_OWORD *)(v10 + 16) = 0LL;
    *(_OWORD *)(v10 + 32) = 0LL;
    *(_QWORD *)(v10 + 48) = 0LL;
    *(_OWORD *)(v10 + 40) = *a3;
    v13 = HvlpAffinityToHvProcessorSet(&v25, v10 + 48, 4032LL);
  }
  *(_DWORD *)(v10 + 44) |= 2u;
  v14 = v13 + 64;
  *(_QWORD *)v10 = -1LL;
  *(_QWORD *)(v10 + 8) = a1;
  *(_OWORD *)(v10 + 16) = *a2;
  if ( a5 )
  {
    v21 = HvlpAcquireHypercallPage(&v23.m256i_u64[1], 2LL, v27, 16LL);
    v15 = v24;
    v9 = (_OWORD *)v21;
    v16 = 127LL;
  }
  else
  {
    v15 = 0LL;
    v16 = 126LL;
  }
  v22.m256i_i32[1] = HIDWORD(v16);
  v17 = (v14 << 14) - 802816;
  if ( v14 <= 0x38 )
    v17 = 114688;
  v22.m256i_i32[0] = v16 | v17 & 0x3FE0000;
  v18 = HvcallInitiateHypercall(v22.m256i_i64[0], v23.m256i_i64[0], v15);
  if ( v18 )
  {
    v19 = HvlpHvToNtStatus(v18);
    if ( a5 )
      goto LABEL_13;
  }
  else
  {
    v19 = 0;
    if ( a5 )
    {
      *a5 = *v9;
LABEL_13:
      HvlpReleaseHypercallPage(&v23.m256i_u64[1]);
    }
  }
  HvlpReleaseHypercallPage(&v22.m256i_u64[1]);
  return v19;
}
