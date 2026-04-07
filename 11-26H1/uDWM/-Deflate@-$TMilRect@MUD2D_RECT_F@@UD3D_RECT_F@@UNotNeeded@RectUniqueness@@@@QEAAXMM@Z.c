/*
 * XREFs of ?Deflate@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z @ 0x1800CD08C
 * Callers:
 *     ?UpdateOpacityAndLocation@CTouchPressHoldVisual@@IEAAJXZ @ 0x1800CD870 (-UpdateOpacityAndLocation@CTouchPressHoldVisual@@IEAAJXZ.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18000A9B8 (-IsEmpty@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 */

bool __fastcall TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::Deflate(float *a1, float a2, float a3)
{
  bool result; // al
  _QWORD *v4; // rcx

  *a1 = a2 + *a1;
  a1[1] = a3 + a1[1];
  a1[2] = a1[2] - a2;
  a1[3] = a1[3] - a3;
  result = TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::IsEmpty(a1);
  if ( result )
  {
    v4[1] = 0LL;
    *v4 = 0LL;
  }
  return result;
}
