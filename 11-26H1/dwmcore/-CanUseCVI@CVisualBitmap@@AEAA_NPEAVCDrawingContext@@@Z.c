/*
 * XREFs of ?CanUseCVI@CVisualBitmap@@AEAA_NPEAVCDrawingContext@@@Z @ 0x1800AC224
 * Callers:
 *     ?Draw@CVisualBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800AC0E0 (-Draw@CVisualBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?IsIn3DMode@CDrawingContext@@QEBA_NXZ @ 0x1800AC284 (-IsIn3DMode@CDrawingContext@@QEBA_NXZ.c)
 *     ?EnsureCachedVisualImage@CVisualBitmap@@AEAAJXZ @ 0x18021D48C (-EnsureCachedVisualImage@CVisualBitmap@@AEAAJXZ.c)
 */

char __fastcall CVisualBitmap::CanUseCVI(CVisualBitmap *this, struct CDrawingContext *a2)
{
  char v2; // bl
  CVisualBitmap *v3; // r8

  v2 = 0;
  v3 = this;
  if ( !*((_DWORD *)a2 + 59) || *((_DWORD *)a2 + 60) || *((_DWORD *)a2 + 61) || CDrawingContext::IsIn3DMode(a2) )
    return CVisualBitmap::EnsureCachedVisualImage(v3) >= 0;
  return v2;
}
