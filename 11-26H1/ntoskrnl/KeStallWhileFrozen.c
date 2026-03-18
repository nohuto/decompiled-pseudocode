/*
 * XREFs of KeStallWhileFrozen @ 0x14052A920
 * Callers:
 *     KeStallExecutionProcessor @ 0x14037BEF0 (KeStallExecutionProcessor.c)
 * Callees:
 *     KiCheckStall @ 0x14052A940 (KiCheckStall.c)
 */

__int64 KeStallWhileFrozen()
{
  return KiCheckStall(KeGetCurrentPrcb(), 0LL);
}
