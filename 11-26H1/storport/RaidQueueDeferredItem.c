/*
 * XREFs of RaidQueueDeferredItem @ 0x140029A6C
 * Callers:
 *     StorPortNotification @ 0x14000DE70 (StorPortNotification.c)
 *     StorPortDeviceBusy @ 0x140027E70 (StorPortDeviceBusy.c)
 *     StorPortResumeDevice @ 0x140028690 (StorPortResumeDevice.c)
 *     RaidAdapterRequestTimerDeferred @ 0x140029A14 (RaidAdapterRequestTimerDeferred.c)
 *     StorPortBusy @ 0x140050770 (StorPortBusy.c)
 *     StorPortReady @ 0x14005CDB0 (StorPortReady.c)
 *     StorAsyncNotificationDeferred @ 0x14007A8A0 (StorAsyncNotificationDeferred.c)
 *     StorPortDeviceReady @ 0x14007B410 (StorPortDeviceReady.c)
 *     StorPortLogError @ 0x14007BB80 (StorPortLogError.c)
 *     StorPortPause @ 0x14007BE90 (StorPortPause.c)
 *     StorPortResume @ 0x14007C4D0 (StorPortResume.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall RaidQueueDeferredItem(char *SystemArgument1, struct _SLIST_ENTRY *a2)
{
  ExpInterlockedPushEntrySList((PSLIST_HEADER)SystemArgument1 + 6, a2);
  return KeInsertQueueDpc((PRKDPC)(SystemArgument1 + 8), SystemArgument1, 0LL);
}
