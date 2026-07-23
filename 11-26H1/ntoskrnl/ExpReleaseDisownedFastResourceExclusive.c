/*
 * XREFs of ExpReleaseDisownedFastResourceExclusive @ 0x14041E23C
 * Callers:
 *     ExReleaseDisownedFastResource @ 0x14041DFF0 (ExReleaseDisownedFastResource.c)
 *     ExReleaseDisownedFastResourceExclusive @ 0x1406D2240 (ExReleaseDisownedFastResourceExclusive.c)
 *     ExReleaseDisownedFastResourceShared @ 0x1406D2350 (ExReleaseDisownedFastResourceShared.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ExpCommitWakeFastResource @ 0x140273060 (ExpCommitWakeFastResource.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1402FF300 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140304C50 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 *     ExpRemoveFastOwnerEntryFromThreadList @ 0x14041ECF0 (ExpRemoveFastOwnerEntryFromThreadList.c)
 *     ExpPrepareToWakeFastResourceExclusive @ 0x1404403C0 (ExpPrepareToWakeFastResourceExclusive.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeAbCrossThreadRelease @ 0x1405F9D68 (KeAbCrossThreadRelease.c)
 */

LONG_PTR __fastcall ExpReleaseDisownedFastResourceExclusive(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  __int64 v4; // r13
  int v5; // eax
  LONG_PTR result; // rax
  unsigned __int8 CurrentIrql; // di
  KSPIN_LOCK *v8; // r14
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // [rsp+30h] [rbp-20h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-18h] BYREF
  int v13; // [rsp+98h] [rbp+48h] BYREF
  int v14; // [rsp+A0h] [rbp+50h] BYREF
  volatile signed __int32 *v15; // [rsp+A8h] [rbp+58h] BYREF

  v2 = *(unsigned __int8 *)(a2 + 36);
  v15 = 0LL;
  v11 = 0LL;
  v4 = a1;
  v14 = 0;
  v13 = 0;
  v5 = *(_DWORD *)(a2 + 32);
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( v5 < 2 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a1) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
    }
    v8 = (KSPIN_LOCK *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFEuLL);
    KxAcquireSpinLock(v8 + 217);
    ExpRemoveFastOwnerEntryFromThreadList(a2);
    KxReleaseSpinLock(v8 + 217);
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v4 + 48), &LockHandle);
    *(_BYTE *)(a2 + 36) = 0;
    *(_QWORD *)(a2 + 16) = 0LL;
    --*(_DWORD *)(a2 + 32);
    ExpPrepareToWakeFastResourceExclusive(v4, (unsigned int)&v15, (unsigned int)&v11, (unsigned int)&v14, (__int64)&v13);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    ExpCommitWakeFastResource(&v15, v9, v10, v13);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    if ( (_BYTE)v2 )
      KeAbCrossThreadRelease(v4, v2, v8);
    return ObfDereferenceObjectWithTag(v8, 0x746C6644u);
  }
  else
  {
    result = (unsigned int)(v5 - 1);
    *(_DWORD *)(a2 + 32) = result;
  }
  return result;
}
