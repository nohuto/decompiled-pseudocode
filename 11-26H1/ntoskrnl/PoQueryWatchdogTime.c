/*
 * XREFs of PoQueryWatchdogTime @ 0x1403A9C80
 * Callers:
 *     <none>
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x1402B29C0 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402B4830 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1402B98C0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopComputeWatchdogTimeout @ 0x1403AAE28 (PopComputeWatchdogTimeout.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 */

BOOLEAN __stdcall PoQueryWatchdogTime(PDEVICE_OBJECT Pdo, PULONG SecondsRemaining)
{
  __int64 v2; // r8
  unsigned __int64 v3; // rbx
  BOOLEAN v4; // r14
  _QWORD *DeviceNode; // rsi
  unsigned __int8 CurrentIrql; // di
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v12; // rdi
  KIRQL v13; // r9
  unsigned int v14; // eax
  __int64 v15; // rdi
  KIRQL v16; // r9
  unsigned int v17; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v3 = -1LL;
  v4 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( Pdo )
    DeviceNode = Pdo->DeviceObjectExtension->DeviceNode;
  else
    DeviceNode = 0LL;
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = qword_140F10540;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(Pdo) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(Pdo, 2LL);
  }
  LockHandle.OldIrql = CurrentIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
  {
    v8 = _InterlockedExchange64((volatile __int64 *)qword_140F10540, (__int64)&LockHandle);
    if ( v8 )
      KxWaitForLockOwnerShip((volatile signed __int64)&LockHandle, v8, v2);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented((__int64)&LockHandle, (volatile __int64 *)qword_140F10540);
  }
  v9 = DeviceNode[33];
  stru_140F10070.ApcState.ApcListHead[1].Flink = (struct _LIST_ENTRY *)KeGetCurrentThread();
  if ( v9 )
  {
    v12 = *(_QWORD *)(v9 + 72LL * *(char *)(v9 + 66) + 200);
    v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v12 + 288));
    if ( *(_DWORD *)(v12 + 296) == 1 )
    {
      v14 = PopComputeWatchdogTimeout(v12);
      if ( *(_QWORD *)(v12 + 48) + 10000000LL * v14 != -1 )
        v3 = *(_QWORD *)(v12 + 48) + 10000000LL * v14;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(v12 + 288), v13);
  }
  v10 = DeviceNode[35];
  if ( v10 )
  {
    v15 = *(_QWORD *)(v10 + 72LL * *(char *)(v10 + 66) + 200);
    v16 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v15 + 288));
    if ( *(_DWORD *)(v15 + 296) == 1 )
    {
      v17 = PopComputeWatchdogTimeout(v15);
      if ( *(_QWORD *)(v15 + 48) + 10000000 * (unsigned __int64)v17 < v3 )
        v3 = *(_QWORD *)(v15 + 48) + 10000000LL * v17;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(v15 + 288), v16);
  }
  stru_140F10070.ApcState.ApcListHead[1].Flink = 0LL;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v3 != -1LL )
  {
    v4 = 1;
    if ( MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0] > v3 )
      *SecondsRemaining = 0;
    else
      *SecondsRemaining = (v3 - (MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0])) / 0x989680;
  }
  return v4;
}
