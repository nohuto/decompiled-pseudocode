/*
 * XREFs of MmLockLoadedModuleListExclusive @ 0x14052D084
 * Callers:
 *     MiUpdateDriverLoadInProgress @ 0x14040BD98 (MiUpdateDriverLoadInProgress.c)
 *     PsDispatchIumService @ 0x14040C830 (PsDispatchIumService.c)
 *     MiRemoveLoaderEntry @ 0x14040D04C (MiRemoveLoaderEntry.c)
 *     RtlInsertInvertedFunctionTable @ 0x14040D0C8 (RtlInsertInvertedFunctionTable.c)
 *     RtlRemoveInvertedFunctionTable @ 0x14040D21C (RtlRemoveInvertedFunctionTable.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402DED10 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 */

unsigned __int8 MmLockLoadedModuleListExclusive()
{
  unsigned int v0; // edi
  unsigned __int8 CurrentIrql; // bl
  unsigned __int8 v2; // cl
  unsigned int v3; // eax
  __int64 v4; // rdi
  __int64 v5; // rsi

  v0 = (unsigned __int16)KeNumberNodes;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 0xFu )
  {
    v2 = KeGetCurrentIrql();
    if ( v2 != 15 )
      __writecr8(0xFuLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(v2, 15);
  }
  ExAcquireSpinLockExclusiveAtDpcLevel(&PsLoadedModuleSpinLock);
  v3 = v0;
  if ( v0 > 1 )
  {
    v4 = 384LL;
    v5 = v3 - 1;
    do
    {
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(*(_QWORD *)(v4 + qword_140E2D6B8 + 376) + 704LL));
      v4 += 384LL;
      --v5;
    }
    while ( v5 );
  }
  return CurrentIrql;
}
