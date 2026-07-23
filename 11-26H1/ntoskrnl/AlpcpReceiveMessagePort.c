/*
 * XREFs of AlpcpReceiveMessagePort @ 0x140ACE424
 * Callers:
 *     AlpcpReceiveMessage @ 0x140927FFC (AlpcpReceiveMessage.c)
 *     AlpcpReceiveLegacyMessage @ 0x140ACE0BC (AlpcpReceiveLegacyMessage.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     AlpcpWaitForSingleObject @ 0x14045F3E0 (AlpcpWaitForSingleObject.c)
 *     AlpcpLogWaitForNewMessage @ 0x140773AC0 (AlpcpLogWaitForNewMessage.c)
 *     AlpcpReferenceBlob @ 0x14098FE98 (AlpcpReferenceBlob.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14098FEF0 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpUnlockMessage @ 0x140991780 (AlpcpUnlockMessage.c)
 *     AlpcpInsertMessagePendingQueue @ 0x140A53330 (AlpcpInsertMessagePendingQueue.c)
 *     AlpcpTryLockForCachedReferenceBlob @ 0x140A69A70 (AlpcpTryLockForCachedReferenceBlob.c)
 *     AlpcpQueryHeadLargeQueue @ 0x140A81570 (AlpcpQueryHeadLargeQueue.c)
 *     AlpcpQueryHeadMainQueue @ 0x140A81B24 (AlpcpQueryHeadMainQueue.c)
 *     AlpcpCompleteDeferSignalRequestAndWait @ 0x140A8EEF4 (AlpcpCompleteDeferSignalRequestAndWait.c)
 *     AlpcpRemoveMessagePort @ 0x140A91160 (AlpcpRemoveMessagePort.c)
 *     AlpcpRemoveMessageCanceledQueue @ 0x140A9F750 (AlpcpRemoveMessageCanceledQueue.c)
 *     AlpcpLogReceiveMessage @ 0x140B4A2DC (AlpcpLogReceiveMessage.c)
 */

__int64 __fastcall AlpcpReceiveMessagePort(
        __int64 *a1,
        KPROCESSOR_MODE a2,
        LARGE_INTEGER *a3,
        struct _KLOCK_ENTRIES *a4,
        LONG a5)
{
  struct _KTHREAD *CurrentThread; // r12
  __int64 v6; // r13
  __int64 v7; // r15
  signed __int64 *v8; // rdi
  LegacyAutoBoost *v9; // rsi
  struct _KLOCK_ENTRIES *v10; // r9
  int i; // r14d
  int v12; // eax
  volatile signed __int64 *v13; // rbp
  AutoBoost *v14; // rax
  void *v15; // rdx
  AutoBoost *v16; // rsi
  __int64 v17; // rdx
  __int64 HeadLargeQueue; // rsi
  __int64 v19; // r8
  struct _KLOCK_ENTRIES *v20; // r9
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  struct _KLOCK_ENTRIES *v24; // r9
  AutoBoost *v25; // rax
  AutoBoost *v26; // rsi
  int v27; // edx
  __int64 v28; // rax
  struct _KLOCK_ENTRIES *v29; // r9
  AutoBoost *v30; // rax
  void *v31; // rdx
  AutoBoost *v32; // rsi
  volatile signed __int64 *v33; // rsi
  AutoBoost *v34; // rax
  void *v35; // rdx
  AutoBoost *v36; // rbp
  LIST_ENTRY *p_WaitListHead; // r14
  struct _LIST_ENTRY *v38; // rcx
  __int64 v39; // r8
  unsigned int v40; // ebp
  __int64 v41; // r8
  __int64 v42; // r8
  __int64 result; // rax
  __int64 v44; // rdx
  __int64 v45; // r8
  struct _KLOCK_ENTRIES *v46; // r9
  struct _KLOCK_ENTRIES *v47; // r9
  struct _KLOCK_ENTRIES *v48; // r9
  LegacyAutoBoost *v49; // r14
  unsigned __int64 v50; // rdx
  AutoBoost *v51; // rax
  void *v52; // rdx
  AutoBoost *v53; // r15
  __int64 v54; // rdx
  __int64 v55; // r8
  struct _KLOCK_ENTRIES *v56; // r9
  __int64 v57; // rdx
  __int64 v58; // r8
  struct _KLOCK_ENTRIES *v59; // r9
  unsigned int v60; // esi
  int v61; // ecx
  AutoBoost *v62; // rax
  void *v63; // rdx
  AutoBoost *v64; // rdi
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *Blink; // rcx
  __int64 v67; // rdx
  __int64 v68; // r8
  struct _KLOCK_ENTRIES *v69; // r9
  int v70; // ecx
  int v71; // eax
  __int64 v72; // r8
  struct _KLOCK_ENTRIES *v73; // r9
  unsigned int v74; // edx
  int v75; // ecx

  CurrentThread = KeGetCurrentThread();
  v6 = *a1;
  v7 = (__int64)a1;
  v8 = (signed __int64 *)(*a1 + 352);
  do
  {
LABEL_2:
    v9 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)v8, 0LL, 0LL, a4);
    if ( _InterlockedCompareExchange64(v8, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v8, 0, v9, (struct _KTHREAD *)v8);
    if ( v9 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v9, (void *)1);
      else
        *((_BYTE *)v9 + 10) = 1;
    }
    for ( i = 0; ; i = 1 )
    {
      while ( 1 )
      {
        v12 = *(_DWORD *)(v6 + 416);
        if ( (v12 & 0x40) != 0 )
        {
          v60 = -1073740032;
          goto LABEL_183;
        }
        if ( (v12 & 0x10) != 0 )
        {
          v60 = -1073741759;
          goto LABEL_183;
        }
        v13 = (volatile signed __int64 *)(v6 + 136);
        v14 = (AutoBoost *)KeAbPreAcquire(v6 + 136, 0LL, 0LL, v10);
        v16 = v14;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 136), 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v6 + 136), v14, v6 + 136);
        if ( v16 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
            AutoBoost::KiAbpPostAcquire(v16, v15);
          else
            *((_BYTE *)v16 + 10) = 1;
        }
        HeadLargeQueue = (__int64)AlpcpQueryHeadLargeQueue(v6);
        if ( HeadLargeQueue || (HeadLargeQueue = AlpcpQueryHeadMainQueue(v6)) != 0 )
        {
          if ( AlpcpTryLockForCachedReferenceBlob(HeadLargeQueue, v17, v19, v20) )
            goto LABEL_159;
          if ( *(_QWORD *)(HeadLargeQueue + 96) )
            goto LABEL_23;
          AlpcpReferenceBlob(HeadLargeQueue);
          if ( (_InterlockedExchangeAdd64(v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 136));
          KeAbPostRelease(v6 + 136);
          if ( i )
          {
            if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock(v8);
          }
          else if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
          {
            ExfReleasePushLockShared(v8);
          }
          KeAbPostRelease((unsigned __int64)v8);
          AlpcpLockForCachedReferenceBlob(HeadLargeQueue, v44, v45, v46);
          --*(_WORD *)(HeadLargeQueue - 30);
          v49 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)v8, 0LL, 0LL, v47);
          if ( _InterlockedCompareExchange64(v8, 17LL, 0LL) )
            ExfAcquirePushLockSharedEx(v8, 0, v49, (struct _KTHREAD *)v8);
          v50 = 0LL;
          if ( v49 )
          {
            if ( (KiAbpGlobalState & 1) != 0 )
              AutoBoost::KiAbpPostAcquire(v49, 0LL);
            else
              *((_BYTE *)v49 + 10) = 1;
          }
          i = v50;
          if ( (*(_DWORD *)(v6 + 416) & 0x50) != 0 )
          {
            if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
              ExfReleasePushLockShared(v8);
            KeAbPostRelease((unsigned __int64)v8);
            AlpcpUnlockMessage(HeadLargeQueue, v57, v58, v59);
          }
          else
          {
            v51 = (AutoBoost *)KeAbPreAcquire(v6 + 136, v50, 0LL, v48);
            v53 = v51;
            if ( _interlockedbittestandset64((volatile signed __int32 *)v13, 0LL) )
              ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v6 + 136), v51, v6 + 136);
            if ( v53 )
            {
              if ( (KiAbpGlobalState & 1) != 0 )
                AutoBoost::KiAbpPostAcquire(v53, v52);
              else
                *((_BYTE *)v53 + 10) = 1;
            }
            if ( !AlpcpQueryHeadLargeQueue(v6) && HeadLargeQueue == AlpcpQueryHeadMainQueue(v6)
              || (_QWORD *)HeadLargeQueue == AlpcpQueryHeadLargeQueue(v6) )
            {
LABEL_159:
              v71 = *(_DWORD *)(HeadLargeQueue + 40) & 7;
              if ( v71 == 3 )
                NT_ASSERT("AlpcpGetQueueTypeMessage(Message) != 0x00000003");
              if ( v71 == 4 )
                NT_ASSERT("AlpcpGetQueueTypeMessage(Message) != 0x00000004");
              AlpcpRemoveMessagePort(v6, HeadLargeQueue);
              if ( (*(_DWORD *)(HeadLargeQueue + 40) & 0x200) == 0 )
                goto LABEL_170;
              v74 = (*(_QWORD *)(HeadLargeQueue + 136) != 0LL ? 0x80000000 : 0) | 0x40000000;
              if ( !*(_QWORD *)(HeadLargeQueue + 144) )
                v74 = *(_QWORD *)(HeadLargeQueue + 136) != 0LL ? 0x80000000 : 0;
              v75 = v74 | 0x10000000;
              if ( !*(_QWORD *)(HeadLargeQueue + 152) )
                v75 = v74;
              if ( (v75 & a5) != 0 )
              {
LABEL_170:
                *(_WORD *)(HeadLargeQueue + 244) |= 0x2000u;
                AlpcpInsertMessagePendingQueue(v6, HeadLargeQueue, v72, v73);
              }
              else
              {
                *(_WORD *)(HeadLargeQueue + 244) &= ~0x2000u;
                --*(_WORD *)(HeadLargeQueue - 30);
              }
              if ( (_InterlockedExchangeAdd64(v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 136));
              KeAbPostRelease(v6 + 136);
              if ( i )
              {
                if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                  ExfTryToWakePushLock(v8);
              }
              else if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
              {
                ExfReleasePushLockShared(v8);
              }
              KeAbPostRelease((unsigned __int64)v8);
              goto LABEL_179;
            }
            if ( (_InterlockedExchangeAdd64(v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 136));
            KeAbPostRelease(v6 + 136);
            if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
              ExfReleasePushLockShared(v8);
            KeAbPostRelease((unsigned __int64)v8);
            AlpcpUnlockMessage(HeadLargeQueue, v54, v55, v56);
            v7 = (__int64)a1;
          }
          goto LABEL_2;
        }
        v21 = *(_QWORD *)(v6 + 384);
        if ( v21 == v6 + 384 )
          v21 = v19;
        v22 = v21 - 80;
        v23 = -v21;
        HeadLargeQueue = v22 & -(__int64)(v23 != 0);
        if ( !HeadLargeQueue )
          break;
        if ( AlpcpTryLockForCachedReferenceBlob(v22 & -(__int64)(v23 != 0), v17, v19, v20) )
        {
          AlpcpRemoveMessageCanceledQueue(v6, HeadLargeQueue);
          if ( (_InterlockedExchangeAdd64(v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 136));
          KeAbPostRelease(v6 + 136);
          if ( i )
          {
            if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock(v8);
          }
          else if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
          {
            ExfReleasePushLockShared(v8);
          }
          KeAbPostRelease((unsigned __int64)v8);
          --*(_WORD *)(HeadLargeQueue - 30);
          goto LABEL_128;
        }
LABEL_23:
        if ( (_InterlockedExchangeAdd64(v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 136));
        KeAbPostRelease(v6 + 136);
        if ( i )
        {
          if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v8);
        }
        else if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
        {
          ExfReleasePushLockShared(v8);
        }
        KeAbPostRelease((unsigned __int64)v8);
        v25 = (AutoBoost *)KeAbPreAcquire((__int64)v8, 0LL, 0LL, v24);
        v26 = v25;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v8, v25, (__int64)v8);
        v27 = 1;
        if ( v26 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
            AutoBoost::KiAbpPostAcquire(v26, (void *)1);
          else
            *((_BYTE *)v26 + 10) = 1;
        }
        i = v27;
      }
      v28 = *(_QWORD *)(v6 + 360);
      if ( v28 && (*(_QWORD *)(*(_QWORD *)(v28 + 80) + 64LL) & 0xFFFFFFLL) != 0xFFFFFF )
      {
        if ( (_InterlockedExchangeAdd64(v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 136));
        KeAbPostRelease(v6 + 136);
        v60 = 1073741872;
        goto LABEL_183;
      }
      if ( (_InterlockedExchangeAdd64(v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 136));
      KeAbPostRelease(v6 + 136);
      if ( *(_QWORD *)(v6 + 32) )
        goto LABEL_158;
      if ( (*(_DWORD *)(v6 + 416) & 0x200) != 0 )
        break;
      if ( *(_QWORD *)(v6 + 368) )
      {
        v60 = 258;
LABEL_183:
        if ( i )
        {
          if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v8);
        }
        else if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
        {
          ExfReleasePushLockShared(v8);
        }
        KeAbPostRelease((unsigned __int64)v8);
        return v60;
      }
      if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 0x20) != 0 )
        goto LABEL_158;
      if ( i )
      {
        v33 = (volatile signed __int64 *)(v6 + 224);
        CurrentThread[1].Timer.Header.LockNV = a5;
        v34 = (AutoBoost *)KeAbPreAcquire(v6 + 224, 0LL, 0LL, v10);
        v36 = v34;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 224), 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v6 + 224), v34, v6 + 224);
        if ( v36 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
            AutoBoost::KiAbpPostAcquire(v36, v35);
          else
            *((_BYTE *)v36 + 10) = 1;
        }
        p_WaitListHead = &CurrentThread[1].Timer.Header.WaitListHead;
        if ( CurrentThread[1].Timer.Header.WaitListHead.Flink )
          NT_ASSERT("((void *)0) == CurrentThread->AlpcWaitListEntry.Flink");
        v38 = *(struct _LIST_ENTRY **)(v6 + 240);
        if ( v38->Flink != (struct _LIST_ENTRY *)(v6 + 232) )
          goto LABEL_156;
        p_WaitListHead->Flink = (struct _LIST_ENTRY *)(v6 + 232);
        CurrentThread[1].Timer.Header.WaitListHead.Blink = v38;
        v38->Flink = p_WaitListHead;
        *(_QWORD *)(v6 + 240) = p_WaitListHead;
        if ( (_InterlockedExchangeAdd64(v33, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 224));
        KeAbPostRelease(v6 + 224);
        if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v8);
        KeAbPostRelease((unsigned __int64)v8);
        if ( LOBYTE(stru_140E66D40.CycleTime) )
          AlpcpLogWaitForNewMessage(v6);
        if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 0x20) != 0 )
          NT_ASSERT("!CurrentThread->KeyedEventInUse");
        v40 = AlpcpCompleteDeferSignalRequestAndWait((__int64)a1, &CurrentThread[1].KernelStack, v39, a2, a3);
        if ( v40 )
        {
          v62 = (AutoBoost *)KeAbPreAcquire(v6 + 224, 0LL, 0LL, a4);
          v64 = v62;
          if ( _interlockedbittestandset64((volatile signed __int32 *)v33, 0LL) )
            ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v6 + 224), v62, v6 + 224);
          if ( v64 )
          {
            if ( (KiAbpGlobalState & 1) != 0 )
              AutoBoost::KiAbpPostAcquire(v64, v63);
            else
              *((_BYTE *)v64 + 10) = 1;
          }
          Flink = p_WaitListHead->Flink;
          if ( p_WaitListHead->Flink )
          {
            *(_QWORD *)&CurrentThread[1].Timer.Header.Lock = 0LL;
            if ( Flink->Blink != p_WaitListHead
              || (Blink = CurrentThread[1].Timer.Header.WaitListHead.Blink, Blink->Flink != p_WaitListHead) )
            {
LABEL_156:
              __fastfail(3u);
            }
            Blink->Flink = Flink;
            Flink->Blink = Blink;
            p_WaitListHead->Flink = 0LL;
            if ( (_InterlockedExchangeAdd64(v33, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock(v33);
            KeAbPostRelease((unsigned __int64)v33);
            return v40;
          }
          if ( (_InterlockedExchangeAdd64(v33, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v33);
          KeAbPostRelease((unsigned __int64)v33);
          if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 0x20) != 0 )
            NT_ASSERT("!CurrentThread->KeyedEventInUse");
          AlpcpWaitForSingleObject(&CurrentThread[1].KernelStack, WrLpcReceive, 0, 0, 0LL);
          HeadLargeQueue = *(_QWORD *)&CurrentThread[1].Timer.Header.Lock;
          *(_QWORD *)&CurrentThread[1].Timer.Header.Lock = 0LL;
          if ( !HeadLargeQueue )
            return v40;
          AlpcpLockForCachedReferenceBlob(HeadLargeQueue, v67, v68, v69);
          v70 = *(_DWORD *)(HeadLargeQueue + 40);
          if ( (v70 & 0x2000) == 0 )
            NT_ASSERT("Message->u1.s1.ReceiverReference");
          --*(_WORD *)(HeadLargeQueue - 30);
          *(_DWORD *)(HeadLargeQueue + 40) = v70 & 0xFFFFDFFF;
LABEL_179:
          if ( LOBYTE(stru_140E66D40.CycleTime) )
            AlpcpLogReceiveMessage(HeadLargeQueue);
LABEL_128:
          a4->Thread = (_KTHREAD *)HeadLargeQueue;
          return 0LL;
        }
        if ( p_WaitListHead->Flink )
          NT_ASSERT("CurrentThread->AlpcWaitListEntry.Flink == ((void *)0)");
        HeadLargeQueue = *(_QWORD *)&CurrentThread[1].Timer.Header.Lock;
        *(_QWORD *)&CurrentThread[1].Timer.Header.Lock = 0LL;
        if ( HeadLargeQueue )
        {
          AlpcpLockForCachedReferenceBlob(HeadLargeQueue, 0LL, v41, a4);
          v61 = *(_DWORD *)(HeadLargeQueue + 40);
          if ( (v61 & 0x2000) == 0 )
            NT_ASSERT("Message->u1.s1.ReceiverReference");
          --*(_WORD *)(HeadLargeQueue - 30);
          *(_DWORD *)(HeadLargeQueue + 40) = v61 & 0xFFFFDFFF;
          goto LABEL_179;
        }
        v7 = (__int64)a1;
        goto LABEL_2;
      }
      if ( _InterlockedCompareExchange64(v8, 1LL, 17LL) != 17 )
      {
        if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v8);
        KeAbPostRelease((unsigned __int64)v8);
        v30 = (AutoBoost *)KeAbPreAcquire((__int64)v8, 0LL, 0LL, v29);
        v32 = v30;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v8, v30, (__int64)v8);
        if ( v32 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
            AutoBoost::KiAbpPostAcquire(v32, v31);
          else
            *((_BYTE *)v32 + 10) = 1;
        }
      }
    }
    if ( (*(_DWORD *)(v6 + 256) & 0x1000) == 0 )
    {
LABEL_158:
      v60 = -1073741823;
      goto LABEL_183;
    }
    if ( i )
    {
      if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v8);
    }
    else if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
    {
      ExfReleasePushLockShared(v8);
    }
    KeAbPostRelease((unsigned __int64)v8);
    if ( LOBYTE(stru_140E66D40.CycleTime) )
      AlpcpLogWaitForNewMessage(v6);
    result = AlpcpCompleteDeferSignalRequestAndWait(v7, *(void **)(v6 + 248), v42, a2, a3);
  }
  while ( !(_DWORD)result );
  return result;
}
