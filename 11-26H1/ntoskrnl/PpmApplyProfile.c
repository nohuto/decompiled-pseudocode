/*
 * XREFs of PpmApplyProfile @ 0x140945C68
 * Callers:
 *     PdcPoPpmApplyProfile @ 0x140945C50 (PdcPoPpmApplyProfile.c)
 * Callees:
 *     PpmReleaseLock @ 0x14037AFBC (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x140394F80 (PpmAcquireLock.c)
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     PpmCompareAndApplyPolicySettings @ 0x140945E50 (PpmCompareAndApplyPolicySettings.c)
 *     PpmEventTraceProfileChange @ 0x140946068 (PpmEventTraceProfileChange.c)
 *     PpmEndProfileAccumulation @ 0x140946114 (PpmEndProfileAccumulation.c)
 *     PpmPostProcessMediaBuffering @ 0x140946160 (PpmPostProcessMediaBuffering.c)
 */

LONG __fastcall PpmApplyProfile(__int64 *a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbp
  __int64 v5; // rdx
  __int64 v6; // r8
  struct _KLOCK_ENTRIES *v7; // r9
  __int64 v8; // r8
  __int64 *v9; // rsi
  __int64 *v10; // rdi
  LONG result; // eax
  __int64 *v12; // rax
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // r10
  __int64 v16; // r9
  __m128i *v17; // rcx
  __int64 v18; // r9
  __m128i *v19; // rcx
  __int64 v20; // rdx
  unsigned int v21; // r8d
  __m128i v22; // [rsp+20h] [rbp-48h] BYREF
  __m128 v23; // [rsp+30h] [rbp-38h] BYREF

  v3 = dword_140F106CC;
  v22 = 0LL;
  PpmAcquireLock((struct _KTHREAD **)&stru_140F10070.SchedulerAssistLastYieldBoostTime, a2, a3);
  PopAcquireRwLockExclusive((unsigned __int64 *)&stru_140F10070.1136, v5, v6, v7);
  v9 = PpmCurrentProfile;
  v10 = &qword_140F0B0E0;
  if ( a1 )
    v10 = a1;
  if ( v10 == (__int64 *)PpmLowPowerProfile )
  {
    v12 = v10;
    v10 = &qword_140F0B0E0;
    if ( !LOBYTE(stru_140F11D08.UserWaitTime) )
      v10 = v12;
  }
  if ( PpmCurrentProfile == v10 )
  {
    PopReleaseRwLock((struct _KTHREAD *)&stru_140F10070.1136);
    return PpmReleaseLock(&stru_140F10070.SchedulerAssistLastYieldBoostTime);
  }
  else
  {
    v13 = PpmEndProfileAccumulation(PpmCurrentProfile, MEMORY[0xFFFFF78000000008], v8);
    *((_DWORD *)v10 + 7) |= 2u;
    *((_DWORD *)v9 + 7) &= ~2u;
    PpmCurrentProfile = v10;
    v14 = 0LL;
    v10[183] = v13;
    v15 = 3LL;
    do
    {
      if ( v10 != &qword_140F0B0E0 )
      {
        v16 = 2LL;
        v17 = &v22;
        do
        {
          v17->m128i_i64[0] |= *(unsigned __int64 *)((char *)&v17[2].m128i_u64[1]
                                                   + (_QWORD)&v10[v14]
                                                   + 712 * v3
                                                   - (_QWORD)&v22);
          v17 = (__m128i *)((char *)v17 + 8);
          --v16;
        }
        while ( v16 );
      }
      if ( v9 != &qword_140F0B0E0 )
      {
        v18 = 2LL;
        v19 = &v22;
        do
        {
          v19->m128i_i64[0] |= *(unsigned __int64 *)((char *)&v19[2].m128i_u64[1]
                                                   + (_QWORD)&v9[v14]
                                                   + 712 * v3
                                                   - (_QWORD)&v22);
          v19 = (__m128i *)((char *)v19 + 8);
          --v18;
        }
        while ( v18 );
      }
      v14 += 2LL;
      --v15;
    }
    while ( v15 );
    v23 = _mm_and_ps(
            (__m128)_mm_loadu_si128((const __m128i *)&PopSleepstudySessionLock.QuantumTarget),
            (__m128)_mm_loadu_si128(&v22));
    PpmCompareAndApplyPolicySettings(&v23, &v9[89 * v3 + 5], &v10[89 * v3 + 5], 0LL, v22.m128i_i64[0], v22.m128i_i64[1]);
    PpmEventTraceProfileChange(v9, v10);
    result = PpmLowPowerProfile;
    if ( PpmLowPowerProfile )
    {
      if ( v9 == (__int64 *)PpmLowPowerProfile )
      {
        PpmAcquireLock((struct _KTHREAD **)&stru_140F10070.SchedulerAssistLastYieldBoostTime, v20, v21);
        return PpmPostProcessMediaBuffering();
      }
    }
  }
  return result;
}
