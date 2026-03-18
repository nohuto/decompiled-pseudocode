/*
 * XREFs of UsbhSshSuspendHub @ 0x140006848
 * Callers:
 *     Usbh_SSH_HubActive @ 0x14001B5C0 (Usbh_SSH_HubActive.c)
 * Callees:
 *     UsbhFdoCheckUpstreamConnectionState @ 0x140006600 (UsbhFdoCheckUpstreamConnectionState.c)
 *     UsbhSyncBusPause @ 0x140006D64 (UsbhSyncBusPause.c)
 *     UsbhArmHubWakeOnConnect @ 0x140006E74 (UsbhArmHubWakeOnConnect.c)
 *     UsbhDisableTimerObject @ 0x140007330 (UsbhDisableTimerObject.c)
 *     UsbhDisarmHubWakeOnConnect @ 0x140007630 (UsbhDisarmHubWakeOnConnect.c)
 *     UsbhSyncBusResume @ 0x140009A74 (UsbhSyncBusResume.c)
 *     Log @ 0x140009B80 (Log.c)
 *     UsbhEtwLogHubIrpEvent @ 0x14000C7E0 (UsbhEtwLogHubIrpEvent.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     Usbh_SSH_Event @ 0x14001B400 (Usbh_SSH_Event.c)
 *     UsbhException @ 0x14001B7DC (UsbhException.c)
 *     UsbhEtwWrite @ 0x14001DA20 (UsbhEtwWrite.c)
 *     UsbhEnableTimerObject @ 0x14002BB10 (UsbhEnableTimerObject.c)
 *     __security_check_cookie @ 0x140061BD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140061C10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UsbhSshSuspendHub(struct _DEVICE_OBJECT *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r15
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // eax
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  volatile signed __int32 *DeviceExtension; // rcx
  signed __int32 v14; // eax
  unsigned int v15; // edx
  __int64 v16; // rcx
  __int64 v17; // r12
  __int64 v18; // rdx
  __int128 *v19; // r8
  __int64 v20; // r9
  unsigned __int16 *v21; // rcx
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  int v30; // esi
  __int64 v31; // r8
  __int128 *v32; // rdx
  unsigned __int16 *v33; // rcx
  int v34; // eax
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rax
  int v40; // r9d
  unsigned int v41; // [rsp+70h] [rbp-39h] BYREF
  int v42; // [rsp+78h] [rbp-31h]
  __int16 v43; // [rsp+7Ch] [rbp-2Dh]
  __int16 v44; // [rsp+7Eh] [rbp-2Bh]
  __int16 v45; // [rsp+80h] [rbp-29h]
  __int16 v46; // [rsp+82h] [rbp-27h]
  __int16 v47; // [rsp+88h] [rbp-21h]
  __int16 v48; // [rsp+8Ah] [rbp-1Fh]
  int v49; // [rsp+8Ch] [rbp-1Dh]
  int v50; // [rsp+90h] [rbp-19h]
  __int128 v51; // [rsp+94h] [rbp-15h] BYREF
  __int64 v52; // [rsp+A4h] [rbp-5h]
  __int128 v53; // [rsp+B0h] [rbp+7h]

  v41 = 0;
  v6 = FdoExt(a1, a2, a3, a4);
  v9 = UsbhFdoCheckUpstreamConnectionState((__int64)a1, &v41, v7, v8);
  v12 = 3221225472LL;
  if ( (v9 & 0xC0000000) == 0xC0000000 )
  {
    Log((_DWORD)a1, 0x10000, 1400198008, 0, v9);
    *(_BYTE *)(v6 + 3416) = 1;
    Usbh_SSH_Event(a1, (unsigned int)(v40 + 3), a2);
    KeSetEvent((PRKEVENT)(v6 + 3384), 0, 0);
    return 3221225473LL;
  }
  else
  {
    if ( (UsbhLogMask & 0x10000) != 0 )
    {
      if ( a1 )
      {
        DeviceExtension = (volatile signed __int32 *)a1->DeviceExtension;
        if ( DeviceExtension )
        {
          v14 = _InterlockedExchangeAdd(DeviceExtension + 220, 0xFFFFFFFF);
          v15 = *((_DWORD *)DeviceExtension + 221);
          v16 = *((_QWORD *)DeviceExtension + 111);
          v12 = 32LL * ((v14 - 1) & v15);
          *(_DWORD *)(v12 + v16) = 1215526227;
          *(_QWORD *)(v12 + v16 + 8) = 0LL;
          *(_QWORD *)(v12 + v16 + 16) = a2;
          *(_QWORD *)(v12 + v16 + 24) = 0LL;
        }
      }
    }
    v51 = 0LL;
    v52 = 0LL;
    v17 = 5LL;
    v53 = 0LL;
    if ( dword_1400706F0 )
    {
      v18 = FdoExt(a1, v12, v10, v11);
      v19 = &v51;
      v20 = 5LL;
      v42 = *(_DWORD *)(v18 + 5192);
      v43 = *(_WORD *)(v18 + 5196);
      v44 = *(_DWORD *)(v18 + 5200);
      v45 = *(_WORD *)(v18 + 5228);
      v46 = *(_WORD *)(v18 + 5230);
      v47 = *(_WORD *)(v18 + 2548);
      v48 = *(_WORD *)(v18 + 2550);
      v21 = (unsigned __int16 *)(v18 + 5210);
      v49 = 0;
      v50 = *(unsigned __int16 *)(v18 + 5208);
      v49 = *(_WORD *)(v18 + 5208) != 0;
      do
      {
        v22 = *v21;
        *(_DWORD *)v19 = v22;
        if ( v22 )
          ++v49;
        v19 = (__int128 *)((char *)v19 + 4);
        ++v21;
        --v20;
      }
      while ( v20 );
      HIDWORD(v52) = *(_DWORD *)(v18 + 2536);
      UsbhEtwWrite(&USBHUB_ETW_EVENT_HUB_SUSPEND_START, 0LL);
    }
    UsbhArmHubWakeOnConnect(a1);
    if ( (unsigned int)UsbhSyncBusPause(a1, a2, 2LL) == 4 )
    {
      v26 = FdoExt(a1, v23, v24, v25);
      v29 = *(_QWORD *)(v26 + 4720);
      if ( v29 )
        v30 = (*(__int64 (__fastcall **)(_QWORD))(v26 + 4720))(*(_QWORD *)(v26 + 1192));
      else
        v30 = -1073741637;
      v51 = 0LL;
      v53 = 0LL;
      v52 = 0LL;
      if ( dword_1400706F0 )
      {
        v31 = FdoExt(a1, v29, v27, v28);
        v32 = &v51;
        v42 = *(_DWORD *)(v31 + 5192);
        v43 = *(_WORD *)(v31 + 5196);
        v44 = *(_DWORD *)(v31 + 5200);
        v45 = *(_WORD *)(v31 + 5228);
        v46 = *(_WORD *)(v31 + 5230);
        v47 = *(_WORD *)(v31 + 2548);
        v48 = *(_WORD *)(v31 + 2550);
        v33 = (unsigned __int16 *)(v31 + 5210);
        v49 = 0;
        v50 = *(unsigned __int16 *)(v31 + 5208);
        v49 = *(_WORD *)(v31 + 5208) != 0;
        do
        {
          v34 = *v33;
          *(_DWORD *)v32 = v34;
          if ( v34 )
            ++v49;
          v32 = (__int128 *)((char *)v32 + 4);
          ++v33;
          --v17;
        }
        while ( v17 );
        HIDWORD(v52) = *(_DWORD *)(v31 + 2536);
        UsbhEtwWrite(&USBHUB_ETW_EVENT_HUB_SUSPEND_COMPLETE, 0LL);
      }
      if ( v30 < 0 )
      {
        UsbhSyncBusResume(a1, a2);
        UsbhDisarmHubWakeOnConnect(a1);
        Usbh_SSH_Event(a1, 3LL, a2);
        KeSetEvent((PRKEVENT)(v6 + 3384), 0, 0);
        UsbhException((_DWORD)a1, 0, 136, 0, 0, v30, 0, (__int64)usbfile_sshub_c, 2280, 0);
        v39 = FdoExt(a1, v36, v37, v38);
        UsbhEnableTimerObject((_DWORD)a1, v6 + 3200, *(_DWORD *)(v6 + 5256), 0, v39 + 1912, 2001228627);
      }
      else
      {
        UsbhDisableTimerObject(a1, v6 + 3200);
        Usbh_SSH_Event(a1, 2LL, a2);
      }
    }
    else
    {
      v30 = -1073741823;
      UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_SUSPEND_BUS_PAUSE_FAILED, 0, -1073741823);
      UsbhDisarmHubWakeOnConnect(a1);
      UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_SUSPEND_COMPLETE, 0, -1073741823);
      *(_BYTE *)(v6 + 3416) = 1;
      Usbh_SSH_Event(a1, 3LL, a2);
      KeSetEvent((PRKEVENT)(v6 + 3384), 0, 0);
    }
    return (unsigned int)v30;
  }
}
