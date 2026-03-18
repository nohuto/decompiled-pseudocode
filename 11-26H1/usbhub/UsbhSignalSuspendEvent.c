/*
 * XREFs of UsbhSignalSuspendEvent @ 0x140022970
 * Callers:
 *     Usbh_PCE_Suspend_Action @ 0x140004A34 (Usbh_PCE_Suspend_Action.c)
 *     UsbhHubDispatchPortEvent @ 0x14001EC90 (UsbhHubDispatchPortEvent.c)
 *     UsbhPortDisconnect @ 0x140021F00 (UsbhPortDisconnect.c)
 *     Usbh_CheckPortHwPendingStatus @ 0x140030018 (Usbh_CheckPortHwPendingStatus.c)
 *     UsbhEnumerate1 @ 0x1400344E4 (UsbhEnumerate1.c)
 *     UsbhEnumerate2 @ 0x1400349C0 (UsbhEnumerate2.c)
 *     Usbh_PCE_wChangeERROR_Action @ 0x140045820 (Usbh_PCE_wChangeERROR_Action.c)
 * Callees:
 *     UsbhLogSignalSuspendEvent @ 0x140023414 (UsbhLogSignalSuspendEvent.c)
 *     UsbhSetPcqEventStatus @ 0x14002EC50 (UsbhSetPcqEventStatus.c)
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
    UsbhSetPcqEventStatus(a1, a2, 0LL, 30LL);
    *(_DWORD *)(a2 + 448) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v5);
  }
}
