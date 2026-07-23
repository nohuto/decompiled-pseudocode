/*
 * XREFs of PpmGetPmcCounters @ 0x140480D54
 * Callers:
 *     PpmSnapPerformanceAccumulation @ 0x14025568C (PpmSnapPerformanceAccumulation.c)
 *     PpmEndActiveTimeAccumulation @ 0x1402F9900 (PpmEndActiveTimeAccumulation.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PpmGetPmcCounters(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_QWORD *)&stru_140F12EA0.ResourceIndex;
  if ( *(_QWORD *)&stru_140F12EA0.ResourceIndex )
    return guard_dispatch_icall_no_overrides(*(unsigned int *)(a1 + 36), a2);
  return result;
}
