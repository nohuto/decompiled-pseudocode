/*
 * XREFs of PpmGetIdleGenerationCounter @ 0x140476A90
 * Callers:
 *     PpmContinueTimeAccumulation @ 0x140252628 (PpmContinueTimeAccumulation.c)
 *     PpmSnapPerformanceAccumulation @ 0x140253D2C (PpmSnapPerformanceAccumulation.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall PpmGetIdleGenerationCounter(__int64 a1)
{
  signed __int64 result; // rax
  signed __int64 v2; // rtt
  unsigned __int64 v3; // rcx

  _m_prefetchw((const void *)(a1 + 34928));
  result = *(_QWORD *)(a1 + 34928);
  do
  {
    v2 = result;
    result = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 34928), result, result);
  }
  while ( v2 != result );
  if ( (result & 1) == 0 )
    return 0LL;
  if ( result && *(_DWORD *)(a1 + 35120) == 3 )
  {
    v3 = *(_QWORD *)(*(_QWORD *)(a1 + 35856) + 8LL * stru_140E3E928.ForegroundLossTime);
    result = v3 >> 1;
    if ( (v3 & 1) == 0 )
      return 0LL;
  }
  return result;
}
