/*
 * XREFs of sub_14000F5E0 @ 0x14000F5E0
 * Callers:
 *     StorPortPauseDevice @ 0x14000F1B0 (StorPortPauseDevice.c)
 *     StorPortResumeDevice @ 0x14000F620 (StorPortResumeDevice.c)
 *     StorPortDeviceBusy @ 0x14003FFF0 (StorPortDeviceBusy.c)
 *     StorPortBusy @ 0x140042460 (StorPortBusy.c)
 *     StorPortNotification @ 0x14004C160 (StorPortNotification.c)
 *     StorPortReady @ 0x140056290 (StorPortReady.c)
 *     sub_14005E134 @ 0x14005E134 (sub_14005E134.c)
 *     StorPortDeviceReady @ 0x140073B60 (StorPortDeviceReady.c)
 *     StorPortLogError @ 0x1400742C0 (StorPortLogError.c)
 *     StorPortPause @ 0x1400745D0 (StorPortPause.c)
 *     StorPortResume @ 0x140074C10 (StorPortResume.c)
 *     sub_1400D46D8 @ 0x1400D46D8 (sub_1400D46D8.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall sub_14000F5E0(char *SystemArgument1, struct _SLIST_ENTRY *a2)
{
  ExpInterlockedPushEntrySList((PSLIST_HEADER)SystemArgument1 + 6, a2);
  return KeInsertQueueDpc((PRKDPC)(SystemArgument1 + 8), SystemArgument1, 0LL);
}
