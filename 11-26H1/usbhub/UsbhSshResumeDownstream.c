/*
 * XREFs of UsbhSshResumeDownstream @ 0x140008C2C
 * Callers:
 *     Usbh_SSH_HubSuspended @ 0x140028CA4 (Usbh_SSH_HubSuspended.c)
 *     Usbh_SSH_HubPendingResume @ 0x140028F5C (Usbh_SSH_HubPendingResume.c)
 *     Usbh_SSH_HubPendingResumeAfterSuspend @ 0x14005F3B0 (Usbh_SSH_HubPendingResumeAfterSuspend.c)
 * Callees:
 *     UsbhSshResumePort @ 0x1400046E8 (UsbhSshResumePort.c)
 *     UsbhDisarmHubWakeOnConnect @ 0x140007630 (UsbhDisarmHubWakeOnConnect.c)
 *     UsbhSyncBusResume @ 0x140009A74 (UsbhSyncBusResume.c)
 *     Log @ 0x140009B80 (Log.c)
 *     UsbhEtwLogHubIrpEvent @ 0x14000C7E0 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhSyncSuspendPdoPort @ 0x1400113C4 (UsbhSyncSuspendPdoPort.c)
 *     Usb_Disconnected @ 0x140013CE4 (Usb_Disconnected.c)
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     UsbhGetPortData @ 0x1400186A0 (UsbhGetPortData.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhQueryPortState @ 0x1400199F0 (UsbhQueryPortState.c)
 *     Usbh_SSH_Event @ 0x14001B400 (Usbh_SSH_Event.c)
 *     UsbhException @ 0x14001B7DC (UsbhException.c)
 *     UsbhEnableTimerObject @ 0x14002BB10 (UsbhEnableTimerObject.c)
 */

__int64 __fastcall UsbhSshResumeDownstream(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  char v5; // r12
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  struct _KEVENT *v11; // r13
  __int64 v12; // rcx
  signed __int32 v13; // eax
  unsigned int v14; // edx
  __int64 v15; // rcx
  unsigned __int16 v16; // bp
  unsigned __int16 v17; // di
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 PortData; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  int v29; // r13d
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdi
  __int64 v35; // rsi
  int v36; // eax
  __int64 result; // rax
  int v38; // eax
  char v39; // r10
  int v40; // r11d
  struct _KEVENT *v41; // rcx
  __int64 v42; // rax
  unsigned int v43; // eax
  __int64 v44; // [rsp+48h] [rbp-50h]
  _BYTE v45[4]; // [rsp+54h] [rbp-44h] BYREF
  struct _KEVENT *v46; // [rsp+58h] [rbp-40h]
  char v47; // [rsp+B0h] [rbp+18h]
  int v48; // [rsp+B8h] [rbp+20h] BYREF

  v47 = a3;
  v4 = 0LL;
  v5 = a3;
  v11 = (struct _KEVENT *)FdoExt(a1, a2, a3, a4);
  v46 = v11;
  if ( (UsbhLogMask & 0x10000) != 0 )
  {
    if ( a1 )
    {
      v12 = *(_QWORD *)(a1 + 64);
      if ( v12 )
      {
        v48 = 1849979730;
        v13 = _InterlockedExchangeAdd((volatile signed __int32 *)(v12 + 880), 0xFFFFFFFF);
        v14 = *(_DWORD *)(v12 + 884);
        v15 = *(_QWORD *)(v12 + 888);
        v8 = 32LL * ((v13 - 1) & v14);
        *(_DWORD *)(v8 + v15) = v48;
        *(_QWORD *)(v8 + v15 + 8) = 0LL;
        *(_QWORD *)(v8 + v15 + 16) = a2;
        *(_QWORD *)(v8 + v15 + 24) = 0LL;
      }
    }
  }
  v16 = 1;
  v17 = 1;
  if ( *(_BYTE *)(FdoExt(a1, v8, v9, v10) + 2938) )
  {
    do
    {
      PortData = UsbhGetPortData(a1, v17);
      if ( PortData )
      {
        v25 = *(_QWORD *)(PortData + 392);
        if ( v25 )
        {
          v4 = PdoExt(v25);
          KeWaitForSingleObject((PVOID)(v4 + 2944), Executive, 0, 0, 0LL);
          if ( (*(_DWORD *)(v4 + 1420) & 0x4000000) != 0 )
          {
            v48 = 0;
            v38 = UsbhQueryPortState(a1, v17, &v48, v45);
            Log(a1, 0x10000, 1397965875, v38, (unsigned __int16)v48);
            if ( v40 >= 0 && (v39 & 2) == 0 )
            {
              *(_DWORD *)(v4 + 1420) |= 0x3000000u;
              v41 = (struct _KEVENT *)(v4 + 2920);
              if ( (v39 & 1) != 0 )
                KeSetEvent(v41, 0, 0);
              else
                KeResetEvent(v41);
            }
          }
          KeSetEvent((PRKEVENT)(v4 + 2944), 0, 0);
        }
      }
      ++v17;
    }
    while ( v17 <= *(unsigned __int8 *)(FdoExt(a1, v22, v23, v24) + 2938) );
  }
  if ( v5 == 1 )
    UsbhSyncBusResume(a1, a2);
  UsbhDisarmHubWakeOnConnect(a1, v18, v19, v20);
  if ( *(_BYTE *)(FdoExt(a1, v26, v27, v28) + 2938) )
  {
    v29 = 0;
    do
    {
      v30 = UsbhGetPortData(a1, v16);
      v34 = v30;
      if ( v30 )
      {
        v35 = *(_QWORD *)(v30 + 392);
        if ( !v35
          || (v4 = PdoExt(*(_QWORD *)(v30 + 392)),
              v29 = *(_DWORD *)(PdoExt(v35) + 1128),
              (*(_DWORD *)(v4 + 1420) & 0x1000000) == 0) )
        {
          v36 = UsbhSshResumePort(a1, a2, v34, v33);
          v31 = (unsigned int)v36;
          if ( v36 >= 0 && v35 && (*(_DWORD *)(v4 + 1420) & 0x8004) == 0 && v29 == 4 )
          {
            *(_DWORD *)(v34 + 2408) |= 2u;
            v42 = PdoExt(v35);
            v43 = UsbhSyncSuspendPdoPort(v42 + 944, v35, 0LL);
            *(_DWORD *)(v34 + 2408) &= ~2u;
            v31 = v43;
          }
          if ( (v31 & 0xC0000000) == 0xC0000000 && !(unsigned __int8)Usb_Disconnected((unsigned int)v31, v31, v32) )
          {
            LOBYTE(v44) = 0;
            UsbhException(a1, v16, 128, 0, 0, v31, 0, (__int64)usbfile_sshub_c, 2492, v44);
          }
        }
      }
      ++v16;
    }
    while ( v16 <= *(unsigned __int8 *)(FdoExt(a1, v31, v32, v33) + 2938) );
    v5 = v47;
    v11 = v46;
  }
  result = 1LL;
  if ( v5 == 1 )
  {
    Usbh_SSH_Event(a1, 7LL, a2);
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_RESUME_COMPLETE, 0, 0);
    KeSetEvent(v11 + 141, 0, 0);
    return UsbhEnableTimerObject(a1, (int)v11 + 3200, v11[219].Header.LockNV, 0, a2, 2001228627);
  }
  return result;
}
