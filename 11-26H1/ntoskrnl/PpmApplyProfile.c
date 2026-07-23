/*
 * XREFs of PpmApplyProfile @ 0x1409C15D8
 * Callers:
 *     PdcPoPpmApplyProfile @ 0x1409C15C0 (PdcPoPpmApplyProfile.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PpmReleaseLock @ 0x14037CD6C (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x140396D00 (PpmAcquireLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     PpmCompareAndApplyPolicySettings @ 0x1409C17C0 (PpmCompareAndApplyPolicySettings.c)
 *     PpmEventTraceProfileChange @ 0x1409C19D8 (PpmEventTraceProfileChange.c)
 *     PpmEndProfileAccumulation @ 0x1409C1A84 (PpmEndProfileAccumulation.c)
 *     PpmPostProcessMediaBuffering @ 0x1409C1AD0 (PpmPostProcessMediaBuffering.c)
 */

LONG __fastcall PpmApplyProfile(unsigned int *a1, __int64 a2, unsigned int a3)
{
  __int64 Next_high; // rbp
  __int64 v5; // rdx
  __int64 v6; // r8
  struct _KLOCK_ENTRIES *v7; // r9
  __int64 v8; // r8
  unsigned int *v9; // rsi
  unsigned int *p_ReservedPreviousReadyTimeValue; // rdi
  LONG result; // eax
  unsigned int *v12; // rax
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

  Next_high = SHIDWORD(PpmIdlePolicyLock.PropagateBoostsEntry.Next);
  v22 = 0LL;
  PpmAcquireLock((struct _KTHREAD **)&PpmIdlePolicyLock.ThreadLock, a2, a3);
  PopAcquireRwLockExclusive((unsigned __int64 *)&PpmIdlePolicyLock, v5, v6, v7);
  v9 = (unsigned int *)PpmCurrentProfile;
  p_ReservedPreviousReadyTimeValue = &PopDirectedDripsDiagLock.ReservedPreviousReadyTimeValue;
  if ( a1 )
    p_ReservedPreviousReadyTimeValue = a1;
  if ( p_ReservedPreviousReadyTimeValue == (unsigned int *)PopDirectedDripsDiagLock.OtherOperationCount )
  {
    v12 = p_ReservedPreviousReadyTimeValue;
    p_ReservedPreviousReadyTimeValue = &PopDirectedDripsDiagLock.ReservedPreviousReadyTimeValue;
    if ( !PpmPerfMultimediaQosSupported )
      p_ReservedPreviousReadyTimeValue = v12;
  }
  if ( PpmCurrentProfile == (_UNKNOWN *)p_ReservedPreviousReadyTimeValue )
  {
    PopReleaseRwLock(&PpmIdlePolicyLock);
    return PpmReleaseLock((__int64 *)&PpmIdlePolicyLock.ThreadLock);
  }
  else
  {
    v13 = PpmEndProfileAccumulation(PpmCurrentProfile, MEMORY[0xFFFFF78000000008], v8);
    p_ReservedPreviousReadyTimeValue[7] |= 2u;
    v9[7] &= ~2u;
    PpmCurrentProfile = p_ReservedPreviousReadyTimeValue;
    v14 = 0LL;
    *((_QWORD *)p_ReservedPreviousReadyTimeValue + 183) = v13;
    v15 = 3LL;
    do
    {
      if ( p_ReservedPreviousReadyTimeValue != &PopDirectedDripsDiagLock.ReservedPreviousReadyTimeValue )
      {
        v16 = 2LL;
        v17 = &v22;
        do
        {
          v17->m128i_i64[0] |= *(unsigned __int64 *)((char *)&v17[2].m128i_u64[1]
                                                   + (_QWORD)&p_ReservedPreviousReadyTimeValue[v14]
                                                   + 712 * Next_high
                                                   - (_QWORD)&v22);
          v17 = (__m128i *)((char *)v17 + 8);
          --v16;
        }
        while ( v16 );
      }
      if ( v9 != &PopDirectedDripsDiagLock.ReservedPreviousReadyTimeValue )
      {
        v18 = 2LL;
        v19 = &v22;
        do
        {
          v19->m128i_i64[0] |= *(unsigned __int64 *)((char *)&v19[2].m128i_u64[1]
                                                   + (_QWORD)&v9[v14]
                                                   + 712 * Next_high
                                                   - (_QWORD)&v22);
          v19 = (__m128i *)((char *)v19 + 8);
          --v18;
        }
        while ( v18 );
      }
      v14 += 4LL;
      --v15;
    }
    while ( v15 );
    v23 = _mm_and_ps(
            (__m128)_mm_loadu_si128((const __m128i *)&PpmPolicySettingGlobalMask),
            (__m128)_mm_loadu_si128(&v22));
    PpmCompareAndApplyPolicySettings(
      &v23,
      &v9[178 * Next_high + 10],
      &p_ReservedPreviousReadyTimeValue[178 * Next_high + 10],
      0LL,
      v22.m128i_i64[0],
      v22.m128i_i64[1]);
    PpmEventTraceProfileChange(v9, p_ReservedPreviousReadyTimeValue);
    result = PopDirectedDripsDiagLock.OtherOperationCount;
    if ( PopDirectedDripsDiagLock.OtherOperationCount )
    {
      if ( v9 == (unsigned int *)PopDirectedDripsDiagLock.OtherOperationCount )
      {
        PpmAcquireLock((struct _KTHREAD **)&PpmIdlePolicyLock.ThreadLock, v20, v21);
        return PpmPostProcessMediaBuffering();
      }
    }
  }
  return result;
}
