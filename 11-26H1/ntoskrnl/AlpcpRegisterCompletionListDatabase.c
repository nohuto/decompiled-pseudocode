/*
 * XREFs of AlpcpRegisterCompletionListDatabase @ 0x140A91DA8
 * Callers:
 *     AlpcpInitializeCompletionList @ 0x140A918A8 (AlpcpInitializeCompletionList.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall AlpcpRegisterCompletionListDatabase(
        struct _KTHREAD **a1,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  AutoBoost *v5; // rax
  void *v6; // rdx
  signed __int8 v7; // cf
  AutoBoost *v8; // rdi
  unsigned int v9; // esi
  struct _KTHREAD *i; // rcx
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *v12; // rax

  v5 = (AutoBoost *)KeAbPreAcquire((__int64)&AlpcpMessageLogLock.KernelStack, 0LL, 0LL, a4);
  v7 = _interlockedbittestandset64((volatile signed __int32 *)&AlpcpMessageLogLock.KernelStack, 0LL);
  v8 = v5;
  if ( v7 )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&AlpcpMessageLogLock.KernelStack,
      v5,
      (__int64)&AlpcpMessageLogLock.KernelStack);
  v9 = 0;
  if ( v8 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v8, v6);
    else
      *((_BYTE *)v8 + 10) = 1;
  }
  for ( i = (struct _KTHREAD *)AlpcpMessageLogLock.SchedulingGroup;
        i != (struct _KTHREAD *)&AlpcpMessageLogLock.SchedulingGroup;
        i = *(struct _KTHREAD **)&i->Header.Lock )
  {
    v12 = (struct _LIST_ENTRY *)a1[2];
    if ( i->Header.WaitListHead.Blink > v12 )
      break;
    if ( i->Header.WaitListHead.Blink == v12 )
    {
      if ( i->InitialStack >= a1[6] )
        break;
      if ( i->StackLimit > a1[5] )
        goto LABEL_15;
    }
  }
  Flink = i->Header.WaitListHead.Flink;
  if ( (struct _KTHREAD *)Flink->Flink != i )
    __fastfail(3u);
  *a1 = i;
  v9 = 1;
  a1[1] = (struct _KTHREAD *)Flink;
  Flink->Flink = (struct _LIST_ENTRY *)a1;
  i->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)a1;
  ++LODWORD(AlpcpMessageLogLock.StateSaveArea);
LABEL_15:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&AlpcpMessageLogLock.KernelStack, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&AlpcpMessageLogLock.KernelStack);
  KeAbPostRelease((unsigned __int64)&AlpcpMessageLogLock.KernelStack);
  return v9;
}
