/*
 * XREFs of UsbhEnableTimerObject @ 0x14002EA20
 * Callers:
 *     Usbh_SSH_Event @ 0x140009870 (Usbh_SSH_Event.c)
 *     UsbhSshSetPortsBusyState @ 0x14000FDA0 (UsbhSshSetPortsBusyState.c)
 *     UsbhPortResumeComplete @ 0x1400130F0 (UsbhPortResumeComplete.c)
 *     UsbhQueueWorkItemWithRetry @ 0x140016AA0 (UsbhQueueWorkItemWithRetry.c)
 *     UsbhSshSuspendHub @ 0x1400297BC (UsbhSshSuspendHub.c)
 *     UsbhSshResumeDownstream @ 0x14002A3C4 (UsbhSshResumeDownstream.c)
 *     Usbh_SSH_HubActive @ 0x14002B6D0 (Usbh_SSH_HubActive.c)
 *     UsbhSshExitSx @ 0x14002E7F0 (UsbhSshExitSx.c)
 *     UsbhPdoPnp_DeviceEnumerated @ 0x14002E8D0 (UsbhPdoPnp_DeviceEnumerated.c)
 *     Usbh_PIND_SetBlink_Action @ 0x14003FB70 (Usbh_PIND_SetBlink_Action.c)
 *     Usbh_PIND_Timeout_Action @ 0x14003FC60 (Usbh_PIND_Timeout_Action.c)
 *     UsbhDriverNotFoundWorker @ 0x14004FB80 (UsbhDriverNotFoundWorker.c)
 *     UsbhHubStart @ 0x140050830 (UsbhHubStart.c)
 *     UsbhHubSSH_PnpStart @ 0x14005E490 (UsbhHubSSH_PnpStart.c)
 *     UsbhSshEnabled @ 0x14005EA84 (UsbhSshEnabled.c)
 * Callees:
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     UsbhEtwWrite @ 0x14000AB60 (UsbhEtwWrite.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     UsbhReferenceListRemove @ 0x14002B02C (UsbhReferenceListRemove.c)
 *     UsbhReferenceListAdd @ 0x14002EFD0 (UsbhReferenceListAdd.c)
 *     __security_check_cookie @ 0x1400614F0 (__security_check_cookie.c)
 */

void __fastcall UsbhEnableTimerObject(__int64 a1, __int64 a2, int a3, unsigned int a4, __int64 a5, unsigned int a6)
{
  __int64 v6; // r12
  __int64 v8; // r13
  KSPIN_LOCK *v10; // rax
  KSPIN_LOCK *v11; // rsi
  KSPIN_LOCK *v12; // r14
  KIRQL v13; // r15
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  _DWORD *v20; // rax
  __int128 *v21; // rdx
  _DWORD *v22; // r8
  __int64 v23; // r9
  unsigned __int16 *v24; // rcx
  int v25; // eax
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  KSPIN_LOCK **v29; // rcx
  KSPIN_LOCK *v30; // rdi
  __int64 v31; // r8
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  ULONG TimeIncrement; // eax
  int v37; // [rsp+68h] [rbp-39h] BYREF
  int v38; // [rsp+70h] [rbp-31h] BYREF
  __int16 v39; // [rsp+74h] [rbp-2Dh]
  __int16 v40; // [rsp+76h] [rbp-2Bh]
  __int16 v41; // [rsp+78h] [rbp-29h]
  __int16 v42; // [rsp+7Ah] [rbp-27h]
  _WORD v43[2]; // [rsp+80h] [rbp-21h] BYREF
  int v44; // [rsp+84h] [rbp-1Dh]
  int v45; // [rsp+88h] [rbp-19h]
  __int128 v46; // [rsp+8Ch] [rbp-15h] BYREF
  __int64 v47; // [rsp+9Ch] [rbp-5h]

  v6 = a4;
  v8 = a3;
  v10 = (KSPIN_LOCK *)FdoExt(a1);
  v11 = v10;
  if ( !a2 )
    return;
  v12 = v10 + 466;
  v13 = KeAcquireSpinLockRaiseToDpc(v10 + 466);
  if ( (UsbhLogMask & 0x2000) != 0 )
  {
    if ( a1 )
    {
      v14 = *(_QWORD *)(a1 + 64);
      if ( v14 )
      {
        v15 = *(_QWORD *)(v14 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v14 + 880)) & *(_DWORD *)(v14 + 884));
        *(_DWORD *)v15 = 827616869;
        *(_QWORD *)(v15 + 8) = 0LL;
        *(_QWORD *)(v15 + 16) = a2;
        *(_QWORD *)(v15 + 24) = v8;
      }
    }
    if ( (UsbhLogMask & 0x2000) != 0 )
    {
      if ( a1 )
      {
        v16 = *(_QWORD *)(a1 + 64);
        if ( v16 )
        {
          v17 = *(_QWORD *)(v16 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v16 + 880)) & *(_DWORD *)(v16 + 884));
          *(_DWORD *)v17 = 829451877;
          *(_QWORD *)(v17 + 24) = a5;
          *(_QWORD *)(v17 + 8) = 0LL;
          *(_QWORD *)(v17 + 16) = v6;
        }
      }
      if ( (UsbhLogMask & 0x2000) != 0 )
      {
        if ( a1 )
        {
          v18 = *(_QWORD *)(a1 + 64);
          if ( v18 )
          {
            v19 = *(_QWORD *)(v18 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v18 + 880)) & *(_DWORD *)(v18 + 884));
            *(_DWORD *)v19 = 846229093;
            *(_QWORD *)(v19 + 16) = a6;
            *(_QWORD *)(v19 + 8) = 0LL;
            *(_QWORD *)(v19 + 24) = 0LL;
          }
        }
      }
    }
  }
  v46 = 0LL;
  v37 = v6;
  v47 = 0LL;
  if ( dword_14006F690 )
  {
    v20 = FdoExt(a1);
    v21 = &v46;
    v22 = v20;
    v38 = v20[1298];
    v23 = 5LL;
    v39 = *((_WORD *)v20 + 2598);
    v40 = v20[1300];
    v41 = *((_WORD *)v20 + 2614);
    v42 = *((_WORD *)v20 + 2615);
    v43[0] = *((_WORD *)v20 + 1274);
    v43[1] = *((_WORD *)v20 + 1275);
    v24 = (unsigned __int16 *)v20 + 2605;
    v44 = 0;
    v45 = *((unsigned __int16 *)v20 + 2604);
    v44 = *((_WORD *)v20 + 2604) != 0;
    do
    {
      v25 = *v24;
      *(_DWORD *)v21 = v25;
      if ( v25 )
        ++v44;
      v21 = (__int128 *)((char *)v21 + 4);
      ++v24;
      --v23;
    }
    while ( v23 );
    HIDWORD(v47) = v22[634];
    UsbhEtwWrite(&USBHUB_ETW_EVENT_HUB_ENABLE_TIMER, 0LL, &v38, 12LL, v43, 36LL, &v37, 4LL, a2 + 72, 4, 0LL);
  }
  *(_DWORD *)(a2 + 28) = a6;
  *(_QWORD *)(a2 + 40) = a5;
  v26 = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(a2 + 32) = 0;
  *(_DWORD *)(a2 + 24) = v6;
  *(_DWORD *)(a2 + 16) = v8;
  *(_DWORD *)(a2 + 12) = v8;
  if ( v26 )
  {
    if ( v26 == 2 )
    {
      Log(a1, 0x2000, 1701729331, a2, (__int64)(v11 + 468));
      *(_DWORD *)(a2 + 4) = 1;
    }
    goto LABEL_38;
  }
  if ( (UsbhLogMask & 0x2000) != 0 )
  {
    if ( a1 )
    {
      v27 = *(_QWORD *)(a1 + 64);
      if ( v27 )
      {
        v28 = *(_QWORD *)(v27 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v27 + 880)) & *(_DWORD *)(v27 + 884));
        *(_DWORD *)v28 = 844394085;
        *(_QWORD *)(v28 + 24) = v11 + 468;
        *(_QWORD *)(v28 + 8) = 0LL;
        *(_QWORD *)(v28 + 16) = a2;
      }
    }
  }
  *(_DWORD *)(a2 + 4) = 1;
  v29 = (KSPIN_LOCK **)v11[469];
  v30 = (KSPIN_LOCK *)(a2 + 56);
  if ( *v29 != v11 + 468 )
    __fastfail(3u);
  *v30 = (KSPIN_LOCK)(v11 + 468);
  v30[1] = (KSPIN_LOCK)v29;
  *v29 = v30;
  v11[469] = (KSPIN_LOCK)v30;
  v31 = *((int *)v11 + 934);
  if ( (UsbhLogMask & 0x2000) != 0 )
  {
    if ( a1 )
    {
      v32 = *(_QWORD *)(a1 + 64);
      if ( v32 )
      {
        v33 = *(_QWORD *)(v32 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v32 + 880)) & *(_DWORD *)(v32 + 884));
        *(_DWORD *)v33 = 1414819172;
        *(_QWORD *)(v33 + 8) = 0LL;
        *(_QWORD *)(v33 + 16) = a1;
        *(_QWORD *)(v33 + 24) = v31;
      }
    }
  }
  if ( *((_DWORD *)v11 + 934) != 2 )
  {
LABEL_38:
    KeReleaseSpinLock(v12, v13);
    return;
  }
  if ( (UsbhLogMask & 0x2000) != 0 )
  {
    if ( a1 )
    {
      v34 = *(_QWORD *)(a1 + 64);
      if ( v34 )
      {
        v35 = *(_QWORD *)(v34 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v34 + 880)) & *(_DWORD *)(v34 + 884));
        *(_DWORD *)v35 = 809382500;
        *(_QWORD *)(v35 + 8) = 0LL;
        *(_QWORD *)(v35 + 16) = a1;
        *(_QWORD *)(v35 + 24) = 2LL;
      }
    }
  }
  *((_DWORD *)v11 + 934) = 1;
  KeReleaseSpinLock(v12, v13);
  if ( (UsbhReferenceListAdd(a1, v11 + 481, 1380799588LL) & 0xC0000000) != 0xC0000000 )
  {
    TimeIncrement = KeQueryTimeIncrement();
    if ( KeSetTimer((PKTIMER)(v11 + 481), (LARGE_INTEGER)(int)(-149999 - TimeIncrement), (PKDPC)(v11 + 473)) )
      UsbhReferenceListRemove(a1, (__int64)(v11 + 481));
  }
}
