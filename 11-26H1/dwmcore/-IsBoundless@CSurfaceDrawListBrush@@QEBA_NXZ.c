/*
 * XREFs of ?IsBoundless@CSurfaceDrawListBrush@@QEBA_NXZ @ 0x18003D470
 * Callers:
 *     ?EnumerateBrushes@CNineGridDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX@Z2@Z @ 0x18003B6F0 (-EnumerateBrushes@CNineGridDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX.c)
 *     ?CreateRenderingEffect@CBrushRenderingEffectFactory@@UEAAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@PEAPEAVCRenderingEffect@@@Z @ 0x18007CCB0 (-CreateRenderingEffect@CBrushRenderingEffectFactory@@UEAAJV-$span@PEBVCDrawListBrush@@$0-0@gsl@@.c)
 * Callees:
 *     <none>
 */

bool __fastcall CSurfaceDrawListBrush::IsBoundless(CSurfaceDrawListBrush *this)
{
  return *((float *)this + 30) == -3.4028235e38
      && *((float *)this + 31) == -3.4028235e38
      && *((float *)this + 32) == 3.4028235e38
      && *((float *)this + 33) == 3.4028235e38;
}
