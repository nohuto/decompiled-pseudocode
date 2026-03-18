/*
 * XREFs of KiDispatchPassiveInterrupts @ 0x1402C5640
 * Callers:
 *     KiScanInterruptObjectList @ 0x140729D60 (KiScanInterruptObjectList.c)
 * Callees:
 *     IoProcessPassiveInterrupts @ 0x1402C36B8 (IoProcessPassiveInterrupts.c)
 */

__int64 KiDispatchPassiveInterrupts()
{
  return IoProcessPassiveInterrupts();
}
