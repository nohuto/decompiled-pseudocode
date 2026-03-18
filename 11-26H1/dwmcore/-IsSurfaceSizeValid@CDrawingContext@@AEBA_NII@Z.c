/*
 * XREFs of ?IsSurfaceSizeValid@CDrawingContext@@AEBA_NII@Z @ 0x1800F8EA0
 * Callers:
 *     ?RenderLayer@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x18005D650 (-RenderLayer@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@@Z.c)
 *     ?PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@11PEAVCResource@@PEA_N@Z @ 0x1800F898C (-PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@U.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDrawingContext::IsSurfaceSizeValid(CDrawingContext *this, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // ecx
  unsigned int v4; // eax

  v3 = *(_DWORD *)(*((_QWORD *)this + 4) + 968LL);
  v4 = 0x4000;
  if ( v3 < 0x4000 )
    v4 = v3;
  return a2 <= v4 && a3 <= v4;
}
