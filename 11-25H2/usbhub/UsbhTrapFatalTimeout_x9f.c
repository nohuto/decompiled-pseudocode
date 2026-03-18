/*
 * XREFs of UsbhTrapFatalTimeout_x9f @ 0x14003E5D8
 * Callers:
 *     UsbhHubProcessChangeWorker @ 0x140004850 (UsbhHubProcessChangeWorker.c)
 *     UsbhWaitEventWithTimeoutEx @ 0x140028E50 (UsbhWaitEventWithTimeoutEx.c)
 * Callees:
 *     USBHUB_TriggerCallBacks @ 0x14004EEC4 (USBHUB_TriggerCallBacks.c)
 */

void __fastcall __noreturn UsbhTrapFatalTimeout_x9f(__int64 a1, int a2, ULONG_PTR a3)
{
  ULONG_PTR v3; // rdi

  v3 = a2;
  if ( a1 )
    USBHUB_TriggerCallBacks(a1);
  KeBugCheckEx(0xFEu, 8uLL, 6uLL, v3, a3);
}
