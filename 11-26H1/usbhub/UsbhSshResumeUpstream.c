/*
 * XREFs of UsbhSshResumeUpstream @ 0x140029894
 * Callers:
 *     Usbh_SSH_HubSuspended @ 0x140028CA4 (Usbh_SSH_HubSuspended.c)
 *     Usbh_SSH_HubPendingResumeAfterSuspend @ 0x14005F3B0 (Usbh_SSH_HubPendingResumeAfterSuspend.c)
 * Callees:
 *     UsbhFdoCheckUpstreamConnectionState @ 0x140006600 (UsbhFdoCheckUpstreamConnectionState.c)
 *     UsbhEtwLogHubIrpEvent @ 0x14000C7E0 (UsbhEtwLogHubIrpEvent.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     Usbh_SSH_Event @ 0x14001B400 (Usbh_SSH_Event.c)
 *     UsbhException @ 0x14001B7DC (UsbhException.c)
 *     UsbhDecHubBusy @ 0x14001C060 (UsbhDecHubBusy.c)
 *     UsbhIncHubBusy @ 0x14001C1F0 (UsbhIncHubBusy.c)
 *     UsbhEtwWrite @ 0x14001DA20 (UsbhEtwWrite.c)
 *     UsbhEtwGetHubInfo @ 0x140029BC0 (UsbhEtwGetHubInfo.c)
 *     __security_check_cookie @ 0x140061BD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140061C10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UsbhSshResumeUpstream(__int64 a1, __int64 a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  _DWORD *v6; // r13
  __int64 v7; // rcx
  signed __int32 v8; // eax
  unsigned int v9; // edx
  __int64 v10; // rcx
  __int64 v11; // rdx
  int v12; // r14d
  _QWORD *v13; // r15
  _DWORD *v14; // rax
  _DWORD *v15; // rax
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // ebx
  __int64 v19; // rdx
  __int64 v20; // rcx
  signed __int32 v21; // eax
  unsigned int v22; // edx
  __int64 v23; // rcx
  __int64 v24; // rdx
  int v26; // [rsp+60h] [rbp-49h] BYREF
  unsigned int v27; // [rsp+68h] [rbp-41h] BYREF
  int v28; // [rsp+70h] [rbp-39h] BYREF
  int v29; // [rsp+78h] [rbp-31h] BYREF
  __int16 v30; // [rsp+7Ch] [rbp-2Dh]
  __int16 v31; // [rsp+7Eh] [rbp-2Bh]
  __int16 v32; // [rsp+80h] [rbp-29h]
  __int16 v33; // [rsp+82h] [rbp-27h]
  _OWORD v34[2]; // [rsp+88h] [rbp-21h] BYREF
  int v35; // [rsp+A8h] [rbp-1h]
  __int128 v36; // [rsp+B0h] [rbp+7h]

  v27 = 0;
  v6 = FdoExt(a1);
  if ( (UsbhLogMask & 0x10000) != 0 )
  {
    if ( a1 )
    {
      v7 = *(_QWORD *)(a1 + 64);
      if ( v7 )
      {
        v26 = 1884648274;
        v8 = _InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 880), 0xFFFFFFFF);
        v9 = *(_DWORD *)(v7 + 884);
        v10 = *(_QWORD *)(v7 + 888);
        v11 = 32LL * ((v8 - 1) & v9);
        *(_DWORD *)(v11 + v10) = 1884648274;
        *(_QWORD *)(v11 + v10 + 8) = 0LL;
        *(_QWORD *)(v11 + v10 + 16) = a2;
        *(_QWORD *)(v11 + v10 + 24) = 0LL;
      }
    }
  }
  v12 = UsbhFdoCheckUpstreamConnectionState(a1, &v27, v4, v5);
  v13 = (_QWORD *)UsbhIncHubBusy(a1, a2, a1, 1347777128, 0);
  if ( v12 >= 0 )
  {
    v14 = FdoExt(a1);
    if ( *((_QWORD *)v14 + 591) )
      v12 = (*((__int64 (__fastcall **)(_QWORD))v14 + 591))(*((_QWORD *)v14 + 149));
    else
      v12 = -1073741637;
  }
  v26 = v12;
  v28 = 0;
  memset(v34, 0, sizeof(v34));
  v35 = 0;
  v36 = 0LL;
  if ( dword_1400706F0 )
  {
    v15 = FdoExt(a1);
    v29 = v15[1298];
    v30 = *((_WORD *)v15 + 2598);
    v31 = v15[1300];
    v32 = *((_WORD *)v15 + 2614);
    v33 = *((_WORD *)v15 + 2615);
    UsbhEtwGetHubInfo(v15, v34, v16, v17);
    UsbhEtwWrite(&USBHUB_ETW_EVENT_HUB_RESUME_UPSTREAM, 0LL, &v29, 12LL, v34, 36LL, &v28, 4LL, &v26, 4LL, 0LL);
  }
  KeWaitForSingleObject(v6 + 782, Executive, 0, 0, 0LL);
  v18 = v6[781];
  KeReleaseSemaphore((PRKSEMAPHORE)(v6 + 782), 16, 1, 0);
  if ( v18 == 5 )
  {
    Usbh_SSH_Event(a1, 9u, a2);
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_RESUME_COMPLETE);
    KeSetEvent((PRKEVENT)v6 + 141, 0, 0);
    UsbhException(a1, 0, 137, 0LL, 0, v12, 0, usbfile_sshub_c, 2362, 0);
  }
  if ( v13 )
    UsbhDecHubBusy(a1, v19, v13);
  if ( (UsbhLogMask & 0x10000) != 0 )
  {
    if ( a1 )
    {
      v20 = *(_QWORD *)(a1 + 64);
      if ( v20 )
      {
        v26 = 2018866002;
        v21 = _InterlockedExchangeAdd((volatile signed __int32 *)(v20 + 880), 0xFFFFFFFF);
        v22 = *(_DWORD *)(v20 + 884);
        v23 = *(_QWORD *)(v20 + 888);
        v24 = 32LL * ((v21 - 1) & v22);
        *(_DWORD *)(v24 + v23) = v26;
        *(_QWORD *)(v24 + v23 + 24) = v12;
        *(_QWORD *)(v24 + v23 + 8) = 0LL;
        *(_QWORD *)(v24 + v23 + 16) = 0LL;
      }
    }
  }
  return (unsigned int)v12;
}
