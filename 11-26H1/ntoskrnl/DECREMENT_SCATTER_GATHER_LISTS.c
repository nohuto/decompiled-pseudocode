/*
 * XREFs of DECREMENT_SCATTER_GATHER_LISTS @ 0x140C28BAC
 * Callers:
 *     VfBuildScatterGatherList @ 0x140C29A20 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x140C29D50 (VfBuildScatterGatherListEx.c)
 *     VfGetScatterGatherList @ 0x140C2AB90 (VfGetScatterGatherList.c)
 *     VfGetScatterGatherListEx @ 0x140C2AF10 (VfGetScatterGatherListEx.c)
 *     VfPutScatterGatherList @ 0x140C2B990 (VfPutScatterGatherList.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x140649138 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x140C2D32C (ViHalPreprocessOptions.c)
 */

void __fastcall DECREMENT_SCATTER_GATHER_LISTS(__int64 a1)
{
  int v2; // ebx

  v2 = _InterlockedDecrement((volatile signed __int32 *)(a1 + 200));
  if ( v2 < 0 )
  {
    ViHalPreprocessOptions(
      byte_140E0EABC,
      "Driver has freed too many scatter gather lists %x allocated, %x freed.",
      6,
      *(_DWORD *)(a1 + 196));
    VfReportIssueWithOptions(
      0xE6u,
      6uLL,
      *(unsigned int *)(a1 + 196),
      (unsigned int)(*(_DWORD *)(a1 + 196) - v2),
      0LL,
      byte_140E0EABC);
  }
}
