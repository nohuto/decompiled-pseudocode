/*
 * XREFs of ?GetBackdropFlagsDebugString@CVisual@@QEBA?BVDbgString@DwmDbg@@XZ @ 0x18028D5AC
 * Callers:
 *     ?LogTreeWalkEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@PEBVCVisualTree@@AEBVCVisualTreePath@@0@Z @ 0x180215940 (-LogTreeWalkEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@PEBVCVisualTree@@AEBVCVisual.c)
 * Callees:
 *     ??0DbgString@DwmDbg@@QEAA@QEBDZZ @ 0x18002D018 (--0DbgString@DwmDbg@@QEAA@QEBDZZ.c)
 */

char **__fastcall CVisual::GetBackdropFlagsDebugString(__int64 a1, char **a2)
{
  DwmDbg::DbgString::DbgString(
    a2,
    "BackdropsInSubgraph=%d, WindowBackdropsInSubgraph=%d, HasBackdropInput=%d, HasWindowBackdropInput=%d, HasBlurredWall"
    "paperBackdropInput=%d",
    *(_DWORD *)(a1 + 256),
    *(_DWORD *)(a1 + 260),
    *(unsigned __int8 *)(a1 + 102) >> 7,
    (*(unsigned __int8 *)(a1 + 103) >> 1) & 1,
    *(_BYTE *)(a1 + 103) & 1);
  return a2;
}
