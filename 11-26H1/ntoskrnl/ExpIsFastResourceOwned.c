/*
 * XREFs of ExpIsFastResourceOwned @ 0x1403DB2E0
 * Callers:
 *     ExDeleteFastResource @ 0x1403DB250 (ExDeleteFastResource.c)
 *     PspJobDelete @ 0x1406187E0 (PspJobDelete.c)
 *     DifExDeleteFastResourceWrapper @ 0x140654330 (DifExDeleteFastResourceWrapper.c)
 *     ExReinitializeFastResource @ 0x1406D2180 (ExReinitializeFastResource.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExpIsFastResourceOwned(_QWORD *a1)
{
  return (*a1 & 1) != 0 || (*a1 & 0xFFFFFFFFFFFFFFFCuLL) != 0;
}
