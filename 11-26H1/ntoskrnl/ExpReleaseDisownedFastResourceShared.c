/*
 * XREFs of ExpReleaseDisownedFastResourceShared @ 0x14041E108
 * Callers:
 *     ExReleaseDisownedFastResource @ 0x14041DFF0 (ExReleaseDisownedFastResource.c)
 *     ExReleaseDisownedFastResourceShared @ 0x1406D2350 (ExReleaseDisownedFastResourceShared.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ExpCommitWakeFastResource @ 0x140273060 (ExpCommitWakeFastResource.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1402FF300 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140304C50 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 *     ExpPrepareToWakeFastResourceShared @ 0x14041E380 (ExpPrepareToWakeFastResourceShared.c)
 *     ExpRemoveFastOwnerEntryFromThreadList @ 0x14041ECF0 (ExpRemoveFastOwnerEntryFromThreadList.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeAbCrossThreadRelease @ 0x1405F9D68 (KeAbCrossThreadRelease.c)
 */

LONG_PTR __fastcall ExpReleaseDisownedFastResourceShared(__int64 a1, __int64 a2)
{
  LONG_PTR result; // rax
  KSPIN_LOCK *v4; // rsi
  __int64 v5; // r15
  unsigned __int8 CurrentIrql; // r14
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v10; // [rsp+30h] [rbp-20h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-18h] BYREF
  int v12; // [rsp+88h] [rbp+38h] BYREF
  int v13; // [rsp+90h] [rbp+40h] BYREF
  volatile signed __int32 *v14; // [rsp+98h] [rbp+48h] BYREF

  result = 0LL;
  v4 = (KSPIN_LOCK *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFEuLL);
  v14 = 0LL;
  v10 = 0LL;
  v13 = 0;
  v5 = a1;
  v12 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( *(int *)(a2 + 32) < 2 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a1) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
    }
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v5 + 48), &LockHandle);
    ExpPrepareToWakeFastResourceShared(v5, (unsigned int)&v14, (unsigned int)&v10, (unsigned int)&v13, (__int64)&v12);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    KxAcquireSpinLock(v4 + 217);
    ExpRemoveFastOwnerEntryFromThreadList(a2);
    *(_QWORD *)(a2 + 24) = 0LL;
    KxReleaseSpinLock(v4 + 217);
    ExpCommitWakeFastResource(&v14, v7, v8, v12);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    if ( *(_BYTE *)(a2 + 36) )
    {
      KeAbCrossThreadRelease(v5, *(unsigned __int8 *)(a2 + 36), v4);
      *(_BYTE *)(a2 + 36) = 0;
    }
    result = ObfDereferenceObjectWithTag(v4, 0x746C6644u);
  }
  if ( (*(_DWORD *)(a2 + 32))-- == 1 )
    *(_QWORD *)(a2 + 16) = v4;
  return result;
}
