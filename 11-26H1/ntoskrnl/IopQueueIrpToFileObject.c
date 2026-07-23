/*
 * XREFs of IopQueueIrpToFileObject @ 0x140409810
 * Callers:
 *     IopSynchronousServiceTail @ 0x1409837C4 (IopSynchronousServiceTail.c)
 *     IopIsIosbInLockedRange @ 0x140A9E950 (IopIsIosbInLockedRange.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     KiReleaseSpinLockInstrumented @ 0x140308CAC (KiReleaseSpinLockInstrumented.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObFastReferenceObject @ 0x1404099C0 (ObFastReferenceObject.c)
 */

char __fastcall IopQueueIrpToFileObject(__int64 a1, __int64 a2, char a3)
{
  KSPIN_LOCK *v3; // rsi
  KIRQL v7; // al
  unsigned __int64 v8; // rbp
  _QWORD *v9; // rdx
  __int64 v10; // rax
  _QWORD *v11; // rcx
  struct _KTHREAD *CurrentThread; // r14
  _KPROCESS *Process; // rdi
  void *v15; // rcx
  signed __int64 v16; // rax
  signed __int64 v17; // r8
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v3 = (KSPIN_LOCK *)(a2 + 184);
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 184));
  v8 = v7;
  if ( (*(_DWORD *)(a2 + 80) & 0x400) != 0 || a3 && !*(_QWORD *)(a2 + 176) )
  {
    KeReleaseSpinLock(v3, v7);
    return 0;
  }
  v9 = (_QWORD *)(a2 + 192);
  v10 = *(_QWORD *)(a2 + 192);
  v11 = (_QWORD *)(a1 + 32);
  if ( *(_QWORD *)(v10 + 8) != a2 + 192 )
    __fastfail(3u);
  *v11 = v10;
  *(_QWORD *)(a1 + 40) = v9;
  *(_QWORD *)(v10 + 8) = v11;
  *v9 = v11;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  if ( (IopPerfIoTrackingLock.QuantumTarget & 1) == 0 || KeGetCurrentThread()->ApcStateIndex == 1 )
  {
    v15 = CurrentThread->ApcState.Process;
  }
  else
  {
    if ( ObFastReferenceObject(&CurrentThread[1].SchedulerApcFill5[72], 1883467593LL) )
      goto LABEL_10;
    v15 = (void *)((unsigned __int64)CurrentThread[1].SchedulerApc.SystemArgument2 & 0xFFFFFFFFFFFFFFF0uLL);
    if ( !v15 )
      goto LABEL_10;
  }
  ObfReferenceObjectWithTag(v15, 0x70436F49u);
LABEL_10:
  ObfReferenceObjectWithTag(CurrentThread, 0x746C6644u);
  *(_DWORD *)(a1 + 16) |= 0x2000u;
  *(_QWORD *)(a1 + 88) = Process;
  v16 = *(_QWORD *)(a1 + 88);
  do
  {
    v17 = v16;
    v16 = _InterlockedCompareExchange64(
            (volatile signed __int64 *)(a1 + 88),
            v16 & 0xFFFFFFFFFFFFFFF9uLL | ((v16 & 6) + 2),
            v16);
  }
  while ( v17 != v16 );
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    _InterlockedAnd64((volatile signed __int64 *)v3, 0LL);
  else
    KiReleaseSpinLockInstrumented((volatile signed __int64 *)v3, retaddr);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v8);
  __writecr8(v8);
  return 1;
}
