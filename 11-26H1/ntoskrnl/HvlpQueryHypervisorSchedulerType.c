/*
 * XREFs of HvlpQueryHypervisorSchedulerType @ 0x1405BE1A4
 * Callers:
 *     HvlPhase2Initialize @ 0x1405BB378 (HvlPhase2Initialize.c)
 *     HvlpDetermineEnlightenments @ 0x1405C4248 (HvlpDetermineEnlightenments.c)
 * Callees:
 *     HvlpReleaseHypercallPage @ 0x14032D8C0 (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x14032D9A0 (HvlpAcquireHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14032DB30 (HvcallInitiateHypercall.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 HvlpQueryHypervisorSchedulerType()
{
  unsigned int v0; // edi
  _QWORD *v1; // rbx
  unsigned int *v2; // rax
  unsigned __int64 v3; // rdx
  unsigned int *v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __m256i v12; // [rsp+20h] [rbp-E8h] BYREF
  __m256i v13; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int64 v14; // [rsp+60h] [rbp-A8h]
  _BYTE v15[32]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v16[2064]; // [rsp+88h] [rbp-80h] BYREF

  LODWORD(v14) = 0;
  memset(&v13.m256i_u64[1], 0, 24);
  v13.m256i_i32[0] = 0;
  memset(&v12.m256i_u64[1], 0, 24);
  v0 = 0;
  v1 = HvlpAcquireHypercallPage((__int64)&v13.m256i_i64[1], 1, (__int64)v15, 16LL);
  v2 = (unsigned int *)HvlpAcquireHypercallPage((__int64)&v12.m256i_i64[1], 2, (__int64)v16, 1032LL);
  v3 = v14;
  v4 = v2;
  *(_DWORD *)v1 = 15;
  if ( !(unsigned __int16)HvcallInitiateHypercall(123LL, v3) )
    v0 = *v4;
  HvlpReleaseHypercallPage(&v12.m256i_u32[2], v5, v6, v7);
  HvlpReleaseHypercallPage(&v13.m256i_u32[2], v8, v9, v10);
  return v0;
}
