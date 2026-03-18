/*
 * XREFs of ?EnumerateBrushes@CPrimitiveGroupDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX@Z2@Z @ 0x180038190
 * Callers:
 *     <none>
 * Callees:
 *     ??R?$default_delete@VCSurfaceDrawListBrush@@@std@@QEBAXPEAVCSurfaceDrawListBrush@@@Z @ 0x18003731C (--R-$default_delete@VCSurfaceDrawListBrush@@@std@@QEBAXPEAVCSurfaceDrawListBrush@@@Z.c)
 *     ?CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMatrix3x3@@PEAPEAV1@@Z @ 0x180038840 (-CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMat.c)
 *     ?ShouldUseTexCoordClamp@CPrimitiveGroupDrawListGenerator@@SA_NAEBUD2D_RECT_F@@@Z @ 0x180038A6C (-ShouldUseTexCoordClamp@CPrimitiveGroupDrawListGenerator@@SA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z @ 0x180038C0C (-ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x180038E20 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x18003D4D0 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180061980 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetSnapToPixelsReference@CSurfaceDrawListBrush@@QEAAXPEBUD2D_VECTOR_2F@@@Z @ 0x1801B56B0 (-SetSnapToPixelsReference@CSurfaceDrawListBrush@@QEAAXPEBUD2D_VECTOR_2F@@@Z.c)
 *     sqrtf_0 @ 0x1802B978C (sqrtf_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPrimitiveGroupDrawListBrush::EnumerateBrushes(
        CPrimitiveGroupDrawListBrush *this,
        const struct CDrawingContext *a2,
        int (*a3)(const struct CDrawListBrush *, void *),
        void *a4)
{
  int v4; // esi
  int v5; // eax
  __int64 v7; // rcx
  __int64 v8; // rax
  __m128i v9; // xmm1
  __m128i v10; // xmm0
  __m128i v11; // xmm1
  int v12; // xmm0_4
  int v13; // xmm1_4
  int v14; // xmm1_4
  int v15; // xmm0_4
  unsigned int v16; // xmm1_4
  bool v17; // r13
  bool v18; // r12
  __int64 i; // r15
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // r9
  __int64 v23; // rbx
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int64 v32; // rbx
  unsigned int v33; // r11d
  bool v34; // cf
  __int64 v35; // rcx
  __int64 v37; // r10
  float v38; // xmm4_4
  char v39; // al
  float v40; // xmm3_4
  int v41; // ecx
  float v42; // xmm2_4
  float v43; // xmm0_4
  float v44; // xmm1_4
  int v45; // eax
  int v46; // r14d
  __m128 v47; // xmm6
  int v48; // xmm1_4
  int v49; // xmm0_4
  int v50; // xmm1_4
  int v51; // xmm0_4
  int v52; // xmm1_4
  CSurfaceDrawListBrush *v53; // rcx
  CSurfaceDrawListBrush *v54; // rax
  CSurfaceDrawListBrush *v55; // rax
  _OWORD *v56; // rcx
  int v57; // eax
  float v58; // xmm3_4
  float v59; // xmm2_4
  FLOAT v60; // xmm0_4
  FLOAT v61; // xmm2_4
  FLOAT v62; // xmm1_4
  FLOAT v63; // xmm3_4
  CSurfaceDrawListBrush *v64; // [rsp+38h] [rbp-D0h] BYREF
  __int16 v65; // [rsp+48h] [rbp-C0h] BYREF
  char v66; // [rsp+4Ah] [rbp-BEh]
  unsigned int v67; // [rsp+58h] [rbp-B0h]
  CSurfaceDrawListBrush **v68; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v69[40]; // [rsp+68h] [rbp-A0h]
  _BYTE v70[20]; // [rsp+90h] [rbp-78h]
  CSurfaceDrawListBrush **v71; // [rsp+A8h] [rbp-60h] BYREF
  CSurfaceDrawListBrush *v72; // [rsp+B0h] [rbp-58h] BYREF
  int v73; // [rsp+B8h] [rbp-50h]
  int v74; // [rsp+BCh] [rbp-4Ch]
  __int64 v75; // [rsp+C0h] [rbp-48h]
  __m128 v76; // [rsp+C8h] [rbp-40h]
  struct D2D_RECT_F v77; // [rsp+D8h] [rbp-30h] BYREF
  void *v78; // [rsp+E8h] [rbp-20h]
  int (*v79)(const struct CDrawListBrush *, void *); // [rsp+F0h] [rbp-18h]
  __int64 v80; // [rsp+F8h] [rbp-10h]
  __m128i si128; // [rsp+108h] [rbp+0h] BYREF
  __m128i v82; // [rsp+118h] [rbp+10h]
  __m128i v83; // [rsp+128h] [rbp+20h]
  __m128i v84; // [rsp+138h] [rbp+30h]
  int v85; // [rsp+148h] [rbp+40h]
  struct D2D_RECT_F v86; // [rsp+158h] [rbp+50h] BYREF
  __int64 v87; // [rsp+168h] [rbp+60h]
  __int128 v88; // [rsp+170h] [rbp+68h] BYREF
  __int128 v89; // [rsp+180h] [rbp+78h]
  __int128 v90; // [rsp+190h] [rbp+88h]
  __int128 v91; // [rsp+1A0h] [rbp+98h]
  int v92; // [rsp+1B0h] [rbp+A8h]
  __int128 v93; // [rsp+1B8h] [rbp+B0h]
  __int128 v94; // [rsp+1C8h] [rbp+C0h]
  __int128 v95; // [rsp+1D8h] [rbp+D0h]
  __int128 v96; // [rsp+1E8h] [rbp+E0h]
  __int128 v97; // [rsp+1F8h] [rbp+F0h]
  __int128 v98; // [rsp+208h] [rbp+100h]
  __int128 v99; // [rsp+218h] [rbp+110h]
  __int128 v100; // [rsp+228h] [rbp+120h]
  __int128 v101; // [rsp+238h] [rbp+130h]

  v4 = 0;
  v5 = *((_DWORD *)a2 + 72);
  v78 = a4;
  v79 = a3;
  v85 = 0;
  if ( v5 )
  {
    v7 = (unsigned int)(v5 - 1);
    v8 = *((_QWORD *)a2 + 35);
    v9 = *(__m128i *)(68 * v7 + v8 + 16);
    si128 = *(__m128i *)(68 * v7 + v8);
    v10 = *(__m128i *)(68 * v7 + v8 + 32);
    v82 = v9;
    v11 = *(__m128i *)(68 * v7 + v8 + 48);
    v85 = *(_DWORD *)(68 * v7 + v8 + 64);
  }
  else
  {
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    v10 = _mm_load_si128((const __m128i *)&_xmm);
    v82 = _mm_load_si128((const __m128i *)&_xmm);
    v11 = _mm_load_si128((const __m128i *)&_xmm);
    BYTE1(v85) = BYTE1(v85) & 0xC0 | 0x29;
    LOBYTE(v85) = -86;
  }
  v83 = v10;
  LODWORD(v68) = *((_DWORD *)this + 2);
  v12 = *((_DWORD *)this + 4);
  v84 = v11;
  v13 = *((_DWORD *)this + 3);
  *(_DWORD *)&v69[8] = v12;
  HIDWORD(v68) = v13;
  v14 = *((_DWORD *)this + 5);
  *(_OWORD *)&v69[16] = 0LL;
  *(_QWORD *)&v70[12] = 1065353216LL;
  v15 = *((_DWORD *)this + 6);
  *(_DWORD *)&v69[12] = v14;
  v16 = *((_DWORD *)this + 7);
  *(_DWORD *)v70 = v15;
  *(_QWORD *)&v70[4] = v16;
  *(_QWORD *)v69 = 0LL;
  *(_QWORD *)&v69[32] = 1065353216LL;
  v89 = *(_OWORD *)&v69[8];
  *(_WORD *)&v70[16] = 10248;
  v88 = (unsigned __int64)v68;
  v92 = *(_DWORD *)&v70[16];
  v91 = *(_OWORD *)v70;
  v90 = *(_OWORD *)&v69[24];
  CMILMatrix::Multiply((CMILMatrix *)&v88, (const struct CMILMatrix *)&si128);
  v17 = COERCE_FLOAT(COERCE_UNSIGNED_INT(
                       sqrtf_0((float)(*((float *)&v88 + 1) * *((float *)&v88 + 1)) + (float)(*(float *)&v88
                                                                                            * *(float *)&v88))
                     - 1.0) & _xmm) < 0.000081380211;
  v18 = COERCE_FLOAT(COERCE_UNSIGNED_INT(
                       sqrtf_0((float)(*((float *)&v89 + 1) * *((float *)&v89 + 1)) + (float)(*(float *)&v89
                                                                                            * *(float *)&v89))
                     - 1.0) & _xmm) < 0.000081380211;
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    v20 = *((_QWORD *)this + 9);
    v21 = *(_QWORD *)(v20 + 16);
    if ( (unsigned int)i >= *(_DWORD *)(v21 + 8) )
      return (unsigned int)v4;
    v22 = *(_QWORD *)v21 + 144 * i;
    v23 = **(_QWORD **)(v20 + 24);
    v75 = v22;
    v24 = *(_OWORD *)(v22 + 16);
    v93 = *(_OWORD *)v22;
    v25 = *(_OWORD *)(v22 + 32);
    v94 = v24;
    v26 = *(_OWORD *)(v22 + 48);
    v95 = v25;
    v27 = *(_OWORD *)(v22 + 64);
    v96 = v26;
    v28 = *(_OWORD *)(v22 + 80);
    v97 = v27;
    v29 = *(_OWORD *)(v22 + 96);
    v98 = v28;
    v30 = *(_OWORD *)(v22 + 112);
    v99 = v29;
    v31 = *(_OWORD *)(v22 + 128);
    v100 = v30;
    v101 = v31;
    v32 = (unsigned int)v94 + v23;
    v33 = 100 * v93 + 48;
    v67 = v33;
    v34 = *(_DWORD *)v22 == 0;
    v80 = v32 + v33 * (DWORD1(v94) - 1);
    if ( !v34 && *(_DWORD *)(v22 + 40) < *(_DWORD *)(v20 + 32) )
      break;
LABEL_7:
    ;
  }
  while ( 1 )
  {
    v37 = *(_QWORD *)(*((_QWORD *)this + 9) + 80LL) + 24LL * *(unsigned int *)(v22 + 40);
    if ( *((_BYTE *)this + 52) )
    {
      v38 = *((float *)this + 8);
      if ( (float)(v38 - *(float *)v32) > 0.0000011920929 )
      {
        v39 = 1;
      }
      else
      {
        v38 = *(float *)v32;
        v39 = 0;
      }
      v40 = *((float *)this + 9);
      v41 = v39 != 0 ? 0x3000000 : 0;
      if ( (float)(v40 - *(float *)(v32 + 4)) <= 0.0000011920929 )
        v40 = *(float *)(v32 + 4);
      else
        v41 |= 3u;
      v42 = *((float *)this + 10);
      v43 = *(float *)(v32 + 8) - v42;
      if ( v43 <= 0.0000011920929 )
        v42 = *(float *)(v32 + 8);
      v44 = *((float *)this + 11);
      v45 = v41 | 0x300;
      if ( v43 <= 0.0000011920929 )
        v45 = v41;
      if ( (float)(*(float *)(v32 + 12) - v44) <= 0.0000011920929 )
        v44 = *(float *)(v32 + 12);
      else
        v45 |= 0x30000u;
      v76.m128_u64[0] = __PAIR64__(LODWORD(v40), LODWORD(v38));
      v46 = *((_DWORD *)this + 12) & v45 | *(_DWORD *)(v32 + 44) & ~v45;
      v76.m128_u64[1] = __PAIR64__(LODWORD(v44), LODWORD(v42));
      v47 = v76;
    }
    else
    {
      v47 = (__m128)_mm_loadu_si128((const __m128i *)v32);
      v46 = *(_DWORD *)(v32 + 44);
      LODWORD(v44) = _mm_shuffle_ps(v47, v47, 255).m128_u32[0];
      LODWORD(v42) = _mm_shuffle_ps(v47, v47, 170).m128_u32[0];
      v38 = v47.m128_f32[0];
      LODWORD(v40) = _mm_shuffle_ps(v47, v47, 85).m128_u32[0];
      v76 = v47;
    }
    if ( v42 <= v38 || v44 <= v40 )
      goto LABEL_41;
    if ( v17 )
    {
      if ( v18 )
      {
        v48 = *(_DWORD *)(v32 + 68);
        LODWORD(v68) = *(_DWORD *)(v32 + 64);
        v49 = *(_DWORD *)(v32 + 72);
        HIDWORD(v68) = v48;
        v50 = *(_DWORD *)(v32 + 76);
        *(_DWORD *)&v69[4] = v49;
        v51 = *(_DWORD *)(v32 + 80);
        *(_DWORD *)&v69[8] = v50;
        v52 = *(_DWORD *)(v32 + 84);
        goto LABEL_29;
      }
    }
    else if ( v18 )
    {
      v58 = 0.0;
      goto LABEL_48;
    }
    v58 = FLOAT_N0_5;
LABEL_48:
    v59 = v17 ? 0.0 : FLOAT_N0_5;
    v60 = *(float *)v32 - v59;
    v61 = v59 + *(float *)(v32 + 8);
    v62 = *(float *)(v32 + 4) - v58;
    v63 = v58 + *(float *)(v32 + 12);
    v87 = 0LL;
    v77.left = v60;
    v77.right = v61;
    v86 = 0LL;
    v77.top = v62;
    v77.bottom = v63;
    D2DMatrixHelper::ComputeRectangleTransform((D2DMatrixHelper *)v32, &v77, &v86, (struct D2D_MATRIX_3X2_F *)v22);
    D2D1::Matrix3x2F::SetProduct(
      (D2D1::Matrix3x2F *)&v71,
      (const struct D2D1::Matrix3x2F *)&v86,
      (const struct D2D1::Matrix3x2F *)(v32 + 64));
    *(_QWORD *)&v69[4] = v72;
    v51 = v73;
    v52 = v74;
    v68 = v71;
LABEL_29:
    *(_DWORD *)&v69[20] = v52;
    v71 = &v64;
    v65 = *((_WORD *)this + 40);
    v66 = *((_BYTE *)this + 82);
    *(_DWORD *)&v69[16] = v51;
    *(_DWORD *)&v69[24] = 1065353216;
    *(_DWORD *)&v69[12] = 0;
    *(_DWORD *)v69 = 0;
    v64 = 0LL;
    v72 = 0LL;
    LOBYTE(v73) = 1;
    v4 = CSurfaceDrawListBrush::CreateWithTextureTransform(v37, &v65, &v68, &v72);
    if ( (_BYTE)v73 )
    {
      v53 = *v71;
      *v71 = v72;
      if ( v53 )
        CSurfaceDrawListBrush::`vector deleting destructor'(v53, 1u);
    }
    if ( v4 < 0 )
      break;
    *((_BYTE *)v64 + 146) = 1;
    v54 = v64;
    *(_OWORD *)((char *)v64 + 8) = *(_OWORD *)((char *)this + 8);
    *((_QWORD *)v54 + 3) = *((_QWORD *)this + 3);
    v55 = v64;
    *((_BYTE *)v64 + 52) = 1;
    *((__m128 *)v55 + 2) = v47;
    *((_DWORD *)v55 + 12) = v46;
    if ( CPrimitiveGroupDrawListGenerator::ShouldUseTexCoordClamp((const struct D2D_RECT_F *)(v32 + 88)) )
      *(_OWORD *)((char *)v64 + 120) = *v56;
    if ( *((_BYTE *)this + 64) )
      CSurfaceDrawListBrush::SetSnapToPixelsReference(v64, (const struct D2D_VECTOR_2F *)this + 7);
    v57 = ((__int64 (__fastcall *)(CSurfaceDrawListBrush *, void *))v79)(v64, v78);
    v4 = v57;
    if ( v57 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v57, 0xA3u, 0LL);
      goto LABEL_9;
    }
    if ( v64 )
      CSurfaceDrawListBrush::`vector deleting destructor'(v64, 1u);
    v33 = v67;
    v22 = v75;
LABEL_41:
    if ( v32 == v80 )
      goto LABEL_7;
    v32 += v33;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x93u, 0LL);
LABEL_9:
  if ( v64 )
    std::default_delete<CSurfaceDrawListBrush>::operator()(v35, v64);
  return (unsigned int)v4;
}
