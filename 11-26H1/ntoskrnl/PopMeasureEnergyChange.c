/*
 * XREFs of PopMeasureEnergyChange @ 0x140B23970
 * Callers:
 *     PopCalculateCsSummary @ 0x140422F4C (PopCalculateCsSummary.c)
 *     PopTransitionTelemetryOsState @ 0x140B23108 (PopTransitionTelemetryOsState.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockShared @ 0x140424A28 (PopAcquireRwLockShared.c)
 */

unsigned __int64 __fastcall PopMeasureEnergyChange(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __m128i v6; // xmm6
  unsigned __int64 result; // rax

  PopAcquireRwLockShared((volatile signed __int64 *)&xmmword_140F10830, a2, a3, a4);
  v6 = (__m128i)xmmword_140F108A8;
  PopReleaseRwLock((struct _KTHREAD *)&xmmword_140F10830);
  result = 0LL;
  if ( *(_QWORD *)(a2 + 8) )
  {
    *(_DWORD *)a1 = *(_DWORD *)a2 | _mm_cvtsi128_si32(v6);
    result = _mm_srli_si128(v6, 8).m128i_u64[0] - *(_QWORD *)(a2 + 8);
  }
  else
  {
    *(_DWORD *)a1 = 1;
  }
  *(_QWORD *)(a1 + 8) = result;
  *(__m128i *)a2 = v6;
  return result;
}
