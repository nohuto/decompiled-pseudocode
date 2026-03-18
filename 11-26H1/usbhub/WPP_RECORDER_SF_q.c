/*
 * XREFs of WPP_RECORDER_SF_q @ 0x14003E898
 * Callers:
 *     UsbhDeletePdo @ 0x140007770 (UsbhDeletePdo.c)
 *     UsbhCreatePdo @ 0x14000C9F0 (UsbhCreatePdo.c)
 *     UsbhPdoPnp_StartDevice @ 0x14000EDC0 (UsbhPdoPnp_StartDevice.c)
 *     UsbhSyncSuspendPdoPort @ 0x1400113C4 (UsbhSyncSuspendPdoPort.c)
 *     UsbhFdoUrbPdoFilter @ 0x1400187E0 (UsbhFdoUrbPdoFilter.c)
 *     UsbhPdoInternalDeviceControl @ 0x140018B20 (UsbhPdoInternalDeviceControl.c)
 *     UsbhFdoSelectConfigurationPdo @ 0x140019724 (UsbhFdoSelectConfigurationPdo.c)
 *     UsbhQueryPortState @ 0x1400199F0 (UsbhQueryPortState.c)
 *     UsbhIoctlGetNodeConnectionName @ 0x140025250 (UsbhIoctlGetNodeConnectionName.c)
 *     UsbhFdoS0IoComplete_Action @ 0x14002A080 (UsbhFdoS0IoComplete_Action.c)
 *     UsbhFdoColdStartPdo @ 0x140030D10 (UsbhFdoColdStartPdo.c)
 *     UsbhWaitForBootDevice @ 0x140031424 (UsbhWaitForBootDevice.c)
 *     UsbhPdoPnp_QueryDeviceText @ 0x1400352F0 (UsbhPdoPnp_QueryDeviceText.c)
 *     UsbhSetPdoRegistryParameter @ 0x14003647C (UsbhSetPdoRegistryParameter.c)
 *     UsbhFdoReturnDeviceBusInfo @ 0x140040AC0 (UsbhFdoReturnDeviceBusInfo.c)
 *     UsbhSyncResetDeviceInternal @ 0x140048448 (UsbhSyncResetDeviceInternal.c)
 *     Usbh_BusPause_PdoEvent @ 0x140048CD4 (Usbh_BusPause_PdoEvent.c)
 *     UsbhResetNotifyCompletion @ 0x14004C544 (UsbhResetNotifyCompletion.c)
 *     UsbhResetNotificationIrpCompletion @ 0x1400514C0 (UsbhResetNotificationIrpCompletion.c)
 *     UsbhResetNotifyDownstreamHub @ 0x140051684 (UsbhResetNotifyDownstreamHub.c)
 *     UsbhQueryGlobalHubValue @ 0x140052840 (UsbhQueryGlobalHubValue.c)
 *     UsbhQueryGlobalLegacyDeviceValue @ 0x140052A50 (UsbhQueryGlobalLegacyDeviceValue.c)
 *     UsbhBuildWmiConnectionNotification @ 0x140054F90 (UsbhBuildWmiConnectionNotification.c)
 *     UsbhQueryUxdDevice @ 0x140060140 (UsbhQueryUxdDevice.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140061C10 (_guard_dispatch_icall.c)
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
