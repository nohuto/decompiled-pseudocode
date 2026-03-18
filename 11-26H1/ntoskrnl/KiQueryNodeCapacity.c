/*
 * XREFs of KiQueryNodeCapacity @ 0x1405EFC20
 * Callers:
 *     KiPopulateNodeInformation @ 0x140CCAA4C (KiPopulateNodeInformation.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KiQueryNodeCapacity(__int64 a1, __int64 a2)
{
  return guard_dispatch_icall_no_overrides(a1, a2);
}
