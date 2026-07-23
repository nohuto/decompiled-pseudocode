/*
 * XREFs of PopSetupUsb4DisplayPresenceNotification @ 0x1407CB83C
 * Callers:
 *     PoInitSystem @ 0x140CD49D0 (PoInitSystem.c)
 * Callees:
 *     ExSubscribeWnfStateChange @ 0x1409C4400 (ExSubscribeWnfStateChange.c)
 */

__int64 PopSetupUsb4DisplayPresenceNotification()
{
  char v1; // [rsp+40h] [rbp+8h] BYREF

  return ExSubscribeWnfStateChange(
           (unsigned int)&v1,
           (unsigned int)&WNF_USB_USB4_DISPLAY_PRESENCE,
           1,
           0,
           (__int64)PopWnfUsb4DisplayPresenceCallback,
           0LL);
}
