/*
 * XREFs of UsbhEnableTimerObject @ 0x14002BB10
 * Callers:
 *     UsbhSshSuspendHub @ 0x140006848 (UsbhSshSuspendHub.c)
 *     UsbhSshSetPortsBusyState @ 0x140008460 (UsbhSshSetPortsBusyState.c)
 *     UsbhSshResumeDownstream @ 0x140008C2C (UsbhSshResumeDownstream.c)
 *     UsbhPortResumeComplete @ 0x14000B520 (UsbhPortResumeComplete.c)
 *     UsbhQueueWorkItemWithRetry @ 0x14000FB5C (UsbhQueueWorkItemWithRetry.c)
 *     Usbh_SSH_HubActive @ 0x14001B5C0 (Usbh_SSH_HubActive.c)
 *     UsbhSshExitSx @ 0x14002B8E0 (UsbhSshExitSx.c)
 *     UsbhPdoPnp_DeviceEnumerated @ 0x14002B9C0 (UsbhPdoPnp_DeviceEnumerated.c)
 *     Usbh_PIND_SetBlink_Action @ 0x14003F660 (Usbh_PIND_SetBlink_Action.c)
 *     Usbh_PIND_Timeout_Action @ 0x14003F750 (Usbh_PIND_Timeout_Action.c)
 *     UsbhDriverNotFoundWorker @ 0x140050050 (UsbhDriverNotFoundWorker.c)
 *     UsbhHubStart @ 0x140050D10 (UsbhHubStart.c)
 *     UsbhHubSSH_PnpStart @ 0x14005EAD0 (UsbhHubSSH_PnpStart.c)
 *     UsbhSshEnabled @ 0x14005F0C8 (UsbhSshEnabled.c)
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhEtwWrite @ 0x14001DA20 (UsbhEtwWrite.c)
 *     UsbhReferenceListRemove @ 0x140029668 (UsbhReferenceListRemove.c)
 *     UsbhReferenceListAdd @ 0x14002C0D4 (UsbhReferenceListAdd.c)
 *     __security_check_cookie @ 0x140061BD0 (__security_check_cookie.c)
 */

void __fastcall UsbhEnableTimerObject(__int64 a1, __int64 a2, int a3, unsigned int a4, __int64 a5, unsigned int a6)
{
  __int64 v6; // r15
  __int64 v8; // r12
  KSPIN_LOCK *v10; // rax
  KSPIN_LOCK *v11; // rsi
  KSPIN_LOCK *v12; // r14
  KIRQL v13; // r10
  __int64 v14; // rcx
  signed __int32 v15; // eax
  unsigned int v16; // edx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  signed __int32 v20; // eax
  unsigned int v21; // edx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  signed __int32 v25; // eax
  unsigned int v26; // edx
  __int64 v27; // rcx
  __int64 v28; // rdx
  _DWORD *v29; // rax
  __int128 *v30; // rdx
  _DWORD *v31; // r8
  __int64 v32; // r9
  unsigned __int16 *v33; // rcx
  int v34; // eax
  int v35; // eax
  __int64 v36; // rcx
  signed __int32 v37; // eax
  unsigned int v38; // edx
  __int64 v39; // rcx
  __int64 v40; // rdx
  KSPIN_LOCK **v41; // rcx
  KSPIN_LOCK *v42; // rdi
  __int64 v43; // r8
  __int64 v44; // rcx
  signed __int32 v45; // eax
  unsigned int v46; // edx
  __int64 v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // rcx
  signed __int32 v50; // eax
  unsigned int v51; // edx
  __int64 v52; // rcx
  __int64 v53; // rdx
  ULONG TimeIncrement; // eax
  int v55; // [rsp+60h] [rbp-41h] BYREF
  KIRQL v56; // [rsp+68h] [rbp-39h]
  int v57; // [rsp+70h] [rbp-31h] BYREF
  __int16 v58; // [rsp+74h] [rbp-2Dh]
  __int16 v59; // [rsp+76h] [rbp-2Bh]
  __int16 v60; // [rsp+78h] [rbp-29h]
  __int16 v61; // [rsp+7Ah] [rbp-27h]
  _WORD v62[2]; // [rsp+80h] [rbp-21h] BYREF
  int v63; // [rsp+84h] [rbp-1Dh]
  int v64; // [rsp+88h] [rbp-19h]
  __int128 v65; // [rsp+8Ch] [rbp-15h] BYREF
  __int64 v66; // [rsp+9Ch] [rbp-5h]

  v6 = a4;
  v8 = a3;
  v10 = (KSPIN_LOCK *)FdoExt(a1);
  v11 = v10;
  if ( !a2 )
    return;
  v12 = v10 + 466;
  v56 = KeAcquireSpinLockRaiseToDpc(v10 + 466);
  v13 = v56;
  if ( (UsbhLogMask & 0x2000) != 0 )
  {
    if ( a1 )
    {
      v14 = *(_QWORD *)(a1 + 64);
      if ( v14 )
      {
        v55 = 827616869;
        v15 = _InterlockedExchangeAdd((volatile signed __int32 *)(v14 + 880), 0xFFFFFFFF);
        v16 = *(_DWORD *)(v14 + 884);
        v17 = *(_QWORD *)(v14 + 888);
        v18 = 32LL * ((v15 - 1) & v16);
        *(_DWORD *)(v18 + v17) = 827616869;
        *(_QWORD *)(v18 + v17 + 8) = 0LL;
        *(_QWORD *)(v18 + v17 + 16) = a2;
        *(_QWORD *)(v18 + v17 + 24) = v8;
      }
    }
    if ( (UsbhLogMask & 0x2000) != 0 )
    {
      if ( a1 )
      {
        v19 = *(_QWORD *)(a1 + 64);
        if ( v19 )
        {
          v55 = 829451877;
          v20 = _InterlockedExchangeAdd((volatile signed __int32 *)(v19 + 880), 0xFFFFFFFF);
          v21 = *(_DWORD *)(v19 + 884);
          v22 = *(_QWORD *)(v19 + 888);
          v23 = 32LL * ((v20 - 1) & v21);
          *(_DWORD *)(v23 + v22) = 829451877;
          *(_QWORD *)(v23 + v22 + 24) = a5;
          *(_QWORD *)(v23 + v22 + 8) = 0LL;
          *(_QWORD *)(v23 + v22 + 16) = v6;
        }
      }
    }
  }
  if ( (UsbhLogMask & 0x2000) != 0 )
  {
    if ( a1 )
    {
      v24 = *(_QWORD *)(a1 + 64);
      if ( v24 )
      {
        v55 = 846229093;
        v25 = _InterlockedExchangeAdd((volatile signed __int32 *)(v24 + 880), 0xFFFFFFFF);
        v26 = *(_DWORD *)(v24 + 884);
        v27 = *(_QWORD *)(v24 + 888);
        v28 = 32LL * ((v25 - 1) & v26);
        *(_DWORD *)(v28 + v27) = 846229093;
        *(_QWORD *)(v28 + v27 + 8) = 0LL;
        *(_QWORD *)(v28 + v27 + 16) = a6;
        *(_QWORD *)(v28 + v27 + 24) = 0LL;
      }
    }
  }
  v65 = 0LL;
  v55 = v6;
  v66 = 0LL;
  if ( dword_1400706F0 )
  {
    v29 = FdoExt(a1);
    v30 = &v65;
    v31 = v29;
    v57 = v29[1298];
    v32 = 5LL;
    v58 = *((_WORD *)v29 + 2598);
    v59 = v29[1300];
    v60 = *((_WORD *)v29 + 2614);
    v61 = *((_WORD *)v29 + 2615);
    v62[0] = *((_WORD *)v29 + 1274);
    v62[1] = *((_WORD *)v29 + 1275);
    v33 = (unsigned __int16 *)v29 + 2605;
    v63 = 0;
    v64 = *((unsigned __int16 *)v29 + 2604);
    v63 = *((_WORD *)v29 + 2604) != 0;
    do
    {
      v34 = *v33;
      *(_DWORD *)v30 = v34;
      if ( v34 )
        ++v63;
      v30 = (__int128 *)((char *)v30 + 4);
      ++v33;
      --v32;
    }
    while ( v32 );
    HIDWORD(v66) = v31[634];
    UsbhEtwWrite(&USBHUB_ETW_EVENT_HUB_ENABLE_TIMER, 0LL, &v57, 12LL, v62, 36LL, &v55, 4LL, a2 + 72, 4, 0LL);
    v13 = v56;
  }
  *(_QWORD *)(a2 + 40) = a5;
  v35 = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(a2 + 28) = a6;
  *(_DWORD *)(a2 + 32) = 0;
  *(_DWORD *)(a2 + 24) = v6;
  *(_DWORD *)(a2 + 16) = v8;
  *(_DWORD *)(a2 + 12) = v8;
  if ( v35 )
  {
    if ( v35 == 2 )
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
      v36 = *(_QWORD *)(a1 + 64);
      if ( v36 )
      {
        v55 = 844394085;
        v37 = _InterlockedExchangeAdd((volatile signed __int32 *)(v36 + 880), 0xFFFFFFFF);
        v38 = *(_DWORD *)(v36 + 884);
        v39 = *(_QWORD *)(v36 + 888);
        v40 = 32LL * ((v37 - 1) & v38);
        *(_DWORD *)(v40 + v39) = v55;
        *(_QWORD *)(v40 + v39 + 24) = v11 + 468;
        *(_QWORD *)(v40 + v39 + 8) = 0LL;
        *(_QWORD *)(v40 + v39 + 16) = a2;
      }
    }
  }
  *(_DWORD *)(a2 + 4) = 1;
  v41 = (KSPIN_LOCK **)v11[469];
  v42 = (KSPIN_LOCK *)(a2 + 56);
  if ( *v41 != v11 + 468 )
    __fastfail(3u);
  *v42 = (KSPIN_LOCK)(v11 + 468);
  v42[1] = (KSPIN_LOCK)v41;
  *v41 = v42;
  v11[469] = (KSPIN_LOCK)v42;
  v43 = *((int *)v11 + 934);
  if ( _bittest(&UsbhLogMask, 0xDu) )
  {
    if ( a1 )
    {
      v44 = *(_QWORD *)(a1 + 64);
      if ( v44 )
      {
        v55 = 1414819172;
        v45 = _InterlockedExchangeAdd((volatile signed __int32 *)(v44 + 880), 0xFFFFFFFF);
        v46 = *(_DWORD *)(v44 + 884);
        v47 = *(_QWORD *)(v44 + 888);
        v48 = 32LL * ((v45 - 1) & v46);
        *(_DWORD *)(v48 + v47) = v55;
        *(_QWORD *)(v48 + v47 + 8) = 0LL;
        *(_QWORD *)(v48 + v47 + 16) = a1;
        *(_QWORD *)(v48 + v47 + 24) = v43;
      }
    }
  }
  if ( *((_DWORD *)v11 + 934) != 2 )
  {
LABEL_38:
    KeReleaseSpinLock(v12, v13);
    return;
  }
  if ( _bittest(&UsbhLogMask, 0xDu) )
  {
    if ( a1 )
    {
      v49 = *(_QWORD *)(a1 + 64);
      if ( v49 )
      {
        v55 = 809382500;
        v50 = _InterlockedExchangeAdd((volatile signed __int32 *)(v49 + 880), 0xFFFFFFFF);
        v51 = *(_DWORD *)(v49 + 884);
        v52 = *(_QWORD *)(v49 + 888);
        v53 = 32LL * ((v50 - 1) & v51);
        *(_DWORD *)(v53 + v52) = v55;
        *(_QWORD *)(v53 + v52 + 8) = 0LL;
        *(_QWORD *)(v53 + v52 + 16) = a1;
        *(_QWORD *)(v53 + v52 + 24) = 2LL;
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
