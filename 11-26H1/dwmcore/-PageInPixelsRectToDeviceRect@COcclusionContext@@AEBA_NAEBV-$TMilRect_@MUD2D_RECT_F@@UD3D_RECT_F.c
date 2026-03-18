/*
 * XREFs of ?PageInPixelsRectToDeviceRect@COcclusionContext@@AEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1800CCA58
 * Callers:
 *     ?CalcVisibleArea@COcclusionContext@@QEBA_KAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@H_N@Z @ 0x18024F9F4 (-CalcVisibleArea@COcclusionContext@@QEBA_KAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTA.c)
 *     ?CanDiscardCornerRect@COcclusionContext@@AEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@H_N@Z @ 0x18024FA50 (-CanDiscardCornerRect@COcclusionContext@@AEBA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_P.c)
 * Callees:
 *     ?Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUD2D_RECT_F@@QEAUD2D_POINT_2F@@@Z @ 0x1800757E0 (-Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUD2D_RECT_F@@QEAUD2D_POINT_2F@@@Z.c)
 *     ??$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800B1E20 (--$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$IsTranslateIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800CDD20 (--$IsTranslateIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$SetToBoundsOfUnorderedPointSet@UD2D_POINT_2F@@@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAAXV?$span@$$CBUD2D_POINT_2F@@$0?0@gsl@@@Z @ 0x1800CF010 (--$SetToBoundsOfUnorderedPointSet@UD2D_POINT_2F@@@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeed.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

char __fastcall COcclusionContext::PageInPixelsRectToDeviceRect(__int64 a1, _OWORD *a2, __int64 a3)
{
  char v3; // di
  float *v5; // r10
  __int64 v6; // r11
  unsigned int v7; // xmm3_4
  unsigned int v8; // xmm1_4
  float v9; // xmm2_4
  CMILMatrix *v11; // rcx
  const struct D2D_RECT_F *v12; // r10
  float *v13; // r11
  float v14; // xmm0_4
  float v15; // xmm7_4
  float v16; // xmm3_4
  float v17; // xmm4_4
  float v18; // xmm2_4
  float v19; // xmm1_4
  float v20; // xmm2_4
  __int128 v21; // [rsp+28h] [rbp-29h] BYREF
  _QWORD v22[2]; // [rsp+38h] [rbp-19h] BYREF
  struct D2D_POINT_2F v23; // [rsp+48h] [rbp-9h] BYREF

  v3 = 0;
  v21 = 0LL;
  if ( *(_BYTE *)(a1 + 1124) )
  {
    if ( (unsigned __int8)CMILMatrix::IsTranslateIgnoreZ<1>(a1 + 1132) )
    {
      *(float *)&v7 = *(float *)(v6 + 48) + v5[2];
      *(float *)&v8 = *(float *)(v6 + 52) + v5[1];
      v9 = *(float *)(v6 + 52) + v5[3];
      *(float *)&v21 = *(float *)(v6 + 48) + *v5;
      *(_QWORD *)((char *)&v21 + 4) = __PAIR64__(v7, v8);
      *((float *)&v21 + 3) = v9;
    }
    else if ( CMILMatrix::IsTranslateAndScaleIgnoreZ<1>(v6) )
    {
      v14 = *v13;
      v15 = v13[5];
      v16 = (float)(*v13 * v12->left) + v13[12];
      v17 = (float)(*v13 * v12->right) + v13[12];
      v18 = v15 * v12->bottom;
      v19 = (float)(v15 * v12->top) + v13[13];
      *(float *)&v21 = v16;
      v20 = v18 + v13[13];
      *(_QWORD *)((char *)&v21 + 4) = __PAIR64__(LODWORD(v17), LODWORD(v19));
      *((float *)&v21 + 3) = v20;
      if ( v14 <= 0.0 || v15 <= 0.0 )
      {
        if ( v16 > v17 )
        {
          *(float *)&v21 = v17;
          *((float *)&v21 + 2) = v16;
        }
        if ( v19 > v20 )
        {
          *((float *)&v21 + 1) = v20;
          *((float *)&v21 + 3) = v19;
        }
      }
    }
    else
    {
      CMILMatrix::Transform2DRectToPerspective(v11, v12, &v23);
      v22[0] = 4LL;
      v22[1] = &v23;
      TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::SetToBoundsOfUnorderedPointSet<D2D_POINT_2F>(
        &v21,
        v22);
    }
    *(_OWORD *)a3 = v21;
  }
  else
  {
    *(_OWORD *)a3 = *a2;
  }
  if ( *(float *)(a3 + 8) > *(float *)a3 && *(float *)(a3 + 12) > *(float *)(a3 + 4) )
    return 1;
  return v3;
}
