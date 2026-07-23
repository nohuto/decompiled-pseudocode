/*
 * XREFs of MmUnlockLoadedModuleListExclusive @ 0x14042A1AC
 * Callers:
 *     MiUpdateDriverLoadInProgress @ 0x1404294E0 (MiUpdateDriverLoadInProgress.c)
 *     MiRemoveLoaderEntry @ 0x140429F78 (MiRemoveLoaderEntry.c)
 *     RtlInsertInvertedFunctionTable @ 0x140429FF4 (RtlInsertInvertedFunctionTable.c)
 *     RtlRemoveInvertedFunctionTable @ 0x14042A148 (RtlRemoveInvertedFunctionTable.c)
 *     PsDispatchIumService @ 0x140518438 (PsDispatchIumService.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
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
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(*(_QWORD *)(v2 + qword_140E2D838 + 376) + 704LL));
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
