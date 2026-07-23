/*
 * XREFs of KeRegisterObjectNotification @ 0x1403E2A14
 * Callers:
 *     NtAssociateWaitCompletionPacket @ 0x140515EB0 (NtAssociateWaitCompletionPacket.c)
 *     ExpWorkerFactoryManagerThread @ 0x1406D73E0 (ExpWorkerFactoryManagerThread.c)
 *     NtCreateWorkerFactory @ 0x140A95E40 (NtCreateWorkerFactory.c)
 *     ExpWorkerFactoryInitialization @ 0x140CED3E0 (ExpWorkerFactoryInitialization.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiExitDispatcher @ 0x140248580 (KiExitDispatcher.c)
 *     KiInsertQueueInternal @ 0x1402743F0 (KiInsertQueueInternal.c)
 *     KiAcquireKobjectLockSafe @ 0x140276CD0 (KiAcquireKobjectLockSafe.c)
 *     KiWaitSatisfyOther @ 0x1403E2B14 (KiWaitSatisfyOther.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

char __fastcall KeRegisterObjectNotification(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdi
  __int64 v6; // rdx
  unsigned __int8 CurrentIrql; // si
  __int64 *v8; // rcx
  __int64 v9; // r8

  *(_WORD *)(a3 + 16) = 1026;
  *(_QWORD *)(a3 + 24) = a2;
  v5 = a1;
  *(_QWORD *)(a3 + 32) = a1;
  v6 = 2LL;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
  }
  KiAcquireKobjectLockSafe((volatile signed __int32 *)v5, v6, a3);
  if ( *(int *)(v5 + 4) > 0 )
  {
    KiWaitSatisfyOther(v5);
    *(_BYTE *)(a3 + 17) = 5;
    KiInsertQueueInternal(a2, (_QWORD *)a3, v9);
    _InterlockedAnd((volatile signed __int32 *)v5, 0xFFFFFF7F);
    KiExitDispatcher((__int64)KeGetCurrentPrcb(), 0LL, 1u, 0, CurrentIrql);
    return 1;
  }
  else
  {
    v8 = *(__int64 **)(v5 + 16);
    if ( *v8 != v5 + 8 )
      __fastfail(3u);
    *(_QWORD *)a3 = v5 + 8;
    *(_QWORD *)(a3 + 8) = v8;
    *v8 = a3;
    *(_QWORD *)(v5 + 16) = a3;
    _InterlockedAnd((volatile signed __int32 *)v5, 0xFFFFFF7F);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    return 0;
  }
}
