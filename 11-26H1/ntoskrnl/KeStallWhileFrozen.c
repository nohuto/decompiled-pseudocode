/*
 * XREFs of KeStallWhileFrozen @ 0x14052CE40
 * Callers:
 *     KeStallExecutionProcessor @ 0x14037DCA0 (KeStallExecutionProcessor.c)
 * Callees:
 *     KiCheckStall @ 0x14052CE60 (KiCheckStall.c)
 */

__int64 KeStallWhileFrozen()
{
  return KiCheckStall(KeGetCurrentPrcb(), 0LL);
}
