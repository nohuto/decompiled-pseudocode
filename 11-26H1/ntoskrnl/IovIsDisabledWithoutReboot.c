/*
 * XREFs of IovIsDisabledWithoutReboot @ 0x1405DA090
 * Callers:
 *     VfPacketCreateAndLock @ 0x140C3F314 (VfPacketCreateAndLock.c)
 *     ViPacketNotificationCallback @ 0x140C3F410 (ViPacketNotificationCallback.c)
 * Callees:
 *     <none>
 */

bool IovIsDisabledWithoutReboot()
{
  return IovpDisabledWithoutReboot != 0;
}
