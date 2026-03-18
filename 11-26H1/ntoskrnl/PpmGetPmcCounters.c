/*
 * XREFs of PpmGetPmcCounters @ 0x140487314
 * Callers:
 *     PpmSnapPerformanceAccumulation @ 0x140253D2C (PpmSnapPerformanceAccumulation.c)
 *     PpmEndActiveTimeAccumulation @ 0x1403EC8C0 (PpmEndActiveTimeAccumulation.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

PVOID __fastcall PpmGetPmcCounters(__int64 a1, __int64 a2)
{
  PVOID result; // rax

  result = stru_140F12D20.SchedulerApc.NormalContext;
  if ( stru_140F12D20.SchedulerApc.NormalContext )
    return (PVOID)guard_dispatch_icall_no_overrides(*(unsigned int *)(a1 + 36), a2);
  return result;
}
