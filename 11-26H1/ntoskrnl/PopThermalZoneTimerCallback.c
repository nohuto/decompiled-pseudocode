/*
 * XREFs of PopThermalZoneTimerCallback @ 0x140495470
 * Callers:
 *     <none>
 * Callees:
 *     IoCancelIrp @ 0x140495490 (IoCancelIrp.c)
 */

BOOLEAN __fastcall PopThermalZoneTimerCallback(__int64 a1, __int64 a2)
{
  return IoCancelIrp(*(PIRP *)(a2 + 56));
}
