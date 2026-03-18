/*
 * XREFs of ?GetTouchTargetBounds@CVisual@@IEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@XZ @ 0x18016E340
 * Callers:
 *     ?HitTestContent@CWindowNode@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z @ 0x1800251B0 (-HitTestContent@CWindowNode@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?HitTestContent@CVisual@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z @ 0x18016DE30 (-HitTestContent@CVisual@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisual::GetTouchTargetBounds(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int v4; // r8d
  int *v5; // rcx

  v2 = *(_QWORD *)(a1 + 216);
  if ( (*(_DWORD *)(v2 + 4) & 0x100000) != 0 )
  {
    v4 = *(_DWORD *)(v2 + 12);
    v5 = (int *)(v2 + 12);
    if ( (v4 & 0x7F000000) != 0xC000000 )
    {
      do
      {
        v5 = (int *)((char *)v5 + (v4 & 0xFFFFFF) + 4);
        v4 = *v5;
      }
      while ( (*v5 & 0x7F000000) != 0xC000000 );
    }
    *(_OWORD *)a2 = *(_OWORD *)(v5 + 1);
  }
  else
  {
    *(_QWORD *)a2 = 0LL;
    *(_QWORD *)(a2 + 8) = 0LL;
  }
  return a2;
}
