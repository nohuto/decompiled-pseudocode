/*
 * XREFs of UsbhSshResumeUpstream @ 0x14002A798
 * Callers:
 *     Usbh_SSH_HubSuspended @ 0x14002B258 (Usbh_SSH_HubSuspended.c)
 *     Usbh_SSH_HubPendingResumeAfterSuspend @ 0x14005ED68 (Usbh_SSH_HubPendingResumeAfterSuspend.c)
 * Callees:
 *     UsbhException @ 0x140006C1C (UsbhException.c)
 *     UsbhIncHubBusy @ 0x140007B90 (UsbhIncHubBusy.c)
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     Usbh_SSH_Event @ 0x140009870 (Usbh_SSH_Event.c)
 *     UsbhDecHubBusy @ 0x14000A860 (UsbhDecHubBusy.c)
 *     UsbhEtwWrite @ 0x14000AB60 (UsbhEtwWrite.c)
 *     UsbhEtwLogHubIrpEvent @ 0x14000C5A0 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhFdoCheckUpstreamConnectionState @ 0x140029630 (UsbhFdoCheckUpstreamConnectionState.c)
 *     UsbhEtwGetHubInfo @ 0x14002ABB0 (UsbhEtwGetHubInfo.c)
 *     __security_check_cookie @ 0x1400614F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140061530 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UsbhSshResumeUpstream(struct _DEVICE_OBJECT *a1, __int64 a2)
{
  _DWORD *v4; // r13
  void *DeviceExtension; // rdx
  __int64 v6; // rcx
  int v7; // r14d
  _QWORD *v8; // r15
  _DWORD *v9; // rax
  _DWORD *v10; // rax
  int v11; // ebx
  __int64 v12; // rdx
  void *v13; // rdx
  __int64 v14; // rcx
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-89h]
  __int64 v17; // [rsp+28h] [rbp-81h]
  int v18; // [rsp+60h] [rbp-49h] BYREF
  unsigned int v19; // [rsp+68h] [rbp-41h] BYREF
  int v20; // [rsp+70h] [rbp-39h] BYREF
  int v21; // [rsp+78h] [rbp-31h] BYREF
  __int16 v22; // [rsp+7Ch] [rbp-2Dh]
  __int16 v23; // [rsp+7Eh] [rbp-2Bh]
  __int16 v24; // [rsp+80h] [rbp-29h]
  __int16 v25; // [rsp+82h] [rbp-27h]
  _OWORD v26[2]; // [rsp+88h] [rbp-21h] BYREF
  int v27; // [rsp+A8h] [rbp-1h]
  __int128 v28; // [rsp+B0h] [rbp+7h]

  v19 = 0;
  v4 = FdoExt((__int64)a1);
  if ( (UsbhLogMask & 0x10000) != 0 )
  {
    if ( a1 )
    {
      DeviceExtension = a1->DeviceExtension;
      if ( DeviceExtension )
      {
        v18 = 1884648274;
        v6 = *((_QWORD *)DeviceExtension + 111)
           + 32LL
           * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)DeviceExtension + 220) & *((_DWORD *)DeviceExtension + 221));
        *(_DWORD *)v6 = 1884648274;
        *(_QWORD *)(v6 + 8) = 0LL;
        *(_QWORD *)(v6 + 16) = a2;
        *(_QWORD *)(v6 + 24) = 0LL;
      }
    }
  }
  v7 = UsbhFdoCheckUpstreamConnectionState((__int64)a1, &v19);
  v8 = (_QWORD *)UsbhIncHubBusy((__int64)a1, a2, (__int64)a1, 1347777128, 0);
  if ( v7 >= 0 )
  {
    v9 = FdoExt((__int64)a1);
    if ( *((_QWORD *)v9 + 591) )
      v7 = (*((__int64 (__fastcall **)(_QWORD))v9 + 591))(*((_QWORD *)v9 + 149));
    else
      v7 = -1073741637;
  }
  v18 = v7;
  v20 = 0;
  memset(v26, 0, sizeof(v26));
  v27 = 0;
  v28 = 0LL;
  if ( dword_14006F690 )
  {
    v10 = FdoExt((__int64)a1);
    v21 = v10[1298];
    v22 = *((_WORD *)v10 + 2598);
    v23 = v10[1300];
    v24 = *((_WORD *)v10 + 2614);
    v25 = *((_WORD *)v10 + 2615);
    UsbhEtwGetHubInfo(v10, v26);
    UsbhEtwWrite(&USBHUB_ETW_EVENT_HUB_RESUME_UPSTREAM, 0LL, &v21, 12LL, v26, 36LL, &v20, 4LL, &v18, 4LL, 0LL);
  }
  KeWaitForSingleObject(v4 + 782, Executive, 0, 0, 0LL);
  v11 = v4[781];
  KeReleaseSemaphore((PRKSEMAPHORE)(v4 + 782), 16, 1, 0);
  if ( v11 == 5 )
  {
    Usbh_SSH_Event(a1, 9u, a2);
    LODWORD(v17) = v7;
    LODWORD(Timeout) = 0;
    UsbhEtwLogHubIrpEvent((__int64)a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_RESUME_COMPLETE, Timeout, v17);
    KeSetEvent((PRKEVENT)v4 + 141, 0, 0);
    UsbhException((__int64)a1, 0, 137, 0LL, 0, v7, 0, usbfile_sshub_c, 2306, 0);
  }
  if ( v8 )
    UsbhDecHubBusy((__int64)a1, v12, v8);
  if ( (UsbhLogMask & 0x10000) != 0 )
  {
    if ( a1 )
    {
      v13 = a1->DeviceExtension;
      if ( v13 )
      {
        v18 = 2018866002;
        v14 = *((_QWORD *)v13 + 111)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v13 + 220) & *((_DWORD *)v13 + 221));
        *(_DWORD *)v14 = v18;
        *(_QWORD *)(v14 + 24) = v7;
        *(_QWORD *)(v14 + 8) = 0LL;
        *(_QWORD *)(v14 + 16) = 0LL;
      }
    }
  }
  return (unsigned int)v7;
}
