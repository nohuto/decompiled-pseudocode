/*
 * XREFs of IsFreeCommandIdAvailableInSubmissionQueue @ 0x140119E98
 * Callers:
 *     NvmeProcessPendingIoInSpecifiedGroup @ 0x14011D160 (NvmeProcessPendingIoInSpecifiedGroup.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsFreeCommandIdAvailableInSubmissionQueue(union _SLIST_HEADER *a1)
{
  return ExQueryDepthSList(a1 + 4) != 0;
}
