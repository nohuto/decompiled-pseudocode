/*
 * XREFs of MiStoreGetWriteSupport @ 0x14039822C
 * Callers:
 *     MiStoreWriteModifiedPagePrepare @ 0x1404091C0 (MiStoreWriteModifiedPagePrepare.c)
 * Callees:
 *     ExAllocatePoolMm @ 0x1403985B0 (ExAllocatePoolMm.c)
 *     RtlpInterlockedPopEntrySList @ 0x140730C90 (RtlpInterlockedPopEntrySList.c)
 */

PSLIST_ENTRY __fastcall MiStoreGetWriteSupport(union _SLIST_HEADER *a1)
{
  PSLIST_ENTRY result; // rax
  __int64 v2; // r9

  result = RtlpInterlockedPopEntrySList(a1 + 92);
  if ( !result )
  {
    v2 = KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0];
    LODWORD(v2) = v2 | 0x80000000;
    return (PSLIST_ENTRY)ExAllocatePoolMm(64LL, 88LL, 1465085261LL, v2);
  }
  return result;
}
