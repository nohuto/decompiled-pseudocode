/*
 * XREFs of RtlpFlsHeapFree @ 0x14094C468
 * Callers:
 *     RtlpFlsDataCleanup @ 0x14094C22C (RtlpFlsDataCleanup.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall RtlpFlsHeapFree(void *a1)
{
  ExFreePoolWithTag(a1, 0x6B534C46u);
}
