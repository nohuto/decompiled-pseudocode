/*
 * XREFs of ??$Width@M@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBAMXZ @ 0x18000AB5C
 * Callers:
 *     ?Width@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBAMXZ @ 0x18000A88C (-Width@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBAMXZ.c)
 * Callees:
 *     <none>
 */

float __fastcall TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::Width<float>(float *a1)
{
  return a1[2] - *a1;
}
