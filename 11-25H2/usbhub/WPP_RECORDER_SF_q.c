/*
 * XREFs of WPP_RECORDER_SF_q @ 0x14003EDC0
 * Callers:
 *     UsbhQueryPortState @ 0x140007140 (UsbhQueryPortState.c)
 *     UsbhFdoUrbPdoFilter @ 0x140008670 (UsbhFdoUrbPdoFilter.c)
 *     UsbhPdoInternalDeviceControl @ 0x1400089B0 (UsbhPdoInternalDeviceControl.c)
 *     UsbhFdoSelectConfigurationPdo @ 0x1400095A4 (UsbhFdoSelectConfigurationPdo.c)
 *     UsbhDeletePdo @ 0x14000E690 (UsbhDeletePdo.c)
 *     UsbhCreatePdo @ 0x140014360 (UsbhCreatePdo.c)
 *     UsbhPdoPnp_StartDevice @ 0x140017090 (UsbhPdoPnp_StartDevice.c)
 *     UsbhIoctlGetNodeConnectionName @ 0x14001FB50 (UsbhIoctlGetNodeConnectionName.c)
 *     UsbhFdoColdStartPdo @ 0x14002CA60 (UsbhFdoColdStartPdo.c)
 *     UsbhWaitForBootDevice @ 0x14002D150 (UsbhWaitForBootDevice.c)
 *     UsbhFdoS0IoComplete_Action @ 0x1400307B0 (UsbhFdoS0IoComplete_Action.c)
 *     UsbhSyncSuspendPdoPort @ 0x140034ED4 (UsbhSyncSuspendPdoPort.c)
 *     UsbhPdoPnp_QueryDeviceText @ 0x1400370D0 (UsbhPdoPnp_QueryDeviceText.c)
 *     UsbhSetPdoRegistryParameter @ 0x140038120 (UsbhSetPdoRegistryParameter.c)
 *     UsbhFdoReturnDeviceBusInfo @ 0x140040FA0 (UsbhFdoReturnDeviceBusInfo.c)
 *     UsbhSyncResetDeviceInternal @ 0x1400488F4 (UsbhSyncResetDeviceInternal.c)
 *     Usbh_BusPause_PdoEvent @ 0x140049174 (Usbh_BusPause_PdoEvent.c)
 *     UsbhResetNotifyCompletion @ 0x14004C970 (UsbhResetNotifyCompletion.c)
 *     UsbhResetNotificationIrpCompletion @ 0x140050FD0 (UsbhResetNotificationIrpCompletion.c)
 *     UsbhResetNotifyDownstreamHub @ 0x140051194 (UsbhResetNotifyDownstreamHub.c)
 *     UsbhQueryGlobalHubValue @ 0x140052340 (UsbhQueryGlobalHubValue.c)
 *     UsbhQueryGlobalLegacyDeviceValue @ 0x140052550 (UsbhQueryGlobalLegacyDeviceValue.c)
 *     UsbhBuildWmiConnectionNotification @ 0x140054A10 (UsbhBuildWmiConnectionNotification.c)
 *     UsbhQueryUxdDevice @ 0x14005FA90 (UsbhQueryUxdDevice.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140061530 (_guard_dispatch_icall.c)
 */

__int64 WPP_RECORDER_SF_q(__int64 a1, __int64 a2, unsigned int a3, unsigned __int16 a4, __int64 a5, ...)
{
  unsigned __int64 v7; // r11
  int v9; // eax
  int v11; // [rsp+20h] [rbp-28h]
  va_list va; // [rsp+78h] [rbp+30h] BYREF

  va_start(va, a5);
  v7 = (unsigned __int64)a3 >> 16;
  v9 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v7 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v9, (a3 - 1) & 0x1F) )
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, char *, __int64, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v7),
      43LL,
      a5,
      a4,
      va,
      8LL,
      0LL);
  LOWORD(v11) = a4;
  return WppAutoLogTrace(a1, 0LL, a3, a5, v11, va);
}
