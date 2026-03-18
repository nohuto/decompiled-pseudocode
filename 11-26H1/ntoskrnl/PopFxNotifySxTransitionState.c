/*
 * XREFs of PopFxNotifySxTransitionState @ 0x14077070C
 * Callers:
 *     PoBroadcastSystemState @ 0x140C05D10 (PoBroadcastSystemState.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 */

void __fastcall PopFxNotifySxTransitionState(char a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  AutoBoost *v4; // rax
  void *v5; // rdx
  signed __int8 v6; // cf
  AutoBoost *v7; // rdi
  AutoBoost *v8; // rax
  void *v9; // rdx
  AutoBoost *v10; // rdi
  struct _WORK_QUEUE_ITEM *InitialStack; // rcx
  __int64 v12; // rax

  if ( a1 )
  {
    v4 = (AutoBoost *)KeAbPreAcquire((__int64)&stru_140F12420.QuantumTarget, 0LL, 0LL, a4);
    v6 = _interlockedbittestandset64((volatile signed __int32 *)&stru_140F12420.QuantumTarget, 0LL);
    v7 = v4;
    if ( v6 )
      ExfAcquirePushLockExclusiveEx(&stru_140F12420.QuantumTarget, v4, (__int64)&stru_140F12420.QuantumTarget);
    if ( v7 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v7, v5);
      else
        *((_BYTE *)v7 + 10) = 1;
    }
    LOBYTE(stru_140F12420.StackBase) = 1;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140F12420.QuantumTarget, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&stru_140F12420.QuantumTarget);
    KeAbPostRelease((unsigned __int64)&stru_140F12420.QuantumTarget);
    KeWaitForSingleObject(&stru_140F12420.ThreadLock, Executive, 0, 0, 0LL);
  }
  else
  {
    v8 = (AutoBoost *)KeAbPreAcquire((__int64)&stru_140F12420.QuantumTarget, 0LL, 0LL, a4);
    v6 = _interlockedbittestandset64((volatile signed __int32 *)&stru_140F12420.QuantumTarget, 0LL);
    v10 = v8;
    if ( v6 )
      ExfAcquirePushLockExclusiveEx(&stru_140F12420.QuantumTarget, v8, (__int64)&stru_140F12420.QuantumTarget);
    if ( v10 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v10, v9);
      else
        *((_BYTE *)v10 + 10) = 1;
    }
    LOBYTE(stru_140F12420.StackBase) = 0;
    while ( 1 )
    {
      InitialStack = (struct _WORK_QUEUE_ITEM *)stru_140F12420.InitialStack;
      if ( stru_140F12420.InitialStack == &stru_140F12420.InitialStack )
        break;
      if ( *((struct _KTHREAD **)stru_140F12420.InitialStack + 1) != (struct _KTHREAD *)&stru_140F12420.InitialStack
        || (v12 = *(_QWORD *)stru_140F12420.InitialStack,
            *(void **)(*(_QWORD *)stru_140F12420.InitialStack + 8LL) != stru_140F12420.InitialStack) )
      {
        __fastfail(3u);
      }
      stru_140F12420.InitialStack = *(void **)stru_140F12420.InitialStack;
      *(_QWORD *)(v12 + 8) = &stru_140F12420.InitialStack;
      ExQueueWorkItem(InitialStack + 1, DelayedWorkQueue);
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140F12420.QuantumTarget, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&stru_140F12420.QuantumTarget);
    KeAbPostRelease((unsigned __int64)&stru_140F12420.QuantumTarget);
  }
}
