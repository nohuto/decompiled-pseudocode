/*
 * XREFs of UsbhEtwWrite @ 0x14001DA20
 * Callers:
 *     UsbhSshSuspendHub @ 0x140006848 (UsbhSshSuspendHub.c)
 *     UsbhDisableTimerObject @ 0x140007330 (UsbhDisableTimerObject.c)
 *     UsbhPortConnect @ 0x14000BF90 (UsbhPortConnect.c)
 *     UsbhEtwLogHubIrpEvent @ 0x14000C7E0 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhEtwLogDeviceIrpEvent @ 0x14000F910 (UsbhEtwLogDeviceIrpEvent.c)
 *     UsbhPdoDevicePowerState @ 0x1400156F0 (UsbhPdoDevicePowerState.c)
 *     UsbhException @ 0x14001B7DC (UsbhException.c)
 *     UsbhHubProcessIsr @ 0x14001C3D0 (UsbhHubProcessIsr.c)
 *     UsbhEtwLogHubEventWithExtraData @ 0x14001D870 (UsbhEtwLogHubEventWithExtraData.c)
 *     UsbhEtwLogPortInformation @ 0x140027A6C (UsbhEtwLogPortInformation.c)
 *     UsbhEtwLogHubInformation @ 0x140028050 (UsbhEtwLogHubInformation.c)
 *     UsbhEtwLogHubPowerEvent @ 0x140028B5C (UsbhEtwLogHubPowerEvent.c)
 *     UsbhEtwLogHubPastExceptions @ 0x140029294 (UsbhEtwLogHubPastExceptions.c)
 *     UsbhSshResumeUpstream @ 0x140029894 (UsbhSshResumeUpstream.c)
 *     UsbhEnableTimerObject @ 0x14002BB10 (UsbhEnableTimerObject.c)
 *     UsbhEtwLogDevicePowerEvent @ 0x14002F1E4 (UsbhEtwLogDevicePowerEvent.c)
 *     UsbhEtwLogDeviceInformation @ 0x1400334AC (UsbhEtwLogDeviceInformation.c)
 *     UsbhEtwLogDeviceDescription @ 0x14003A514 (UsbhEtwLogDeviceDescription.c)
 * Callees:
 *     __security_check_cookie @ 0x140061BD0 (__security_check_cookie.c)
 *     memset @ 0x140061FC0 (memset.c)
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
