/*
 * XREFs of PopMeasureEnergyChange @ 0x140B21570
 * Callers:
 *     PopCalculateCsSummary @ 0x14042A4C8 (PopCalculateCsSummary.c)
 *     PopTransitionTelemetryOsState @ 0x140B20D08 (PopTransitionTelemetryOsState.c)
 * Callees:
 *     PopAcquireRwLockShared @ 0x140436298 (PopAcquireRwLockShared.c)
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 */

unsigned __int64 __fastcall PopMeasureEnergyChange(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __m128i v6; // xmm6
  unsigned __int64 result; // rax

  PopAcquireRwLockShared((volatile signed __int64 *)&stru_140F10070.Header.Lock, a2, a3, a4);
  v6 = *(__m128i *)(&stru_140F10070.MiscFlags + 1);
  PopReleaseRwLock(&stru_140F10070);
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
