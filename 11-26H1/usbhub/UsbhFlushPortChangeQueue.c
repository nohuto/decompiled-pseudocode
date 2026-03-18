/*
 * XREFs of UsbhFlushPortChangeQueue @ 0x140001CC8
 * Callers:
 *     Usbh_PCE_psPAUSED_Action @ 0x1400011C0 (Usbh_PCE_psPAUSED_Action.c)
 *     Usbh_PCE_psSUSPEND_Action @ 0x140001A0C (Usbh_PCE_psSUSPEND_Action.c)
 *     Usbh_PCE_Suspend_Action @ 0x140004A34 (Usbh_PCE_Suspend_Action.c)
 *     Usbh_PCE_Disable_Action @ 0x140005470 (Usbh_PCE_Disable_Action.c)
 *     Usbh_PCE_wDone_Action @ 0x140022A00 (Usbh_PCE_wDone_Action.c)
 *     Usbh_PCE_BusReset_Action @ 0x1400448AC (Usbh_PCE_BusReset_Action.c)
 *     Usbh_PCE_Close_Action @ 0x140044BD0 (Usbh_PCE_Close_Action.c)
 *     Usbh_PCE_HW_Stop_Action @ 0x140044DF8 (Usbh_PCE_HW_Stop_Action.c)
 *     Usbh_PCE_ResumeTimeout_Action @ 0x1400451C0 (Usbh_PCE_ResumeTimeout_Action.c)
 *     Usbh_PCE_SD_Resume_Action @ 0x1400453C4 (Usbh_PCE_SD_Resume_Action.c)
 *     Usbh_PCE_SoftDisconnect_Action @ 0x140045530 (Usbh_PCE_SoftDisconnect_Action.c)
 * Callees:
 *     UsbhFreePortChangeQueueObject @ 0x140001DA0 (UsbhFreePortChangeQueueObject.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     WPP_RECORDER_SF_d @ 0x14003E3EC (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhFlushPortChangeQueue(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v7; // r9
  _QWORD **v8; // rdi
  _QWORD *v9; // r8
  _QWORD *v10; // rax

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      55,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      *(_WORD *)(a2 + 4));
  result = FdoExt(a1, a2, a3, a4);
  v8 = (_QWORD **)(a2 + 456);
  while ( 1 )
  {
    v9 = *v8;
    if ( *v8 == v8 )
      break;
    if ( (_QWORD **)v9[1] != v8 || (v10 = (_QWORD *)*v9, *(_QWORD **)(*v9 + 8LL) != v9) )
      __fastfail(3u);
    *v8 = v10;
    LOBYTE(v7) = 1;
    v10[1] = v8;
    result = UsbhFreePortChangeQueueObject(a1, a2, v9 - 2, v7);
  }
  *(_DWORD *)(a2 + 2876) = 0;
  *(_BYTE *)(a2 + 2839) = 0;
  return result;
}
