/*
 * XREFs of IovIsDisabledWithoutReboot @ 0x1405D78A0
 * Callers:
 *     VfPacketCreateAndLock @ 0x140C39304 (VfPacketCreateAndLock.c)
 *     ViPacketNotificationCallback @ 0x140C39400 (ViPacketNotificationCallback.c)
 * Callees:
 *     <none>
 */

bool IovIsDisabledWithoutReboot()
{
  return IovpDisabledWithoutReboot != 0;
}
