/*
 * XREFs of MiComputeFlushRange @ 0x140464F90
 * Callers:
 *     MmTrimSection @ 0x140464EF0 (MmTrimSection.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021AAD4 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140416FD0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiComputeDataFlushRange @ 0x1404866EC (MiComputeDataFlushRange.c)
 *     MiDoesControlAreaHaveUserWritableReferences @ 0x1404935B8 (MiDoesControlAreaHaveUserWritableReferences.c)
 */

__int64 __fastcall MiComputeFlushRange(__int64 *a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  KIRQL v9; // al
  __int64 v10; // rsi
  unsigned __int64 v11; // rbx
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  while ( 1 )
  {
    v9 = ExAcquireSpinLockExclusive(&dword_140E2C7C0);
    v10 = *a1;
    v11 = v9;
    if ( !*a1 )
      break;
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel((volatile signed __int32 *)(v10 + 72)) )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
        dword_140E2C7C0 = 0;
      else
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140E2C7C0, retaddr);
      if ( (!a4 || (unsigned int)MiDoesControlAreaHaveUserWritableReferences(v10))
        && (*(_DWORD *)(v10 + 56) & 3) == 0
        && *(_QWORD *)(v10 + 32) )
      {
        return MiComputeDataFlushRange(v10, (unsigned __int8)v11, a2, a3, 0, a5);
      }
      if ( (_BYTE)v11 == 17 )
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
          *(_DWORD *)(v10 + 72) = 0;
        else
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented((_DWORD *)(v10 + 72), retaddr);
        return 0LL;
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
        *(_DWORD *)(v10 + 72) = 0;
      else
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented((_DWORD *)(v10 + 72), retaddr);
      goto LABEL_42;
    }
    if ( (_BYTE)v11 == 17 )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
        dword_140E2C7C0 = 0;
      else
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140E2C7C0, retaddr);
    }
    else
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
        dword_140E2C7C0 = 0;
      else
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140E2C7C0, retaddr);
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v11);
      __writecr8(v11);
    }
  }
  if ( v9 == 17 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
      dword_140E2C7C0 = 0;
    else
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140E2C7C0, retaddr);
    return 0LL;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
    dword_140E2C7C0 = 0;
  else
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140E2C7C0, retaddr);
LABEL_42:
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v11);
  __writecr8(v11);
  return 0LL;
}
