/*
 * XREFs of PopFxNotifySxTransitionState @ 0x14077370C
 * Callers:
 *     PoBroadcastSystemState @ 0x140C0BF20 (PoBroadcastSystemState.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
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
  struct _WORK_QUEUE_ITEM *Blink; // rcx
  struct _LIST_ENTRY *Flink; // rax

  if ( a1 )
  {
    v4 = (AutoBoost *)KeAbPreAcquire((__int64)&PopFxBlockingDeviceListLock.ThreadListEntry, 0LL, 0LL, a4);
    v6 = _interlockedbittestandset64((volatile signed __int32 *)&PopFxBlockingDeviceListLock.ThreadListEntry, 0LL);
    v7 = v4;
    if ( v6 )
      ExfAcquirePushLockExclusiveEx(
        (unsigned __int64 *)&PopFxBlockingDeviceListLock.ThreadListEntry,
        v4,
        (__int64)&PopFxBlockingDeviceListLock.ThreadListEntry);
    if ( v7 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v7, v5);
      else
        *((_BYTE *)v7 + 10) = 1;
    }
    LOBYTE(PopFxBlockingDeviceListLock.MutantListHead.Blink) = 1;
    if ( (_InterlockedExchangeAdd64(
            (volatile signed __int64 *)&PopFxBlockingDeviceListLock.ThreadListEntry.Flink,
            0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PopFxBlockingDeviceListLock.ThreadListEntry);
    KeAbPostRelease((unsigned __int64)&PopFxBlockingDeviceListLock.ThreadListEntry);
    KeWaitForSingleObject(&PopFxBlockingDeviceListLock.792, Executive, 0, 0, 0LL);
  }
  else
  {
    v8 = (AutoBoost *)KeAbPreAcquire((__int64)&PopFxBlockingDeviceListLock.ThreadListEntry, 0LL, 0LL, a4);
    v6 = _interlockedbittestandset64((volatile signed __int32 *)&PopFxBlockingDeviceListLock.ThreadListEntry, 0LL);
    v10 = v8;
    if ( v6 )
      ExfAcquirePushLockExclusiveEx(
        (unsigned __int64 *)&PopFxBlockingDeviceListLock.ThreadListEntry,
        v8,
        (__int64)&PopFxBlockingDeviceListLock.ThreadListEntry);
    if ( v10 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v10, v9);
      else
        *((_BYTE *)v10 + 10) = 1;
    }
    LOBYTE(PopFxBlockingDeviceListLock.MutantListHead.Blink) = 0;
    while ( 1 )
    {
      Blink = (struct _WORK_QUEUE_ITEM *)PopFxBlockingDeviceListLock.ThreadListEntry.Blink;
      if ( (struct _LIST_ENTRY **)PopFxBlockingDeviceListLock.ThreadListEntry.Blink == &PopFxBlockingDeviceListLock.ThreadListEntry.Blink )
        break;
      if ( (struct _LIST_ENTRY **)PopFxBlockingDeviceListLock.ThreadListEntry.Blink->Blink != &PopFxBlockingDeviceListLock.ThreadListEntry.Blink
        || (Flink = PopFxBlockingDeviceListLock.ThreadListEntry.Blink->Flink,
            PopFxBlockingDeviceListLock.ThreadListEntry.Blink->Flink->Blink != PopFxBlockingDeviceListLock.ThreadListEntry.Blink) )
      {
        __fastfail(3u);
      }
      PopFxBlockingDeviceListLock.ThreadListEntry.Blink = PopFxBlockingDeviceListLock.ThreadListEntry.Blink->Flink;
      Flink->Blink = (struct _LIST_ENTRY *)&PopFxBlockingDeviceListLock.ThreadListEntry.Blink;
      ExQueueWorkItem(Blink + 1, DelayedWorkQueue);
    }
    if ( (_InterlockedExchangeAdd64(
            (volatile signed __int64 *)&PopFxBlockingDeviceListLock.ThreadListEntry.Flink,
            0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PopFxBlockingDeviceListLock.ThreadListEntry);
    KeAbPostRelease((unsigned __int64)&PopFxBlockingDeviceListLock.ThreadListEntry);
  }
}
