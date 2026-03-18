/*
 * XREFs of Usbh_PIND_Enable_Action @ 0x14003F4FC
 * Callers:
 *     UsbhDispatch_PindicatorEvent @ 0x14003EE00 (UsbhDispatch_PindicatorEvent.c)
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhLockPindicator @ 0x14003F0D0 (UsbhLockPindicator.c)
 *     UsbhSetPindicatorState @ 0x14003F214 (UsbhSetPindicatorState.c)
 *     UsbhSetPortIndicator @ 0x14003F258 (UsbhSetPortIndicator.c)
 *     UsbhUnlockPindicator @ 0x14003F3E8 (UsbhUnlockPindicator.c)
 */

LONG __fastcall Usbh_PIND_Enable_Action(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // eax
  int v7; // r11d

  FdoExt(a1);
  v6 = UsbhLockPindicator(a3, a2, 5);
  Log(a1, 0x8000, 1718383411, v6, *(unsigned __int16 *)(a2 + 4));
  if ( v7 == 4 )
  {
    UsbhSetPortIndicator(a1, *(_WORD *)(a2 + 4), 0);
    UsbhSetPindicatorState(a3, a2, 3);
  }
  return UsbhUnlockPindicator(a3);
}
