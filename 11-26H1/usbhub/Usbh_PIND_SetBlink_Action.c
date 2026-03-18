/*
 * XREFs of Usbh_PIND_SetBlink_Action @ 0x14003F660
 * Callers:
 *     UsbhDispatch_PindicatorEvent @ 0x14003EE00 (UsbhDispatch_PindicatorEvent.c)
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhEnableTimerObject @ 0x14002BB10 (UsbhEnableTimerObject.c)
 *     UsbhLockPindicator @ 0x14003F0D0 (UsbhLockPindicator.c)
 *     UsbhSetPindicatorState @ 0x14003F214 (UsbhSetPindicatorState.c)
 *     UsbhSetPortIndicator @ 0x14003F258 (UsbhSetPortIndicator.c)
 *     UsbhUnlockPindicator @ 0x14003F3E8 (UsbhUnlockPindicator.c)
 */

LONG __fastcall Usbh_PIND_SetBlink_Action(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // eax
  int v7; // r11d
  __int64 v8; // rcx
  int v9; // r8d

  FdoExt(a1);
  v6 = UsbhLockPindicator(a3, a2, 4);
  Log(a1, 0x8000, 1718383409, v6, *(unsigned __int16 *)(a2 + 4));
  if ( v7 == 1 || v7 == 2 )
  {
    v9 = v7;
    v8 = a3;
    goto LABEL_8;
  }
  if ( v7 == 3 )
  {
    UsbhEnableTimerObject(
      *(_QWORD *)(a3 + 8),
      a2 + 2744,
      *(_DWORD *)(a2 + 2832),
      *(unsigned __int16 *)(a2 + 4),
      a3,
      0x646E6950u);
    UsbhSetPindicatorState(a3, a2, 1);
    UsbhSetPortIndicator(a1, *(_WORD *)(a2 + 4), 768);
LABEL_9:
    v8 = a3;
    return UsbhUnlockPindicator(v8);
  }
  v8 = a3;
  if ( v7 == 4 )
  {
    v9 = 4;
LABEL_8:
    UsbhSetPindicatorState(v8, a2, v9);
    goto LABEL_9;
  }
  return UsbhUnlockPindicator(v8);
}
