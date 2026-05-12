/*
 * XREFs of RaidAdapterIsRegisteredForIdleDetection @ 0x1400034A0
 * Callers:
 *     StorPortExtendedFunction @ 0x140001D50 (StorPortExtendedFunction.c)
 *     RaDriverScsiIrp @ 0x140003DF0 (RaDriverScsiIrp.c)
 * Callees:
 *     <none>
 */

bool __fastcall RaidAdapterIsRegisteredForIdleDetection(__int64 a1)
{
  return *(_QWORD *)(a1 + 5024) != 0LL;
}
