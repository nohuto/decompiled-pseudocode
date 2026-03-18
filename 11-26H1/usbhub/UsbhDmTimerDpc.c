/*
 * XREFs of UsbhDmTimerDpc @ 0x140009C10
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhEtwLogHubEventWithExtraData @ 0x14001D870 (UsbhEtwLogHubEventWithExtraData.c)
 *     UsbhReferenceListRemove @ 0x140029668 (UsbhReferenceListRemove.c)
 *     _guard_dispatch_icall @ 0x140061C10 (_guard_dispatch_icall.c)
 */

void __fastcall UsbhDmTimerDpc(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  char v5; // r15
  __int64 v6; // r14
  KSPIN_LOCK *v7; // r12
  KIRQL v8; // r13
  __int64 **v9; // rdi
  __int64 v10; // r11
  __int64 *v11; // r8
  __int64 ***v12; // r10
  __int64 v13; // r8
  __int64 v14; // r11
  __int64 *v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rcx
  signed __int32 v18; // eax
  unsigned int v19; // edx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // r9
  __int64 v23; // rcx
  signed __int32 v24; // eax
  unsigned int v25; // edx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 **v28; // rax
  __int64 v29; // r8
  __int64 v30; // rcx
  signed __int32 v31; // eax
  unsigned int v32; // edx
  __int64 v33; // rcx
  __int64 v34; // rdx
  ULONG TimeIncrement; // eax
  __int64 **v36; // rax
  __int64 ***v37; // r9
  __int64 v38; // rcx
  signed __int32 v39; // eax
  unsigned int v40; // edx
  __int64 v41; // rcx
  __int64 v42; // rdx
  int v43; // eax
  __int64 v44; // r8
  __int64 v45; // rcx
  signed __int32 v46; // eax
  unsigned int v47; // edx
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rcx
  signed __int32 v51; // eax
  unsigned int v52; // edx
  __int64 v53; // rcx
  __int64 v54; // rdx
  __int64 ***v55; // rax
  __int64 v56; // rcx
  signed __int32 v57; // eax
  unsigned int v58; // edx
  __int64 v59; // rcx
  __int64 v60; // rdx
  ULONG v61; // eax
  __int64 v62; // rdx
  signed __int32 v63; // eax
  unsigned int v64; // r8d
  __int64 v65; // rdx
  __int64 v66; // r8
  __int64 v67; // rcx
  signed __int32 v68; // eax
  unsigned int v69; // edx
  __int64 v70; // rcx
  __int64 v71; // rdx
  __int64 v72; // rcx
  int v73; // eax
  __int64 v74; // r9
  __int64 ***v75; // [rsp+48h] [rbp-18h] BYREF
  __int64 *v76; // [rsp+50h] [rbp-10h]

  v5 = 1;
  v6 = FdoExt(DeferredContext, DeferredContext, SystemArgument1, SystemArgument2);
  v7 = (KSPIN_LOCK *)(v6 + 3728);
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 3728));
  v9 = (__int64 **)(v6 + 3744);
  v76 = (__int64 *)&v75;
  v75 = (__int64 ***)&v75;
LABEL_2:
  v10 = 0LL;
  while ( 1 )
  {
    v11 = *v9;
    if ( *v9 == (__int64 *)v9 )
      break;
    if ( (__int64 **)v11[1] != v9 )
      goto LABEL_67;
    v15 = (__int64 *)*v11;
    if ( *(__int64 **)(*v11 + 8) != v11 )
      goto LABEL_67;
    *v9 = v15;
    v16 = (__int64)(v11 - 7);
    v15[1] = (__int64)v9;
    if ( (UsbhLogMask & 0x2000) != 0 )
    {
      if ( DeferredContext )
      {
        v17 = DeferredContext[8];
        if ( v17 )
        {
          v18 = _InterlockedExchangeAdd((volatile signed __int32 *)(v17 + 880), 0xFFFFFFFF);
          v19 = *(_DWORD *)(v17 + 884);
          v20 = *(_QWORD *)(v17 + 888);
          v21 = 32LL * ((v18 - 1) & v19);
          *(_DWORD *)(v21 + v20) = 827616612;
          *(_QWORD *)(v21 + v20 + 8) = v10;
          *(_QWORD *)(v21 + v20 + 16) = v16;
          *(_QWORD *)(v21 + v20 + 24) = v11;
        }
      }
    }
    *(_QWORD *)(v16 + 64) = v10;
    *v11 = v10;
    if ( *(_DWORD *)(v16 + 4) == 1 )
    {
      v22 = *(int *)(v16 + 12);
      if ( (UsbhLogMask & 0x2000) != 0 )
      {
        if ( DeferredContext )
        {
          v23 = DeferredContext[8];
          if ( v23 )
          {
            v24 = _InterlockedExchangeAdd((volatile signed __int32 *)(v23 + 880), 0xFFFFFFFF);
            v25 = *(_DWORD *)(v23 + 884);
            v26 = *(_QWORD *)(v23 + 888);
            v27 = 32LL * ((v24 - 1) & v25);
            *(_DWORD *)(v27 + v26) = 826633572;
            *(_QWORD *)(v27 + v26 + 8) = v10;
            *(_QWORD *)(v27 + v26 + 16) = v16;
            *(_QWORD *)(v27 + v26 + 24) = v22;
          }
        }
      }
      *(_DWORD *)(v16 + 4) = 2;
      v28 = (__int64 **)v76;
      if ( (__int64 ****)*v76 != &v75 )
LABEL_67:
        __fastfail(3u);
      v11[1] = (__int64)v76;
      *v11 = (__int64)&v75;
      *v28 = v11;
      v76 = v11;
      v29 = *(int *)(v16 + 12);
      if ( (int)v29 > 0 )
      {
        if ( (UsbhLogMask & 0x2000) != 0 )
        {
          if ( DeferredContext )
          {
            v30 = DeferredContext[8];
            if ( v30 )
            {
              v31 = _InterlockedExchangeAdd((volatile signed __int32 *)(v30 + 880), 0xFFFFFFFF);
              v32 = *(_DWORD *)(v30 + 884);
              v33 = *(_QWORD *)(v30 + 888);
              v34 = 32LL * ((v31 - 1) & v32);
              *(_DWORD *)(v34 + v33) = 843410788;
              *(_QWORD *)(v34 + v33 + 8) = v10;
              *(_QWORD *)(v34 + v33 + 16) = v16;
              *(_QWORD *)(v34 + v33 + 24) = v29;
            }
          }
        }
        TimeIncrement = KeQueryTimeIncrement();
        *(_DWORD *)(v16 + 20) = 1;
        *(_DWORD *)(v16 + 12) += -15 - (TimeIncrement - 1) / 0x2710;
        goto LABEL_2;
      }
      Log((__int64)DeferredContext, 0x2000, 1684882739, v16, v10);
      KeReleaseSpinLock(v7, v8);
      UsbhEtwLogHubEventWithExtraData(
        DeferredContext,
        &USBHUB_ETW_EVENT_HUB_TIMER_CALLBACK,
        *(unsigned int *)(v16 + 24),
        v16 + 72,
        4);
      v72 = (*(unsigned int (__fastcall **)(__int64, _QWORD *, _QWORD, _QWORD, _DWORD, _DWORD))(v16 + 48))(
              v16,
              DeferredContext,
              *(unsigned int *)(v16 + 24),
              *(_QWORD *)(v16 + 40),
              *(_DWORD *)(v16 + 28),
              *(_DWORD *)(v16 + 32));
      v73 = *(_DWORD *)(v16 + 16);
      *(_DWORD *)(v16 + 20) = v72;
      *(_DWORD *)(v16 + 12) = v73;
      Log((__int64)DeferredContext, 0x2000, 1684886098, v16, v72);
      v8 = KeAcquireSpinLockRaiseToDpc(v7);
      Log((__int64)DeferredContext, 0x2000, 1684882740, v16, 0LL);
    }
  }
  while ( 1 )
  {
    v12 = v75;
    if ( v75 == (__int64 ***)&v75 )
      break;
    if ( v75[1] != (__int64 **)&v75 )
      goto LABEL_67;
    v36 = *v75;
    if ( (*v75)[1] != (__int64 *)v75 )
      goto LABEL_67;
    v75 = (__int64 ***)*v75;
    v36[1] = (__int64 *)&v75;
    v37 = v12 - 7;
    if ( (UsbhLogMask & 0x2000) != 0 )
    {
      if ( DeferredContext )
      {
        v38 = DeferredContext[8];
        if ( v38 )
        {
          v39 = _InterlockedExchangeAdd((volatile signed __int32 *)(v38 + 880), 0xFFFFFFFF);
          v40 = *(_DWORD *)(v38 + 884);
          v41 = *(_QWORD *)(v38 + 888);
          v42 = 32LL * ((v39 - 1) & v40);
          *(_DWORD *)(v42 + v41) = 827485540;
          *(_QWORD *)(v42 + v41 + 8) = v10;
          *(_QWORD *)(v42 + v41 + 16) = v37;
          *(_QWORD *)(v42 + v41 + 24) = v12;
        }
      }
    }
    v43 = *((_DWORD *)v37 + 1);
    if ( v43 == 2 )
    {
      v44 = *((int *)v37 + 3);
      if ( (UsbhLogMask & 0x2000) != 0 )
      {
        if ( DeferredContext )
        {
          v45 = DeferredContext[8];
          if ( v45 )
          {
            v46 = _InterlockedExchangeAdd((volatile signed __int32 *)(v45 + 880), 0xFFFFFFFF);
            v47 = *(_DWORD *)(v45 + 884);
            v48 = *(_QWORD *)(v45 + 888);
            v49 = 32LL * ((v46 - 1) & v47);
            *(_DWORD *)(v49 + v48) = 1112698212;
            *(_QWORD *)(v49 + v48 + 8) = v10;
            *(_QWORD *)(v49 + v48 + 16) = v37;
            *(_QWORD *)(v49 + v48 + 24) = v44;
          }
        }
      }
      if ( *((_DWORD *)v37 + 5) == (_DWORD)v10 )
      {
        Log((__int64)DeferredContext, 0x2000, 1684886067, (__int64)v37, v10);
        *(_DWORD *)(v74 + 4) = v10;
        continue;
      }
      if ( (UsbhLogMask & 0x2000) != 0 )
      {
        if ( DeferredContext )
        {
          v50 = DeferredContext[8];
          if ( v50 )
          {
            v51 = _InterlockedExchangeAdd((volatile signed __int32 *)(v50 + 880), 0xFFFFFFFF);
            v52 = *(_DWORD *)(v50 + 884);
            v53 = *(_QWORD *)(v50 + 888);
            v54 = 32LL * ((v51 - 1) & v52);
            *(_DWORD *)(v54 + v53) = 844262756;
            *(_QWORD *)(v54 + v53 + 8) = v10;
            *(_QWORD *)(v54 + v53 + 16) = v37;
            *(_QWORD *)(v54 + v53 + 24) = v10;
          }
        }
      }
      *((_DWORD *)v37 + 1) = 1;
    }
    else
    {
      if ( v43 != 1 )
        continue;
      Log((__int64)DeferredContext, 0x2000, 1684886068, (__int64)v37, v10);
    }
    v55 = *(__int64 ****)(v6 + 3752);
    if ( *v55 != v9 )
      goto LABEL_67;
    *v12 = v9;
    v12[1] = (__int64 **)v55;
    *v55 = (__int64 **)v12;
    *(_QWORD *)(v6 + 3752) = v12;
  }
  v13 = *(int *)(v6 + 3736);
  if ( (_DWORD)v13 )
  {
    if ( *v9 == (__int64 *)v9 )
    {
      Log((__int64)DeferredContext, 0x2000, 1684884820, 0LL, v10);
      if ( *(_DWORD *)(v6 + 3736) != (_DWORD)v14 )
        *(_DWORD *)(v6 + 3736) = 2;
    }
    else
    {
      if ( (UsbhLogMask & 0x2000) != 0 )
      {
        if ( DeferredContext )
        {
          v56 = DeferredContext[8];
          if ( v56 )
          {
            v57 = _InterlockedExchangeAdd((volatile signed __int32 *)(v56 + 880), 0xFFFFFFFF);
            v58 = *(_DWORD *)(v56 + 884);
            v59 = *(_QWORD *)(v56 + 888);
            v60 = 32LL * ((v57 - 1) & v58);
            *(_DWORD *)(v60 + v59) = 1414807140;
            *(_QWORD *)(v60 + v59 + 8) = v10;
            *(_QWORD *)(v60 + v59 + 16) = v10;
            *(_QWORD *)(v60 + v59 + 24) = v13;
          }
        }
      }
      v61 = KeQueryTimeIncrement();
      KeSetTimer((PKTIMER)(v6 + 3848), (LARGE_INTEGER)(int)(-149999 - v61), (PKDPC)(v6 + 3784));
      v14 = 0LL;
      v5 = 0;
    }
  }
  else
  {
    if ( (UsbhLogMask & 0x2000) != 0 )
    {
      if ( DeferredContext )
      {
        v67 = DeferredContext[8];
        if ( v67 )
        {
          v68 = _InterlockedExchangeAdd((volatile signed __int32 *)(v67 + 880), 0xFFFFFFFF);
          v69 = *(_DWORD *)(v67 + 884);
          v70 = *(_QWORD *)(v67 + 888);
          v71 = 32LL * ((v68 - 1) & v69);
          *(_DWORD *)(v71 + v70) = 826159460;
          *(_QWORD *)(v71 + v70 + 8) = v10;
          *(_QWORD *)(v71 + v70 + 16) = v10;
          *(_QWORD *)(v71 + v70 + 24) = v10;
        }
      }
    }
    KeSetEvent((PRKEVENT)(v6 + 3760), 0, 0);
    v14 = 0LL;
  }
  if ( (UsbhLogMask & 0x2000) != 0 )
  {
    if ( DeferredContext )
    {
      v62 = DeferredContext[8];
      if ( v62 )
      {
        v63 = _InterlockedExchangeAdd((volatile signed __int32 *)(v62 + 880), 0xFFFFFFFF);
        v64 = *(_DWORD *)(v62 + 884);
        v65 = *(_QWORD *)(v62 + 888);
        v66 = 32LL * ((v63 - 1) & v64);
        *(_DWORD *)(v66 + v65) = 827878756;
        *(_QWORD *)(v66 + v65 + 8) = v14;
        *(_QWORD *)(v66 + v65 + 16) = v14;
        *(_QWORD *)(v66 + v65 + 24) = v14;
      }
    }
  }
  KeReleaseSpinLock(v7, v8);
  if ( v5 )
    UsbhReferenceListRemove(DeferredContext, v6 + 3848);
}
