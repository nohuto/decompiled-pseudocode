/*
 * XREFs of ?ValidateRootAndSourceRectangle@CBackdropVisualImage@@QEAAJPEAVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_NPEA_N@Z @ 0x180092940
 * Callers:
 *     ?ProcessPostSubgraphBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z @ 0x18002A8C0 (-ProcessPostSubgraphBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z.c)
 *     ?ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x18002C3C0 (-ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F.c)
 *     ?UpdateBVIForVisual@CPreComputeContext@@AEBAJPEAVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_NPEA_N@Z @ 0x1800925E0 (-UpdateBVIForVisual@CPreComputeContext@@AEBAJPEAVCVisual@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_REC.c)
 * Callees:
 *     ?MarkAllTargetsDirty@CCachedVisualImage@@QEAAXXZ @ 0x18002B2C0 (-MarkAllTargetsDirty@CCachedVisualImage@@QEAAXXZ.c)
 *     ??0DbgString@DwmDbg@@QEAA@QEBDZZ @ 0x18002D018 (--0DbgString@DwmDbg@@QEAA@QEBDZZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TransformRect_AxisAlignedPreserving@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@PEAU2@@Z @ 0x1800949F0 (-TransformRect_AxisAlignedPreserving@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@P.c)
 *     ?SetRootAndSourceRectangle@CBackdropVisualImage@@AEAAJPEAVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18009647C (-SetRootAndSourceRectangle@CBackdropVisualImage@@AEAAJPEAVCVisual@@AEBV-$TMilRect_@MUD2D_RECT_F@.c)
 *     ?erase@?$vector@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@V?$allocator@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@std@@@std@@@2@@Z @ 0x18009B688 (-erase@-$vector@V-$unique_ptr@VCCachedTarget@CCachedVisualImage@@U-$default_delete@VCCachedTarge.c)
 *     ?LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z @ 0x180110440 (-LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z.c)
 *     ?IsValid@CCachedTarget@CCachedVisualImage@@QEBA_NXZ @ 0x18016EBD0 (-IsValid@CCachedTarget@CCachedVisualImage@@QEBA_NXZ.c)
 *     ?MarkDirty@CCachedTarget@CCachedVisualImage@@QEAAXXZ @ 0x1801A09DC (-MarkDirty@CCachedTarget@CCachedVisualImage@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBackdropVisualImage::ValidateRootAndSourceRectangle(
        CCachedVisualImage *this,
        __int64 a2,
        float *a3,
        struct D2D_RECT_F *a4,
        char *a5)
{
  bool v5; // zf
  char v6; // r15
  CComposition *v7; // r10
  char *v9; // r14
  unsigned __int32 v11; // xmm6_4
  __int64 v13; // rax
  char v14; // dl
  unsigned int v15; // eax
  unsigned int v16; // ecx
  char v17; // bp
  float v18; // xmm1_4
  float v19; // xmm3_4
  float v20; // xmm2_4
  char v21; // si
  float v22; // xmm2_4
  float v23; // xmm3_4
  float v24; // xmm4_4
  float v25; // xmm2_4
  float v26; // xmm5_4
  float v27; // xmm3_4
  float v28; // xmm3_4
  int v30; // eax
  unsigned int v31; // esi
  unsigned __int64 v32; // r12
  __int64 v33; // rax
  CCachedVisualImage::CCachedTarget **v34; // rbx
  __int64 v35; // r14
  CCachedVisualImage::CCachedTarget *v36; // r15
  DwmDbg::DbgString *v37; // rbx
  const char *v38; // rdx
  DwmDbg::DbgString *v39; // rax
  float v40; // xmm1_4
  int v41; // xmm0_4
  struct D2D_MATRIX_3X2_F v42; // [rsp+20h] [rbp-78h] BYREF
  struct D2D_RECT_F v43; // [rsp+38h] [rbp-60h] BYREF
  float v44; // [rsp+48h] [rbp-50h]
  float v45; // [rsp+4Ch] [rbp-4Ch]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v5 = *((_BYTE *)this + 1784) == 0;
  v6 = (char)a4;
  v7 = g_pComposition;
  v9 = a5;
  v11 = _mm_load_si128((const __m128i *)&_xmm).m128i_u32[0];
  *(_QWORD *)&v42.m[2][0] = a5;
  v13 = *((_QWORD *)g_pComposition + 77);
  if ( v5
    && ((v40 = *(float *)(v13 + 724),
         COERCE_FLOAT(COERCE_UNSIGNED_INT(v40 - *((float *)this + 422)) & v11) > 0.0000011920929)
     || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v13 + 728) - *((float *)this + 423)) & v11) > 0.0000011920929) )
  {
    v41 = *(_DWORD *)(v13 + 728);
    v14 = 1;
    *((_DWORD *)this + 423) = v41;
    *((_DWORD *)this + 425) = v41;
    *((float *)this + 422) = v40;
    *((float *)this + 424) = v40;
  }
  else
  {
    v14 = 0;
  }
  v15 = *((_DWORD *)v7 + 1617);
  if ( v15 == 49152 || v15 == 45056 )
    goto LABEL_4;
  if ( v15 > 0xB100 )
  {
    if ( v15 != 49408 && v15 != 49664 )
      goto LABEL_68;
LABEL_4:
    v16 = 0x4000;
    goto LABEL_5;
  }
  switch ( v15 )
  {
    case 0xB100u:
      goto LABEL_4;
    case 0xA000u:
LABEL_51:
      v16 = 0x2000;
      goto LABEL_5;
    case 0x9300u:
      v16 = 4096;
      goto LABEL_5;
    case 0xA100u:
      goto LABEL_51;
  }
LABEL_68:
  v16 = 2048;
LABEL_5:
  if ( *((_DWORD *)this + 428) != v16 )
  {
    if ( *((_DWORD *)this + 428) > v16 )
      v14 = 1;
    *((_DWORD *)this + 428) = v16;
  }
  v17 = 0;
  if ( *((_QWORD *)this + 15) != a2
    || (v18 = a3[2], v18 > *a3)
    && (v19 = a3[3], v20 = a3[1], v19 > v20)
    && (*a3 < *((float *)this + 24)
     || v20 < *((float *)this + 25)
     || *((float *)this + 26) < v18
     || *((float *)this + 27) < v19)
    || v14 )
  {
    v30 = CBackdropVisualImage::SetRootAndSourceRectangle(this, a2, a3);
    v31 = v30;
    if ( v30 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x51,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\backdropvisualimage.cpp",
        (const char *)(unsigned int)v30);
      return v31;
    }
    v7 = g_pComposition;
    v17 = 1;
    v11 = _mm_load_si128((const __m128i *)&_xmm).m128i_u32[0];
  }
  v21 = v17;
  *(_OWORD *)((char *)this + 1672) = *(_OWORD *)a3;
  LODWORD(v22) = *((_DWORD *)this + 25) ^ _xmm;
  LODWORD(v23) = *((_DWORD *)this + 24) ^ _xmm;
  v24 = v22 + *((float *)this + 419);
  v25 = v22 + *((float *)this + 421);
  v26 = v23 + *((float *)this + 418);
  v27 = v23 + *((float *)this + 420);
  *((float *)this + 419) = v24;
  *((float *)this + 421) = v25;
  *((float *)this + 418) = v26;
  *((float *)this + 420) = v27;
  if ( *((_QWORD *)this + 15)
    && (float)(*((float *)this + 26) - *((float *)this + 24)) >= 1.0
    && (float)(*((float *)this + 27) - *((float *)this + 25)) >= 1.0
    && v27 >= v26
    && v25 >= v24
    && (float)(v27 - v26) >= 1.0
    && (float)(v25 - v24) >= 1.0
    && *((float *)this + 28) > 0.5
    && *((float *)this + 29) > 0.5 )
  {
    v28 = *((float *)this + 424);
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v28 - 1.0) & v11) >= 0.000081380211
      || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 425) - 1.0) & v11) >= 0.000081380211 )
    {
      v43.bottom = *((FLOAT *)this + 425);
      v43.left = v28;
      *(_QWORD *)&v43.top = 0LL;
      *(_OWORD *)&v42.m11 = 0LL;
      v45 = 0.0 - (float)(v43.bottom * 0.0);
      v44 = 0.0 - (float)(v28 * 0.0);
      D2DMatrixHelper::TransformRect_AxisAlignedPreserving((CCachedVisualImage *)((char *)this + 1672), &v43, &v42, a4);
      *(_OWORD *)((char *)this + 1672) = *(_OWORD *)&v42.m11;
    }
    if ( v17 )
    {
      CCachedVisualImage::MarkAllTargetsDirty(this);
      *((_BYTE *)this + 1785) = 0;
    }
    else if ( v6 )
    {
      v32 = 0LL;
      if ( *((_BYTE *)this + 1784) )
        v32 = CCommonRegistryData::m_backdropBlurCachingThrottleQPCTimeDelta;
      v33 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v7 + 39) + 24LL))(*((_QWORD *)v7 + 39));
      v34 = (CCachedVisualImage::CCachedTarget **)*((_QWORD *)this + 21);
      v35 = *(_QWORD *)(v33 + 24);
      while ( v34 != *((CCachedVisualImage::CCachedTarget ***)this + 22) )
      {
        v36 = *v34;
        if ( CCachedVisualImage::CCachedTarget::IsValid(*v34) )
        {
          if ( v35 - *((_QWORD *)v36 + 5) > v32 )
          {
            CCachedVisualImage::CCachedTarget::MarkDirty(v36);
            v21 = 1;
          }
          ++v34;
        }
        else
        {
          v34 = *(CCachedVisualImage::CCachedTarget ***)std::vector<std::unique_ptr<CCachedVisualImage::CCachedTarget>>::erase(
                                                          (char *)this + 168,
                                                          &v42,
                                                          v34);
        }
      }
      v9 = *(char **)&v42.m[2][0];
    }
  }
  if ( v9 )
    *v9 = v21;
  if ( v21 )
  {
    v37 = DwmDbg::DbgString::DbgString((char **)v42.m[2], word_1802F327A);
    v38 = "BVI-RealizationIsDirty-Updated";
    if ( !v17 )
      v38 = "BVI-RealizationIsDirty-NotUpdated";
    v39 = DwmDbg::DbgString::DbgString((char **)&v42, v38);
    CBackdropVisualImage::LogEtwEvent(this, v39, v37);
  }
  return 0LL;
}
