/*
 * XREFs of DifFreeChunks @ 0x140650B2C
 * Callers:
 *     DifTerminateObjectTracking @ 0x14064EFE0 (DifTerminateObjectTracking.c)
 *     DifClean @ 0x14064F160 (DifClean.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x140735860 (RtlpInterlockedPopEntrySList.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void *__fastcall DifFreeChunks(_SLIST_HEADER *a1)
{
  PSLIST_ENTRY v1; // rax

  while ( 1 )
  {
    v1 = RtlpInterlockedPopEntrySList(a1);
    if ( !v1 )
      break;
    ExFreePoolWithTag(v1, 0);
  }
  return memset_0(a1, 0, 0x60uLL);
}
