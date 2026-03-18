/*
 * XREFs of ?CalcRootBounds@CVisual@@QEBAJPEAV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B62F0
 * Callers:
 *     ?Create@CSubVisualTree@@KAJPEAVCVisual@@PEAPEAVCVisualTree@@@Z @ 0x1800D1010 (-Create@CSubVisualTree@@KAJPEAVCVisual@@PEAPEAVCVisualTree@@@Z.c)
 *     ?Initialize@CSubVisualTree@@MEAAJXZ @ 0x1801DA7D0 (-Initialize@CSubVisualTree@@MEAAJXZ.c)
 * Callees:
 *     ?IsAutomaticBoundsToLocalSpaceEnabled@CLayerVisual@@QEBA_NXZ @ 0x18005E3C4 (-IsAutomaticBoundsToLocalSpaceEnabled@CLayerVisual@@QEBA_NXZ.c)
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x18005F520 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180061980 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x1800B5B10 (--$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800B6780 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisual::CalcRootBounds(CLayerVisual *this, __int64 a2)
{
  char v4; // si
  __int64 v5; // rax
  int v6; // xmm4_4
  int v7; // xmm5_4
  _DWORD *v8; // rdx
  CGeometry *v9; // rcx
  __int64 result; // rax
  int ShapeData; // eax
  int v12; // ebx
  void (__fastcall ***v13)(_QWORD, __int64); // rcx
  int v14; // esi
  int v15; // eax
  float v16; // xmm0_4
  float v17; // xmm2_4
  float v18; // xmm7_4
  float v19; // xmm6_4
  float v20; // xmm0_4
  float v21; // xmm5_4
  float v22; // xmm0_4
  float v23; // xmm1_4
  float v24; // xmm0_4
  int v25; // edx
  unsigned int v26; // ecx
  __int64 v27; // rax
  _BYTE *v28; // r8
  __int64 v29; // rcx
  CTransform3D **v30; // r14
  CTransform3D *v31; // r14
  const struct CMILMatrix *Matrix; // rax
  bool v33; // zf
  void (__fastcall ***v34)(_QWORD, __int64); // [rsp+30h] [rbp-D0h] BYREF
  char v35; // [rsp+38h] [rbp-C8h]
  _OWORD v36[4]; // [rsp+40h] [rbp-C0h] BYREF
  int v37; // [rsp+80h] [rbp-80h]
  _OWORD v38[4]; // [rsp+90h] [rbp-70h] BYREF
  int v39; // [rsp+D0h] [rbp-30h]
  __m128i si128; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v41; // [rsp+F0h] [rbp-10h] BYREF

  v4 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(CLayerVisual *, __int64))(*(_QWORD *)this + 64LL))(this, 71LL)
    && (*((_QWORD *)this + 85) || *((_QWORD *)this + 84))
    && CLayerVisual::IsAutomaticBoundsToLocalSpaceEnabled(this) )
  {
    v4 = 1;
  }
  v5 = *(_QWORD *)this;
  v41 = 0LL;
  (*(void (__fastcall **)(CLayerVisual *, char *, __int128 *))(v5 + 320))(this, (char *)this + 172, &v41);
  v6 = *((_DWORD *)this + 47);
  v7 = *((_DWORD *)this + 48);
  *(_OWORD *)a2 = v41;
  *(_DWORD *)(a2 + 16) = v6;
  *(_DWORD *)(a2 + 20) = v7;
  v8 = (_DWORD *)*((_QWORD *)this + 28);
  if ( (*v8 & 0x1000000) == 0 )
    goto LABEL_3;
  v27 = (unsigned int)v8[1];
  v28 = v8 + 2;
  v29 = 0LL;
  if ( (_DWORD)v27 )
  {
    while ( *v28 != 8 )
    {
      v29 = (unsigned int)(v29 + 1);
      ++v28;
      if ( (unsigned int)v29 >= (unsigned int)v27 )
        goto LABEL_49;
    }
  }
  else
  {
LABEL_49:
    if ( (unsigned int)v29 >= (unsigned int)v27 )
    {
      v30 = 0LL;
      goto LABEL_39;
    }
  }
  v30 = (CTransform3D **)((char *)&v8[2 * v29] + ((v27 + 15) & 0xFFFFFFFFFFFFFFF8uLL));
LABEL_39:
  v31 = *v30;
  if ( !(*(unsigned __int8 (__fastcall **)(CTransform3D *, __int64))(*(_QWORD *)v31 + 64LL))(v31, 148LL) )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(CTransform3D *, __int64))(*(_QWORD *)v31 + 64LL))(v31, 48LL) )
      goto LABEL_3;
    v31 = (CTransform3D *)*((_QWORD *)v31 + 11);
  }
  if ( v31 )
  {
    Matrix = CTransform3D::GetMatrix(v31, (const struct D2D_SIZE_F *)((char *)this + 140));
    v33 = *((_DWORD *)this + 27) == 0;
    v38[0] = *(_OWORD *)Matrix;
    v38[1] = *((_OWORD *)Matrix + 1);
    v38[2] = *((_OWORD *)Matrix + 2);
    v38[3] = *((_OWORD *)Matrix + 3);
    v39 = *((_DWORD *)Matrix + 16);
    if ( v33 || v4 )
    {
      v36[0] = _mm_load_si128((const __m128i *)&_xmm);
      v36[3] = _mm_load_si128((const __m128i *)&_xmm);
      v37 = 10657;
      v36[2] = 0LL;
      v36[1] = _mm_load_si128((const __m128i *)&_xmm);
      CMILMatrix::Multiply((CMILMatrix *)v38, (const struct CMILMatrix *)v36);
    }
    CMILMatrix::Transform3DBoundsHelper<0>((__int64)v38, (float *)a2, (float *)a2);
  }
LABEL_3:
  v9 = (CGeometry *)*((_QWORD *)this + 30);
  if ( !v9 || (*((_BYTE *)this + 101) & 0x40) != 0 || *((_DWORD *)this + 27) )
    return 0LL;
  v34 = 0LL;
  v35 = 0;
  si128 = 0LL;
  ShapeData = CGeometry::GetShapeData(v9, (const struct D2D_SIZE_F *)((char *)this + 140), (struct CShapePtr *)&v34);
  v12 = ShapeData;
  if ( ShapeData < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, ShapeData, 0x62u, 0LL);
    goto LABEL_13;
  }
  v13 = v34;
  v14 = -2003304309;
  if ( v34 )
  {
    v15 = ((__int64 (__fastcall *)(void (__fastcall ***)(_QWORD, __int64), __m128i *, _QWORD))(*v34)[6])(
            v34,
            &si128,
            0LL);
    v14 = v15;
    v12 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0x137u, 0LL);
LABEL_12:
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0x63u, 0LL);
LABEL_13:
      v13 = v34;
      goto LABEL_16;
    }
    v13 = v34;
  }
  v12 = v14;
  if ( v14 < 0 )
    goto LABEL_12;
LABEL_16:
  if ( v12 == -2003304438 || v12 == -2003304309 )
  {
    v12 = 0;
    si128 = _mm_load_si128((const __m128i *)&_xmm);
  }
  if ( v35 && v13 )
    (**v13)(v13, 1LL);
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x5D5u, 0LL);
    return (unsigned int)v12;
  }
  else
  {
    v16 = *(float *)si128.m128i_i32;
    v17 = *(float *)(a2 + 16);
    v18 = *(float *)a2;
    if ( *(float *)si128.m128i_i32 > *(float *)a2 )
    {
      *(_DWORD *)a2 = si128.m128i_i32[0];
      v18 = v16;
    }
    v19 = *(float *)(a2 + 4);
    v20 = *(float *)&si128.m128i_i32[1];
    if ( *(float *)&si128.m128i_i32[1] > v19 )
    {
      *(_DWORD *)(a2 + 4) = si128.m128i_i32[1];
      v19 = v20;
    }
    v21 = *(float *)(a2 + 8);
    v22 = *(float *)&si128.m128i_i32[2];
    if ( v21 > *(float *)&si128.m128i_i32[2] )
    {
      *(_DWORD *)(a2 + 8) = si128.m128i_i32[2];
      v21 = v22;
    }
    v23 = *(float *)(a2 + 12);
    v24 = *(float *)&si128.m128i_i32[3];
    if ( v23 > *(float *)&si128.m128i_i32[3] )
    {
      *(_DWORD *)(a2 + 12) = si128.m128i_i32[3];
      v23 = v24;
    }
    v25 = (*(float *)(a2 + 20) <= v17) + 1;
    if ( v21 > v18 )
      v25 = *(float *)(a2 + 20) <= v17;
    result = (unsigned int)v12;
    v26 = v25 + 1;
    if ( v23 > v19 )
      v26 = v25;
    if ( v26 > 1 )
    {
      *(_QWORD *)(a2 + 16) = 0LL;
      *(_QWORD *)(a2 + 8) = 0LL;
      *(_QWORD *)a2 = 0LL;
    }
  }
  return result;
}
