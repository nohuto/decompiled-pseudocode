/*
 * XREFs of UsbhSetPcqEventStatus @ 0x14002EC50
 * Callers:
 *     Usbh_PCE_Resume_Action @ 0x140002870 (Usbh_PCE_Resume_Action.c)
 *     Usbh_PCE_Suspend_Action @ 0x140004A34 (Usbh_PCE_Suspend_Action.c)
 *     Usbh_PCE_Disable_Action @ 0x140005470 (Usbh_PCE_Disable_Action.c)
 *     UsbhSetSuspendPending @ 0x140006794 (UsbhSetSuspendPending.c)
 *     UsbhiSignalResumeEvent @ 0x14000B4D8 (UsbhiSignalResumeEvent.c)
 *     UsbhRequestPortSuspend @ 0x140021600 (UsbhRequestPortSuspend.c)
 *     UsbhSignalSuspendEvent @ 0x140022970 (UsbhSignalSuspendEvent.c)
 *     Usbh_PCE_wDone_Action @ 0x140022A00 (Usbh_PCE_wDone_Action.c)
 *     UsbhiSignalSuspendEvent @ 0x14002394C (UsbhiSignalSuspendEvent.c)
 *     Usbh_PCE_HardwareWake_Action @ 0x14002F370 (Usbh_PCE_HardwareWake_Action.c)
 *     Usbh_PCE_Close_Action @ 0x140044BD0 (Usbh_PCE_Close_Action.c)
 *     Usbh_PCE_HW_Stop_Action @ 0x140044DF8 (Usbh_PCE_HW_Stop_Action.c)
 *     Usbh_PCE_SD_Resume_Action @ 0x1400453C4 (Usbh_PCE_SD_Resume_Action.c)
 *     Usbh_iSignalSyncDeviceReset @ 0x1400499D8 (Usbh_iSignalSyncDeviceReset.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall UsbhSetPcqEventStatus(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v4; // r11
  __int64 v5; // rbx
  __int64 v6; // r10
  __int64 v7; // rcx
  _DWORD *result; // rax
  int v9; // r8d

  v4 = *(unsigned __int16 *)(a2 + 4);
  v5 = *(int *)(a2 + 12);
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    if ( a1 )
    {
      v6 = *(_QWORD *)(a1 + 64);
      if ( v6 )
      {
        v7 = *(_QWORD *)(v6 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v6 + 880)) & *(_DWORD *)(v6 + 884));
        *(_DWORD *)v7 = 1986359664;
        *(_QWORD *)(v7 + 8) = 0LL;
        *(_QWORD *)(v7 + 16) = v5;
        *(_QWORD *)(v7 + 24) = v4;
      }
    }
  }
  result = (_DWORD *)(a2 + 32 * (*(unsigned int *)(a2 + 2400) + 43LL));
  if ( a3 == 1 )
  {
    result[5] = a4;
  }
  else if ( a3 )
  {
    v9 = a3 - 2;
    if ( v9 )
    {
      if ( v9 == 1 )
        result[7] = a4;
    }
    else
    {
      result[6] = a4;
    }
  }
  else
  {
    result[4] = a4;
  }
  return result;
}
