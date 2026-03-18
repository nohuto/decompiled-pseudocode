/*
 * XREFs of UsbhSshResumeDownstream @ 0x14002A3C4
 * Callers:
 *     Usbh_SSH_HubSuspended @ 0x14002B258 (Usbh_SSH_HubSuspended.c)
 *     Usbh_SSH_HubPendingResume @ 0x14002C2CC (Usbh_SSH_HubPendingResume.c)
 *     Usbh_SSH_HubPendingResumeAfterSuspend @ 0x14005ED68 (Usbh_SSH_HubPendingResumeAfterSuspend.c)
 * Callees:
 *     PdoExt @ 0x140004330 (PdoExt.c)
 *     UsbhException @ 0x140006C1C (UsbhException.c)
 *     UsbhQueryPortState @ 0x140007140 (UsbhQueryPortState.c)
 *     UsbhGetPortData @ 0x140008540 (UsbhGetPortData.c)
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     Usbh_SSH_Event @ 0x140009870 (Usbh_SSH_Event.c)
 *     UsbhEtwLogHubIrpEvent @ 0x14000C5A0 (UsbhEtwLogHubIrpEvent.c)
 *     Usb_Disconnected @ 0x14000F810 (Usb_Disconnected.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     UsbhSshResumePort @ 0x140028064 (UsbhSshResumePort.c)
 *     UsbhDisarmHubWakeOnConnect @ 0x14002A284 (UsbhDisarmHubWakeOnConnect.c)
 *     UsbhSyncBusResume @ 0x14002AAB4 (UsbhSyncBusResume.c)
 *     UsbhEnableTimerObject @ 0x14002EA20 (UsbhEnableTimerObject.c)
 *     UsbhSyncSuspendPdoPort @ 0x140034ED4 (UsbhSyncSuspendPdoPort.c)
 */

_DWORD *__fastcall UsbhSshResumeDownstream(PDEVICE_OBJECT DeviceObject, __int64 a2, char a3)
{
  _DWORD *v4; // r14
  struct _KEVENT *v7; // r13
  void *DeviceExtension; // rdx
  __int64 v9; // rcx
  unsigned __int16 i; // di
  __int64 PortData; // rax
  __int64 v12; // rcx
  unsigned __int16 v13; // bp
  _DWORD *result; // rax
  int v15; // r13d
  __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rdi
  int v19; // edx
  int v20; // eax
  char v21; // r10
  int v22; // r11d
  struct _KEVENT *v23; // rcx
  _DWORD *v24; // rax
  int v25; // eax
  int v26; // edx
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-78h]
  __int64 v28; // [rsp+28h] [rbp-70h]
  int v29; // [rsp+50h] [rbp-48h] BYREF
  struct _KEVENT *v30; // [rsp+58h] [rbp-40h]
  int v31; // [rsp+B0h] [rbp+18h] BYREF
  int v32; // [rsp+B8h] [rbp+20h]

  v4 = 0LL;
  v32 = 0;
  v7 = (struct _KEVENT *)FdoExt((__int64)DeviceObject);
  v30 = v7;
  if ( (UsbhLogMask & 0x10000) != 0 )
  {
    if ( DeviceObject )
    {
      DeviceExtension = DeviceObject->DeviceExtension;
      if ( DeviceExtension )
      {
        v31 = 1849979730;
        v9 = *((_QWORD *)DeviceExtension + 111)
           + 32LL
           * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)DeviceExtension + 220) & *((_DWORD *)DeviceExtension + 221));
        *(_DWORD *)v9 = v31;
        *(_QWORD *)(v9 + 8) = 0LL;
        *(_QWORD *)(v9 + 16) = a2;
        *(_QWORD *)(v9 + 24) = 0LL;
      }
    }
  }
  for ( i = 1; i <= *((unsigned __int8 *)FdoExt((__int64)DeviceObject) + 2938); ++i )
  {
    PortData = UsbhGetPortData((__int64)DeviceObject, i);
    if ( PortData )
    {
      v12 = *(_QWORD *)(PortData + 392);
      if ( v12 )
      {
        v4 = PdoExt(v12);
        KeWaitForSingleObject(v4 + 736, Executive, 0, 0, 0LL);
        if ( (v4[355] & 0x4000000) != 0 )
        {
          v31 = 0;
          v20 = UsbhQueryPortState((__int64)DeviceObject, i, (__int64)&v31, &v29);
          Log((__int64)DeviceObject, 0x10000, 1397965875, v20, (unsigned __int16)v31);
          if ( v22 >= 0 && (v21 & 2) == 0 )
          {
            v4[355] |= 0x3000000u;
            v23 = (struct _KEVENT *)(v4 + 730);
            if ( (v21 & 1) != 0 )
              KeSetEvent(v23, 0, 0);
            else
              KeResetEvent(v23);
          }
        }
        KeSetEvent((PRKEVENT)(v4 + 736), 0, 0);
      }
    }
  }
  if ( a3 == 1 )
    UsbhSyncBusResume(DeviceObject);
  UsbhDisarmHubWakeOnConnect((__int64)DeviceObject);
  v13 = 1;
  result = FdoExt((__int64)DeviceObject);
  if ( *((_BYTE *)result + 2938) )
  {
    v15 = v32;
    do
    {
      v16 = UsbhGetPortData((__int64)DeviceObject, v13);
      v17 = v16;
      if ( v16 )
      {
        v18 = *(_QWORD *)(v16 + 392);
        if ( !v18 || (v4 = PdoExt(*(_QWORD *)(v16 + 392)), v15 = PdoExt(v18)[282], (v4[355] & 0x1000000) == 0) )
        {
          v19 = UsbhSshResumePort((__int64)DeviceObject, a2, v17);
          if ( v19 >= 0 && v18 && (v4[355] & 0x8004) == 0 && v15 == 4 )
          {
            *(_DWORD *)(v17 + 2408) |= 2u;
            v24 = PdoExt(v18);
            v25 = UsbhSyncSuspendPdoPort(v24 + 236, v18, 0LL);
            *(_DWORD *)(v17 + 2408) &= ~2u;
            v19 = v25;
          }
          if ( (v19 & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(v19) )
            UsbhException((__int64)DeviceObject, v13, 128, 0LL, 0, v26, 0, usbfile_sshub_c, 2436, 0);
        }
      }
      ++v13;
      result = FdoExt((__int64)DeviceObject);
    }
    while ( v13 <= *((unsigned __int8 *)result + 2938) );
    v7 = v30;
  }
  if ( a3 == 1 )
  {
    Usbh_SSH_Event(DeviceObject, 7u, a2);
    LODWORD(v28) = 0;
    LODWORD(Timeout) = 0;
    UsbhEtwLogHubIrpEvent((__int64)DeviceObject, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_RESUME_COMPLETE, Timeout, v28);
    KeSetEvent(v7 + 141, 0, 0);
    return (_DWORD *)UsbhEnableTimerObject(
                       (_DWORD)DeviceObject,
                       (int)v7 + 3200,
                       v7[219].Header.LockNV,
                       0,
                       a2,
                       2001228627);
  }
  return result;
}
