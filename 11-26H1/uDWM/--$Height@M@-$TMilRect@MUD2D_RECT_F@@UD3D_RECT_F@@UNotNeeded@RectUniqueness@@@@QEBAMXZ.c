/*
 * XREFs of ??$Height@M@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBAMXZ @ 0x18000AB70
 * Callers:
 *     ?Height@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBAMXZ @ 0x18000A898 (-Height@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBAMXZ.c)
 * Callees:
 *     <none>
 */

float __fastcall TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::Height<float>(__int64 a1)
{
  return *(float *)(a1 + 12) - *(float *)(a1 + 4);
}
