/*
 * XREFs of HvlDummyInterruptCallback @ 0x1405B8760
 * Callers:
 *     <none>
 * Callees:
 *     HvlPerformEndOfInterrupt @ 0x1404B6FB0 (HvlPerformEndOfInterrupt.c)
 */

__int64 __fastcall HvlDummyInterruptCallback(__int64 a1, __int64 a2)
{
  return HvlPerformEndOfInterrupt(a1, a2);
}
