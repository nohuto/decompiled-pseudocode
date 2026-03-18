/*
 * XREFs of MmUnlockLoadedModuleListExclusive @ 0x14040D280
 * Callers:
 *     MiUpdateDriverLoadInProgress @ 0x14040BD98 (MiUpdateDriverLoadInProgress.c)
 *     PsDispatchIumService @ 0x14040C830 (PsDispatchIumService.c)
 *     MiRemoveLoaderEntry @ 0x14040D04C (MiRemoveLoaderEntry.c)
 *     RtlInsertInvertedFunctionTable @ 0x14040D0C8 (RtlInsertInvertedFunctionTable.c)
 *     RtlRemoveInvertedFunctionTable @ 0x14040D21C (RtlRemoveInvertedFunctionTable.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

void __fastcall MmUnlockLoadedModuleListExclusive(unsigned __int8 a1)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rdi
  __int64 v3; // rsi

  v1 = a1;
  if ( (unsigned __int16)KeNumberNodes > 1u )
  {
    v2 = 384LL;
    v3 = (unsigned int)(unsigned __int16)KeNumberNodes - 1;
    do
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(*(_QWORD *)(v2 + qword_140E2D6B8 + 376) + 704LL));
      v2 += 384LL;
      --v3;
    }
    while ( v3 );
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&PsLoadedModuleSpinLock);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v1);
  __writecr8(v1);
}
