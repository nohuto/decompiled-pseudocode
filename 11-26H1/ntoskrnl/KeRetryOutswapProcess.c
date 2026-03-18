/*
 * XREFs of KeRetryOutswapProcess @ 0x1404AA98C
 * Callers:
 *     MiAskKeToOutswapProcess @ 0x1404D8150 (MiAskKeToOutswapProcess.c)
 *     MmReleaseCommitForMemResetPages @ 0x1406E54FC (MmReleaseCommitForMemResetPages.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiAcquireKobjectLockSafe @ 0x140277760 (KiAcquireKobjectLockSafe.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 */

int __fastcall KeRetryOutswapProcess(volatile signed __int32 *a1, __int64 a2, __int64 a3)
{
  volatile signed __int32 *v3; // rdi
  unsigned __int8 CurrentIrql; // si
  __int64 v5; // rdx
  int v6; // ebx
  void *SListFaultAddress; // rax
  _QWORD *v8; // rdi
  void *v9; // rcx

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
  LODWORD(SListFaultAddress) = CurrentIrql;
  __writecr8(CurrentIrql);
  if ( v6 == 1 )
  {
    v8 = v3 + 30;
    _m_prefetchw(&KiSupervisorXStateFeaturesLock.SListFaultAddress);
    SListFaultAddress = KiSupervisorXStateFeaturesLock.SListFaultAddress;
    do
    {
      *v8 = SListFaultAddress;
      v9 = SListFaultAddress;
      SListFaultAddress = (void *)_InterlockedCompareExchange64(
                                    (volatile signed __int64 *)&KiSupervisorXStateFeaturesLock.SListFaultAddress,
                                    (signed __int64)v8,
                                    (signed __int64)SListFaultAddress);
    }
    while ( SListFaultAddress != v9 );
    if ( !SListFaultAddress )
      LODWORD(SListFaultAddress) = KeSetEvent((PRKEVENT)&KiSupervisorXStateFeaturesLock.StackLimit, 10, 0);
  }
  return (int)SListFaultAddress;
}
