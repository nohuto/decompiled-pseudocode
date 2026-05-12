/*
 * XREFs of StorPortStallExecution @ 0x14003C200
 * Callers:
 *     StorPortStallExecutionVrfy @ 0x1401C2830 (StorPortStallExecutionVrfy.c)
 * Callees:
 *     <none>
 */

void __fastcall StorPortStallExecution(ULONG a1)
{
  KeStallExecutionProcessor(a1);
}
