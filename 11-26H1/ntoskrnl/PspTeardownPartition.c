/*
 * XREFs of PspTeardownPartition @ 0x140803A80
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     PsDereferencePartition @ 0x1403836F0 (PsDereferencePartition.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     PsTerminateMinimalProcess @ 0x1407FFFD8 (PsTerminateMinimalProcess.c)
 *     ExpPartitionDestroy @ 0x140845D08 (ExpPartitionDestroy.c)
 *     MiDeletePartition @ 0x14086F1C4 (MiDeletePartition.c)
 *     ObCloseHandle @ 0x14091D2C0 (ObCloseHandle.c)
 */

LONG_PTR __fastcall PspTeardownPartition(_QWORD *Object, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  void *v5; // rcx
  void *v6; // rcx
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v8; // rax
  void *v9; // rdx
  AutoBoost *v10; // r14
  __int64 v11; // r15
  struct _KPROCESS *v12; // r14
  void *v13; // r12
  __int64 v14; // r8
  struct _KLOCK_ENTRIES *v15; // r9

  if ( Object == PspSystemPartition )
    KeBugCheckEx(0x18Eu, 1uLL, (ULONG_PTR)Object, 0LL, 0LL);
  v5 = (void *)*Object;
  if ( v5 )
  {
    MiDeletePartition(v5);
    *Object = 0LL;
  }
  v6 = (void *)Object[2];
  if ( v6 )
  {
    ExpPartitionDestroy(v6);
    Object[2] = 0LL;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v8 = (AutoBoost *)KeAbPreAcquire((__int64)(Object + 14), 0LL, 0LL, a4);
  v10 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)Object + 28, 0LL) )
    ExfAcquirePushLockExclusiveEx(Object + 14, v8, (__int64)(Object + 14));
  if ( v10 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v10, v9);
    else
      *((_BYTE *)v10 + 10) = 1;
  }
  v11 = Object[9];
  v12 = (struct _KPROCESS *)Object[15];
  v13 = (void *)Object[16];
  Object[9] = MmBadPointer;
  Object[15] = MmBadPointer;
  Object[16] = 0LL;
  if ( (_InterlockedExchangeAdd64(Object + 14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(Object + 14);
  KeAbPostRelease((unsigned __int64)(Object + 14));
  KeLeaveCriticalRegion();
  if ( v12 )
  {
    PsTerminateMinimalProcess(v12, 0, v14, v15);
    KeWaitForSingleObject(v12, Executive, 0, 0, 0LL);
    ObfDereferenceObject(v12);
    ObCloseHandle(v13, 0);
  }
  PsDereferencePartition(v11);
  return ObfDereferenceObjectWithTag(Object, 0x64726148u);
}
