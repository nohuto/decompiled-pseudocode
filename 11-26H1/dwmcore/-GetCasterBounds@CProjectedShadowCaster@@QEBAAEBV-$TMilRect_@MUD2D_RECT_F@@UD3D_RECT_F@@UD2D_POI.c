/*
 * XREFs of ?GetCasterBounds@CProjectedShadowCaster@@QEBAAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCVisualTree@@@Z @ 0x1800D711C
 * Callers:
 *     ?GetCasterShadowInputBrush@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEAPEAVCDrawListBrush@@@Z @ 0x1800D2750 (-GetCasterShadowInputBrush@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEAPEAVCDrawListBrush@@@Z.c)
 *     ?UpdateCasterEntry@CProjectedShadowScene@@AEAAJPEBVCVisualTree@@PEAUCasterEntry@1@@Z @ 0x1800D5BEC (-UpdateCasterEntry@CProjectedShadowScene@@AEAAJPEBVCVisualTree@@PEAUCasterEntry@1@@Z.c)
 *     ?Draw@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800D72A0 (-Draw@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?CalculateBounds@CProjectedShadow@@AEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@MPEBVCVisualTree@@@Z @ 0x1800D8A20 (-CalculateBounds@CProjectedShadow@@AEBA-AV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSI.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CProjectedShadowCaster::GetCasterBounds(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // r8
  __int64 v3; // rcx
  __int64 i; // r9
  __int64 *v5; // rax

  v2 = *(_QWORD *)(a1 + 88);
  v3 = v2;
  for ( i = *(_QWORD *)(v2 + 8); !*(_BYTE *)(i + 25); i = *v5 )
  {
    v5 = (__int64 *)(i + 16);
    if ( *(_QWORD *)(i + 32) >= a2 )
    {
      v5 = (__int64 *)i;
      v3 = i;
    }
  }
  if ( *(_BYTE *)(v3 + 25) || a2 < *(_QWORD *)(v3 + 32) )
    v3 = v2;
  return v3 + 60;
}
