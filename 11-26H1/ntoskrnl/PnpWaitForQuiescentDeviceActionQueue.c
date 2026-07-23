/*
 * XREFs of PnpWaitForQuiescentDeviceActionQueue @ 0x1407AFEE0
 * Callers:
 *     PipKsrDeferredHardwareInit @ 0x1407B5E64 (PipKsrDeferredHardwareInit.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeResetEvent @ 0x140397930 (KeResetEvent.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     PnpRequestDeviceAction @ 0x14047BEF8 (PnpRequestDeviceAction.c)
 */

__int64 PnpWaitForQuiescentDeviceActionQueue()
{
  int v0; // ebx
  __int64 result; // rax
  struct _KEVENT Event; // [rsp+40h] [rbp-28h] BYREF

  memset(&Event, 0, sizeof(Event));
  KeInitializeEvent(&Event, NotificationEvent, 0);
  while ( 1 )
  {
    v0 = PnpActionRequestCount;
    PnpRequestDeviceAction(0LL, 0x1Du, 0, 0LL, (__int64)&Event, 0LL, 0LL);
    if ( KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL) >= 0 )
    {
      result = (unsigned int)PnpActionRequestCount;
      if ( v0 == PnpActionRequestCount )
        break;
    }
    KeResetEvent(&Event);
  }
  return result;
}
