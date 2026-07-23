/*
 * XREFs of PpmEndActiveTimeAccumulation @ 0x1402F9900
 * Callers:
 *     PpmIdleExecuteTransition @ 0x1402F87D0 (PpmIdleExecuteTransition.c)
 * Callees:
 *     PpmUpdatePerformanceFeedback @ 0x1402F7CD0 (PpmUpdatePerformanceFeedback.c)
 *     PpmUpdateTimeAccumulation @ 0x1402F8238 (PpmUpdateTimeAccumulation.c)
 *     PpmGetPmcCounters @ 0x140480D54 (PpmGetPmcCounters.c)
 */

__int64 __fastcall PpmEndActiveTimeAccumulation(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  PpmUpdateTimeAccumulation(a1, a2, 1);
  PpmUpdatePerformanceFeedback(a1, 0, 0LL, 1, 0LL);
  result = PpmGetPmcCounters(a1, 0LL, 0LL);
  *(_QWORD *)(a1 + 34936) = a2;
  _InterlockedIncrement64((volatile signed __int64 *)(a1 + 34928));
  return result;
}
