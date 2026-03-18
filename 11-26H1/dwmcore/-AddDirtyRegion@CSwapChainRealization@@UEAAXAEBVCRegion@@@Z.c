/*
 * XREFs of ?AddDirtyRegion@CSwapChainRealization@@UEAAXAEBVCRegion@@@Z @ 0x1802AC9D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CSwapChainRealization::AddDirtyRegion(CSwapChainRealization *this, const struct CRegion *a2)
{
  CBitmapRealization::InvalidateDecodeBitmap((CSwapChainRealization *)((char *)this - 8), 0);
}
