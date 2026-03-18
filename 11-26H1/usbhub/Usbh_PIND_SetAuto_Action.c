/*
 * XREFs of Usbh_PIND_SetAuto_Action @ 0x14003F594
 * Callers:
 *     UsbhDispatch_PindicatorEvent @ 0x14003EE00 (UsbhDispatch_PindicatorEvent.c)
 * Callees:
 *     UsbhDisableTimerObject @ 0x140007330 (UsbhDisableTimerObject.c)
 *     Log @ 0x140009B80 (Log.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhLockPindicator @ 0x14003F0D0 (UsbhLockPindicator.c)
 *     UsbhSetPindicatorState @ 0x14003F214 (UsbhSetPindicatorState.c)
 *     UsbhSetPortIndicator @ 0x14003F258 (UsbhSetPortIndicator.c)
 *     UsbhUnlockPindicator @ 0x14003F3E8 (UsbhUnlockPindicator.c)
 */

LONG __fastcall Usbh_PIND_SetAuto_Action(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // eax
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // r11d
  int v10; // r11d
  int v11; // r11d
  __int64 v12; // rcx
  int v13; // r11d

  FdoExt(a1);
  v6 = UsbhLockPindicator(a3, a2, 3);
  Log(a1, 0x8000, 1718383412, v6, *(unsigned __int16 *)(a2 + 4));
  v10 = v9 - 1;
  if ( !v10 || (v11 = v10 - 1) == 0 )
  {
    UsbhDisableTimerObject(*(_QWORD *)(a3 + 8), a2 + 2744, v7, v8);
    v12 = a3;
    goto LABEL_7;
  }
  v12 = a3;
  v13 = v11 - 1;
  if ( !v13 )
  {
LABEL_7:
    UsbhSetPindicatorState(v12, a2, 3);
    UsbhSetPortIndicator(a1, *(_WORD *)(a2 + 4), 0);
    goto LABEL_8;
  }
  if ( v13 == 1 )
  {
    UsbhSetPindicatorState(a3, a2, 4);
LABEL_8:
    v12 = a3;
  }
  return UsbhUnlockPindicator(v12);
}
