/*
 * XREFs of UsbhSignalSuspendEvent @ 0x14001DCD4
 * Callers:
 *     UsbhHubDispatchPortEvent @ 0x140004D00 (UsbhHubDispatchPortEvent.c)
 *     Usbh_CheckPortHwPendingStatus @ 0x1400119F8 (Usbh_CheckPortHwPendingStatus.c)
 *     UsbhPortDisconnect @ 0x14001D240 (UsbhPortDisconnect.c)
 *     Usbh_PCE_Suspend_Action @ 0x1400275AC (Usbh_PCE_Suspend_Action.c)
 *     UsbhEnumerate1 @ 0x140036138 (UsbhEnumerate1.c)
 *     UsbhEnumerate2 @ 0x140036794 (UsbhEnumerate2.c)
 *     Usbh_PCE_wChangeERROR_Action @ 0x140045CE4 (Usbh_PCE_wChangeERROR_Action.c)
 * Callees:
 *     UsbhLogSignalSuspendEvent @ 0x14001E76C (UsbhLogSignalSuspendEvent.c)
 *     UsbhSetPcqEventStatus @ 0x140033F60 (UsbhSetPcqEventStatus.c)
 */

void __fastcall UsbhSignalSuspendEvent(__int64 a1, __int64 a2)
{
  KIRQL v4; // al
  KIRQL v5; // bl

  if ( (unsigned int)UsbhLogSignalSuspendEvent() )
  {
    v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 440));
    *(_DWORD *)(a2 + 448) = 1;
    v5 = v4;
    UsbhSetPcqEventStatus(a1, a2, 0LL);
    *(_DWORD *)(a2 + 448) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v5);
  }
}
