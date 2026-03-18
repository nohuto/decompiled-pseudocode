/*
 * XREFs of VidMmUnblockUEFIFrameBufferRanges @ 0x14004D910
 * Callers:
 *     <none>
 * Callees:
 *     ?UnblockUEFIFrameBufferRanges@VIDMM_GLOBAL@@QEAAJPEBU_DXGK_QUERYSEGMENTMEMORYSTATE@@@Z @ 0x1400A24A4 (-UnblockUEFIFrameBufferRanges@VIDMM_GLOBAL@@QEAAJPEBU_DXGK_QUERYSEGMENTMEMORYSTATE@@@Z.c)
 */

__int64 __fastcall VidMmUnblockUEFIFrameBufferRanges(VIDMM_GLOBAL *a1, const struct _DXGK_QUERYSEGMENTMEMORYSTATE *a2)
{
  return VIDMM_GLOBAL::UnblockUEFIFrameBufferRanges(a1, a2);
}
