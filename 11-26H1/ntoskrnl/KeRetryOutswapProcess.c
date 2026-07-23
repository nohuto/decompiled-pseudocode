/*
 * XREFs of KeRetryOutswapProcess @ 0x1404A401C
 * Callers:
 *     MiAskKeToOutswapProcess @ 0x1404D1920 (MiAskKeToOutswapProcess.c)
 *     MmReleaseCommitForMemResetPages @ 0x1406EA1AC (MmReleaseCommitForMemResetPages.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiAcquireKobjectLockSafe @ 0x140276CD0 (KiAcquireKobjectLockSafe.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

int __fastcall KeRetryOutswapProcess(volatile signed __int32 *a1, __int64 a2, __int64 a3)
{
  volatile signed __int32 *v3; // rdi
  unsigned __int8 CurrentIrql; // si
  __int64 v5; // rdx
  int v6; // ebx
  signed __int64 QuadPart; // rax
  signed __int64 *v8; // rdi
  signed __int64 v9; // rcx

  v3 = a1;
  CurrentIrql = KeGetCurrentIrql();
  v5 = 2LL;
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
  }
  KiAcquireKobjectLockSafe(v3, v5, a3);
  v6 = v3[66] & 7;
  if ( v6 == 1 )
    _InterlockedXor(v3 + 66, 7u);
  _InterlockedAnd(v3, 0xFFFFFF7F);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  LODWORD(QuadPart) = CurrentIrql;
  __writecr8(CurrentIrql);
  if ( v6 == 1 )
  {
    v8 = (signed __int64 *)(v3 + 30);
    _m_prefetchw(&KiSupervisorXStateFeaturesLock.Timer.DueTime);
    QuadPart = KiSupervisorXStateFeaturesLock.Timer.DueTime.QuadPart;
    do
    {
      *v8 = QuadPart;
      v9 = QuadPart;
      QuadPart = _InterlockedCompareExchange64(
                   (volatile signed __int64 *)&KiSupervisorXStateFeaturesLock.Timer.DueTime.QuadPart,
                   (signed __int64)v8,
                   QuadPart);
    }
    while ( QuadPart != v9 );
    if ( !QuadPart )
      LODWORD(QuadPart) = KeSetEvent((PRKEVENT)&KiSupervisorXStateFeaturesLock.Timer.TimerListEntry, 10, 0);
  }
  return QuadPart;
}
