/*
 * XREFs of ExpConvertFastResourceExclusiveToShared @ 0x14041EBC4
 * Callers:
 *     ExConvertFastResourceExclusiveToShared @ 0x14041DE80 (ExConvertFastResourceExclusiveToShared.c)
 *     ExpFastResourceLegacyConvertExclusiveToShared @ 0x14041E9E8 (ExpFastResourceLegacyConvertExclusiveToShared.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeWakeWaitChain @ 0x140272C70 (KeWakeWaitChain.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1402FF300 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140304C50 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExpRemoveFastOwnerEntryFromThreadList @ 0x14041ECF0 (ExpRemoveFastOwnerEntryFromThreadList.c)
 *     ExpUpdateLockWordForRelease @ 0x14041ED30 (ExpUpdateLockWordForRelease.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall ExpConvertFastResourceExclusiveToShared(__int64 a1, unsigned __int64 a2)
{
  struct _KTHREAD *CurrentThread; // r14
  __int64 v4; // rsi
  unsigned __int8 CurrentIrql; // bl
  unsigned __int64 *p_LastXStateSaveDebugInfo; // rax
  struct _KTHREAD **SparePtr; // rcx
  __int64 v8; // r8
  __int64 *v9; // rax
  __int64 v10; // rdx
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF
  __int64 *v13; // [rsp+60h] [rbp+8h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  CurrentThread = KeGetCurrentThread();
  v4 = a1;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
  }
  --*(_DWORD *)(v4 + 96);
  ExpRemoveFastOwnerEntryFromThreadList(v4 + 64);
  *(_BYTE *)(a2 + 37) &= ~2u;
  *(_DWORD *)(a2 + 32) = 1;
  *(_QWORD *)(a2 + 24) = v4;
  *(_BYTE *)(a2 + 36) = *(_BYTE *)(v4 + 100);
  p_LastXStateSaveDebugInfo = &CurrentThread[1].LastXStateSaveDebugInfo;
  *(_BYTE *)(v4 + 100) = 0;
  SparePtr = (struct _KTHREAD **)CurrentThread[1].WaitBlock[3].SparePtr;
  if ( SparePtr[1] != (struct _KTHREAD *)&CurrentThread[1].LastXStateSaveDebugInfo )
    __fastfail(3u);
  *(_QWORD *)a2 = SparePtr;
  *(_QWORD *)(a2 + 8) = p_LastXStateSaveDebugInfo;
  SparePtr[1] = (struct _KTHREAD *)a2;
  *p_LastXStateSaveDebugInfo = a2;
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v4 + 48), &LockHandle);
  *(_QWORD *)(v4 + 80) = 0LL;
  LOBYTE(v8) = 1;
  v9 = *(__int64 **)(v4 + 8);
  *(_QWORD *)(v4 + 8) = 0LL;
  v10 = (unsigned int)(*(_DWORD *)(v4 + 56) + 1);
  v13 = v9;
  *(_DWORD *)(v4 + 56) = 0;
  ExpUpdateLockWordForRelease(v4, v10, v8);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  KeWakeWaitChain(&v13, 0, 0LL);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
