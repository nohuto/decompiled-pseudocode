/*
 * XREFs of ?ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x18002C3C0
 * Callers:
 *     ?InvalidateDrawListCachesForBackdropInputsIfRequired@CVisual@@AEBAJPEBVCDrawingContext@@@Z @ 0x18002BE10 (-InvalidateDrawListCachesForBackdropInputsIfRequired@CVisual@@AEBAJPEBVCDrawingContext@@@Z.c)
 *     ?ProduceRealization@CWindowBackgroundBitmapProducer@@UEBAJPEAVCDrawingContext@@PEAPEAVCCachedRealization@CCachedImageProducer@@@Z @ 0x1801ADF20 (-ProduceRealization@CWindowBackgroundBitmapProducer@@UEBAJPEAVCDrawingContext@@PEAPEAVCCachedRea.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?HasValidRenderingRealization@CBackdropVisualImage@@QEBA_NAEBVRenderTargetInfo@@@Z @ 0x18002C100 (-HasValidRenderingRealization@CBackdropVisualImage@@QEBA_NAEBVRenderTargetInfo@@@Z.c)
 *     ?IsValid@CBackdropVisualImage@@QEBA_NXZ @ 0x18002C2A0 (-IsValid@CBackdropVisualImage@@QEBA_NXZ.c)
 *     ?InvalidateAllBlurCaches@CBackdropVisualImage@@AEAAXXZ @ 0x18002CFC8 (-InvalidateAllBlurCaches@CBackdropVisualImage@@AEAAXXZ.c)
 *     ??0DbgString@DwmDbg@@QEAA@QEBDZZ @ 0x18002D018 (--0DbgString@DwmDbg@@QEAA@QEBDZZ.c)
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?IsEtwEnabled@Backdrops@DwmDbg@@YA_NXZ @ 0x180057A70 (-IsEtwEnabled@Backdrops@DwmDbg@@YA_NXZ.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x1800590B0 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180061980 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x180063B78 (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ValidateRootAndSourceRectangle@CBackdropVisualImage@@QEAAJPEAVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_NPEA_N@Z @ 0x180092940 (-ValidateRootAndSourceRectangle@CBackdropVisualImage@@QEAAJPEAVCVisual@@AEBV-$TMilRect_@MUD2D_RE.c)
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x180093B60 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ?GetUnusedTreeData@CVisual@@QEBAPEAVCTreeData@@XZ @ 0x1800ADA94 (-GetUnusedTreeData@CVisual@@QEBAPEAVCTreeData@@XZ.c)
 *     ?SetUnusedTreeData@CVisual@@QEAAXPEAVCTreeData@@@Z @ 0x1800ADD80 (-SetUnusedTreeData@CVisual@@QEAAXPEAVCTreeData@@@Z.c)
 *     ??1?$unique_ptr@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@U?$default_delete@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@@std@@@std@@QEAA@XZ @ 0x1800BFF58 (--1-$unique_ptr@$$BY0A@U-$aligned_storage_for@UEffectInput@@@detail@@U-$default_delete@$$BY0A@U-.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x1800CC0E0 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?GetVisualTreeNoRef@CVisual@@QEBAPEAVCVisualTree@@XZ @ 0x1800D3570 (-GetVisualTreeNoRef@CVisual@@QEBAPEAVCVisualTree@@XZ.c)
 *     ?RequiresRendering@CBackdropVisualImage@@QEBA_NAEBVRenderTargetInfo@@@Z @ 0x1800D5508 (-RequiresRendering@CBackdropVisualImage@@QEBA_NAEBVRenderTargetInfo@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 *     ?LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z @ 0x180110440 (-LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z.c)
 *     ?Create@CBackdropVisualImage@@SAJPEAVCComposition@@PEBVCVisual@@AEBVCVisualTreePath@@_NPEAPEAV1@@Z @ 0x18014BB1C (-Create@CBackdropVisualImage@@SAJPEAVCComposition@@PEBVCVisual@@AEBVCVisualTreePath@@_NPEAPEAV1@.c)
 *     ?CalcWorldSpaceClippedBounds@CDrawingContext@@QEBAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180172B60 (-CalcWorldSpaceClippedBounds@CDrawingContext@@QEBAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD.c)
 *     ?RequireClippedBounds@CBackdropVisualImage@@SA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18018FD04 (-RequireClippedBounds@CBackdropVisualImage@@SA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_.c)
 *     ?CanUseAsEffectInput@CBackdropVisualImage@@QEBA_NXZ @ 0x1801AE398 (-CanUseAsEffectInput@CBackdropVisualImage@@QEBA_NXZ.c)
 *     ?SetBackdropVisualImage@CTreeData@@IEAAXAEBVCVisualTreePath@@PEAVCBackdropVisualImage@@@Z @ 0x1801B25AC (-SetBackdropVisualImage@CTreeData@@IEAAXAEBVCVisualTreePath@@PEAVCBackdropVisualImage@@@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180204768 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?GetDebugString@CVisualTreePath@@QEBA?BVDbgString@DwmDbg@@XZ @ 0x1802079DC (-GetDebugString@CVisualTreePath@@QEBA-BVDbgString@DwmDbg@@XZ.c)
 *     ?LogBrushEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@0@Z @ 0x18021C1E0 (-LogBrushEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@0@Z.c)
 *     ??0CTreeData@@IEAA@XZ @ 0x180260224 (--0CTreeData@@IEAA@XZ.c)
 *     ?GetWorldTransform@CVisual@@QEBAJAEBVCVisualTreePath@@PEAVCMILMatrix@@@Z @ 0x180260BE8 (-GetWorldTransform@CVisual@@QEBAJAEBVCVisualTreePath@@PEAVCMILMatrix@@@Z.c)
 *     ?GetRenderTargetBitmap@CCachedVisualImage@@QEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180262340 (-GetRenderTargetBitmap@CCachedVisualImage@@QEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBitmap.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawingContext::ValidateBVIEffectInputForRender(__int64 a1, float *a2, bool *a3)
{
  bool v3; // r14
  CVisual *v6; // r15
  const struct CVisualTreePath *v7; // rsi
  struct _LIST_ENTRY *v8; // rdi
  struct _LIST_ENTRY *v9; // rbx
  CBackdropVisualImage **i; // rdx
  CBackdropVisualImage *v11; // rdi
  __int64 k; // rcx
  __int64 v13; // rbx
  __int64 v14; // rdi
  int WorldTransform; // eax
  unsigned int v16; // r14d
  float *v17; // r14
  struct CVisualTree *v18; // r14
  CTreeData *UnusedTreeData; // rdi
  volatile signed __int32 **n; // rdx
  _QWORD *v21; // rax
  __int64 v22; // r11
  volatile signed __int32 *v23; // rbx
  int v24; // edi
  struct _LIST_ENTRY *v25; // rdi
  struct _LIST_ENTRY *v26; // rbx
  struct _LIST_ENTRY *ii; // rdx
  char *Flink; // rax
  __int64 v29; // r11
  struct _LIST_ENTRY *v30; // r14
  bool IsValid; // al
  unsigned __int32 v32; // xmm6_4
  float *v33; // rdi
  float v34; // xmm2_4
  unsigned int v35; // xmm3_4
  char v36; // al
  float v37; // xmm0_4
  float v38; // xmm2_4
  struct _LIST_ENTRY v39; // xmm1
  char v40; // r15
  bool *v41; // rbx
  const struct RenderTargetInfo *v42; // rdx
  CBackdropVisualImage *v43; // rcx
  bool v44; // al
  struct IRenderTargetBitmap *v45; // rbx
  struct CBackdropVisualImage *v46; // rdi
  __int64 v47; // rsi
  const char *v48; // rdx
  __int64 v49; // rax
  _QWORD *v51; // rax
  __int64 v52; // r11
  struct CVisualTree *VisualTreeNoRef; // rax
  DwmDbg::Backdrops *v54; // rcx
  const char **DebugString; // rax
  __int64 v56; // rdi
  __int64 v57; // rax
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *j; // rcx
  struct _LIST_ENTRY *v60; // rax
  struct _LIST_ENTRY *m; // rcx
  struct _LIST_ENTRY *v62; // rax
  struct _LIST_ENTRY *jj; // rcx
  __int64 v64; // rbx
  const char *v65; // rdx
  __int64 v66; // rax
  const struct RenderTargetInfo *v67; // rax
  CTreeData *v68; // rax
  __int128 v69; // xmm0
  __int128 v70; // xmm1
  __m128i v71; // xmm0
  __int128 v72; // xmm1
  __int64 v73; // rbx
  const struct RenderTargetInfo *v74; // rax
  __int64 v75; // rax
  int v76; // [rsp+20h] [rbp-F0h]
  int v77; // [rsp+20h] [rbp-F0h]
  __m256i v78; // [rsp+90h] [rbp-80h] BYREF
  __m128i v79; // [rsp+B0h] [rbp-60h]
  float v80[8]; // [rsp+C0h] [rbp-50h]
  __m128i si128; // [rsp+E0h] [rbp-30h] BYREF
  __m128i v82; // [rsp+F0h] [rbp-20h]
  __m128i v83; // [rsp+100h] [rbp-10h]
  __m128i v84; // [rsp+110h] [rbp+0h]
  int v85; // [rsp+120h] [rbp+10h]
  CVisual *v86; // [rsp+130h] [rbp+20h]
  __int128 v87; // [rsp+138h] [rbp+28h] BYREF
  __int128 v88; // [rsp+148h] [rbp+38h] BYREF
  struct _LIST_ENTRY v89; // [rsp+158h] [rbp+48h]
  struct _LIST_ENTRY v90; // [rsp+168h] [rbp+58h]
  _BYTE v91[16]; // [rsp+180h] [rbp+70h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+278h] [rbp+168h]
  struct IRenderTargetBitmap *v93; // [rsp+280h] [rbp+170h] BYREF
  float *v94; // [rsp+288h] [rbp+178h]
  bool *v95; // [rsp+290h] [rbp+180h]
  struct CBackdropVisualImage *v96; // [rsp+298h] [rbp+188h] BYREF

  v95 = a3;
  v94 = a2;
  v3 = 0;
  LOBYTE(v93) = 0;
  if ( *(_BYTE *)(a1 + 7936) )
  {
    if ( *(_BYTE *)(a1 + 7937) )
      v6 = *(CVisual **)(a1 + 3208);
    else
      v6 = *(CVisual **)(a1 + 7952);
  }
  else
  {
    v6 = 0LL;
  }
  v7 = *(const struct CVisualTreePath **)(a1 + 7968);
  v8 = *(struct _LIST_ENTRY **)(*((_QWORD *)v7 + 1) - 8LL);
  if ( ((unsigned __int8 (__fastcall *)(struct _LIST_ENTRY *))v8->Flink[12].Flink)(v8) )
  {
    v9 = (struct _LIST_ENTRY *)((char *)v6 + 320);
LABEL_6:
    if ( v9 )
    {
      for ( i = (CBackdropVisualImage **)v9[9].Flink; i != (CBackdropVisualImage **)v9[9].Blink; ++i )
      {
        v51 = (_QWORD *)*((_QWORD *)*i + 202);
        if ( *((_QWORD *)*i + 203) - (_QWORD)v51 == *((_QWORD *)v7 + 1) - *(_QWORD *)v7 )
        {
          v52 = *(_QWORD *)v7 - (_QWORD)v51;
          while ( v51 != *((_QWORD **)*i + 203) )
          {
            if ( *v51 != *(_QWORD *)((char *)v51 + v52) || v51[1] != *(_QWORD *)((char *)v51 + v52 + 8) )
              goto LABEL_98;
            v51 += 2;
          }
          *((_QWORD *)*i + 222) = v9[15].Blink[1].Blink[55].Flink;
          v11 = *i;
          goto LABEL_11;
        }
LABEL_98:
        ;
      }
    }
  }
  else
  {
    TreeDataListHead = CVisual::GetTreeDataListHead(v6);
    if ( TreeDataListHead )
    {
      for ( j = TreeDataListHead->Flink; j != TreeDataListHead; j = j->Flink )
      {
        v9 = j - 22;
        if ( j[2].Flink == v8 )
          goto LABEL_6;
      }
    }
  }
  v11 = 0LL;
LABEL_11:
  if ( *(_QWORD *)(a1 + 192) && v11 && CBackdropVisualImage::CanUseAsEffectInput(v11) )
  {
    if ( a3 )
    {
      v67 = (const struct RenderTargetInfo *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 16) + 16LL))(a1 + 16);
      v3 = !CBackdropVisualImage::HasValidRenderingRealization(v11, v67);
      *a3 = v3;
    }
    v64 = DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&v93, word_1802F327A);
    v65 = "BVI-SkipValidationInNestedBackdropWalk-InvalidatedCache";
    if ( !v3 )
      v65 = "BVI-SkipValidationInNestedBackdropWalk-DidNotInvalidateCache";
    v66 = DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&v96, v65);
    CBackdropVisualImage::LogEtwEvent(v11, v66, v64);
    return 0LL;
  }
  for ( k = a1; *(_QWORD *)(k + 200); k = *(_QWORD *)(k + 200) )
    ;
  v13 = *(_QWORD *)(k + 7944);
  v14 = *(_QWORD *)(a1 + 7944);
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v83 = _mm_load_si128((const __m128i *)&_xmm);
  v85 = 10666;
  v82 = _mm_load_si128((const __m128i *)&_xmm);
  v87 = TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::sc_rcEmpty;
  v84 = _mm_load_si128((const __m128i *)&_xmm);
  WorldTransform = CVisual::GetWorldTransform(v6, v7, (struct CMILMatrix *)&si128);
  v16 = WorldTransform;
  if ( WorldTransform < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x651,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\drawingcontext.cpp",
      (const char *)(unsigned int)WorldTransform,
      v76);
    return v16;
  }
  v17 = v94;
  CMILMatrix::Transform2DBoundsHelper<1>(&si128, v94, &v87);
  if ( (unsigned __int8)CBackdropVisualImage::RequireClippedBounds(&v87) )
  {
    v88 = 0LL;
    CDrawingContext::CalcWorldSpaceClippedBounds(a1, v17, &v88);
    v69 = *(_OWORD *)(a1 + 88);
    v70 = *(_OWORD *)(a1 + 104);
    v80[4] = *(float *)(a1 + 152);
    *(_OWORD *)v78.m256i_i8 = v69;
    v71 = *(__m128i *)(a1 + 120);
    *(_OWORD *)&v78.m256i_u64[2] = v70;
    v72 = *(_OWORD *)(a1 + 136);
    v79 = v71;
    *(_OWORD *)v80 = v72;
    if ( CMILMatrix::Invert((CMILMatrix *)&v78) )
    {
      CMILMatrix::Transform2DBoundsHelper<1>(&v78, &v88, &v87);
    }
    else
    {
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x665,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\drawingcontext.cpp",
        (const char *)0x8007029CLL,
        v76);
      v87 = TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::sc_rcEmpty;
    }
  }
  if ( v14 == v13 )
    (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 192LL))(v13);
  v86 = *(CVisual **)(*(_QWORD *)(*(_QWORD *)v7 + 8LL) + 72LL);
  v18 = *(struct CVisualTree **)(*((_QWORD *)v7 + 1) - 8LL);
  if ( (*(unsigned __int8 (__fastcall **)(struct CVisualTree *))(*(_QWORD *)v18 + 192LL))(v18) )
  {
    UnusedTreeData = (CVisual *)((char *)v6 + 320);
LABEL_20:
    if ( UnusedTreeData )
      goto LABEL_21;
  }
  else
  {
    v60 = CVisual::GetTreeDataListHead(v6);
    if ( v60 )
    {
      for ( m = v60->Flink; m != v60; m = m->Flink )
      {
        UnusedTreeData = (CTreeData *)&m[-22];
        if ( (struct CVisualTree *)m[2].Flink == v18 )
          goto LABEL_20;
      }
    }
  }
  UnusedTreeData = CVisual::GetUnusedTreeData(v6);
  if ( UnusedTreeData )
  {
    CVisual::SetUnusedTreeData(v6, 0LL);
  }
  else
  {
    v68 = (CTreeData *)operator new(0x188uLL);
    UnusedTreeData = v68;
    if ( v68 )
    {
      CTreeData::CTreeData(v68);
      *((_QWORD *)UnusedTreeData + 48) = 0LL;
      *(_QWORD *)UnusedTreeData = &CVisualTreeData::`vftable';
    }
    else
    {
      UnusedTreeData = 0LL;
    }
  }
  (*(void (__fastcall **)(CTreeData *, struct CVisualTree *, CVisual *))(*(_QWORD *)UnusedTreeData + 8LL))(
    UnusedTreeData,
    v18,
    v6);
LABEL_21:
  for ( n = (volatile signed __int32 **)*((_QWORD *)UnusedTreeData + 18);
        n != *((volatile signed __int32 ***)UnusedTreeData + 19);
        ++n )
  {
    v21 = (_QWORD *)*((_QWORD *)*n + 202);
    if ( *((_QWORD *)*n + 203) - (_QWORD)v21 == *((_QWORD *)v7 + 1) - *(_QWORD *)v7 )
    {
      v22 = *(_QWORD *)v7 - (_QWORD)v21;
      while ( v21 != *((_QWORD **)*n + 203) )
      {
        if ( *v21 != *(_QWORD *)((char *)v21 + v22) || v21[1] != *(_QWORD *)((char *)v21 + v22 + 8) )
          goto LABEL_99;
        v21 += 2;
      }
      *((_QWORD *)*n + 222) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)UnusedTreeData + 31) + 24LL) + 880LL);
      v23 = *n;
      if ( *n )
      {
        if ( _InterlockedAdd(v23 + 2, 1u) <= 0 )
          wil::details::in1diag3::Log_Hr(
            retaddr,
            (void *)0x18,
            (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
            (const char *)0x8007029CLL,
            v76);
        goto LABEL_32;
      }
      break;
    }
LABEL_99:
    ;
  }
  v96 = 0LL;
  VisualTreeNoRef = CVisual::GetVisualTreeNoRef(v86);
  CBackdropVisualImage::Create(g_pComposition, v6, v7, VisualTreeNoRef == v18, &v96);
  v23 = (volatile signed __int32 *)v96;
  CTreeData::SetBackdropVisualImage(UnusedTreeData, v7, v96);
  if ( DwmDbg::Backdrops::IsEtwEnabled(v54) )
  {
    DebugString = (const char **)CVisualTreePath::GetDebugString(v7, &v96);
    v56 = DwmDbg::DbgString::DbgString(
            (DwmDbg::DbgString *)v91,
            "pBVI=0x%p, bviPath=[%s]",
            (const void *)v23,
            *DebugString);
    v57 = DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&v88, "Visual-CreatedNewBVI");
    DwmDbg::Backdrops::LogBrushEtwEvent(v57, v6, v56);
    std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>(&v96);
  }
LABEL_32:
  v24 = CBackdropVisualImage::ValidateRootAndSourceRectangle((CCachedVisualImage *)v23, (__int64)&v93);
  if ( v23 )
    CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease((CResource *)v23);
  if ( v24 >= 0 )
  {
    v25 = *(struct _LIST_ENTRY **)(*((_QWORD *)v7 + 1) - 8LL);
    if ( ((unsigned __int8 (__fastcall *)(struct _LIST_ENTRY *))v25->Flink[12].Flink)(v25) )
    {
      v26 = (struct _LIST_ENTRY *)((char *)v6 + 320);
LABEL_37:
      if ( v26 )
      {
        for ( ii = v26[9].Flink; ; ii = (struct _LIST_ENTRY *)((char *)ii + 8) )
        {
          if ( ii == v26[9].Blink )
          {
            v30 = 0LL;
            goto LABEL_44;
          }
          Flink = (char *)ii->Flink[101].Flink;
          if ( (char *)ii->Flink[101].Blink - Flink == *((_QWORD *)v7 + 1) - *(_QWORD *)v7 )
            break;
LABEL_100:
          ;
        }
        v29 = *(_QWORD *)v7 - (_QWORD)Flink;
        while ( Flink != (char *)ii->Flink[101].Blink )
        {
          if ( *(_QWORD *)Flink != *(_QWORD *)&Flink[v29] || *((_QWORD *)Flink + 1) != *(_QWORD *)&Flink[v29 + 8] )
            goto LABEL_100;
          Flink += 16;
        }
        ii->Flink[111].Flink = v26[15].Blink[1].Blink[55].Flink;
        v30 = ii->Flink;
        goto LABEL_44;
      }
    }
    else
    {
      v62 = CVisual::GetTreeDataListHead(v6);
      if ( v62 )
      {
        for ( jj = v62->Flink; jj != v62; jj = jj->Flink )
        {
          v26 = jj - 22;
          if ( jj[2].Flink == v25 )
            goto LABEL_37;
        }
      }
    }
    v30 = 0LL;
LABEL_44:
    IsValid = CBackdropVisualImage::IsValid((CBackdropVisualImage *)v30);
    v32 = _mm_load_si128((const __m128i *)&_xmm).m128i_u32[0];
    v33 = v94;
    if ( IsValid )
    {
      v34 = *v94;
      v35 = *((_DWORD *)v94 + 1);
      *(_QWORD *)&v80[3] = 0x29A83F800000LL;
      *(__m128i *)v78.m256i_i8 = _mm_load_si128((const __m128i *)&_xmm);
      v80[0] = v34;
      *(_QWORD *)&v80[1] = v35;
      *(__m128i *)&v78.m256i_u64[2] = _mm_load_si128((const __m128i *)&_xmm);
      v79 = _mm_load_si128((const __m128i *)&_xmm);
      CMILMatrix::Multiply((CMILMatrix *)&v78, (const struct CMILMatrix *)&si128);
      v36 = 0;
      LODWORD(v37) = COERCE_UNSIGNED_INT(*((float *)&v30[107].Flink + 1) - *(float *)v78.m256i_i32) & v32;
      v38 = v80[3];
      v89.Flink = (struct _LIST_ENTRY *)v78.m256i_i64[0];
      v89.Blink = *(struct _LIST_ENTRY **)((char *)&v78.m256i_i64[1] + 4);
      v90.Flink = (struct _LIST_ENTRY *)__PAIR64__(v78.m256i_u32[7], v78.m256i_u32[5]);
      v90.Blink = *(struct _LIST_ENTRY **)v80;
      if ( v37 >= 0.000081380211
        || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v30[107].Blink - *(float *)&v78.m256i_i32[1]) & v32) >= 0.000081380211
        || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v30[107].Blink + 1) - *(float *)&v78.m256i_i32[3]) & v32) >= 0.000081380211
        || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v30[108].Flink - *(float *)&v78.m256i_i32[4]) & v32) >= 0.000081380211
        || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v30[108].Flink + 1) - *(float *)&v78.m256i_i32[5]) & v32) >= 0.000081380211
        || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v30[108].Blink - *(float *)&v78.m256i_i32[7]) & v32) >= 0.000081380211
        || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v30[108].Blink + 1) - v80[0]) & v32) >= 0.000081380211
        || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v30[109].Flink - v80[1]) & v32) >= 0.000081380211
        || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v30[109].Flink + 1) - v80[3]) & v32) >= 0.000081380211 )
      {
        v39 = v90;
        *(struct _LIST_ENTRY *)((char *)v30 + 1716) = v89;
        *(struct _LIST_ENTRY *)((char *)v30 + 1732) = v39;
        *((float *)&v30[109].Flink + 1) = v38;
        CBackdropVisualImage::InvalidateAllBlurCaches((CBackdropVisualImage *)v30);
        v36 = 1;
      }
      v40 = v36 | (unsigned __int8)v93;
      BYTE1(v30[111].Blink) = 1;
      if ( g_LockAndReadBackdropTexture )
      {
        v93 = 0LL;
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v93);
        v73 = a1 + 16;
        v74 = (const struct RenderTargetInfo *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 16) + 16LL))(a1 + 16);
        if ( (int)CCachedVisualImage::GetRenderTargetBitmap((CCachedVisualImage *)v30, v74, &v93) >= 0 )
        {
          v75 = (*(__int64 (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)v93 + 144LL))(v93);
          if ( !a1 )
            v73 = 0LL;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v75 + 112LL))(v75, v73);
        }
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v93);
      }
    }
    else
    {
      v40 = (char)v93;
    }
    v41 = v95;
    if ( v95 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(a1 + 16) + 16LL))(a1 + 16);
      if ( !CBackdropVisualImage::IsValid((CBackdropVisualImage *)v30)
        || (v44 = CBackdropVisualImage::RequiresRendering(v43, v42)) )
      {
        v44 = 1;
      }
      v40 |= v44;
      *v41 = v40;
    }
    DwmDbg::DbgString::DbgString(
      (DwmDbg::DbgString *)&v93,
      "(%.2f, %.2f, %.2f, %.2f), (%.2f, %.2f, %.2f, %.2f), (%.2f, %.2f, %.2f, %.2f), (%.2f, %.2f, %.2f, %.2f)",
      si128.m128i_i32[0],
      si128.m128i_i32[1],
      si128.m128i_i32[2],
      si128.m128i_i32[3],
      v82.m128i_i32[0],
      v82.m128i_i32[1],
      v82.m128i_i32[2],
      v82.m128i_i32[3],
      v83.m128i_i32[0],
      v83.m128i_i32[1],
      v83.m128i_i32[2],
      v83.m128i_i32[3],
      v84.m128i_i32[0],
      v84.m128i_i32[1],
      v84.m128i_i32[2],
      v84.m128i_i32[3]);
    DwmDbg::DbgString::DbgString(
      (DwmDbg::DbgString *)&v96,
      "%.2f, %.2f, %.2f, %.2f (%.2f x %.2f)",
      *v33,
      v33[1],
      v33[2],
      v33[3],
      COERCE_FLOAT(COERCE_UNSIGNED_INT(v33[2] - *v33) & _xmm),
      COERCE_FLOAT(COERCE_UNSIGNED_INT(v33[3] - v33[1]) & _xmm));
    v45 = v93;
    v46 = v96;
    v47 = DwmDbg::DbgString::DbgString(
            (DwmDbg::DbgString *)&v88,
            "rcBackdropLocal=[%s], worldTransform=[%s]",
            (const char *)v96,
            (const char *)v93);
    v48 = "BVI-Validate-InvalidatedCache";
    if ( !v40 )
      v48 = "BVI-Validate-DidNotInvalidateCache";
    v49 = DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)v91, v48);
    CBackdropVisualImage::LogEtwEvent(v30, v49, v47);
    if ( v46 )
      operator delete(v46);
    if ( v45 )
      operator delete(v45);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x66D,
    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\drawingcontext.cpp",
    (const char *)(unsigned int)v24,
    v77);
  return (unsigned int)v24;
}
