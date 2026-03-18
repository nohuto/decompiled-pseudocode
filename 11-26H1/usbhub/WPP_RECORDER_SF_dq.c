/*
 * XREFs of WPP_RECORDER_SF_dq @ 0x14003E7C4
 * Callers:
 *     Usbh_PCE_psPAUSED_Action @ 0x1400011C0 (Usbh_PCE_psPAUSED_Action.c)
 *     Usbh_PCE_psSUSPEND_Action @ 0x140001A0C (Usbh_PCE_psSUSPEND_Action.c)
 *     Usbh_PCE_QueueDriverReset_Action @ 0x140002018 (Usbh_PCE_QueueDriverReset_Action.c)
 *     Usbh_PCE_QueueChange_Action @ 0x140003290 (Usbh_PCE_QueueChange_Action.c)
 *     Usbh_PCE_Disable_Action @ 0x140005470 (Usbh_PCE_Disable_Action.c)
 *     UsbhPCE_Disable @ 0x140013E18 (UsbhPCE_Disable.c)
 *     UsbhSS_PdoWakeWorker @ 0x1400145D0 (UsbhSS_PdoWakeWorker.c)
 *     UsbhHubProcessChangeWorker @ 0x14001DAF0 (UsbhHubProcessChangeWorker.c)
 *     UsbhHubRunPortChangeQueue @ 0x14001DE80 (UsbhHubRunPortChangeQueue.c)
 *     UsbhHubDispatchPortEvent @ 0x14001EC90 (UsbhHubDispatchPortEvent.c)
 *     Usbh_PCE_wRun_Action @ 0x14001FE00 (Usbh_PCE_wRun_Action.c)
 *     Usbh_PCE_wChange_Action @ 0x140020AB0 (Usbh_PCE_wChange_Action.c)
 *     Usbh_PCE_wDone_Action @ 0x140022A00 (Usbh_PCE_wDone_Action.c)
 *     Usbh_PCE_Enable_Action @ 0x14002E310 (Usbh_PCE_Enable_Action.c)
 *     UsbhBusConnectPdo @ 0x140032B60 (UsbhBusConnectPdo.c)
 *     UsbhExceptionTrace @ 0x140033C60 (UsbhExceptionTrace.c)
 *     UsbhPCE_psSUSPEND @ 0x14003517C (UsbhPCE_psSUSPEND.c)
 *     UsbhFdoSetPowerDx_Action @ 0x14003743C (UsbhFdoSetPowerDx_Action.c)
 *     UsbhGetDeviceBusInfo @ 0x14003C084 (UsbhGetDeviceBusInfo.c)
 *     UsbhHubSyncSuspendPortEvent @ 0x140043680 (UsbhHubSyncSuspendPortEvent.c)
 *     UsbhPCE_Check @ 0x140043B80 (UsbhPCE_Check.c)
 *     UsbhPCE_Close @ 0x140043C48 (UsbhPCE_Close.c)
 *     UsbhPCE_HW_Stop @ 0x140043D08 (UsbhPCE_HW_Stop.c)
 *     UsbhPCE_SD_Resume @ 0x14004414C (UsbhPCE_SD_Resume.c)
 *     UsbhPCE_wChangeERROR @ 0x1400442FC (UsbhPCE_wChangeERROR.c)
 *     Usbh_PCE_Check_Action @ 0x140044A94 (Usbh_PCE_Check_Action.c)
 *     Usbh_PCE_Close_Action @ 0x140044BD0 (Usbh_PCE_Close_Action.c)
 *     Usbh_PCE_HW_Stop_Action @ 0x140044DF8 (Usbh_PCE_HW_Stop_Action.c)
 *     Usbh_PCE_SD_Resume_Action @ 0x1400453C4 (Usbh_PCE_SD_Resume_Action.c)
 *     Usbh_PCE_SoftDisconnect_Action @ 0x140045530 (Usbh_PCE_SoftDisconnect_Action.c)
 *     Usbh_PCE_wChangeERROR_Action @ 0x140045820 (Usbh_PCE_wChangeERROR_Action.c)
 *     UsbhSyncResetDeviceInternal @ 0x140048448 (UsbhSyncResetDeviceInternal.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140061C10 (_guard_dispatch_icall.c)
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
