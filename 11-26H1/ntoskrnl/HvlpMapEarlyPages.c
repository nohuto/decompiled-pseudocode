/*
 * XREFs of HvlpMapEarlyPages @ 0x1405BFC88
 * Callers:
 *     HvlStartBootLogicalProcessors @ 0x1405B9968 (HvlStartBootLogicalProcessors.c)
 *     HvlpInitializeBootProcessor @ 0x1405BA2EC (HvlpInitializeBootProcessor.c)
 *     HvlpTryConfigureInterface @ 0x1405C17EC (HvlpTryConfigureInterface.c)
 *     HvlpPhase0Enlightenments @ 0x1405C1F24 (HvlpPhase0Enlightenments.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HvlpMapEarlyPages(__int64 a1)
{
  return guard_dispatch_icall_no_overrides(a1, 1LL);
}
