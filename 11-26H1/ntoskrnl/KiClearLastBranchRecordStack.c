/*
 * XREFs of KiClearLastBranchRecordStack @ 0x140441E10
 * Callers:
 *     SwapContext @ 0x140734B80 (SwapContext.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KiClearLastBranchRecordStack(__int64 a1, __int64 a2)
{
  return guard_dispatch_icall_no_overrides(a1, a2);
}
