/*
 * XREFs of ?GetRectangles@CRectanglesShape@@UEBA_NPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x180180470
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CRectanglesShape::GetRectangles(__int64 a1, __int64 a2, int a3)
{
  __int64 v5; // r9
  unsigned __int64 v6; // rdx
  __int64 v7; // r8
  __int128 v8; // xmm0

  if ( !a3 )
    return 0;
  v5 = *(_QWORD *)(a1 + 16);
  if ( a3 != (unsigned int)((*(_QWORD *)(a1 + 24) - v5) >> 4) )
    return 0;
  v6 = 0LL;
  if ( (*(_QWORD *)(a1 + 24) - v5) >> 4 )
  {
    v7 = 0LL;
    do
    {
      v8 = *(_OWORD *)(v7 + v5);
      ++v6;
      v7 += 16LL;
      *(_OWORD *)(v7 + a2 - 16) = v8;
      v5 = *(_QWORD *)(a1 + 16);
    }
    while ( v6 < (*(_QWORD *)(a1 + 24) - v5) >> 4 );
  }
  return 1;
}
