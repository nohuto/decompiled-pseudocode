/*
 * XREFs of MiComputeFlushRange @ 0x14045DF50
 * Callers:
 *     MmTrimSection @ 0x14045DEB0 (MmTrimSection.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021C464 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x14040B5E0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiComputeDataFlushRange @ 0x140480064 (MiComputeDataFlushRange.c)
 *     MiDoesControlAreaHaveUserWritableReferences @ 0x14048CB48 (MiDoesControlAreaHaveUserWritableReferences.c)
 */

__int64 __fastcall MiComputeFlushRange(__int64 *a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  KIRQL v9; // al
  __int64 v10; // rsi
  unsigned __int64 v11; // rbx
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  while ( 1 )
  {
    v9 = ExAcquireSpinLockExclusive(&dword_140E2C940);
    v10 = *a1;
    v11 = v9;
    if ( !*a1 )
      break;
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel((volatile signed __int32 *)(v10 + 72)) )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        dword_140E2C940 = 0;
      else
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140E2C940, retaddr);
      if ( (!a4 || (unsigned int)MiDoesControlAreaHaveUserWritableReferences(v10))
        && (*(_DWORD *)(v10 + 56) & 3) == 0
        && *(_QWORD *)(v10 + 32) )
      {
        return MiComputeDataFlushRange(v10, (unsigned __int8)v11, a2, a3, 0, a5);
      }
      if ( (_BYTE)v11 == 17 )
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
          *(_DWORD *)(v10 + 72) = 0;
        else
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented((_DWORD *)(v10 + 72), retaddr);
        return 0LL;
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        *(_DWORD *)(v10 + 72) = 0;
      else
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented((_DWORD *)(v10 + 72), retaddr);
      goto LABEL_42;
    }
    if ( (_BYTE)v11 == 17 )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        dword_140E2C940 = 0;
      else
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140E2C940, retaddr);
    }
    else
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        dword_140E2C940 = 0;
      else
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140E2C940, retaddr);
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v11);
      __writecr8(v11);
    }
  }
  if ( v9 == 17 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      dword_140E2C940 = 0;
    else
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140E2C940, retaddr);
    return 0LL;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    dword_140E2C940 = 0;
  else
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140E2C940, retaddr);
LABEL_42:
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v11);
  __writecr8(v11);
  return 0LL;
}
