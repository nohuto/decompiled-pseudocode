/*
 * XREFs of ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CEffectBrush@@QEAA_NAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@AEBVCMILMatrix@@0_NPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@4@Z @ 0x180055D84
 * Callers:
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CVisual@@UEAAJAEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x180055AC0 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CVisual@@UEAAJAEBVCMILMatrix@@AEBV-$TM.c)
 * Callees:
 *     ?GetSourceInputBounds@CEffectBrush@@AEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@AEAV?$DynArray@V?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0A@@@@Z @ 0x1800160B8 (-GetSourceInputBounds@CEffectBrush@@AEAAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTAN.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x180029120 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3.c)
 *     ?IsInfinite@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180057D50 (-IsInfinite@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800797A0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800AD250 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?Get2DBoundsUsing2DInverse@CMILMatrix@@QEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180173558 (-Get2DBoundsUsing2DInverse@CMILMatrix@@QEBA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POI.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CEffectBrush::CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds(
        __int64 a1,
        const __m128i *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        __int64 a7,
        __int64 a8)
{
  int SourceInputBounds; // eax
  int v12; // eax
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int32 v17; // xmm2_4
  __int32 v18; // xmm3_4
  __int128 v19; // xmm1
  const struct D2D_RECT_F *v20; // rcx
  const struct D2D_RECT_F *v21; // rcx
  int v23; // r9d
  float v24; // xmm0_4
  float v25; // xmm1_4
  float v26; // xmm1_4
  float v27; // xmm0_4
  float v28; // xmm1_4
  float v29; // xmm1_4
  unsigned int v30; // [rsp+20h] [rbp-E0h]
  __int128 v31; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v32; // [rsp+50h] [rbp-B0h]
  int v33; // [rsp+58h] [rbp-A8h]
  __int128 v34; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v35; // [rsp+70h] [rbp-90h]
  __int128 v36; // [rsp+78h] [rbp-88h] BYREF
  __int64 v37; // [rsp+88h] [rbp-78h]
  _OWORD v38[4]; // [rsp+90h] [rbp-70h] BYREF
  int v39; // [rsp+D0h] [rbp-30h]
  __int128 v40; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v41; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v42; // [rsp+100h] [rbp+0h] BYREF
  unsigned __int64 v43; // [rsp+110h] [rbp+10h]
  __int128 v44; // [rsp+118h] [rbp+18h] BYREF
  unsigned __int64 v45; // [rsp+128h] [rbp+28h]
  __int128 v46; // [rsp+130h] [rbp+30h] BYREF

  if ( !*(_QWORD *)(a1 + 160) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x30Du, 0LL);
    return 0;
  }
  v32 = 0LL;
  v33 = 0;
  v43 = 0LL;
  v31 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  v35 = 0LL;
  v40 = 0LL;
  v37 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  v44 = 0LL;
  v34 = 0LL;
  v36 = 0LL;
  SourceInputBounds = CEffectBrush::GetSourceInputBounds(a1, a2, a3, (__int64)&v31);
  if ( SourceInputBounds < 0 )
  {
    v30 = 718;
    goto LABEL_14;
  }
  v12 = *(_DWORD *)(a4 + 64);
  v13 = *(_OWORD *)(a4 + 16);
  v38[0] = *(_OWORD *)a4;
  v14 = *(_OWORD *)(a4 + 32);
  v39 = v12;
  v38[1] = v13;
  v15 = *(_OWORD *)(a4 + 48);
  v38[2] = v14;
  v38[3] = v15;
  if ( !(unsigned __int8)CMILMatrix::Get2DBoundsUsing2DInverse(v38, a5, &v46) )
  {
    v23 = -2147024809;
    v30 = 736;
LABEL_11:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, v30, 0LL);
    DynArrayImpl<1>::~DynArrayImpl<1>(&v31);
    return 0;
  }
  SourceInputBounds = (*(__int64 (__fastcall **)(_QWORD, __int128 *, const __m128i *, _QWORD, int, __int128 *, __int128 *))(**(_QWORD **)(a1 + 160) + 96LL))(
                        *(_QWORD *)(a1 + 160),
                        &v46,
                        a2,
                        v31,
                        v33,
                        &v40,
                        &v41);
  if ( SourceInputBounds < 0 )
  {
    v30 = 732;
LABEL_14:
    v23 = SourceInputBounds;
    goto LABEL_11;
  }
  v16 = v40;
  if ( a6 )
  {
    v19 = v41;
  }
  else
  {
    v17 = a2[1].m128i_i32[0];
    v18 = a2[1].m128i_i32[1];
    v42 = v40;
    v43 = __PAIR64__(v18, v17);
    v44 = v41;
    v45 = __PAIR64__(v18, v17);
    CMILMatrix::Transform3DBoundsHelper<1>(a4, (float *)&v42, (float *)&v34);
    CMILMatrix::Transform3DBoundsHelper<1>(a4, (float *)&v44, (float *)&v36);
    v16 = v34;
    v19 = v36;
  }
  *(_OWORD *)a7 = v16;
  *(_OWORD *)a8 = v19;
  if ( (unsigned __int8)TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::IsInfinite(a7) )
  {
    if ( *(float *)a5 > *(float *)a7 )
      *(_DWORD *)a7 = *(_DWORD *)a5;
    v24 = *(float *)(a5 + 4);
    if ( v24 > *(float *)(a7 + 4) )
      *(float *)(a7 + 4) = v24;
    v25 = *(float *)(a5 + 8);
    if ( *(float *)(a7 + 8) > v25 )
      *(float *)(a7 + 8) = v25;
    v26 = *(float *)(a5 + 12);
    if ( *(float *)(a7 + 12) > v26 )
      *(float *)(a7 + 12) = v26;
    if ( IsEmpty(v20) )
    {
      *(_QWORD *)(a7 + 8) = 0LL;
      *(_QWORD *)a7 = 0LL;
    }
  }
  if ( (unsigned __int8)TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::IsInfinite(a8) )
  {
    if ( *(float *)a5 > *(float *)a8 )
      *(_DWORD *)a8 = *(_DWORD *)a5;
    v27 = *(float *)(a5 + 4);
    if ( v27 > *(float *)(a8 + 4) )
      *(float *)(a8 + 4) = v27;
    v28 = *(float *)(a5 + 8);
    if ( *(float *)(a8 + 8) > v28 )
      *(float *)(a8 + 8) = v28;
    v29 = *(float *)(a5 + 12);
    if ( *(float *)(a8 + 12) > v29 )
      *(float *)(a8 + 12) = v29;
    if ( IsEmpty(v21) )
    {
      *(_QWORD *)(a8 + 8) = 0LL;
      *(_QWORD *)a8 = 0LL;
    }
  }
  DynArrayImpl<1>::~DynArrayImpl<1>(&v31);
  return 1;
}
