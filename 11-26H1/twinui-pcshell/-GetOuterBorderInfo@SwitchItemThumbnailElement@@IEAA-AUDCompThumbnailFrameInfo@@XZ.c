/*
 * XREFs of ?GetOuterBorderInfo@SwitchItemThumbnailElement@@IEAA?AUDCompThumbnailFrameInfo@@XZ @ 0x1804D35EC
 * Callers:
 *     ?CreateDragVisual@SwitchItemThumbnailElement@@UEAAJPEAUISwitchThumbnailFactory@@PEAUIDCompThumbnail@@AEBUCRect@Geometry@@PEAPEAUIUnknown@@@Z @ 0x1804D3180 (-CreateDragVisual@SwitchItemThumbnailElement@@UEAAJPEAUISwitchThumbnailFactory@@PEAUIDCompThumbn.c)
 *     ?UpdateThumbnailBorder@SwitchItemThumbnailElement@@IEAAXXZ @ 0x1804D3DA0 (-UpdateThumbnailBorder@SwitchItemThumbnailElement@@IEAAXXZ.c)
 * Callees:
 *     ?GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z @ 0x18016DB4C (-GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z.c)
 *     ?IsHighContrast@@YAHXZ @ 0x1801E0D10 (-IsHighContrast@@YAHXZ.c)
 *     ??B?$HighContrastAwareOpacity@M@@QEBAMXZ @ 0x1804C96D8 (--B-$HighContrastAwareOpacity@M@@QEBAMXZ.c)
 *     ?_CalcButtonRenderMode@CMultitaskingViewButtonElement@@IEAA?AW4ButtonRenderMode@1@XZ @ 0x1804CF028 (-_CalcButtonRenderMode@CMultitaskingViewButtonElement@@IEAA-AW4ButtonRenderMode@1@XZ.c)
 */

__int64 __fastcall SwitchItemThumbnailElement::GetOuterBorderInfo(__int64 a1, __int64 a2)
{
  int v2; // eax
  int v5; // eax

  v2 = *(_DWORD *)(a1 + 412);
  *(_QWORD *)(a2 + 4) = 0LL;
  *(_DWORD *)a2 = v2;
  *(float *)(a2 + 8) = HighContrastAwareOpacity<float>::operator float((float *)(a1 + 424));
  LOBYTE(v5) = CMultitaskingViewButtonElement::_CalcButtonRenderMode(a1);
  if ( v5 )
  {
    *(_DWORD *)(a2 + 4) = CImmersiveColor::GetColor(0xB4u);
  }
  else if ( (unsigned int)IsHighContrast() )
  {
    *(_DWORD *)(a2 + 8) = 0;
  }
  return a2;
}
