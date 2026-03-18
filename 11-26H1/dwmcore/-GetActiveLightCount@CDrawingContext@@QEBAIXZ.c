/*
 * XREFs of ?GetActiveLightCount@CDrawingContext@@QEBAIXZ @ 0x180236754
 * Callers:
 *     ?Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18006C720 (-Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ @ 0x1800105B0 (-GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ.c)
 */

__int64 __fastcall CDrawingContext::GetActiveLightCount(CDrawingContext *this)
{
  struct CVisual *CurrentVisual; // rax
  __int64 v2; // rcx
  int v3; // r9d
  const struct CVisualTree *v4; // r8

  CurrentVisual = CDrawingContext::GetCurrentVisual(this);
  LOBYTE(v3) = 1;
  return CLightStack::GetActiveLightCount((CLightStack *)(v2 + 416), CurrentVisual, v4, v3);
}
