/*
 * XREFs of HvlpMapEarlyPages @ 0x1405C24F8
 * Callers:
 *     HvlStartBootLogicalProcessors @ 0x1405BC1D8 (HvlStartBootLogicalProcessors.c)
 *     HvlpInitializeBootProcessor @ 0x1405BCB5C (HvlpInitializeBootProcessor.c)
 *     HvlpTryConfigureInterface @ 0x1405C405C (HvlpTryConfigureInterface.c)
 *     HvlpPhase0Enlightenments @ 0x1405C4794 (HvlpPhase0Enlightenments.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HvlpMapEarlyPages(__int64 a1)
{
  return guard_dispatch_icall_no_overrides(a1, 1LL);
}
