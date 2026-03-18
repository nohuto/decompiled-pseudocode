/*
 * XREFs of PpmEndActiveTimeAccumulation @ 0x1403EC8C0
 * Callers:
 *     PpmIdleExecuteTransition @ 0x1403EB78C (PpmIdleExecuteTransition.c)
 * Callees:
 *     PpmUpdatePerformanceFeedback @ 0x1403ECDF0 (PpmUpdatePerformanceFeedback.c)
 *     PpmUpdateTimeAccumulation @ 0x1403ED358 (PpmUpdateTimeAccumulation.c)
 *     PpmGetPmcCounters @ 0x140487314 (PpmGetPmcCounters.c)
 */

__int64 __fastcall PpmEndActiveTimeAccumulation(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // r9d
  __int64 result; // rax

  LOBYTE(a3) = 1;
  PpmUpdateTimeAccumulation(a1, a2, a3);
  LOBYTE(v5) = 1;
  PpmUpdatePerformanceFeedback(a1, 0, 0, v5, 0LL);
  result = PpmGetPmcCounters(a1, 0LL, 0LL);
  *(_QWORD *)(a1 + 34936) = a2;
  _InterlockedIncrement64((volatile signed __int64 *)(a1 + 34928));
  return result;
}
