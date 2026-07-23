/*
 * XREFs of HvlQueryHypervisorTscAdjustment @ 0x1405BB728
 * Callers:
 *     PopSstDiagInitializeResumeTimer @ 0x140C09260 (PopSstDiagInitializeResumeTimer.c)
 * Callees:
 *     HvlpReleaseHypercallPage @ 0x14032D8C0 (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x14032D9A0 (HvlpAcquireHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14032DB30 (HvcallInitiateHypercall.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 HvlQueryHypervisorTscAdjustment()
{
  __int64 v1; // rdi
  _QWORD *v2; // rbx
  __int64 *v3; // rax
  unsigned __int64 v4; // rdx
  __int64 *v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __m256i v12; // [rsp+20h] [rbp-E8h] BYREF
  __m256i v13; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int64 v14; // [rsp+60h] [rbp-A8h]
  _BYTE v15[32]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v16[2064]; // [rsp+88h] [rbp-80h] BYREF

  LODWORD(v14) = 0;
  v13.m256i_i32[0] = 0;
  memset(&v13.m256i_u64[1], 0, 24);
  memset(&v12.m256i_u64[1], 0, 24);
  if ( (HvlpRootFlags & 1) == 0 )
    return 0LL;
  v1 = 0LL;
  v2 = HvlpAcquireHypercallPage((__int64)&v13.m256i_i64[1], 1, (__int64)v15, 16LL);
  v3 = HvlpAcquireHypercallPage((__int64)&v12.m256i_i64[1], 2, (__int64)v16, 1032LL);
  v4 = v14;
  v5 = v3;
  *(_DWORD *)v2 = 9;
  if ( !(unsigned __int16)HvcallInitiateHypercall(123LL, v4) )
    v1 = *v5;
  HvlpReleaseHypercallPage(&v12.m256i_u32[2], v6, v7, v8);
  HvlpReleaseHypercallPage(&v13.m256i_u32[2], v9, v10, v11);
  return v1;
}
