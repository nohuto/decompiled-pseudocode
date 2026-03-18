/*
 * XREFs of ?GetRectangles@CRoundedRectangleShape@@UEBA_NPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x180228BB0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetBaseRect@CRoundedRectangleGeometryData@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@XZ @ 0x180171630 (-GetBaseRect@CRoundedRectangleGeometryData@@QEBA-AV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_P.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CRoundedRectangleShape::GetRectangles(_QWORD *a1, _OWORD *a2, int a3)
{
  __int128 v6; // xmm2
  char result; // al
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, _QWORD))(*a1 + 64LL))(a1, 0LL) || a3 != 1 )
    return 0;
  v6 = *(_OWORD *)CRoundedRectangleGeometryData::GetBaseRect(a1[2] + 16LL, (__int64)v8);
  result = 1;
  *a2 = v6;
  return result;
}
