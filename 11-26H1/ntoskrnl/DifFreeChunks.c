/*
 * XREFs of DifFreeChunks @ 0x14064CF4C
 * Callers:
 *     DifTerminateObjectTracking @ 0x14064B400 (DifTerminateObjectTracking.c)
 *     DifClean @ 0x14064B580 (DifClean.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x140730C90 (RtlpInterlockedPopEntrySList.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void *__fastcall DifFreeChunks(union _SLIST_HEADER *a1)
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
