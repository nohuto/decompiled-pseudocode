/*
 * XREFs of RaidUnitCancelWaitWakeIrp @ 0x140049E5C
 * Callers:
 *     StorPortUnitPoFxD3Completion @ 0x140051CE0 (StorPortUnitPoFxD3Completion.c)
 *     StorPortUnitPoFxD0Completion @ 0x14005B504 (StorPortUnitPoFxD0Completion.c)
 *     RaUnitDeregisterFromIdleDetection @ 0x14007ECF0 (RaUnitDeregisterFromIdleDetection.c)
 *     StorPortUnitDirectedPowerDownCompletion @ 0x140081E50 (StorPortUnitDirectedPowerDownCompletion.c)
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x140018BD0 (RaidUnitCheckAndAcquirePoFx.c)
 */

BOOLEAN __fastcall RaidUnitCancelWaitWakeIrp(__int64 a1)
{
  BOOLEAN v2; // di
  IRP *v3; // rcx

  v2 = 1;
  if ( RaidUnitCheckAndAcquirePoFx(a1) )
  {
    v3 = *(IRP **)(*(_QWORD *)(a1 + 1872) + 72LL);
    if ( v3 )
    {
      v2 = IoCancelIrp(v3);
      *(_QWORD *)(*(_QWORD *)(a1 + 1872) + 72LL) = 0LL;
    }
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1864));
  }
  return v2;
}
