/*
 * XREFs of WPP_RECORDER_SF_dq @ 0x14003ECF4
 * Callers:
 *     Usbh_PCE_psSUSPEND_Action @ 0x140001774 (Usbh_PCE_psSUSPEND_Action.c)
 *     Usbh_PCE_psPAUSED_Action @ 0x140002204 (Usbh_PCE_psPAUSED_Action.c)
 *     UsbhPCE_Disable @ 0x140003E98 (UsbhPCE_Disable.c)
 *     UsbhHubProcessChangeWorker @ 0x140004850 (UsbhHubProcessChangeWorker.c)
 *     UsbhHubDispatchPortEvent @ 0x140004D00 (UsbhHubDispatchPortEvent.c)
 *     UsbhHubRunPortChangeQueue @ 0x140005E40 (UsbhHubRunPortChangeQueue.c)
 *     UsbhSS_PdoWakeWorker @ 0x14000D9A0 (UsbhSS_PdoWakeWorker.c)
 *     Usbh_PCE_wDone_Action @ 0x14001DD70 (Usbh_PCE_wDone_Action.c)
 *     Usbh_PCE_wRun_Action @ 0x140023E60 (Usbh_PCE_wRun_Action.c)
 *     Usbh_PCE_wChange_Action @ 0x140024610 (Usbh_PCE_wChange_Action.c)
 *     Usbh_PCE_QueueDriverReset_Action @ 0x140024E40 (Usbh_PCE_QueueDriverReset_Action.c)
 *     Usbh_PCE_QueueChange_Action @ 0x140026210 (Usbh_PCE_QueueChange_Action.c)
 *     Usbh_PCE_Disable_Action @ 0x1400283A0 (Usbh_PCE_Disable_Action.c)
 *     UsbhBusConnectPdo @ 0x14002DB28 (UsbhBusConnectPdo.c)
 *     UsbhFdoSetPowerDx_Action @ 0x1400325B8 (UsbhFdoSetPowerDx_Action.c)
 *     Usbh_PCE_Enable_Action @ 0x140032DA0 (Usbh_PCE_Enable_Action.c)
 *     UsbhExceptionTrace @ 0x140035D58 (UsbhExceptionTrace.c)
 *     UsbhPCE_psSUSPEND @ 0x140036F5C (UsbhPCE_psSUSPEND.c)
 *     UsbhGetDeviceBusInfo @ 0x14003C60C (UsbhGetDeviceBusInfo.c)
 *     UsbhHubSyncSuspendPortEvent @ 0x140043B5C (UsbhHubSyncSuspendPortEvent.c)
 *     UsbhPCE_Check @ 0x14004405C (UsbhPCE_Check.c)
 *     UsbhPCE_Close @ 0x140044124 (UsbhPCE_Close.c)
 *     UsbhPCE_HW_Stop @ 0x1400441E4 (UsbhPCE_HW_Stop.c)
 *     UsbhPCE_SD_Resume @ 0x140044628 (UsbhPCE_SD_Resume.c)
 *     UsbhPCE_wChangeERROR @ 0x1400447D8 (UsbhPCE_wChangeERROR.c)
 *     Usbh_PCE_Check_Action @ 0x140044F60 (Usbh_PCE_Check_Action.c)
 *     Usbh_PCE_Close_Action @ 0x14004509C (Usbh_PCE_Close_Action.c)
 *     Usbh_PCE_HW_Stop_Action @ 0x1400452C4 (Usbh_PCE_HW_Stop_Action.c)
 *     Usbh_PCE_SD_Resume_Action @ 0x140045888 (Usbh_PCE_SD_Resume_Action.c)
 *     Usbh_PCE_SoftDisconnect_Action @ 0x1400459F4 (Usbh_PCE_SoftDisconnect_Action.c)
 *     Usbh_PCE_wChangeERROR_Action @ 0x140045CE4 (Usbh_PCE_wChangeERROR_Action.c)
 *     UsbhSyncResetDeviceInternal @ 0x1400488F4 (UsbhSyncResetDeviceInternal.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140061530 (_guard_dispatch_icall.c)
 */

__int64 WPP_RECORDER_SF_dq(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4, __int64 a5, ...)
{
  int v8; // [rsp+20h] [rbp-38h]
  __int64 v9; // [rsp+88h] [rbp+30h] BYREF
  va_list va; // [rsp+88h] [rbp+30h]
  va_list va1; // [rsp+90h] [rbp+38h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v9 = va_arg(va1, _QWORD);
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 )
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, __int64, _QWORD, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      a5,
      a4,
      (__int64 *)va,
      4LL,
      va1,
      8LL,
      0LL);
  LOWORD(v8) = a4;
  return WppAutoLogTrace(a1, 0LL, 1LL, a5, v8, (__int64 *)va);
}
