/*
 * XREFs of ?GetBoundsFromInputs@CArithmeticCompositeEffect@@MEBAXAEBV?$DynArray@UInputBoundsPair@@$0A@@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180287580
 * Callers:
 *     <none>
 * Callees:
 *     ?UnionUnsafe@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180022120 (-UnionUnsafe@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800797A0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?GetBoundsFromInputs@CFilterEffect@@MEBAXAEBV?$DynArray@UInputBoundsPair@@$0A@@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801D9160 (-GetBoundsFromInputs@CFilterEffect@@MEBAXAEBV-$DynArray@UInputBoundsPair@@$0A@@@PEAV-$TMilRect_@.c)
 */

void __fastcall CArithmeticCompositeEffect::GetBoundsFromInputs(_DWORD *a1, _DWORD *a2, float *a3)
{
  __int32 v3; // xmm2_4
  int v4; // xmm3_4
  struct D2D_RECT_F *v5; // r10
  float **v6; // r11
  float *v7; // rcx
  float v8; // xmm4_4
  float v9; // xmm0_4
  float v10; // xmm1_4
  float v11; // xmm1_4
  _QWORD *v12; // r10
  int v13; // xmm3_4
  float *v14; // rdx

  if ( a2[6] != 2 )
    goto LABEL_29;
  COERCE_FLOAT(v3 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]);
  v4 = a1[88] & v3;
  if ( *(float *)&v4 <= 0.0000099999997
    || COERCE_FLOAT(a1[89] & v3) >= 0.0000099999997
    || COERCE_FLOAT(a1[90] & v3) >= 0.0000099999997
    || COERCE_FLOAT(a1[91] & v3) >= 0.0000099999997 )
  {
    if ( *(float *)&v4 < 0.0000099999997 )
    {
      v13 = a1[89] & v3;
      if ( *(float *)&v13 > 0.0000099999997
        && COERCE_FLOAT(a1[90] & v3) < 0.0000099999997
        && COERCE_FLOAT(a1[91] & v3) < 0.0000099999997 )
      {
        v14 = (float *)(*(_QWORD *)a2 + 4LL);
LABEL_21:
        TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::UnionUnsafe(a3, v14);
        return;
      }
      if ( *(float *)&v13 < 0.0000099999997 )
      {
        if ( COERCE_FLOAT(a1[90] & v3) > 0.0000099999997 && COERCE_FLOAT(a1[91] & v3) < 0.0000099999997 )
        {
          v14 = (float *)(*(_QWORD *)a2 + 24LL);
          goto LABEL_21;
        }
        if ( *(float *)&v13 < 0.0000099999997
          && COERCE_FLOAT(a1[90] & v3) < 0.0000099999997
          && COERCE_FLOAT(a1[91] & v3) < 0.0000099999997 )
        {
          return;
        }
      }
    }
LABEL_29:
    CFilterEffect::GetBoundsFromInputs((__int64)a1, (__int64)a2, a3);
    return;
  }
  TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::UnionUnsafe(a3, (float *)(*(_QWORD *)a2 + 4LL));
  v7 = *v6;
  v8 = (*v6)[6];
  if ( v8 > v5->left )
    v5->left = v8;
  v9 = v7[7];
  if ( v9 > v5->top )
    v5->top = v9;
  v10 = v7[8];
  if ( v5->right > v10 )
    v5->right = v10;
  v11 = v7[9];
  if ( v5->bottom > v11 )
    v5->bottom = v11;
  if ( IsEmpty(v5) )
  {
    v12[1] = 0LL;
    *v12 = 0LL;
  }
}
