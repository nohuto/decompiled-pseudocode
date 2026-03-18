/*
 * XREFs of ExpIsFastResourceOwned @ 0x1403D8310
 * Callers:
 *     ExDeleteFastResource @ 0x1403D8280 (ExDeleteFastResource.c)
 *     PspJobDelete @ 0x140615810 (PspJobDelete.c)
 *     DifExDeleteFastResourceWrapper @ 0x140650750 (DifExDeleteFastResourceWrapper.c)
 *     ExReinitializeFastResource @ 0x1406CE150 (ExReinitializeFastResource.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExpIsFastResourceOwned(_QWORD *a1)
{
  return (*a1 & 1) != 0 || (*a1 & 0xFFFFFFFFFFFFFFFCuLL) != 0;
}
