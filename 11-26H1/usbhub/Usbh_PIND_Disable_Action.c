/*
 * XREFs of Usbh_PIND_Disable_Action @ 0x14003F42C
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

LONG __fastcall Usbh_PIND_Disable_Action(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // eax
  int v7; // r11d
  int v8; // r11d
  int v9; // r11d
  int v10; // r11d
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9

  FdoExt(a1);
  v6 = UsbhLockPindicator(a3, a2, 4);
  Log(a1, 0x8000, 1718383410, v6, *(unsigned __int16 *)(a2 + 4));
  v8 = v7 - 1;
  if ( !v8 || (v9 = v8 - 1) == 0 )
  {
    UsbhSetPortIndicator(a1, *(_WORD *)(a2 + 4), 0);
    UsbhDisableTimerObject(*(_QWORD *)(a3 + 8), a2 + 2744, v12, v13);
    goto LABEL_8;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    UsbhSetPortIndicator(a1, *(_WORD *)(a2 + 4), 0);
LABEL_8:
    v11 = a3;
LABEL_9:
    UsbhSetPindicatorState(v11, a2, 4);
    v11 = a3;
    return UsbhUnlockPindicator(v11);
  }
  v11 = a3;
  if ( v10 == 1 )
    goto LABEL_9;
  return UsbhUnlockPindicator(v11);
}
