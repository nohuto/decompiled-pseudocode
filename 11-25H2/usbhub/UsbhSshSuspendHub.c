/*
 * XREFs of UsbhSshSuspendHub @ 0x1400297BC
 * Callers:
 *     Usbh_SSH_Event @ 0x140009870 (Usbh_SSH_Event.c)
 *     Usbh_SSH_HubActive @ 0x14002B6D0 (Usbh_SSH_HubActive.c)
 * Callees:
 *     UsbhException @ 0x140006C1C (UsbhException.c)
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     Usbh_SSH_Event @ 0x140009870 (Usbh_SSH_Event.c)
 *     UsbhEtwWrite @ 0x14000AB60 (UsbhEtwWrite.c)
 *     UsbhEtwLogHubIrpEvent @ 0x14000C5A0 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhDisableTimerObject @ 0x14000C938 (UsbhDisableTimerObject.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     UsbhFdoCheckUpstreamConnectionState @ 0x140029630 (UsbhFdoCheckUpstreamConnectionState.c)
 *     UsbhSyncBusPause @ 0x140029CD4 (UsbhSyncBusPause.c)
 *     UsbhArmHubWakeOnConnect @ 0x140029DD4 (UsbhArmHubWakeOnConnect.c)
 *     UsbhDisarmHubWakeOnConnect @ 0x14002A284 (UsbhDisarmHubWakeOnConnect.c)
 *     UsbhSyncBusResume @ 0x14002AAB4 (UsbhSyncBusResume.c)
 *     UsbhEnableTimerObject @ 0x14002EA20 (UsbhEnableTimerObject.c)
 *     __security_check_cookie @ 0x1400614F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140061530 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UsbhSshSuspendHub(PDEVICE_OBJECT DeviceObject, __int64 a2)
{
  struct _KEVENT *v4; // r15
  int v5; // eax
  void *DeviceExtension; // rdx
  __int64 v7; // rcx
  __int64 v8; // r12
  _DWORD *v9; // rdx
  __int128 *v10; // r8
  __int64 v11; // r9
  unsigned __int16 *v12; // rcx
  int v13; // eax
  _DWORD *v14; // rax
  int v15; // esi
  _DWORD *v16; // r8
  __int128 *v17; // rdx
  unsigned __int16 *v18; // rcx
  int v19; // eax
  _DWORD *v21; // rax
  int v22; // r9d
  __int64 v23; // [rsp+20h] [rbp-99h]
  __int64 v24; // [rsp+20h] [rbp-99h]
  __int64 v25; // [rsp+28h] [rbp-91h]
  __int64 v26; // [rsp+28h] [rbp-91h]
  int v27; // [rsp+60h] [rbp-59h] BYREF
  int v28; // [rsp+68h] [rbp-51h] BYREF
  unsigned int v29; // [rsp+70h] [rbp-49h] BYREF
  __int16 v30; // [rsp+78h] [rbp-41h] BYREF
  __int16 v31; // [rsp+7Ah] [rbp-3Fh]
  int v32; // [rsp+7Ch] [rbp-3Dh]
  int v33; // [rsp+80h] [rbp-39h]
  __int128 v34; // [rsp+84h] [rbp-35h] BYREF
  __int64 v35; // [rsp+94h] [rbp-25h]
  int v36; // [rsp+A0h] [rbp-19h] BYREF
  __int16 v37; // [rsp+A4h] [rbp-15h]
  __int16 v38; // [rsp+A6h] [rbp-13h]
  __int16 v39; // [rsp+A8h] [rbp-11h]
  __int16 v40; // [rsp+AAh] [rbp-Fh]
  int v41; // [rsp+B0h] [rbp-9h] BYREF
  __int16 v42; // [rsp+B4h] [rbp-5h]
  __int16 v43; // [rsp+B6h] [rbp-3h]
  __int16 v44; // [rsp+B8h] [rbp-1h]
  __int16 v45; // [rsp+BAh] [rbp+1h]
  __int128 v46; // [rsp+C0h] [rbp+7h]

  v29 = 0;
  v4 = (struct _KEVENT *)FdoExt((__int64)DeviceObject);
  v5 = UsbhFdoCheckUpstreamConnectionState((__int64)DeviceObject, &v29);
  if ( (v5 & 0xC0000000) == 0xC0000000 )
  {
    Log((__int64)DeviceObject, 0x10000, 1400198008, 0LL, v5);
    LOBYTE(v4[142].Header.WaitListHead.Flink) = 1;
    Usbh_SSH_Event(DeviceObject, v22 + 3, a2);
    KeSetEvent(v4 + 141, 0, 0);
    return 3221225473LL;
  }
  else
  {
    if ( (UsbhLogMask & 0x10000) != 0 )
    {
      if ( DeviceObject )
      {
        DeviceExtension = DeviceObject->DeviceExtension;
        if ( DeviceExtension )
        {
          v27 = 1215526227;
          v7 = *((_QWORD *)DeviceExtension + 111)
             + 32LL
             * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)DeviceExtension + 220) & *((_DWORD *)DeviceExtension + 221));
          *(_DWORD *)v7 = 1215526227;
          *(_QWORD *)(v7 + 8) = 0LL;
          *(_QWORD *)(v7 + 16) = a2;
          *(_QWORD *)(v7 + 24) = 0LL;
        }
      }
    }
    v27 = 0;
    v28 = 0;
    v34 = 0LL;
    v35 = 0LL;
    v8 = 5LL;
    v46 = 0LL;
    if ( dword_14006F690 )
    {
      v9 = FdoExt((__int64)DeviceObject);
      v10 = &v34;
      v11 = 5LL;
      v36 = v9[1298];
      v37 = *((_WORD *)v9 + 2598);
      v38 = v9[1300];
      v39 = *((_WORD *)v9 + 2614);
      v40 = *((_WORD *)v9 + 2615);
      v30 = *((_WORD *)v9 + 1274);
      v31 = *((_WORD *)v9 + 1275);
      v12 = (unsigned __int16 *)v9 + 2605;
      v32 = 0;
      v33 = *((unsigned __int16 *)v9 + 2604);
      v32 = *((_WORD *)v9 + 2604) != 0;
      do
      {
        v13 = *v12;
        *(_DWORD *)v10 = v13;
        if ( v13 )
          ++v32;
        v10 = (__int128 *)((char *)v10 + 4);
        ++v12;
        --v11;
      }
      while ( v11 );
      HIDWORD(v35) = v9[634];
      UsbhEtwWrite(&USBHUB_ETW_EVENT_HUB_SUSPEND_START, 0LL, &v36, 12LL, &v30, 36LL, &v28, 4LL, &v27, 4LL, 0LL);
    }
    UsbhArmHubWakeOnConnect(DeviceObject);
    if ( (unsigned int)UsbhSyncBusPause(DeviceObject) == 4 )
    {
      v14 = FdoExt((__int64)DeviceObject);
      if ( *((_QWORD *)v14 + 590) )
        v15 = (*((__int64 (__fastcall **)(_QWORD))v14 + 590))(*((_QWORD *)v14 + 149));
      else
        v15 = -1073741637;
      v34 = 0LL;
      v28 = v15;
      v46 = 0LL;
      v27 = 0;
      v35 = 0LL;
      if ( dword_14006F690 )
      {
        v16 = FdoExt((__int64)DeviceObject);
        v17 = &v34;
        v41 = v16[1298];
        v42 = *((_WORD *)v16 + 2598);
        v43 = v16[1300];
        v44 = *((_WORD *)v16 + 2614);
        v45 = *((_WORD *)v16 + 2615);
        v30 = *((_WORD *)v16 + 1274);
        v31 = *((_WORD *)v16 + 1275);
        v18 = (unsigned __int16 *)v16 + 2605;
        v32 = 0;
        v33 = *((unsigned __int16 *)v16 + 2604);
        v32 = *((_WORD *)v16 + 2604) != 0;
        do
        {
          v19 = *v18;
          *(_DWORD *)v17 = v19;
          if ( v19 )
            ++v32;
          v17 = (__int128 *)((char *)v17 + 4);
          ++v18;
          --v8;
        }
        while ( v8 );
        HIDWORD(v35) = v16[634];
        UsbhEtwWrite(&USBHUB_ETW_EVENT_HUB_SUSPEND_COMPLETE, 0LL, &v41, 12LL, &v30, 36LL, &v27, 4LL, &v28, 4LL, 0LL);
      }
      if ( v15 < 0 )
      {
        UsbhSyncBusResume(DeviceObject);
        UsbhDisarmHubWakeOnConnect(DeviceObject);
        Usbh_SSH_Event(DeviceObject, 3u, a2);
        KeSetEvent(v4 + 141, 0, 0);
        UsbhException((__int64)DeviceObject, 0, 136, 0LL, 0, v15, 0, usbfile_sshub_c, 2224, 0);
        v21 = FdoExt((__int64)DeviceObject);
        UsbhEnableTimerObject(
          (_DWORD)DeviceObject,
          (_DWORD)v4 + 3200,
          v4[219].Header.LockNV,
          0,
          (__int64)(v21 + 478),
          2001228627);
      }
      else
      {
        UsbhDisableTimerObject((__int64)DeviceObject, (__int64)&v4[133].Header.WaitListHead);
        Usbh_SSH_Event(DeviceObject, 2u, a2);
      }
    }
    else
    {
      v15 = -1073741823;
      LODWORD(v25) = -1073741823;
      LODWORD(v23) = 0;
      UsbhEtwLogHubIrpEvent((__int64)DeviceObject, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_SUSPEND_BUS_PAUSE_FAILED, v23, v25);
      UsbhDisarmHubWakeOnConnect(DeviceObject);
      LODWORD(v26) = -1073741823;
      LODWORD(v24) = 0;
      UsbhEtwLogHubIrpEvent((__int64)DeviceObject, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_SUSPEND_COMPLETE, v24, v26);
      LOBYTE(v4[142].Header.WaitListHead.Flink) = 1;
      Usbh_SSH_Event(DeviceObject, 3u, a2);
      KeSetEvent(v4 + 141, 0, 0);
    }
    return (unsigned int)v15;
  }
}
