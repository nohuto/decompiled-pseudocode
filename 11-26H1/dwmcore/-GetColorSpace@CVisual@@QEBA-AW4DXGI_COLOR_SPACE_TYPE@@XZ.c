/*
 * XREFs of ?GetColorSpace@CVisual@@QEBA?AW4DXGI_COLOR_SPACE_TYPE@@XZ @ 0x180122188
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800831C0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@11PEA_N@Z @ 0x1800C6AD0 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisual::GetColorSpace(CVisual *this)
{
  __int64 v1; // rdx
  int *v2; // rdx
  int i; // r8d

  v1 = *((_QWORD *)this + 27);
  if ( (*(_DWORD *)(v1 + 4) & 0x4000000) == 0 )
    return 4LL;
  v2 = (int *)(v1 + 12);
  for ( i = *v2; (*v2 & 0x7F000000) != 0x6000000; i = *v2 )
    v2 = (int *)((char *)v2 + (i & 0xFFFFFF) + 4);
  return (unsigned int)v2[1];
}
