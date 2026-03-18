/*
 * XREFs of UsbhEtwWrite @ 0x14000AB60
 * Callers:
 *     UsbhException @ 0x140006C1C (UsbhException.c)
 *     UsbhEtwLogHubEventWithExtraData @ 0x14000A9B0 (UsbhEtwLogHubEventWithExtraData.c)
 *     UsbhHubProcessIsr @ 0x14000AC30 (UsbhHubProcessIsr.c)
 *     UsbhEtwLogHubIrpEvent @ 0x14000C5A0 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhEtwLogDevicePowerEvent @ 0x14000C7AC (UsbhEtwLogDevicePowerEvent.c)
 *     UsbhDisableTimerObject @ 0x14000C938 (UsbhDisableTimerObject.c)
 *     UsbhPdoDevicePowerState @ 0x14000EBA4 (UsbhPdoDevicePowerState.c)
 *     UsbhPortConnect @ 0x140013B30 (UsbhPortConnect.c)
 *     UsbhEtwLogDeviceIrpEvent @ 0x140016858 (UsbhEtwLogDeviceIrpEvent.c)
 *     UsbhSshSuspendHub @ 0x1400297BC (UsbhSshSuspendHub.c)
 *     UsbhSshResumeUpstream @ 0x14002A798 (UsbhSshResumeUpstream.c)
 *     UsbhEtwLogHubPastExceptions @ 0x14002AC70 (UsbhEtwLogHubPastExceptions.c)
 *     UsbhEtwLogHubPowerEvent @ 0x14002B584 (UsbhEtwLogHubPowerEvent.c)
 *     UsbhEtwLogDeviceInformation @ 0x14002D914 (UsbhEtwLogDeviceInformation.c)
 *     UsbhEnableTimerObject @ 0x14002EA20 (UsbhEnableTimerObject.c)
 *     UsbhEtwLogHubInformation @ 0x1400319A4 (UsbhEtwLogHubInformation.c)
 *     UsbhEtwLogPortInformation @ 0x140031AA4 (UsbhEtwLogPortInformation.c)
 *     UsbhEtwLogDeviceDescription @ 0x14003AAB4 (UsbhEtwLogDeviceDescription.c)
 * Callees:
 *     __security_check_cookie @ 0x1400614F0 (__security_check_cookie.c)
 *     memset @ 0x140061900 (memset.c)
 */

NTSTATUS UsbhEtwWrite(PCEVENT_DESCRIPTOR EventDescriptor, LPCGUID ActivityId, ...)
{
  va_list v4; // r8
  ULONG v5; // r9d
  unsigned __int64 v6; // rdx
  unsigned int v7; // ecx
  __int64 v8; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData[10]; // [rsp+40h] [rbp-C8h] BYREF
  va_list va; // [rsp+120h] [rbp+18h] BYREF

  va_start(va, ActivityId);
  memset(UserData, 0, sizeof(UserData));
  va_copy(v4, va);
  v5 = 0;
  while ( 1 )
  {
    v6 = *(_QWORD *)v4;
    if ( !*(_QWORD *)v4 )
      break;
    v7 = *((_DWORD *)v4 + 2);
    v4 += 16;
    if ( !v7 || v5 >= 0xA )
      break;
    v8 = v5++;
    UserData[v8].Ptr = v6;
    UserData[v8].Size = v7;
    UserData[v8].Reserved = 0;
  }
  return EtwWrite(RegHandle, EventDescriptor, ActivityId, v5, UserData);
}
