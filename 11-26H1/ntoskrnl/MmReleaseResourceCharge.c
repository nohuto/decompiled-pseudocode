/*
 * XREFs of MmReleaseResourceCharge @ 0x1404541D0
 * Callers:
 *     SmAcquireReleaseCharges @ 0x140396390 (SmAcquireReleaseCharges.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021C464 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiReturnResident @ 0x140370060 (MiReturnResident.c)
 *     MiSignalCommitSignals @ 0x14042F350 (MiSignalCommitSignals.c)
 *     MiRestockOverCommit @ 0x1404F2AA4 (MiRestockOverCommit.c)
 */

void __fastcall MmReleaseResourceCharge(__int64 *a1, unsigned __int64 a2, char a3, int a4)
{
  __int64 v4; // rdi
  char v5; // r11
  __int64 v6; // rbx
  _DWORD *v7; // rsi
  volatile LONG *v8; // rcx
  unsigned __int64 v9; // rbp
  struct _KPRCB *CurrentPrcb; // r8
  __int64 CachedCommit; // rdx
  __int64 v12; // rcx
  unsigned __int64 v13; // r8
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v4 = *a1;
  v5 = a3;
  v6 = a2;
  if ( (a3 & 2) != 0 && !a4 )
    MiReturnResident(*a1, a2);
  if ( (v5 & 1) == 0 || !v6 )
    return;
  if ( *(_QWORD *)(v4 + 17288) )
  {
    v7 = (_DWORD *)(v4 + 17272);
    v8 = (volatile LONG *)(v4 + 17272);
    if ( KeGetCurrentIrql() == 2 )
    {
      ExAcquireSpinLockExclusiveAtDpcLevel(v8);
      v6 = MiRestockOverCommit(v4, v6);
    }
    else
    {
      v9 = ExAcquireSpinLockExclusive(v8);
      v6 = MiRestockOverCommit(v4, v6);
      if ( (_BYTE)v9 != 17 )
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
          *v7 = 0;
        else
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented((_DWORD *)(v4 + 17272), retaddr);
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v9);
        __writecr8(v9);
LABEL_21:
        if ( !v6 )
          return;
        goto LABEL_22;
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      *v7 = 0;
    else
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented((_DWORD *)(v4 + 17272), retaddr);
    goto LABEL_21;
  }
LABEL_22:
  if ( (ULONG *)v4 != &MiSystemPartition
    || *(_DWORD *)(v4 + 17296)
    || (CurrentPrcb = KeGetCurrentPrcb(),
        _m_prefetchw((const void *)&CurrentPrcb->CachedCommit),
        CachedCommit = CurrentPrcb->CachedCommit,
        (unsigned __int64)(v6 + CachedCommit) > 0x100) )
  {
LABEL_27:
    _InterlockedAdd64((volatile signed __int64 *)(v4 + 23168), -v6);
    v13 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 23104), -v6);
    MiSignalCommitSignals(v4, v13 - v6, v13);
  }
  else
  {
    while ( 1 )
    {
      v12 = _InterlockedCompareExchange(
              (volatile signed __int32 *)&CurrentPrcb->CachedCommit,
              v6 + CachedCommit,
              CachedCommit);
      if ( v12 == CachedCommit )
        break;
      CachedCommit = v12;
      if ( (unsigned __int64)(v12 + v6) > 0x100 )
        goto LABEL_27;
    }
  }
}
