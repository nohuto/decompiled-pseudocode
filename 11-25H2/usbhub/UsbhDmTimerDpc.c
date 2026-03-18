/*
 * XREFs of UsbhDmTimerDpc @ 0x14002BC40
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     UsbhEtwLogHubEventWithExtraData @ 0x14000A9B0 (UsbhEtwLogHubEventWithExtraData.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     UsbhReferenceListRemove @ 0x14002B02C (UsbhReferenceListRemove.c)
 *     _guard_dispatch_icall @ 0x140061530 (_guard_dispatch_icall.c)
 */

void __fastcall UsbhDmTimerDpc(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  char v5; // r15
  _DWORD *v6; // r14
  KSPIN_LOCK *v7; // r12
  KIRQL v8; // r13
  __int64 **v9; // rbx
  __int64 v10; // r11
  __int64 *v11; // rdx
  __int64 ***v12; // r10
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  ULONG v16; // eax
  __int64 v17; // r11
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 *v20; // rax
  __int64 v21; // rsi
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 v24; // r9
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 **v27; // rax
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // rcx
  ULONG TimeIncrement; // eax
  __int64 **v32; // rax
  __int64 ***v33; // r9
  __int64 v34; // rdx
  __int64 v35; // rcx
  int v36; // eax
  __int64 v37; // r8
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 ***v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rcx
  int v46; // eax
  __int64 v47; // r9
  __int64 ***v48; // [rsp+48h] [rbp-18h] BYREF
  __int64 *v49; // [rsp+50h] [rbp-10h]

  v5 = 1;
  v6 = FdoExt((__int64)DeferredContext);
  v7 = (KSPIN_LOCK *)(v6 + 932);
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v6 + 466);
  v9 = (__int64 **)(v6 + 936);
  v49 = (__int64 *)&v48;
  v48 = (__int64 ***)&v48;
LABEL_2:
  v10 = 0LL;
  while ( 1 )
  {
    v11 = *v9;
    if ( *v9 == (__int64 *)v9 )
      break;
    if ( (__int64 **)v11[1] != v9 )
      goto LABEL_67;
    v20 = (__int64 *)*v11;
    if ( *(__int64 **)(*v11 + 8) != v11 )
      goto LABEL_67;
    *v9 = v20;
    v21 = (__int64)(v11 - 7);
    v20[1] = (__int64)v9;
    if ( (UsbhLogMask & 0x2000) != 0 )
    {
      if ( DeferredContext )
      {
        v22 = DeferredContext[8];
        if ( v22 )
        {
          v23 = *(_QWORD *)(v22 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v22 + 880)) & *(_DWORD *)(v22 + 884));
          *(_DWORD *)v23 = 827616612;
          *(_QWORD *)(v23 + 8) = v10;
          *(_QWORD *)(v23 + 16) = v21;
          *(_QWORD *)(v23 + 24) = v11;
        }
      }
    }
    *(_QWORD *)(v21 + 64) = v10;
    *v11 = v10;
    if ( *(_DWORD *)(v21 + 4) == 1 )
    {
      v24 = *(int *)(v21 + 12);
      if ( (UsbhLogMask & 0x2000) != 0 )
      {
        if ( DeferredContext )
        {
          v25 = DeferredContext[8];
          if ( v25 )
          {
            v26 = *(_QWORD *)(v25 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v25 + 880)) & *(_DWORD *)(v25 + 884));
            *(_DWORD *)v26 = 826633572;
            *(_QWORD *)(v26 + 8) = v10;
            *(_QWORD *)(v26 + 16) = v21;
            *(_QWORD *)(v26 + 24) = v24;
          }
        }
      }
      *(_DWORD *)(v21 + 4) = 2;
      v27 = (__int64 **)v49;
      if ( (__int64 ****)*v49 != &v48 )
LABEL_67:
        __fastfail(3u);
      v11[1] = (__int64)v49;
      *v11 = (__int64)&v48;
      *v27 = v11;
      v49 = v11;
      v28 = *(int *)(v21 + 12);
      if ( (int)v28 > 0 )
      {
        if ( (UsbhLogMask & 0x2000) != 0 )
        {
          if ( DeferredContext )
          {
            v29 = DeferredContext[8];
            if ( v29 )
            {
              v30 = *(_QWORD *)(v29 + 888)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v29 + 880)) & *(_DWORD *)(v29 + 884));
              *(_DWORD *)v30 = 843410788;
              *(_QWORD *)(v30 + 8) = v10;
              *(_QWORD *)(v30 + 16) = v21;
              *(_QWORD *)(v30 + 24) = v28;
            }
          }
        }
        TimeIncrement = KeQueryTimeIncrement();
        *(_DWORD *)(v21 + 20) = 1;
        *(_DWORD *)(v21 + 12) += -15 - (TimeIncrement - 1) / 0x2710;
        goto LABEL_2;
      }
      Log((__int64)DeferredContext, 0x2000, 1684882739, (__int64)(v11 - 7), v10);
      KeReleaseSpinLock(v7, v8);
      UsbhEtwLogHubEventWithExtraData((__int64)DeferredContext, &USBHUB_ETW_EVENT_HUB_TIMER_CALLBACK);
      v45 = (*(unsigned int (__fastcall **)(__int64, _QWORD *, _QWORD, _QWORD, _DWORD, _DWORD))(v21 + 48))(
              v21,
              DeferredContext,
              *(unsigned int *)(v21 + 24),
              *(_QWORD *)(v21 + 40),
              *(_DWORD *)(v21 + 28),
              *(_DWORD *)(v21 + 32));
      v46 = *(_DWORD *)(v21 + 16);
      *(_DWORD *)(v21 + 20) = v45;
      *(_DWORD *)(v21 + 12) = v46;
      Log((__int64)DeferredContext, 0x2000, 1684886098, v21, v45);
      v8 = KeAcquireSpinLockRaiseToDpc(v7);
      Log((__int64)DeferredContext, 0x2000, 1684882740, v21, 0LL);
    }
  }
  while ( 1 )
  {
    v12 = v48;
    if ( v48 == (__int64 ***)&v48 )
      break;
    if ( v48[1] != (__int64 **)&v48 )
      goto LABEL_67;
    v32 = *v48;
    if ( (*v48)[1] != (__int64 *)v48 )
      goto LABEL_67;
    v48 = (__int64 ***)*v48;
    v32[1] = (__int64 *)&v48;
    v33 = v12 - 7;
    if ( (UsbhLogMask & 0x2000) != 0 )
    {
      if ( DeferredContext )
      {
        v34 = DeferredContext[8];
        if ( v34 )
        {
          v35 = *(_QWORD *)(v34 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v34 + 880)) & *(_DWORD *)(v34 + 884));
          *(_DWORD *)v35 = 827485540;
          *(_QWORD *)(v35 + 8) = v10;
          *(_QWORD *)(v35 + 16) = v33;
          *(_QWORD *)(v35 + 24) = v12;
        }
      }
    }
    v36 = *((_DWORD *)v33 + 1);
    if ( v36 == 2 )
    {
      v37 = *((int *)v33 + 3);
      if ( (UsbhLogMask & 0x2000) != 0 )
      {
        if ( DeferredContext )
        {
          v38 = DeferredContext[8];
          if ( v38 )
          {
            v39 = *(_QWORD *)(v38 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v38 + 880)) & *(_DWORD *)(v38 + 884));
            *(_DWORD *)v39 = 1112698212;
            *(_QWORD *)(v39 + 8) = v10;
            *(_QWORD *)(v39 + 16) = v33;
            *(_QWORD *)(v39 + 24) = v37;
          }
        }
      }
      if ( *((_DWORD *)v33 + 5) == (_DWORD)v10 )
      {
        Log((__int64)DeferredContext, 0x2000, 1684886067, (__int64)v33, v10);
        *(_DWORD *)(v47 + 4) = v10;
        continue;
      }
      if ( (UsbhLogMask & 0x2000) != 0 )
      {
        if ( DeferredContext )
        {
          v40 = DeferredContext[8];
          if ( v40 )
          {
            v41 = *(_QWORD *)(v40 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v40 + 880)) & *(_DWORD *)(v40 + 884));
            *(_DWORD *)v41 = 844262756;
            *(_QWORD *)(v41 + 8) = v10;
            *(_QWORD *)(v41 + 16) = v33;
            *(_QWORD *)(v41 + 24) = v10;
          }
        }
      }
      *((_DWORD *)v33 + 1) = 1;
    }
    else
    {
      if ( v36 != 1 )
        continue;
      Log((__int64)DeferredContext, 0x2000, 1684886068, (__int64)v33, v10);
    }
    v42 = (__int64 ***)*((_QWORD *)v6 + 469);
    if ( *v42 != v9 )
      goto LABEL_67;
    *v12 = v9;
    v12[1] = (__int64 **)v42;
    *v42 = (__int64 **)v12;
    *((_QWORD *)v6 + 469) = v12;
  }
  v13 = (int)v6[934];
  if ( (_DWORD)v13 )
  {
    if ( *v9 == (__int64 *)v9 )
    {
      Log((__int64)DeferredContext, 0x2000, 1684884820, 0LL, v10);
      if ( v6[934] != (_DWORD)v17 )
        v6[934] = 2;
    }
    else
    {
      if ( (UsbhLogMask & 0x2000) != 0 )
      {
        if ( DeferredContext )
        {
          v14 = DeferredContext[8];
          if ( v14 )
          {
            v15 = *(_QWORD *)(v14 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v14 + 880)) & *(_DWORD *)(v14 + 884));
            *(_DWORD *)v15 = 1414807140;
            *(_QWORD *)(v15 + 8) = v10;
            *(_QWORD *)(v15 + 16) = v10;
            *(_QWORD *)(v15 + 24) = v13;
          }
        }
      }
      v16 = KeQueryTimeIncrement();
      KeSetTimer((PKTIMER)(v6 + 962), (LARGE_INTEGER)(int)(-149999 - v16), (PKDPC)(v6 + 946));
      v17 = 0LL;
      v5 = 0;
    }
  }
  else
  {
    if ( (UsbhLogMask & 0x2000) != 0 )
    {
      if ( DeferredContext )
      {
        v43 = DeferredContext[8];
        if ( v43 )
        {
          v44 = *(_QWORD *)(v43 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v43 + 880)) & *(_DWORD *)(v43 + 884));
          *(_DWORD *)v44 = 826159460;
          *(_QWORD *)(v44 + 8) = v10;
          *(_QWORD *)(v44 + 16) = v10;
          *(_QWORD *)(v44 + 24) = v10;
        }
      }
    }
    KeSetEvent((PRKEVENT)(v6 + 940), 0, 0);
    v17 = 0LL;
  }
  if ( (UsbhLogMask & 0x2000) != 0 )
  {
    if ( DeferredContext )
    {
      v18 = DeferredContext[8];
      if ( v18 )
      {
        v19 = *(_QWORD *)(v18 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v18 + 880)) & *(_DWORD *)(v18 + 884));
        *(_DWORD *)v19 = 827878756;
        *(_QWORD *)(v19 + 8) = v17;
        *(_QWORD *)(v19 + 16) = v17;
        *(_QWORD *)(v19 + 24) = v17;
      }
    }
  }
  KeReleaseSpinLock(v7, v8);
  if ( v5 )
    UsbhReferenceListRemove((__int64)DeferredContext, (__int64)(v6 + 962));
}
