/*
 * XREFs of ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x1800157E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetMaskBounds@CLayerVisual@@QEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180015660 (-GetMaskBounds@CLayerVisual@@QEBAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F.c)
 *     ?GetBoundsWithLayerEffect@CLayerVisual@@QEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180015C34 (-GetBoundsWithLayerEffect@CLayerVisual@@QEBAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POI.c)
 *     ?GetMaskForLayerVisualNoRef@CDropShadow@@QEAAPEAVCBrush@@XZ @ 0x180016420 (-GetMaskForLayerVisualNoRef@CDropShadow@@QEAAPEAVCBrush@@XZ.c)
 *     ?UnionUnsafe@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180022120 (-UnionUnsafe@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CVisual@@UEAAJAEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x180055AC0 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CVisual@@UEAAJAEBVCMILMatrix@@AEBV-$TM.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x1800590B0 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?GetShadowBounds@CLayerVisual@@QEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18005E228 (-GetShadowBounds@CLayerVisual@@QEBAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800797A0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds@CLayerVisual@@QEAAXAEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAV3@2@Z @ 0x180173050 (-CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds@CLayerVisual@@QEAAXAEBVCMILMatr.c)
 *     ?Get2DBoundsUsing2DInverse@CMILMatrix@@QEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180173558 (-Get2DBoundsUsing2DInverse@CMILMatrix@@QEBA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POI.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

__int64 __fastcall CLayerVisual::CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds(
        __int64 a1,
        __int128 *a2,
        __int64 a3,
        int a4,
        _OWORD *a5,
        _OWORD *a6)
{
  int BoundsWithLayerEffect; // eax
  unsigned int v11; // ebx
  FLOAT v13; // xmm1_4
  float left; // xmm0_4
  FLOAT top; // xmm1_4
  float v16; // xmm2_4
  float v17; // xmm4_4
  FLOAT right; // xmm2_4
  float v19; // xmm5_4
  FLOAT bottom; // xmm3_4
  float v21; // xmm6_4
  int v22; // xmm1_4
  int v23; // eax
  int ShadowBounds; // eax
  FLOAT v25; // xmm0_4
  float v26; // xmm1_4
  float v27; // xmm0_4
  float v28; // xmm2_4
  float v29; // xmm0_4
  float v30; // xmm3_4
  float v31; // xmm4_4
  float v32; // xmm0_4
  void *v33; // rdx
  FLOAT v34; // xmm0_4
  float v35; // xmm1_4
  float v36; // xmm0_4
  float v37; // xmm4_4
  float v38; // xmm0_4
  float v39; // xmm3_4
  float v40; // xmm2_4
  float v41; // xmm0_4
  int v42; // xmm1_4
  int v43; // eax
  __int128 v44; // xmm1
  __int128 v45; // xmm0
  int v46; // eax
  __int128 v47; // xmm1
  __int128 v48; // xmm0
  __int128 v49; // xmm1
  __int128 v50; // xmm0
  __int128 v51; // xmm1
  __int128 v52; // xmm0
  __int128 v53; // xmm1
  __int128 v54; // xmm0
  struct D2D_RECT_F v55; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v56; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v57; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v58; // [rsp+68h] [rbp-A0h]
  __int128 v59; // [rsp+78h] [rbp-90h]
  __int128 v60; // [rsp+88h] [rbp-80h]
  int v61; // [rsp+98h] [rbp-70h]
  struct D2D_RECT_F v62; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v63; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v64; // [rsp+C8h] [rbp-40h]
  __int64 v65[2]; // [rsp+D0h] [rbp-38h] BYREF
  int v66; // [rsp+E0h] [rbp-28h]
  int v67; // [rsp+E4h] [rbp-24h]

  if ( !*(_QWORD *)(a1 + 672) )
  {
    v62 = 0LL;
    BoundsWithLayerEffect = CLayerVisual::GetBoundsWithLayerEffect(a1);
    v11 = BoundsWithLayerEffect;
    if ( BoundsWithLayerEffect >= 0 )
    {
      CMILMatrix::Transform2DBoundsHelper<1>(a2, &v62, &v62);
      v13 = *(float *)a3;
      left = v62.left;
      if ( *(float *)a3 > v62.left )
      {
        v62.left = *(FLOAT *)a3;
        left = v13;
      }
      top = v62.top;
      v16 = *(float *)(a3 + 4);
      v17 = v62.top;
      if ( v16 > v62.top )
      {
        v62.top = *(FLOAT *)(a3 + 4);
        top = v16;
        v17 = v16;
      }
      right = v62.right;
      v19 = v62.right;
      if ( v62.right > *(float *)(a3 + 8) )
      {
        v62.right = *(FLOAT *)(a3 + 8);
        right = v62.right;
        v19 = v62.right;
      }
      bottom = v62.bottom;
      v21 = v62.bottom;
      if ( v62.bottom > *(float *)(a3 + 12) )
      {
        v62.bottom = *(FLOAT *)(a3 + 12);
        bottom = v62.bottom;
        v21 = v62.bottom;
      }
      if ( v19 <= left || v21 <= v17 )
      {
        left = 0.0;
        bottom = 0.0;
        right = 0.0;
        v62.bottom = 0.0;
        top = 0.0;
        v62.right = 0.0;
        v62.top = 0.0;
        v62.left = 0.0;
      }
      v65[0] = __PAIR64__(LODWORD(top), LODWORD(left));
      v22 = *(_DWORD *)(a3 + 20);
      v66 = *(_DWORD *)(a3 + 16);
      v67 = v22;
      v65[1] = __PAIR64__(LODWORD(bottom), LODWORD(right));
      v23 = CVisual::CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds(
              a1,
              (_DWORD)a2,
              (unsigned int)v65,
              a4,
              (__int64)a5,
              (__int64)a6);
      v11 = v23;
      if ( v23 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, 0x11Bu, 0LL);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, BoundsWithLayerEffect, 0x109u, 0LL);
    }
    return v11;
  }
  *(_OWORD *)v65 = 0LL;
  v62 = 0LL;
  v56 = 0LL;
  v55 = 0LL;
  ShadowBounds = CLayerVisual::GetShadowBounds(a1, &v55);
  v11 = ShadowBounds;
  if ( ShadowBounds < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ShadowBounds, 0x125u, 0LL);
    return v11;
  }
  if ( *(_BYTE *)(a1 + 697) )
  {
    v47 = *a2;
    v61 = *((_DWORD *)a2 + 16);
    v63 = 0LL;
    v48 = a2[1];
    v57 = v47;
    v49 = a2[2];
    v58 = v48;
    v50 = a2[3];
    v59 = v49;
    v60 = v50;
    if ( (unsigned __int8)CMILMatrix::Get2DBoundsUsing2DInverse(&v57, a3, &v63) )
    {
      if ( *(float *)&v63 > v55.left )
        LODWORD(v55.left) = v63;
      if ( *((float *)&v63 + 1) > v55.top )
        v55.top = *((FLOAT *)&v63 + 1);
      if ( v55.right > *((float *)&v63 + 2) )
        v55.right = *((FLOAT *)&v63 + 2);
      if ( v55.bottom > *((float *)&v63 + 3) )
        v55.bottom = *((FLOAT *)&v63 + 3);
      if ( IsEmpty(&v55) )
      {
        *(_QWORD *)&v55.right = 0LL;
        *(_QWORD *)&v55.left = 0LL;
      }
    }
    v33 = &CMILMatrix::Identity;
  }
  else
  {
    CMILMatrix::Transform2DBoundsHelper<1>(a2, &v55, &v55);
    v25 = *(float *)a3;
    v26 = v55.left;
    if ( *(float *)a3 > v55.left )
    {
      v55.left = *(FLOAT *)a3;
      v26 = v25;
    }
    v27 = *(float *)(a3 + 4);
    v28 = v55.top;
    if ( v27 > v55.top )
    {
      v55.top = *(FLOAT *)(a3 + 4);
      v28 = v27;
    }
    v29 = *(float *)(a3 + 8);
    v30 = v55.right;
    if ( v55.right > v29 )
    {
      v55.right = *(FLOAT *)(a3 + 8);
      v30 = v29;
    }
    v31 = *(float *)(a3 + 12);
    v32 = v55.bottom;
    if ( v55.bottom > v31 )
    {
      v55.bottom = *(FLOAT *)(a3 + 12);
      v32 = v31;
    }
    if ( v30 <= v26 || v32 <= v28 )
    {
      *(_QWORD *)&v55.right = 0LL;
      *(_QWORD *)&v55.left = 0LL;
    }
    LODWORD(v33) = (_DWORD)a2;
  }
  CLayerVisual::CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds(a1, (int)v33, (__int64)v65);
  CLayerVisual::GetMaskBounds(a1, &v62);
  if ( *(_BYTE *)(a1 + 697) )
  {
    v51 = *a2;
    v61 = *((_DWORD *)a2 + 16);
    v63 = 0LL;
    v52 = a2[1];
    v57 = v51;
    v53 = a2[2];
    v58 = v52;
    v54 = a2[3];
    v59 = v53;
    v60 = v54;
    if ( !(unsigned __int8)CMILMatrix::Get2DBoundsUsing2DInverse(&v57, a3, &v63) )
      goto LABEL_42;
    if ( *(float *)&v63 > v62.left )
      LODWORD(v62.left) = v63;
    if ( *((float *)&v63 + 1) > v62.top )
      v62.top = *((FLOAT *)&v63 + 1);
    if ( v62.right > *((float *)&v63 + 2) )
      v62.right = *((FLOAT *)&v63 + 2);
    if ( v62.bottom > *((float *)&v63 + 3) )
      v62.bottom = *((FLOAT *)&v63 + 3);
    if ( !IsEmpty(&v62) )
      goto LABEL_42;
  }
  else
  {
    CMILMatrix::Transform2DBoundsHelper<1>(a2, &v62, &v62);
    v34 = *(float *)a3;
    v35 = v62.left;
    if ( *(float *)a3 > v62.left )
    {
      v62.left = *(FLOAT *)a3;
      v35 = v34;
    }
    v36 = *(float *)(a3 + 4);
    v37 = v62.top;
    if ( v36 > v62.top )
    {
      v62.top = *(FLOAT *)(a3 + 4);
      v37 = v36;
    }
    v38 = *(float *)(a3 + 8);
    v39 = v62.right;
    if ( v62.right > v38 )
    {
      v62.right = *(FLOAT *)(a3 + 8);
      v39 = v38;
    }
    v40 = *(float *)(a3 + 12);
    v41 = v62.bottom;
    if ( v62.bottom > v40 )
    {
      v62.bottom = *(FLOAT *)(a3 + 12);
      v41 = v40;
    }
    if ( v39 > v35 && v41 > v37 )
      goto LABEL_42;
  }
  *(_QWORD *)&v62.right = 0LL;
  *(_QWORD *)&v62.left = 0LL;
LABEL_42:
  TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::UnionUnsafe(&v56, &v62);
  TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::UnionUnsafe(v65, &v62);
  if ( CDropShadow::GetMaskForLayerVisualNoRef(*(CDropShadow **)(a1 + 672)) )
  {
    v44 = *(_OWORD *)v65;
    *a5 = v56;
    *a6 = v44;
  }
  else
  {
    v42 = *(_DWORD *)(a3 + 20);
    *(_OWORD *)v65 = v56;
    v66 = *(_DWORD *)(a3 + 16);
    v67 = v42;
    if ( *(_BYTE *)(a1 + 697) )
    {
      v45 = *(_OWORD *)(a1 + 172);
      v64 = 0LL;
      v63 = v45;
      v46 = CVisual::CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds(
              a1,
              (unsigned int)&CMILMatrix::Identity,
              (unsigned int)v65,
              (unsigned int)&v63,
              (__int64)a5,
              (__int64)a6);
      v11 = v46;
      if ( v46 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v46, 0x18Du, 0LL);
    }
    else
    {
      v43 = CVisual::CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds(
              a1,
              (_DWORD)a2,
              (unsigned int)v65,
              a4,
              (__int64)a5,
              (__int64)a6);
      v11 = v43;
      if ( v43 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v43, 0x19Au, 0LL);
    }
  }
  return v11;
}
