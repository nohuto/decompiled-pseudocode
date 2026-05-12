/*
 * XREFs of StorPortStallExecution @ 0x1400369E0
 * Callers:
 *     sub_1401B77A0 @ 0x1401B77A0 (sub_1401B77A0.c)
 * Callees:
 *     <none>
 */

void __fastcall StorPortStallExecution(ULONG a1)
{
  KeStallExecutionProcessor(a1);
}
