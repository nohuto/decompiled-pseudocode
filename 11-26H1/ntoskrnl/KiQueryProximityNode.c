/*
 * XREFs of KiQueryProximityNode @ 0x1405F2710
 * Callers:
 *     KiPerformExplicitGroupAssignment @ 0x140CD0868 (KiPerformExplicitGroupAssignment.c)
 *     KiPopulateNodeInformation @ 0x140CD0B2C (KiPopulateNodeInformation.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KiQueryProximityNode(__int64 a1, __int64 a2)
{
  return guard_dispatch_icall_no_overrides(a1, a2);
}
