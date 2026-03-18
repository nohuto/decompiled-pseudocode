/*
 * XREFs of KeForceResumeProcess @ 0x140203144
 * Callers:
 *     MiReAcquireCommitFailWorker @ 0x1406E4820 (MiReAcquireCommitFailWorker.c)
 *     PsFreezeProcess @ 0x14077B540 (PsFreezeProcess.c)
 *     PspTerminateProcess @ 0x140956EB0 (PspTerminateProcess.c)
 *     PspExitLastThread @ 0x140A41964 (PspExitLastThread.c)
 * Callees:
 *     KiReleaseProcessLockExclusive @ 0x140203330 (KiReleaseProcessLockExclusive.c)
 *     KiExitDispatcher @ 0x140246C20 (KiExitDispatcher.c)
 *     KiThawSingleThread @ 0x1402C6004 (KiThawSingleThread.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402DED10 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KeForceResumeProcess(__int64 a1)
{
  __int64 v1; // rbx
  _QWORD **v2; // rsi
  char CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // rbp
  volatile LONG *v5; // r14
  __int64 v6; // rdx
  __int64 v7; // r8
  _QWORD *i; // rbx

  v1 = a1;
  v2 = (_QWORD **)(a1 + 48);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v5 = (volatile LONG *)(v1 + 64);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v1 + 64));
  if ( *(_DWORD *)(v1 + 336) + ((*(_DWORD *)(v1 + 136) >> 3) & 1) )
  {
    _interlockedbittestandreset((volatile signed __int32 *)(v1 + 136), 3u);
    *(_DWORD *)(v1 + 336) = 0;
    for ( i = *v2; i != v2; i = (_QWORD *)*i )
    {
      LOBYTE(v7) = 1;
      KiThawSingleThread(CurrentPrcb, i - 95, v7);
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(v5);
    return KiExitDispatcher((_DWORD)CurrentPrcb, 0, 1, 0, CurrentIrql);
  }
  else
  {
    LOBYTE(v6) = CurrentIrql;
    return KiReleaseProcessLockExclusive(v1, v6);
  }
}
