/*
 * XREFs of UsbhFlushPortChangeQueue @ 0x140001A1C
 * Callers:
 *     Usbh_PCE_psSUSPEND_Action @ 0x140001774 (Usbh_PCE_psSUSPEND_Action.c)
 *     Usbh_PCE_psPAUSED_Action @ 0x140002204 (Usbh_PCE_psPAUSED_Action.c)
 *     Usbh_PCE_wDone_Action @ 0x14001DD70 (Usbh_PCE_wDone_Action.c)
 *     Usbh_PCE_Suspend_Action @ 0x1400275AC (Usbh_PCE_Suspend_Action.c)
 *     Usbh_PCE_Disable_Action @ 0x1400283A0 (Usbh_PCE_Disable_Action.c)
 *     Usbh_PCE_BusReset_Action @ 0x140044D84 (Usbh_PCE_BusReset_Action.c)
 *     Usbh_PCE_Close_Action @ 0x14004509C (Usbh_PCE_Close_Action.c)
 *     Usbh_PCE_HW_Stop_Action @ 0x1400452C4 (Usbh_PCE_HW_Stop_Action.c)
 *     Usbh_PCE_ResumeTimeout_Action @ 0x140045688 (Usbh_PCE_ResumeTimeout_Action.c)
 *     Usbh_PCE_SD_Resume_Action @ 0x140045888 (Usbh_PCE_SD_Resume_Action.c)
 *     Usbh_PCE_SoftDisconnect_Action @ 0x1400459F4 (Usbh_PCE_SoftDisconnect_Action.c)
 * Callees:
 *     UsbhFreePortChangeQueueObject @ 0x140001AF4 (UsbhFreePortChangeQueueObject.c)
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     WPP_RECORDER_SF_d @ 0x14003E938 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhFlushPortChangeQueue(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // r9
  _QWORD **v6; // rdi
  _QWORD *v7; // r8
  _QWORD *v8; // rax

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      55,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      *(_WORD *)(a2 + 4));
  result = FdoExt(a1);
  v6 = (_QWORD **)(a2 + 456);
  while ( 1 )
  {
    v7 = *v6;
    if ( *v6 == v6 )
      break;
    if ( (_QWORD **)v7[1] != v6 || (v8 = (_QWORD *)*v7, *(_QWORD **)(*v7 + 8LL) != v7) )
      __fastfail(3u);
    *v6 = v8;
    LOBYTE(v5) = 1;
    v8[1] = v6;
    result = UsbhFreePortChangeQueueObject(a1, a2, v7 - 2, v5);
  }
  *(_DWORD *)(a2 + 2876) = 0;
  *(_BYTE *)(a2 + 2839) = 0;
  return result;
}
