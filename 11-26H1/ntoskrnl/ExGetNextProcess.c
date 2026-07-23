/*
 * XREFs of ExGetNextProcess @ 0x14091E590
 * Callers:
 *     ExProcessCounterSetCallback @ 0x14091D960 (ExProcessCounterSetCallback.c)
 *     PfpPrivSourceEnum @ 0x14091DEAC (PfpPrivSourceEnum.c)
 *     ExpGetProcessInformation @ 0x1409DC1B8 (ExpGetProcessInformation.c)
 * Callees:
 *     ObReferenceObjectSafeWithTag @ 0x140259C30 (ObReferenceObjectSafeWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ObOpenObjectByPointer @ 0x140906B20 (ObOpenObjectByPointer.c)
 *     ObCloseHandle @ 0x14091D2C0 (ObCloseHandle.c)
 */

LIST_ENTRY *__fastcall ExGetNextProcess(LIST_ENTRY *Object, char a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rdi
  LIST_ENTRY *p_WaitListHead; // rbp
  int v8; // r14d
  void *v9; // rdx
  LegacyAutoBoost *v10; // rsi
  struct _KTHREAD *i; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  bool v14; // zf
  HANDLE Handle; // [rsp+98h] [rbp+20h] BYREF

  Handle = 0LL;
  while ( 1 )
  {
    CurrentThread = KeGetCurrentThread();
    p_WaitListHead = 0LL;
    v8 = 0;
    --CurrentThread->SpecialApcDisable;
    v10 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&PspActiveProcessLock, 0LL, 0LL, a4);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspActiveProcessLock, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(
        (signed __int64 *)&PspActiveProcessLock,
        0,
        v10,
        (struct _KTHREAD *)&PspActiveProcessLock);
    if ( v10 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v10, v9);
      else
        *((_BYTE *)v10 + 10) = 1;
    }
    for ( i = (struct _KTHREAD *)(Object
                                ? Object[29].Blink
                                : PsAltSystemCallRegistrationLock.WaitBlock[2].WaitListEntry.Flink);
          i != (struct _KTHREAD *)&PsAltSystemCallRegistrationLock.WaitBlockFill11[96];
          i = *(struct _KTHREAD **)&i->Header.Lock )
    {
      p_WaitListHead = &i[-1].SuspendEvent.Header.WaitListHead;
      if ( ObReferenceObjectSafeWithTag((__int64)&i[-1].SuspendEvent.Header.WaitListHead, 0x6E457350u) )
      {
        v8 = 1;
        break;
      }
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspActiveProcessLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&PspActiveProcessLock);
    KeAbPostRelease((unsigned __int64)&PspActiveProcessLock);
    v14 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v14 && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v13, v12);
    if ( Object )
      ObfDereferenceObjectWithTag(Object, 0x6E457350u);
    Object = 0LL;
    if ( v8 )
      Object = p_WaitListHead;
    if ( !Object )
      return 0LL;
    if ( (HIDWORD(Object[31].Flink) & 0x4000000) != 0 )
    {
      if ( !a2 )
        return Object;
      if ( ObOpenObjectByPointer(Object, 0x200u, 0LL, 0x400u, (POBJECT_TYPE)PsProcessType, 1, &Handle) >= 0 )
      {
        ObCloseHandle(Handle, 0);
        return Object;
      }
    }
  }
}
