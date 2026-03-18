/*
 * XREFs of ?EmitWarpFastPathGeometry@CRenderingBatchCommand@@AEBAXPEAVCD3DBatchExecutionContext@@@Z @ 0x18003781C
 * Callers:
 *     ?EmitGeometry@CWarpRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand@@@Z @ 0x180066020 (-EmitGeometry@CWarpRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchComma.c)
 *     ?EmitGeometry@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand@@@Z @ 0x18011B180 (-EmitGeometry@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchComm.c)
 * Callees:
 *     ?BeginIterator@CRegion@FastRegion@@QEBA?AVIterator@12@XZ @ 0x180035FFC (-BeginIterator@CRegion@FastRegion@@QEBA-AVIterator@12@XZ.c)
 *     ?TransformEdgeFlags_AxisAlignedPreserving@D2DMatrixHelper@@YAIIAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180036B30 (-TransformEdgeFlags_AxisAlignedPreserving@D2DMatrixHelper@@YAIIAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?IsOpaque@CDrawListBitmap@@QEBA_NXZ @ 0x180036E00 (-IsOpaque@CDrawListBitmap@@QEBA_NXZ.c)
 *     ?ToD2D1InterpolationMode@InterpolationMode@@YA?AW4D2D1_INTERPOLATION_MODE@@W4Enum@1@@Z @ 0x1800372BC (-ToD2D1InterpolationMode@InterpolationMode@@YA-AW4D2D1_INTERPOLATION_MODE@@W4Enum@1@@Z.c)
 *     ??A?$span@$$CBUPrimitiveUVDesc@@$0?0@gsl@@QEBAAEBUPrimitiveUVDesc@@_K@Z @ 0x1800372F0 (--A-$span@$$CBUPrimitiveUVDesc@@$0-0@gsl@@QEBAAEBUPrimitiveUVDesc@@_K@Z.c)
 *     ?ComputeVertexColor@CDrawListEntry@@QEBA?AU_D3DCOLORVALUE@@M@Z @ 0x1800374F0 (-ComputeVertexColor@CDrawListEntry@@QEBA-AU_D3DCOLORVALUE@@M@Z.c)
 *     ?ToD2D1ExtendMode@ExtendMode@@YA?AW4D2D1_EXTEND_MODE@@W4Enum@1@@Z @ 0x180038158 (-ToD2D1ExtendMode@ExtendMode@@YA-AW4D2D1_EXTEND_MODE@@W4Enum@1@@Z.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x180038E20 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TransformRect_AxisAlignedPreserving@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@PEAU2@@Z @ 0x1800949F0 (-TransformRect_AxisAlignedPreserving@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@P.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CRenderingBatchCommand::EmitWarpFastPathGeometry(
        CRenderingBatchCommand *this,
        struct CD3DBatchExecutionContext *a2)
{
  __int64 v2; // r13
  CRenderingBatchCommand *v3; // rsi
  FLOAT v4; // xmm5_4
  FLOAT v5; // xmm4_4
  FLOAT v6; // xmm3_4
  __int64 v7; // r12
  FLOAT v8; // xmm2_4
  unsigned int v9; // xmm1_4
  unsigned int v10; // xmm0_4
  __int64 v11; // rax
  __int64 v12; // r14
  struct D2D_RECT_F *v13; // r9
  float dx; // xmm2_4
  float v15; // xmm1_4
  __int32 v16; // xmm4_4
  unsigned __int64 v17; // r15
  unsigned int v18; // ecx
  unsigned int v19; // edi
  int v20; // r13d
  unsigned __int64 v21; // rbx
  int v22; // esi
  unsigned int v23; // r14d
  __int64 v24; // rax
  __int64 v25; // rcx
  unsigned __int64 v26; // rbx
  __int64 v27; // rcx
  __int64 v28; // rax
  unsigned __int64 v29; // rbx
  __int64 v30; // rcx
  int v31; // xmm1_4
  __int64 v32; // xmm1_8
  _QWORD *v33; // rbx
  __int64 v34; // rcx
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  int v38; // eax
  __int64 v39; // rcx
  __int64 v40; // r8
  int v41; // eax
  __int64 v42; // r8
  int v43; // eax
  __int64 v44; // r8
  CDrawListBitmap *v45; // rax
  bool v46; // zf
  int v47; // ecx
  unsigned int v48; // eax
  unsigned int v49; // r15d
  int v50; // edi
  const struct D2D_MATRIX_3X2_F *v51; // r8
  int v52; // ebx
  char v53; // al
  int v54; // r15d
  float *v55; // rax
  float v56; // xmm2_4
  float v57; // xmm3_4
  int v58; // eax
  unsigned int v59; // eax
  __int64 v60; // rbx
  int v61; // esi
  char *v62; // r13
  __int32 *v63; // r12
  __int32 *v64; // rdi
  __int64 v65; // rcx
  __m128 v66; // xmm1
  float v67; // xmm2_4
  float v68; // xmm3_4
  __int32 *v69; // rcx
  unsigned int v70; // eax
  unsigned int v71; // eax
  unsigned int v72; // eax
  unsigned int v73; // eax
  unsigned int v74; // eax
  unsigned int v75; // eax
  int v76; // eax
  char v77; // [rsp+38h] [rbp-D0h]
  unsigned int v78; // [rsp+3Ch] [rbp-CCh]
  int v79; // [rsp+40h] [rbp-C8h]
  __int16 v80; // [rsp+40h] [rbp-C8h]
  int v81; // [rsp+48h] [rbp-C0h]
  __int64 v82; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v83; // [rsp+48h] [rbp-C0h]
  __int64 v84; // [rsp+50h] [rbp-B8h]
  __m128i v85; // [rsp+58h] [rbp-B0h] BYREF
  _DWORD v86[6]; // [rsp+68h] [rbp-A0h] BYREF
  float v87; // [rsp+80h] [rbp-88h] BYREF
  __int64 v88; // [rsp+84h] [rbp-84h]
  float v89; // [rsp+8Ch] [rbp-7Ch]
  float v90; // [rsp+90h] [rbp-78h]
  float v91; // [rsp+94h] [rbp-74h]
  CRenderingBatchCommand *v92; // [rsp+98h] [rbp-70h]
  __int64 v93; // [rsp+A0h] [rbp-68h]
  __int64 v94; // [rsp+A8h] [rbp-60h]
  struct CD3DBatchExecutionContext *v95; // [rsp+B0h] [rbp-58h]
  __int128 v96; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v97; // [rsp+C8h] [rbp-40h]
  __int128 v98; // [rsp+D0h] [rbp-38h] BYREF
  __int128 v99; // [rsp+E0h] [rbp-28h]
  __int128 v100; // [rsp+F0h] [rbp-18h]
  __int128 v101; // [rsp+100h] [rbp-8h]
  unsigned __int64 v102[3]; // [rsp+110h] [rbp+8h] BYREF
  _BYTE v103[48]; // [rsp+128h] [rbp+20h] BYREF
  _DWORD v104[20]; // [rsp+158h] [rbp+50h]
  struct D2D_MATRIX_3X2_F v105; // [rsp+1A8h] [rbp+A0h] BYREF
  float v106; // [rsp+1C0h] [rbp+B8h]
  float v107; // [rsp+1C4h] [rbp+BCh]
  float v108[2]; // [rsp+1C8h] [rbp+C0h] BYREF
  float v109; // [rsp+1D0h] [rbp+C8h]
  float v110; // [rsp+1D4h] [rbp+CCh]
  D2D1_MATRIX_3X2_F matrix; // [rsp+1D8h] [rbp+D0h] BYREF
  struct D2D_RECT_F v112; // [rsp+1F0h] [rbp+E8h] BYREF
  unsigned int v113; // [rsp+200h] [rbp+F8h]
  unsigned int v114; // [rsp+204h] [rbp+FCh]
  _QWORD v115[6]; // [rsp+208h] [rbp+100h] BYREF

  v2 = *((_QWORD *)this + 1);
  v3 = this;
  v4 = *((FLOAT *)this + 4);
  v5 = *((FLOAT *)this + 5);
  v6 = *((FLOAT *)this + 8);
  v7 = *(_QWORD *)(v2 + 24);
  v8 = *((FLOAT *)this + 9);
  v9 = *((_DWORD *)this + 16);
  v10 = *((_DWORD *)this + 17);
  v11 = *((_QWORD *)a2 + 1);
  v92 = this;
  v112.left = v4;
  v112.top = v5;
  v12 = *(_QWORD *)(v11 + 568);
  v93 = v12;
  v112.right = v6;
  v112.bottom = v8;
  v113 = v9;
  v114 = v10;
  *(_QWORD *)&matrix.m11 = __PAIR64__(LODWORD(v5), LODWORD(v4));
  *(_QWORD *)&matrix.m[1][0] = __PAIR64__(LODWORD(v8), LODWORD(v6));
  *(_QWORD *)&matrix.m[2][0] = __PAIR64__(v10, v9);
  v95 = a2;
  v94 = v2;
  if ( !D2D1InvertMatrix(&matrix) )
    return;
  CDrawListEntry::ComputeVertexColor((CDrawListEntry *)v2, (struct _D3DCOLORVALUE *)v105.m[2], *((float *)v3 + 22));
  dx = v105.dx;
  v15 = v106;
  if ( CCommonRegistryData::WarpEnableDebugColor )
  {
    dx = v105.dx * 0.0;
    v15 = v106 * 0.0;
    v105.dx = v105.dx * 0.0;
    v106 = v106 * 0.0;
  }
  COERCE_FLOAT(v16 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v107 - 1.0) & v16) >= 0.0000011920929
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(dx - 1.0) & v16) >= 0.0000011920929
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(v105.dy - 1.0) & v16) >= 0.0000011920929
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(v15 - 1.0) & v16) >= 0.0000011920929 )
  {
    v79 = 3;
    v81 = 2;
  }
  else
  {
    v79 = 1;
    v81 = 0;
  }
  v17 = *(_QWORD *)(v2 + 88);
  v102[0] = v17;
  if ( v17 == -1LL || (v102[1] = v2 + 104, v2 == -104) && v17 )
  {
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    __debugbreak();
  }
  v18 = 0;
  v19 = 0;
  v78 = 0;
  if ( v17 )
  {
    v20 = v79;
    v21 = 0LL;
    v22 = v81;
    v23 = 0;
    do
    {
      v82 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 16LL))(v7, v19);
      if ( *(_QWORD *)(v82 + 8) )
      {
        v24 = gsl::span<PrimitiveUVDesc const,-1>::operator[](v102, v21);
        v25 = v7 + 2 * v21;
        v84 = v24;
        v80 = *(_WORD *)(v21 + v25 + 64);
        LOBYTE(v24) = *(_BYTE *)(v21 + v25 + 66);
        v26 = 0LL;
        v77 = v24;
        v27 = *(_QWORD *)(v82 + 8);
        if ( v27 )
          v26 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, __m128i *))(*(_QWORD *)v27 + 32LL))(v27, &v85);
        LODWORD(v28) = 0;
        v29 = HIDWORD(v26);
        v30 = *(_QWORD *)(v82 + 8);
        if ( v30 )
          v28 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, float *))(*(_QWORD *)v30 + 32LL))(v30, v108);
        v88 = 0LL;
        v89 = (float)(int)v29;
        v87 = (float)(int)v28;
        v86[1] = *(_DWORD *)(v84 + 4);
        v86[3] = *(_DWORD *)(v84 + 16);
        v31 = *(_DWORD *)(v84 + 28);
        v90 = 0.0 - (float)((float)(int)v28 * 0.0);
        v86[5] = v31;
        v91 = 0.0 - (float)((float)(int)v29 * 0.0);
        v86[0] = *(_DWORD *)v84;
        v86[2] = *(_DWORD *)(v84 + 12);
        v86[4] = *(_DWORD *)(v84 + 24);
        D2D1::Matrix3x2F::SetProduct(
          (D2D1::Matrix3x2F *)&v96,
          (const struct D2D1::Matrix3x2F *)&matrix,
          (const struct D2D1::Matrix3x2F *)v86);
        *(_QWORD *)&v99 = v97;
        v98 = v96;
        D2D1::Matrix3x2F::SetProduct(
          (D2D1::Matrix3x2F *)&v96,
          (const struct D2D1::Matrix3x2F *)&v98,
          (const struct D2D1::Matrix3x2F *)&v87);
        v32 = v97;
        v33 = &v115[3 * v23];
        *(_OWORD *)v33 = v96;
        v33[2] = v32;
        memset_0(&v98, 0, 0x40uLL);
        LOBYTE(v34) = HIBYTE(v80);
        v35 = v99;
        v83 = (unsigned __int64)v23 << 6;
        *(_OWORD *)&v103[v83] = v98;
        v36 = v100;
        *(_OWORD *)&v103[v83 + 16] = v35;
        v37 = v101;
        *(_OWORD *)&v103[v83 + 32] = v36;
        *(_OWORD *)((char *)v104 + v83) = v37;
        *(_DWORD *)&v103[v83] = v23;
        *(_DWORD *)&v103[v83 + 4] = 0;
        *(_QWORD *)&v103[v83 + 8] = v33;
        v38 = ExtendMode::ToD2D1ExtendMode(v34);
        LOBYTE(v39) = v77;
        *(_DWORD *)&v103[v40 + 28] = v38;
        v41 = ExtendMode::ToD2D1ExtendMode(v39);
        *(_DWORD *)&v103[v42 + 32] = v41;
        v43 = InterpolationMode::ToD2D1InterpolationMode(v80);
        *(_DWORD *)&v103[v44 + 24] = v43;
        *(_DWORD *)((char *)&v104[1] + v44) = 0;
        *(_DWORD *)((char *)&v104[2] + v44) = v19 == 0;
        *(_DWORD *)((char *)&v104[3] + v44) = v19 == 1;
        if ( *(_BYTE *)(v84 + 52) )
          *(_QWORD *)&v103[v44 + 16] = v84 + 36;
        if ( v19 )
        {
          if ( v19 == 1 )
            *(_DWORD *)((char *)v104 + v44) = 4;
        }
        else
        {
          v45 = (CDrawListBitmap *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 16LL))(v7, 0LL);
          v46 = CDrawListBitmap::IsOpaque(v45) == 0;
          v47 = v22;
          if ( !v46 )
            v47 = v20;
          v104[16 * (unsigned __int64)v23] = v47;
        }
        ++v23;
      }
      v21 = ++v19;
    }
    while ( v19 < v17 );
    v3 = v92;
    v2 = v94;
    v78 = v23;
    v12 = v93;
    v18 = v78;
  }
  v48 = *((_DWORD *)v3 + 21);
  v49 = 0;
  v50 = 240;
  if ( v48 > 0x11 )
  {
    v73 = v48 - 19;
    if ( v73 )
    {
      v74 = v73 - 1;
      if ( v74 )
      {
        v75 = v74 - 1;
        if ( v75 )
        {
          if ( v75 == 2 )
            v49 = 10;
        }
        else
        {
          v49 = 8;
        }
        goto LABEL_28;
      }
      v50 = 112;
    }
    v49 = 2;
    goto LABEL_28;
  }
  if ( v48 == 17 )
  {
    v50 = 112;
    goto LABEL_86;
  }
  if ( !v48 )
  {
LABEL_27:
    v49 = 1;
    goto LABEL_28;
  }
  v70 = v48 - 4;
  if ( !v70 )
  {
    v50 = 112;
    goto LABEL_27;
  }
  v71 = v70 - 1;
  if ( v71 )
  {
    v72 = v71 - 1;
    if ( v72 )
    {
      if ( v72 != 9 )
        goto LABEL_28;
LABEL_86:
      v49 = 4;
      goto LABEL_28;
    }
    v50 = 112;
  }
  if ( v18 == 1 && v104[0] == 1 )
    v49 = 14;
LABEL_28:
  *(_OWORD *)&v105.m11 = 0LL;
  D2DMatrixHelper::TransformRect_AxisAlignedPreserving(
    (D2DMatrixHelper *)(*(_QWORD *)(v2 + 16) + 56LL),
    &v112,
    &v105,
    v13);
  v51 = (const struct D2D_MATRIX_3X2_F *)*(unsigned int *)(v2 + 96);
  if ( (_DWORD)v51 && (_DWORD)v51 != 50529027 )
  {
    v59 = D2DMatrixHelper::TransformEdgeFlags_AxisAlignedPreserving(
            (D2DMatrixHelper *)(unsigned int)v51,
            &v112.left,
            v51);
    (*(void (__fastcall **)(__int64, struct D2D_MATRIX_3X2_F *, _QWORD, struct D2D_MATRIX_3X2_F *))(*(_QWORD *)v12 + 64LL))(
      v12,
      &v105,
      v59,
      &v105);
    if ( v105.m21 <= v105.m11 || v105.m22 <= v105.m12 )
      return;
    v52 = 0;
    goto LABEL_30;
  }
  v52 = 0;
  if ( (_DWORD)v51 )
  {
LABEL_30:
    if ( *(_DWORD *)v3 != 4 )
    {
      v53 = *(_BYTE *)(v2 + 101);
      if ( *(_BYTE *)(v2 + 100) )
      {
        v52 = v53 != 0 ? 12 : 4;
      }
      else if ( v53 )
      {
        v52 = 8;
      }
    }
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 24LL))(v12);
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v12 + 32LL))(v12, v49);
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v12 + 40LL))(v12, v50 | (unsigned int)v52);
  (*(void (__fastcall **)(__int64, _BYTE *, _QWORD))(*(_QWORD *)v12 + 48LL))(v12, v103, v78);
  v54 = 0;
  if ( *(_DWORD *)v3 == 4 )
  {
    FastRegion::CRegion::BeginIterator((int **)v3 + 12, (__int64)&v98);
    LODWORD(v60) = DWORD1(v100);
    v61 = v100;
    v62 = (char *)*((_QWORD *)&v99 + 1);
    v63 = (__int32 *)v99;
LABEL_52:
    while ( (unsigned __int64)v63 < *((_QWORD *)&v98 + 1) )
    {
      v64 = v63 + 2;
      v85.m128i_i32[1] = *v63;
      v85.m128i_i32[3] = v63[2];
      v65 = 2 * v61;
      v85.m128i_i32[0] = *(_DWORD *)&v62[4 * v65];
      v85.m128i_i32[2] = *(_DWORD *)&v62[4 * v65 + 4];
      v66 = _mm_mul_ps(_mm_cvtepi32_ps(v85), (__m128)_xmm);
      v67 = fmaxf(v66.m128_f32[1], v105.m12);
      v68 = fminf(v66.m128_f32[3], v105.m22);
      v109 = fminf(v66.m128_f32[2], v105.m21);
      v108[0] = fmaxf(v66.m128_f32[0], v105.m11);
      v108[1] = v67;
      v110 = v68;
      if ( v109 > v108[0] && v68 > v67 )
      {
        v76 = (*(__int64 (__fastcall **)(__int64, float *, FLOAT *, _QWORD, _DWORD))(*(_QWORD *)v12 + 56LL))(
                v12,
                v108,
                &v105.dx,
                0LL,
                0);
        if ( v76 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v76, 0x1EBu, 0LL);
        ++v54;
      }
      if ( ++v61 >= (int)v60 )
      {
        while ( 1 )
        {
          v62 = (char *)v64 + v64[1];
          v69 = v64;
          v63 = v64;
          v60 = (v64[3] - (__int64)v64[1] + 8) >> 3;
          v64 += 2;
          if ( (_DWORD)v60 )
            break;
          if ( (unsigned __int64)v69 >= *((_QWORD *)&v98 + 1) )
            goto LABEL_52;
        }
        v61 = 0;
      }
    }
  }
  else
  {
    v55 = (float *)*((_QWORD *)v95 + 13);
    v105.m11 = fmaxf(v105.m11, *v55);
    v56 = fmaxf(v105.m12, v55[1]);
    v105.m12 = v56;
    v105.m21 = fminf(v105.m21, v55[2]);
    v57 = fminf(v105.m22, v55[3]);
    v105.m22 = v57;
    if ( v105.m21 > v105.m11 && v57 > v56 )
    {
      v58 = (*(__int64 (__fastcall **)(__int64, struct D2D_MATRIX_3X2_F *, FLOAT *, _QWORD, _DWORD))(*(_QWORD *)v12 + 56LL))(
              v12,
              &v105,
              &v105.dx,
              0LL,
              0);
      if ( v58 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v58, 0x1F7u, 0LL);
      v54 = 1;
    }
  }
  dword_1803DE468 += v54;
}
