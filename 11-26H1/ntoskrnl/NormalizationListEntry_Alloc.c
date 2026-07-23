/*
 * XREFs of NormalizationListEntry_Alloc @ 0x1406293C8
 * Callers:
 *     RtlpGetNormalization @ 0x140814CE4 (RtlpGetNormalization.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 NormalizationListEntry_Alloc()
{
  return ExAllocatePool2(0x100uLL);
}
