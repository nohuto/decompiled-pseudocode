/*
 * XREFs of HvlRetargetDeviceInterrupt @ 0x1403E7320
 * Callers:
 *     <none>
 * Callees:
 *     HvlpReleaseHypercallPage @ 0x14032B890 (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x14032B970 (HvlpAcquireHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14032BB00 (HvcallInitiateHypercall.c)
 *     HvlpAffinityToHvProcessorSet @ 0x1403E77FC (HvlpAffinityToHvProcessorSet.c)
 *     HvlpHvToNtStatus @ 0x1403E7DC0 (HvlpHvToNtStatus.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall HvlRetargetDeviceInterrupt(__int64 a1, _OWORD *a2, _OWORD *a3, __int64 *a4, _OWORD *a5)
{
  _QWORD *v9; // r14
  _QWORD *v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rdx
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned int v17; // ebx
  __int64 v18; // rcx
  int v19; // eax
  unsigned __int16 v20; // ax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned int v24; // ebx
  __m256i v26; // [rsp+28h] [rbp-E0h] BYREF
  __m256i v27; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v28; // [rsp+68h] [rbp-A0h]
  __int64 v29; // [rsp+78h] [rbp-90h] BYREF
  _QWORD v30[33]; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v31[32]; // [rsp+188h] [rbp+80h] BYREF
  _BYTE v32[256]; // [rsp+1A8h] [rbp+A0h] BYREF

  v27.m256i_i32[0] = 0;
  LODWORD(v28) = 0;
  memset(&v26.m256i_u64[1], 0, 24);
  memset(&v27.m256i_u64[1], 0, 24);
  memset_0(v30, 0, 0x100uLL);
  v9 = 0LL;
  v10 = HvlpAcquireHypercallPage((__int64)&v26.m256i_i64[1], 1, (__int64)v32, 128LL);
  *(_OWORD *)v10 = 0LL;
  *((_OWORD *)v10 + 1) = 0LL;
  *((_OWORD *)v10 + 2) = 0LL;
  v10[6] = 0LL;
  *(_OWORD *)(v10 + 5) = *a3;
  v29 = 2097153LL;
  memset_0(v30, 0, 0x100uLL);
  v11 = *((unsigned __int16 *)a4 + 4);
  v12 = *a4;
  if ( (unsigned __int16)v29 > (unsigned __int16)v11 )
    goto LABEL_2;
  if ( WORD1(v29) > (unsigned __int16)v11 )
  {
    LOWORD(v29) = v11 + 1;
LABEL_2:
    v30[v11] |= v12;
  }
  v13 = HvlpAffinityToHvProcessorSet(&v29, v10 + 6, (v26.m256i_i8[8] & 2) != 0 ? 64 : 4032);
  if ( v13 == -1 )
  {
    HvlpReleaseHypercallPage(&v26.m256i_u32[2], v14, v15, v16);
    v10 = HvlpAcquireHypercallPage((__int64)&v26.m256i_i64[1], 1, 0LL, 0LL);
    *(_OWORD *)v10 = 0LL;
    *((_OWORD *)v10 + 1) = 0LL;
    *((_OWORD *)v10 + 2) = 0LL;
    v10[6] = 0LL;
    *(_OWORD *)(v10 + 5) = *a3;
    v13 = HvlpAffinityToHvProcessorSet(&v29, v10 + 6, 4032LL);
  }
  *((_DWORD *)v10 + 11) |= 2u;
  v17 = v13 + 64;
  *v10 = -1LL;
  v10[1] = a1;
  *((_OWORD *)v10 + 1) = *a2;
  if ( a5 )
  {
    v9 = HvlpAcquireHypercallPage((__int64)&v27.m256i_i64[1], 2, (__int64)v31, 16LL);
    v18 = 127LL;
  }
  else
  {
    v18 = 126LL;
  }
  v26.m256i_i32[1] = HIDWORD(v18);
  v19 = (v17 << 14) - 802816;
  if ( v17 <= 0x38 )
    v19 = 114688;
  v26.m256i_i32[0] = v18 | v19 & 0x3FE0000;
  v20 = HvcallInitiateHypercall(v26.m256i_i64[0], v27.m256i_u64[0]);
  if ( v20 )
  {
    v24 = HvlpHvToNtStatus(v20);
    if ( a5 )
      goto LABEL_13;
  }
  else
  {
    v24 = 0;
    if ( a5 )
    {
      *a5 = *(_OWORD *)v9;
LABEL_13:
      HvlpReleaseHypercallPage(&v27.m256i_u32[2], v21, v22, v23);
    }
  }
  HvlpReleaseHypercallPage(&v26.m256i_u32[2], v21, v22, v23);
  return v24;
}
