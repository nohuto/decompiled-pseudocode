/*
 * XREFs of PnpIsSafeToExamineUserModeTeb @ 0x14047C3A0
 * Callers:
 *     IopInitActivityIdIrp @ 0x14047B8F0 (IopInitActivityIdIrp.c)
 *     PnpRequestDeviceAction @ 0x14047BEF8 (PnpRequestDeviceAction.c)
 *     PnpInsertEventInQueue @ 0x1409AB21C (PnpInsertEventInQueue.c)
 * Callees:
 *     KeGetEffectiveIrql @ 0x140263820 (KeGetEffectiveIrql.c)
 */

char PnpIsSafeToExamineUserModeTeb()
{
  char v0; // bl
  struct _KTHREAD *CurrentThread; // rdi

  v0 = 1;
  if ( KeGetCurrentThread()->ApcStateIndex == 1 )
    return 0;
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->PreviousMode != 1
    || KeGetCurrentThread()->SpecialApcDisable
    || KeGetEffectiveIrql()
    || BYTE6(CurrentThread[1].Queue) > 1u )
  {
    return 0;
  }
  return v0;
}
