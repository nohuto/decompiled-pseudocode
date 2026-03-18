/*
 * XREFs of NormalizationListEntry_Alloc @ 0x140626378
 * Callers:
 *     RtlpGetNormalization @ 0x14080F254 (RtlpGetNormalization.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 NormalizationListEntry_Alloc()
{
  return ExAllocatePool2(0x100uLL);
}
