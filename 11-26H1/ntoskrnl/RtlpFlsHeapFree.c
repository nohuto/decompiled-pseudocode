/*
 * XREFs of RtlpFlsHeapFree @ 0x140A8BB64
 * Callers:
 *     RtlpFlsDataCleanup @ 0x140A8B928 (RtlpFlsDataCleanup.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall RtlpFlsHeapFree(void *a1)
{
  ExFreePoolWithTag(a1, 0x6B534C46u);
}
