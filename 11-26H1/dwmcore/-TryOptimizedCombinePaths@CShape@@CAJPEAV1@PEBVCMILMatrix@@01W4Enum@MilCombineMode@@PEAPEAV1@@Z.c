/*
 * XREFs of ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800DB820
 * Callers:
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z @ 0x1800B7170 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x1800BB010 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 *     ?PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_NPEAVCCpuClipAntialiasSink@@PEA_N@Z @ 0x1800C61E0 (-PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_.c)
 *     ?ComputeBrushClamp@CBrushDrawListGenerator@@CAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@KAEBVMatrix3x3@@PEAPEAVCShape@@@Z @ 0x1800DA580 (-ComputeBrushClamp@CBrushDrawListGenerator@@CAJV-$span@PEBVCDrawListBrush@@$0-0@gsl@@KAEBVMatrix.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800DB760 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?GetSpriteClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z @ 0x1800EA824 (-GetSpriteClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z.c)
 *     ?GetPrimitiveShape@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@AEBULayoutData@CContent@@_NPEAPEAVCShape@@@Z @ 0x1802074FC (-GetPrimitiveShape@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@AEBULayoutData@CContent@@_NPEAPEAVCShape@.c)
 * Callees:
 *     ?_Verify_offset@?$checked_array_iterator@PEAD@stdext@@QEBAX_J@Z @ 0x18000A774 (-_Verify_offset@-$checked_array_iterator@PEAD@stdext@@QEBAX_J@Z.c)
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ??Y?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEAAAEAV01@_J@Z @ 0x18000CAF0 (--Y-$checked_array_iterator@PEAV-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdex.c)
 *     ?Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ @ 0x1800111B0 (-Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ.c)
 *     ??$Is90Or270RotationWithTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x180011FD0 (--$Is90Or270RotationWithTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x18002D598 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ??1?$unique_ptr@$$BY0A@U?$aligned_storage_for@UtagCOMPOSITION_TARGET_ID_AND_STATS@@@detail@@U?$default_delete@$$BY0A@U?$aligned_storage_for@UtagCOMPOSITION_TARGET_ID_AND_STATS@@@detail@@@std@@@std@@QEAA@XZ @ 0x18002D63C (--1-$unique_ptr@$$BY0A@U-$aligned_storage_for@UtagCOMPOSITION_TARGET_ID_AND_STATS@@@detail@@U-$d.c)
 *     ??_U@YAPEAX_K@Z @ 0x18002D660 (--_U@YAPEAX_K@Z.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@std@@V?$checked_array_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@stdext@@V?$move_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@0@0V12@@Z @ 0x18002D6AC (--$uninitialized_move@V-$move_iterator@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDS.c)
 *     ?IsRoundedCorner@CRoundedRectangleGeometryData@@SA_NAEBUD2D_VECTOR_2F@@@Z @ 0x180053380 (-IsRoundedCorner@CRoundedRectangleGeometryData@@SA_NAEBUD2D_VECTOR_2F@@@Z.c)
 *     ?Subtract@CRegion@@QEAAXAEBV1@@Z @ 0x1800747C4 (-Subtract@CRegion@@QEAAXAEBV1@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180074C60 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800797A0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@AEBUD2D_RECT_F@@@Z @ 0x18008AF90 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniq.c)
 *     ??F?$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ @ 0x18008FA08 (--F-$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x1800B8950 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?Reset@CRectanglesShape@@AEAAXXZ @ 0x1800BAC70 (-Reset@CRectanglesShape@@AEAAXXZ.c)
 *     ?push_back@?$vector_facade@V?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@V?$buffer_impl@V?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX$$QEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800BE350 (-push_back@-$vector_facade@V-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeed.c)
 *     ?Alloc@?$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAPEAX_K@Z @ 0x1800C8C10 (-Alloc@-$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAPEAX_K@Z.c)
 *     ?TryMerge@CRoundedRectangleGeometryData@@SA_NAEBU1@0PEAU1@@Z @ 0x1800DAB28 (-TryMerge@CRoundedRectangleGeometryData@@SA_NAEBU1@0PEAU1@@Z.c)
 *     ??_ECRegionShape@@UEAAPEAXI@Z @ 0x1800DCF70 (--_ECRegionShape@@UEAAPEAXI@Z.c)
 *     ?Transform_AxisAlignedPreserving@CRoundedRectangleGeometryData@@SAXAEBU1@AEBVCMILMatrix@@PEAU1@@Z @ 0x1800DD030 (-Transform_AxisAlignedPreserving@CRoundedRectangleGeometryData@@SAXAEBU1@AEBVCMILMatrix@@PEAU1@@.c)
 *     ?TryClipWithRect@CRoundedRectangleGeometryData@@SA_NAEBU1@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAU1@@Z @ 0x1800DD760 (-TryClipWithRect@CRoundedRectangleGeometryData@@SA_NAEBU1@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_REC.c)
 *     ?Alloc@?$CThreadLocalObjectCache@VCRoundedRectangleShape@@V1@@@SAPEAX_K@Z @ 0x1800DDC94 (-Alloc@-$CThreadLocalObjectCache@VCRoundedRectangleShape@@V1@@@SAPEAX_K@Z.c)
 *     ?Create@SharedData@CRoundedRectangleShape@@SAPEAV12@AEBUCRoundedRectangleGeometryData@@@Z @ 0x1800DDD80 (-Create@SharedData@CRoundedRectangleShape@@SAPEAV12@AEBUCRoundedRectangleGeometryData@@@Z.c)
 *     ?SetEmpty@CRegionShape@@QEAAXXZ @ 0x1800E9694 (-SetEmpty@CRegionShape@@QEAAXXZ.c)
 *     ?AddRectangle@CRegion@@QEAAXAEBUtagRECT@@@Z @ 0x1800E9F54 (-AddRectangle@CRegion@@QEAAXAEBUtagRECT@@@Z.c)
 *     ?TryAddRectangles@CRegion@@QEAAJPEBUtagRECT@@I@Z @ 0x1800EAB10 (-TryAddRectangles@CRegion@@QEAAJPEBUtagRECT@@I@Z.c)
 *     ?Union@CRegion@@QEAAXAEBV1@@Z @ 0x1800ECDBC (-Union@CRegion@@QEAAXAEBV1@@Z.c)
 *     ?Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18012DEDC (-Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?BuildFromCRegion@CRegionShape@@QEAAXAEBVCRegion@@@Z @ 0x18012F7A4 (-BuildFromCRegion@CRegionShape@@QEAAXAEBVCRegion@@@Z.c)
 *     ?Copy@CRegion@@QEAAXAEBV1@@Z @ 0x18012F7D8 (-Copy@CRegion@@QEAAXAEBV1@@Z.c)
 *     ??C?$checked_array_iterator@PEAUD2D_RECT_F@@@stdext@@QEBAPEAUD2D_RECT_F@@XZ @ 0x180142FD8 (--C-$checked_array_iterator@PEAUD2D_RECT_F@@@stdext@@QEBAPEAUD2D_RECT_F@@XZ.c)
 *     ?Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180166D90 (-Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?IntersectWithRect@CRegionShape@@QEBAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAPEAVCShape@@@Z @ 0x18016B7F4 (-IntersectWithRect@CRegionShape@@QEBAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSI.c)
 *     ?AllowsOcclusion@CShape@@UEBA_NXZ @ 0x18016DC30 (-AllowsOcclusion@CShape@@UEBA_NXZ.c)
 *     ?DoesContain@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1801737C0 (-DoesContain@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?IntersectWithRect@CRectanglesShape@@QEBAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAPEAVCShape@@@Z @ 0x1801883C0 (-IntersectWithRect@CRectanglesShape@@QEBAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTA.c)
 *     CanCombineToRegion @ 0x180189B00 (CanCombineToRegion.c)
 *     ?Is2DAxisAlignedIntegerPreserving@CMILMatrix@@QEBA_NXZ @ 0x180189B6C (-Is2DAxisAlignedIntegerPreserving@CMILMatrix@@QEBA_NXZ.c)
 *     ?reset@?$unique_ptr@VCRegionShape@@U?$default_delete@VCRegionShape@@@std@@@std@@QEAAXPEAVCRegionShape@@@Z @ 0x1801B36A8 (-reset@-$unique_ptr@VCRegionShape@@U-$default_delete@VCRegionShape@@@std@@@std@@QEAAXPEAVCRegion.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1802014C4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x180203284 (--0CThreadContext@@AEAA@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     memmove_0 @ 0x1802B97BC (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CShape::TryOptimizedCombinePaths(
        CShape *a1,
        __int64 a2,
        char *a3,
        unsigned __int64 a4,
        int a5,
        struct CShape **a6)
{
  CShape *v8; // rdi
  unsigned int v9; // esi
  float *Value; // rbx
  bool v11; // r12
  char v12; // al
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 (__fastcall *v16)(CShape *, struct D2D_RECT_F *, _QWORD); // rax
  double v17; // xmm2_8
  int *v18; // rax
  FLOAT v19; // ecx
  FLOAT v20; // edx
  float v21; // r8d
  FLOAT v22; // r9d
  int *v23; // rax
  int v24; // ecx
  int v25; // edx
  int v26; // r8d
  int v27; // r9d
  char *v28; // rax
  char *v29; // rbx
  CRegionShape *v30; // rcx
  float left; // xmm0_4
  float top; // xmm2_4
  float right; // xmm3_4
  float bottom; // xmm1_4
  int v36; // ecx
  HANDLE v37; // rax
  __int64 v38; // r8
  __int64 v39; // r8
  detail::liberal_expansion_policy *v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // r9
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // r12
  __int64 v46; // rax
  __int64 v47; // rax
  char v48; // al
  char v49; // al
  float v50; // xmm5_4
  float v51; // xmm4_4
  float y; // xmm3_4
  float x; // xmm2_4
  _QWORD *v54; // rax
  _QWORD *v55; // rbx
  struct CRoundedRectangleShape::SharedData *v56; // rax
  char v57; // cl
  char v58; // dl
  unsigned __int32 v59; // xmm3_4
  __int64 v60; // rax
  HANDLE ProcessHeap; // rax
  char *v62; // rax
  float v63; // xmm0_4
  float v64; // xmm0_4
  float v65; // xmm0_4
  __int64 v66; // rcx
  int v67; // eax
  int v68; // eax
  CRegionShape *v69; // r14
  int v70; // eax
  CRegionShape *v71; // r15
  __int64 v72; // rax
  int v73; // eax
  __int64 v74; // rax
  int v75; // eax
  char *v76; // rax
  char *v77; // rdi
  char v78; // dl
  char *v79; // rbx
  unsigned __int64 v80; // rdi
  __int64 v81; // rax
  __int64 v82; // rax
  char *v83; // rdi
  CRegionShape *v84; // r12
  __int64 v85; // r8
  __int64 v86; // xmm6_8
  signed __int64 v87; // rbx
  CThreadContext *v88; // rax
  CThreadContext *v89; // rax
  double v90; // xmm2_8
  int v91; // eax
  int v92; // eax
  _QWORD *v93; // rax
  CRectanglesShape *v94; // rdi
  _QWORD *v95; // rax
  struct CShape *v96; // rax
  int v97; // eax
  _QWORD *v98; // rax
  struct CShape *v99; // rdx
  _QWORD *v100; // rax
  __int64 v101; // rdx
  const struct tagRECT *v102; // rax
  const struct tagRECT *v103; // rax
  char *v104; // rax
  char *v105; // rdx
  CRegionShape *v106; // rbx
  int v107; // eax
  unsigned __int64 v108; // rdi
  LPVOID v109; // rbx
  __int64 v110; // r8
  void *v111; // rdx
  char *v112; // rcx
  __int64 v113; // rdi
  unsigned int v114; // [rsp+20h] [rbp-E0h]
  unsigned int v115; // [rsp+20h] [rbp-E0h]
  CRegionShape *v116; // [rsp+30h] [rbp-D0h] BYREF
  CRegionShape *v117; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v118; // [rsp+40h] [rbp-C0h] BYREF
  __int64 i; // [rsp+50h] [rbp-B0h]
  __int128 v120; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v121; // [rsp+70h] [rbp-90h]
  struct tagRECT v122; // [rsp+80h] [rbp-80h] BYREF
  __int64 v123; // [rsp+90h] [rbp-70h]
  _BYTE v124[48]; // [rsp+98h] [rbp-68h] BYREF
  int v125; // [rsp+C8h] [rbp-38h]
  struct D2D_RECT_F v126; // [rsp+D0h] [rbp-30h] BYREF
  struct D2D_RECT_F v127; // [rsp+E0h] [rbp-20h] BYREF
  struct D2D_RECT_F v128; // [rsp+F0h] [rbp-10h] BYREF
  struct D2D_RECT_F v129; // [rsp+100h] [rbp+0h] BYREF
  struct D2D_VECTOR_2F v130; // [rsp+110h] [rbp+10h] BYREF
  int v131; // [rsp+118h] [rbp+18h]
  float v132; // [rsp+11Ch] [rbp+1Ch]
  D2D_VECTOR_2F v133; // [rsp+120h] [rbp+20h] BYREF
  struct D2D_VECTOR_2F v134; // [rsp+128h] [rbp+28h] BYREF
  unsigned int v135; // [rsp+130h] [rbp+30h]
  char v136; // [rsp+134h] [rbp+34h]
  FastRegion::CRegion *v137; // [rsp+150h] [rbp+50h] BYREF
  _DWORD v138[18]; // [rsp+158h] [rbp+58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+248h] [rbp+148h]

  v117 = 0LL;
  v8 = a1;
  v9 = 0;
  Value = 0LL;
  *a6 = 0LL;
  v11 = !a1 || (*(unsigned __int8 (__fastcall **)(CShape *))(*(_QWORD *)a1 + 16LL))(a1);
  if ( !a3 || (v12 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)a3 + 16LL))(a3)) != 0 )
    v12 = 1;
  if ( v11 )
  {
    if ( v12 )
    {
      v98 = CThreadLocalObjectCache<CRectanglesShape,CRectanglesShape>::Alloc();
      v99 = (struct CShape *)v98;
      if ( v98 )
      {
        v98[1] = 0LL;
        *v98 = &CRectanglesShape::`vftable';
        v100 = v98 + 5;
        *((_QWORD *)v99 + 2) = v100;
        *((_QWORD *)v99 + 3) = v100;
        *((_QWORD *)v99 + 4) = (char *)v99 + 56;
        *((_QWORD *)v99 + 7) = 0LL;
        *a6 = v99;
        return v9;
      }
      v9 = -2147024882;
      v115 = 628;
      *a6 = 0LL;
      goto LABEL_128;
    }
    goto LABEL_248;
  }
  if ( v12 )
  {
LABEL_248:
    if ( a5 )
    {
      if ( a5 == 1 )
      {
        v96 = (struct CShape *)CThreadLocalObjectCache<CRectanglesShape,CRectanglesShape>::Alloc();
        if ( !v96 )
        {
          v9 = -2147024882;
          *a6 = 0LL;
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x288u, 0LL);
          return v9;
        }
        goto LABEL_246;
      }
      if ( a5 != 2 )
        return v9;
      if ( v11 )
      {
        v96 = (struct CShape *)CThreadLocalObjectCache<CRectanglesShape,CRectanglesShape>::Alloc();
        if ( !v96 )
        {
          v9 = -2147024882;
          *a6 = 0LL;
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x290u, 0LL);
          return v9;
        }
        goto LABEL_246;
      }
      v9 = CShape::CopyShape(v8, 0LL, a6);
      if ( (v9 & 0x80000000) == 0 )
        return v9;
      v115 = 661;
    }
    else if ( v11 )
    {
      v9 = CShape::CopyShape((CShape *)a3, (const struct CMILMatrix *)a4, a6);
      if ( (v9 & 0x80000000) == 0 )
        return v9;
      v115 = 637;
    }
    else
    {
      v9 = CShape::CopyShape(v8, 0LL, a6);
      if ( (v9 & 0x80000000) == 0 )
        return v9;
      v115 = 641;
    }
LABEL_128:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, v115, 0LL);
    return v9;
  }
  v13 = *(_QWORD *)v8;
  LODWORD(v116) = 0;
  if ( !(*(unsigned __int8 (__fastcall **)(CShape *, CRegionShape **))(v13 + 64))(v8, &v116)
    || (_DWORD)v116 != 1
    || (v14 = *(_QWORD *)a3,
        LODWORD(v116) = 0,
        !(*(unsigned __int8 (__fastcall **)(char *, CRegionShape **))(v14 + 64))(a3, &v116))
    || (_DWORD)v116 != 1 )
  {
LABEL_68:
    if ( (*(unsigned int (__fastcall **)(CShape *))(*(_QWORD *)v8 + 8LL))(v8) == 2
      && (*(unsigned int (__fastcall **)(char *))(*(_QWORD *)a3 + 8LL))(a3) == 2
      && (!a4 || CMILMatrix::Is2DAxisAlignedIntegerPreserving((CMILMatrix *)a4)) )
    {
      v117 = 0LL;
      v9 = CShape::CopyShape(v8, 0LL, &v117);
      if ( (v9 & 0x80000000) != 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x309u, 0LL);
      }
      else
      {
        v116 = 0LL;
        v68 = CShape::CopyShape((CShape *)a3, (const struct CMILMatrix *)a4, &v116);
        v9 = v68;
        if ( v68 >= 0 )
        {
          v69 = v117;
          v137 = (FastRegion::CRegion *)v138;
          v138[0] = 0;
          v70 = FastRegion::CRegion::Copy((FastRegion::CRegion *)&v137, (CRegionShape *)((char *)v117 + 16));
          v9 = v70;
          if ( v70 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v70, 0x30Fu, 0LL);
            FastRegion::CRegion::FreeMemory(&v137);
            if ( v116 )
              CRegionShape::`vector deleting destructor'(v116, 1u);
            if ( !v69 )
              return v9;
LABEL_166:
            CRegionShape::`vector deleting destructor'(v69, 1u);
            return v9;
          }
          v71 = v116;
          if ( a5 == 1 )
          {
            v75 = FastRegion::CRegion::Intersect((FastRegion::CRegion *)&v137, (CRegionShape *)((char *)v116 + 16));
            if ( v75 < 0 )
              wil::details::in1diag3::FailFast_Hr(
                retaddr,
                (void *)0x1B1,
                (unsigned int)"onecoreuap\\windows\\DWM\\common\\shared\\Region.h",
                (const char *)(unsigned int)v75,
                v114);
          }
          else if ( a5 )
          {
            if ( a5 == 2 )
              CRegion::Subtract(&v137, (const struct FastRegion::Internal::CRgnData **)v116 + 2);
          }
          else
          {
            CRegion::Union((CRegion *)&v137, (CRegionShape *)((char *)v116 + 16));
          }
          v76 = (char *)MIDL_user_allocate(0x60uLL);
          v77 = v76;
          if ( v76 )
          {
            *(_OWORD *)(v76 + 28) = 0LL;
            *(_OWORD *)(v76 + 44) = 0LL;
            *(_OWORD *)(v76 + 60) = 0LL;
            *(_QWORD *)(v76 + 76) = 0LL;
            *((_DWORD *)v76 + 21) = 0;
            *((_QWORD *)v76 + 1) = 0LL;
            *(_QWORD *)v76 = &CRegionShape::`vftable';
            *((_QWORD *)v76 + 2) = v76 + 24;
            *((_DWORD *)v76 + 6) = 0;
            *((_QWORD *)v76 + 11) = 0LL;
            CRegionShape::SetEmpty((CRegionShape *)v76);
            CRegion::Copy((CRegion *)(v77 + 16), (const struct CRegion *)&v137);
            *a6 = (struct CShape *)v77;
            FastRegion::CRegion::FreeMemory(&v137);
            if ( v71 )
              CRegionShape::`vector deleting destructor'(v71, 1u);
            if ( !v69 )
              return v9;
            goto LABEL_166;
          }
          v9 = -2147024882;
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x322u, 0LL);
          FastRegion::CRegion::FreeMemory(&v137);
          if ( v71 )
            CRegionShape::`vector deleting destructor'(v71, 1u);
          if ( v69 )
            CRegionShape::`vector deleting destructor'(v69, 1u);
LABEL_40:
          if ( !Value )
            return v9;
          v30 = (CRegionShape *)Value;
LABEL_42:
          CRegionShape::`vector deleting destructor'(v30, 1u);
          return v9;
        }
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v68, 0x30Cu, 0LL);
        if ( v116 )
          CRegionShape::`vector deleting destructor'(v116, 1u);
      }
      v30 = v117;
      if ( !v117 )
        return v9;
      goto LABEL_42;
    }
    v44 = *(_QWORD *)v8;
    LODWORD(v116) = (_DWORD)Value;
    if ( (*(unsigned __int8 (__fastcall **)(CShape *, CRegionShape **))(v44 + 64))(v8, &v116)
      && (_DWORD)v116 == 1
      && (*(unsigned __int8 (__fastcall **)(char *, _QWORD))(*(_QWORD *)a3 + 64LL))(a3, 0LL) )
    {
      if ( !a4 && a5 == 1 )
      {
        v72 = *(_QWORD *)v8;
        v128 = 0LL;
        (*(void (__fastcall **)(CShape *, struct D2D_RECT_F *, __int64))(v72 + 80))(v8, &v128, 1LL);
        if ( (*(unsigned int (__fastcall **)(char *))(*(_QWORD *)a3 + 8LL))(a3) == 2 )
        {
          v73 = CRegionShape::IntersectWithRect(a3, &v128, a6);
          v9 = v73;
          if ( v73 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v73, 0x336u, Value);
        }
        else
        {
          v92 = CRectanglesShape::IntersectWithRect(a3, &v128, a6);
          v9 = v92;
          if ( v92 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v92, 0x33Du, Value);
        }
      }
      return v9;
    }
    if ( (*(unsigned int (__fastcall **)(CShape *))(*(_QWORD *)v8 + 8LL))(v8) )
    {
      v60 = *(_QWORD *)v8;
      LODWORD(v116) = (_DWORD)Value;
      if ( !(*(unsigned __int8 (__fastcall **)(CShape *, CRegionShape **))(v60 + 64))(v8, &v116) || (_DWORD)v116 != 1 )
        return v9;
    }
    if ( (*(unsigned int (__fastcall **)(char *))(*(_QWORD *)a3 + 8LL))(a3) && !CShape::AllowsOcclusion((CShape *)a3)
      || a5 != 1
      || a4 && !CMILMatrix::Is2DAxisAlignedPreserving((CMILMatrix *)a4) )
    {
      return v9;
    }
    v45 = (__int64)Value;
    if ( !(*(unsigned int (__fastcall **)(CShape *))(*(_QWORD *)v8 + 8LL))(v8) )
      v45 = *((_QWORD *)v8 + 2) + 16LL;
    v46 = *(_QWORD *)a3;
    v125 = (int)Value;
    if ( !(*(unsigned int (__fastcall **)(char *))(v46 + 8))(a3) )
    {
      Value = (float *)(*((_QWORD *)a3 + 2) + 16LL);
      if ( a4 )
      {
        CRoundedRectangleGeometryData::Transform_AxisAlignedPreserving(
          (const struct CRoundedRectangleGeometryData *)(*((_QWORD *)a3 + 2) + 16LL),
          (const struct CMILMatrix *)a4,
          (struct CRoundedRectangleGeometryData *)v124);
        Value = (float *)v124;
      }
    }
    v135 = v9;
    if ( v45 && Value )
    {
      v48 = CRoundedRectangleGeometryData::TryMerge(
              (const struct CRoundedRectangleGeometryData *)v45,
              (const struct CRoundedRectangleGeometryData *)Value,
              (struct CRoundedRectangleGeometryData *)&v129);
    }
    else
    {
      v128 = 0LL;
      if ( v45 )
      {
        v74 = *(_QWORD *)a3;
        v117 = (CRegionShape *)v45;
        v9 = (*(__int64 (__fastcall **)(char *, struct D2D_RECT_F *, unsigned __int64))(v74 + 48))(a3, &v128, a4);
        if ( (v9 & 0x80000000) != 0 )
        {
          v115 = 889;
          goto LABEL_128;
        }
      }
      else
      {
        v47 = *(_QWORD *)v8;
        v117 = (CRegionShape *)Value;
        v9 = (*(__int64 (__fastcall **)(CShape *, struct D2D_RECT_F *, _QWORD))(v47 + 48))(v8, &v128, 0LL);
        if ( (v9 & 0x80000000) != 0 )
        {
          v115 = 896;
          goto LABEL_128;
        }
      }
      v48 = CRoundedRectangleGeometryData::TryClipWithRect(v117, &v128, &v129);
    }
    if ( !v48 )
      return v9;
    v49 = v136;
    v50 = v132;
    v51 = *(float *)&v131;
    y = v130.y;
    x = v130.x;
    if ( v136 )
    {
      if ( !CRoundedRectangleGeometryData::IsRoundedCorner(&v130) )
      {
LABEL_232:
        v93 = CThreadLocalObjectCache<CRectanglesShape,CRectanglesShape>::Alloc();
        v94 = (CRectanglesShape *)v93;
        if ( v93 )
        {
          if ( v136 )
          {
            *(_QWORD *)&v127.left = *(_QWORD *)&v129.left;
            v127.right = v129.right + v129.left;
            v127.bottom = v129.bottom + v129.top;
          }
          else
          {
            v127 = v129;
          }
          v93[1] = 0LL;
          *v93 = &CRectanglesShape::`vftable';
          v95 = v93 + 5;
          *((_QWORD *)v94 + 2) = v95;
          *((_QWORD *)v94 + 3) = v95;
          *((_QWORD *)v94 + 4) = (char *)v94 + 56;
          *((_QWORD *)v94 + 7) = 0LL;
          CRectanglesShape::Reset(v94);
          v128 = v127;
          detail::vector_facade<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,detail::buffer_impl<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,1,1,detail::liberal_expansion_policy>>::push_back(
            (__int64)v94 + 16,
            &v128);
          *a6 = v94;
          return v9;
        }
        v9 = -2147024882;
        v115 = 907;
        *a6 = 0LL;
        goto LABEL_128;
      }
    }
    else
    {
      if ( v130.x > 0.0 && v130.y > 0.0 || *(float *)&v131 > 0.0 && v132 > 0.0 )
        goto LABEL_89;
      if ( !CRoundedRectangleGeometryData::IsRoundedCorner(&v133)
        && !CRoundedRectangleGeometryData::IsRoundedCorner(&v134) )
      {
        goto LABEL_232;
      }
    }
    v49 = v136;
LABEL_89:
    if ( v45
      && v49 == *(_BYTE *)(v45 + 52)
      && v129.left == *(float *)v45
      && v129.top == *(float *)(v45 + 4)
      && v129.right == *(float *)(v45 + 8)
      && v129.bottom == *(float *)(v45 + 12)
      && x == *(float *)(v45 + 16)
      && y == *(float *)(v45 + 20)
      && (v49
       || v51 == *(float *)(v45 + 24)
       && v50 == *(float *)(v45 + 28)
       && v134.x == *(float *)(v45 + 40)
       && v134.y == *(float *)(v45 + 44)
       && v133.x == *(float *)(v45 + 32)
       && v133.y == *(float *)(v45 + 36)) )
    {
      v9 = CShape::CopyShape(v8, 0LL, a6);
      if ( (v9 & 0x80000000) == 0 )
        return v9;
      v115 = 913;
      goto LABEL_128;
    }
    if ( Value
      && v49 == *((_BYTE *)Value + 52)
      && v129.left == *Value
      && v129.top == Value[1]
      && v129.right == Value[2]
      && v129.bottom == Value[3]
      && x == Value[4]
      && y == Value[5]
      && (v49
       || v51 == Value[6]
       && v50 == Value[7]
       && v134.x == Value[10]
       && v134.y == Value[11]
       && v133.x == Value[8]
       && v133.y == Value[9]) )
    {
      v9 = CShape::CopyShape((CShape *)a3, (const struct CMILMatrix *)a4, a6);
      if ( (v9 & 0x80000000) == 0 )
        return v9;
      v115 = 919;
      goto LABEL_128;
    }
    v54 = (_QWORD *)CThreadLocalObjectCache<CRoundedRectangleShape,CRoundedRectangleShape>::Alloc();
    v55 = v54;
    if ( !v54 )
    {
      v9 = -2147024882;
      v115 = 924;
      *a6 = 0LL;
      goto LABEL_128;
    }
    v54[1] = 0LL;
    *v54 = &CRoundedRectangleShape::`vftable';
    v56 = CRoundedRectangleShape::SharedData::Create((const struct CRoundedRectangleGeometryData *)&v129);
    v55[2] = v56;
    if ( v56 )
      (**(void (__fastcall ***)(struct CRoundedRectangleShape::SharedData *))v56)(v56);
LABEL_94:
    *a6 = (struct CShape *)v55;
    return v9;
  }
  if ( a4 )
  {
    v57 = *(_BYTE *)(a4 + 64);
    if ( v57 >> 6 == 1 )
      goto LABEL_102;
    if ( v57 >> 6 < 0 )
      goto LABEL_13;
    v58 = *(_BYTE *)(a4 + 65);
    if ( (char)(4 * v58) >> 6 != 1 )
    {
      v59 = _mm_load_si128((const __m128i *)&_xmm).m128i_u32[0];
      if ( (char)(4 * v58) >> 6 < 0 )
      {
LABEL_100:
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a4 + 4) - 0.0) & v59) < 0.000081380211
          && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a4 + 16) - 0.0) & v59) < 0.000081380211 )
        {
          *(_BYTE *)(a4 + 64) = v57 | 0xC0;
          goto LABEL_13;
        }
        goto LABEL_101;
      }
      v78 = v58 & 0xCF;
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                          (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(a4 + 28) & v59) * 61440.0)
                                        + (float)(COERCE_FLOAT(*(_DWORD *)(a4 + 12) & v59) * 61440.0))
                                + COERCE_FLOAT(*(_DWORD *)(a4 + 60) & v59))
                        - 1.0) & v59) < 0.000081380211 )
      {
        *(_BYTE *)(a4 + 65) = v78 ^ 0x30;
        goto LABEL_100;
      }
      *(_BYTE *)(a4 + 65) = v78 ^ 0x10;
    }
LABEL_101:
    *(_BYTE *)(a4 + 64) = v57 & 0x3F | 0x40;
LABEL_102:
    if ( !CMILMatrix::Is90Or270RotationWithTranslateAndScaleIgnoreZ<1>(a4) )
      return v9;
  }
LABEL_13:
  v15 = *(_QWORD *)v8;
  v126 = 0LL;
  v16 = *(__int64 (__fastcall **)(CShape *, struct D2D_RECT_F *, _QWORD))(v15 + 48);
  v127 = 0LL;
  v9 = v16(v8, &v126, 0LL);
  if ( (v9 & 0x80000000) != 0 )
  {
    v115 = 678;
    goto LABEL_128;
  }
  v9 = (*(__int64 (__fastcall **)(char *, struct D2D_RECT_F *, unsigned __int64))(*(_QWORD *)a3 + 48LL))(a3, &v127, a4);
  if ( (v9 & 0x80000000) != 0 )
  {
    v115 = 679;
    goto LABEL_128;
  }
  if ( a5 == 1 )
  {
    left = v126.left;
    if ( v127.left > v126.left )
    {
      v126.left = v127.left;
      left = v127.left;
    }
    top = v126.top;
    if ( v127.top > v126.top )
    {
      v126.top = v127.top;
      top = v127.top;
    }
    right = v126.right;
    if ( v126.right > v127.right )
    {
      v126.right = v127.right;
      right = v127.right;
    }
    bottom = v126.bottom;
    if ( v126.bottom > v127.bottom )
    {
      v126.bottom = v127.bottom;
      bottom = v127.bottom;
    }
    if ( right <= left || bottom <= top )
    {
      *(_QWORD *)&v126.right = 0LL;
      *(_QWORD *)&v126.left = 0LL;
    }
    if ( (*(unsigned int (__fastcall **)(CShape *))(*(_QWORD *)v8 + 8LL))(v8) == 2
      && (*(unsigned int (__fastcall **)(char *))(*(_QWORD *)a3 + 8LL))(a3) == 2
      && (!a4 || CMILMatrix::Is2DAxisAlignedIntegerPreserving((CMILMatrix *)a4)) )
    {
      ProcessHeap = GetProcessHeap();
      v62 = (char *)HeapAlloc(ProcessHeap, 0, 0x60uLL);
      v55 = v62;
      if ( !v62 )
      {
        v9 = -2147024882;
        Value = 0LL;
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x2B2u, 0LL);
        goto LABEL_40;
      }
      *(_OWORD *)(v62 + 28) = 0LL;
      *(_OWORD *)(v62 + 44) = 0LL;
      *(_OWORD *)(v62 + 60) = 0LL;
      *(_QWORD *)(v62 + 76) = 0LL;
      *((_DWORD *)v62 + 21) = 0;
      *((_QWORD *)v62 + 1) = 0LL;
      *(_QWORD *)v62 = &CRegionShape::`vftable';
      *((_QWORD *)v62 + 2) = v62 + 24;
      *((_DWORD *)v62 + 6) = 0;
      *((_QWORD *)v62 + 11) = 0LL;
      v63 = v126.left + 6291456.25;
      v122.left = (int)(LODWORD(v63) << 10) >> 11;
      v64 = v126.top + 6291456.25;
      v122.top = (int)(LODWORD(v64) << 10) >> 11;
      v65 = v126.right + 6291456.25;
      v122.right = (int)(LODWORD(v65) << 10) >> 11;
      *(float *)&v116 = v126.bottom + 6291456.25;
      v122.bottom = (int)((_DWORD)v116 << 10) >> 11;
      **((_DWORD **)v62 + 2) = 0;
      v66 = *((_QWORD *)v62 + 11);
      *((_QWORD *)v62 + 11) = 0LL;
      if ( v66 )
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v66 + 16LL))(v66, 0LL);
      v67 = CRegion::TryAddRectangles((CRegion *)(v55 + 2), &v122, 1u);
      if ( v67 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x1D1,
          (unsigned int)"onecoreuap\\windows\\DWM\\common\\shared\\Region.h",
          (const char *)(unsigned int)v67,
          v114);
      goto LABEL_94;
    }
    Value = (float *)TlsGetValue(CThreadContext::s_dwTlsIndex);
    if ( !Value )
    {
      v88 = (CThreadContext *)MIDL_user_allocate(0x1C0uLL);
      if ( !v88 || (v89 = CThreadContext::CThreadContext(v88), (Value = (float *)v89) == 0LL) )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x28u, 0LL);
        ModuleFailFastForHRESULT(-2147024882, retaddr);
      }
      TlsSetValue(CThreadContext::s_dwTlsIndex, v89);
    }
    v36 = *((_DWORD *)Value + 13);
    v8 = 0LL;
    a3 = 0LL;
    if ( v36 )
    {
      a3 = (char *)*((_QWORD *)Value + 7);
      *((_QWORD *)Value + 7) = *(_QWORD *)a3;
      *((_DWORD *)Value + 13) = v36 - 1;
    }
    if ( !a3 )
    {
      v37 = GetProcessHeap();
      a3 = (char *)HeapAlloc(v37, 0, 0x40uLL);
      if ( !a3 )
      {
        v9 = -2147024882;
        v115 = 697;
        *a6 = 0LL;
        goto LABEL_128;
      }
    }
    *((_QWORD *)a3 + 1) = 0LL;
    *(_QWORD *)a3 = &CRectanglesShape::`vftable';
    *((_QWORD *)a3 + 4) = a3 + 56;
    *((_QWORD *)a3 + 2) = a3 + 40;
    *((_QWORD *)a3 + 3) = a3 + 40;
    *((_QWORD *)a3 + 7) = 0LL;
    v38 = (__int64)(*((_QWORD *)a3 + 3) - (_QWORD)(a3 + 40)) >> 4;
    if ( v38 )
    {
      stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v118, (__int64)(a3 + 40), v38);
      *((_QWORD *)a3 + 3) += -16 * v39;
    }
    v40 = (detail::liberal_expansion_policy *)*((_QWORD *)a3 + 7);
    if ( v40 )
    {
      (*(void (__fastcall **)(detail::liberal_expansion_policy *))(*(_QWORD *)v40 + 16LL))(v40);
      *((_QWORD *)a3 + 7) = 0LL;
    }
    v41 = *((_QWORD *)a3 + 4);
    v42 = *((_QWORD *)a3 + 2);
    v43 = (v41 - *((_QWORD *)a3 + 3)) >> 4;
    a4 = (*((_QWORD *)a3 + 3) - v42) >> 4;
    v128 = v126;
    if ( !v43 )
    {
      if ( a4 + 1 < a4 )
      {
        std::_Xoverflow_error("overflow");
        __debugbreak();
        goto LABEL_68;
      }
      v108 = detail::liberal_expansion_policy::expand(v40, (v41 - v42) >> 4, a4 + 1);
      v109 = operator new[](saturated_mul(v108, 0x10uLL));
      stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v118, (__int64)v109, a4);
      v110 = *((_QWORD *)a3 + 3);
      v111 = (void *)*((_QWORD *)a3 + 2);
      v120 = v118;
      v121 = i;
      std::uninitialized_move<std::move_iterator<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded> *>,stdext::checked_array_iterator<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded> *>>(
        (__int64)&v118,
        v111,
        v110,
        &v120);
      v112 = (char *)*((_QWORD *)a3 + 2);
      *((_QWORD *)a3 + 2) = v109;
      v117 = 0LL;
      if ( v112 == a3 + 40 )
        v112 = 0LL;
      operator delete(v112);
      v113 = *((_QWORD *)a3 + 2) + 16 * v108;
      *((_QWORD *)a3 + 3) = *((_QWORD *)a3 + 2) + 16 * a4;
      *((_QWORD *)a3 + 4) = v113;
      std::unique_ptr<detail::aligned_storage_for<tagCOMPOSITION_TARGET_ID_AND_STATS> [0],std::default_delete<detail::aligned_storage_for<tagCOMPOSITION_TARGET_ID_AND_STATS> [0]>>::~unique_ptr<detail::aligned_storage_for<tagCOMPOSITION_TARGET_ID_AND_STATS> [0],std::default_delete<detail::aligned_storage_for<tagCOMPOSITION_TARGET_ID_AND_STATS> [0]>>((void **)&v117);
    }
    v79 = (char *)*((_QWORD *)a3 + 3);
    v117 = (CRegionShape *)*((_QWORD *)a3 + 2);
    v123 = (v79 - (char *)v117) >> 4;
    v80 = v123 - a4;
    v116 = (CRegionShape *)(v123 - a4);
    *(_QWORD *)&v122.left = 16 * v123;
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v118, (__int64)v117 + 16 * v123, 1LL);
    v120 = v118;
    v121 = i;
    stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v120, 1LL);
    v81 = v80;
    if ( v80 > 1 )
      v81 = 1LL;
    v118 = v120;
    v82 = 16 * v81;
    v83 = &v79[-v82];
    for ( i = v121; v79 != v83; *(_OWORD *)stdext::checked_array_iterator<D2D_RECT_F *>::operator->(&v118) = *(_OWORD *)v79 )
    {
      v79 -= 16;
      stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *>::operator--(&v118);
    }
    v84 = v117;
    if ( (unsigned __int64)v116 > 1 )
    {
      stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v118, (__int64)v117, v123);
      v120 = v118;
      v121 = i;
      stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v120, v85);
      v86 = v120;
      i = v121;
      v118 = v120;
      v87 = *(_QWORD *)&v122.left - 16 * a4 - 16;
      stdext::checked_array_iterator<char *>::_Verify_offset((__int64)&v118, -(v87 >> 4));
      memmove_0((void *)(v86 + 16 * v121 - v87), (char *)v84 + 16 * a4, v87);
    }
    *((_QWORD *)a3 + 3) += 16LL;
    *((struct D2D_RECT_F *)v84 + a4) = v128;
    *a6 = (struct CShape *)a3;
    return v9;
  }
  if ( !a5 )
  {
    if ( v127.right <= v127.left
      || (*(_QWORD *)&v90 = LODWORD(v127.top), v127.bottom <= v127.top)
      || v127.left >= v126.left && v127.top >= v126.top && v126.right >= v127.right && v126.bottom >= v127.bottom
      || IsEmpty(&v127) )
    {
      v91 = CShape::CopyShape(v8, 0LL, a6);
      v9 = v91;
      if ( v91 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v91, 0x2E4u, 0LL);
    }
    else if ( (unsigned __int8)TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::DoesContain(
                                 &v127,
                                 &v126)
           || IsEmpty(&v126) )
    {
      v107 = CShape::CopyShape((CShape *)a3, (const struct CMILMatrix *)a4, a6);
      v9 = v107;
      if ( v107 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v107, 0x2E8u, 0LL);
    }
    else if ( (unsigned __int8)CanCombineToRegion(v8, v101, a3, a4) )
    {
      v137 = (FastRegion::CRegion *)v138;
      v138[0] = 0;
      v102 = (const struct tagRECT *)PixelAlign((int *)&v128, (unsigned int *)&v126, v90);
      CRegion::AddRectangle((CRegion *)&v137, v102);
      v103 = (const struct tagRECT *)PixelAlign((int *)&v128, (unsigned int *)&v127, v90);
      CRegion::AddRectangle((CRegion *)&v137, v103);
      v104 = (char *)MIDL_user_allocate(0x60uLL);
      v105 = v104;
      if ( v104 )
      {
        *(_OWORD *)(v104 + 28) = 0LL;
        *(_OWORD *)(v104 + 44) = 0LL;
        *(_OWORD *)(v104 + 60) = 0LL;
        *(_QWORD *)(v104 + 76) = 0LL;
        *((_DWORD *)v104 + 21) = 0;
        *((_QWORD *)v104 + 1) = 0LL;
        *(_QWORD *)v104 = &CRegionShape::`vftable';
        *((_QWORD *)v104 + 2) = v104 + 24;
        *((_DWORD *)v104 + 6) = 0;
        *((_QWORD *)v104 + 11) = 0LL;
      }
      else
      {
        v105 = 0LL;
      }
      std::unique_ptr<CRegionShape>::reset(&v117, v105);
      v106 = v117;
      if ( v117 )
      {
        CRegionShape::BuildFromCRegion(v117, (const struct CRegion *)&v137);
        *a6 = v106;
      }
      else
      {
        v9 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x2F7u, 0LL);
      }
      FastRegion::CRegion::FreeMemory(&v137);
    }
    return v9;
  }
  if ( a5 != 2 )
    return v9;
  if ( v126.right <= v126.left
    || (*(_QWORD *)&v17 = LODWORD(v126.top), v126.bottom <= v126.top)
    || v126.left >= v127.left && v126.top >= v127.top && v127.right >= v126.right && v127.bottom >= v126.bottom )
  {
    v96 = (struct CShape *)CThreadLocalObjectCache<CRectanglesShape,CRectanglesShape>::Alloc();
    if ( !v96 )
    {
      v9 = -2147024882;
      *a6 = 0LL;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x2C3u, 0LL);
      return v9;
    }
LABEL_246:
    *((_QWORD *)v96 + 1) = 0LL;
    *(_QWORD *)v96 = &CRectanglesShape::`vftable';
    *((_QWORD *)v96 + 2) = (char *)v96 + 40;
    *((_QWORD *)v96 + 3) = (char *)v96 + 40;
    *((_QWORD *)v96 + 4) = (char *)v96 + 56;
    *((_QWORD *)v96 + 7) = 0LL;
    *a6 = v96;
    return v9;
  }
  if ( v126.right >= v127.left && v127.right >= v126.left && v126.bottom >= v127.top && v127.bottom >= v126.top )
  {
    if ( (*(unsigned int (__fastcall **)(CShape *))(*(_QWORD *)v8 + 8LL))(v8) != 2
      || (*(unsigned int (__fastcall **)(char *))(*(_QWORD *)a3 + 8LL))(a3) != 2
      || a4 && !CMILMatrix::Is2DAxisAlignedIntegerPreserving((CMILMatrix *)a4) )
    {
      return v9;
    }
    v18 = PixelAlign((int *)&v128, (unsigned int *)&v126, v17);
    *(_QWORD *)&v129.left = &v129.right;
    v19 = *((float *)v18 + 2);
    v20 = *(float *)v18;
    if ( *v18 >= SLODWORD(v19) || (v21 = *((float *)v18 + 3), v22 = *((float *)v18 + 1), SLODWORD(v22) >= SLODWORD(v21)) )
    {
      v129.right = 0.0;
    }
    else
    {
      LODWORD(v129.right) = 2;
      v129.bottom = v20;
      v130.x = v19;
      v130.y = v22;
      v131 = 16;
      v133.y = v20;
      v134.x = v19;
      v132 = v21;
      LODWORD(v133.x) = 16;
    }
    v23 = PixelAlign((int *)&v128, (unsigned int *)&v127, v17);
    v137 = (FastRegion::CRegion *)v138;
    v24 = v23[2];
    v25 = *v23;
    if ( *v23 >= v24 || (v26 = v23[3], v27 = v23[1], v27 >= v26) )
    {
      v138[0] = 0;
    }
    else
    {
      v138[0] = 2;
      v138[1] = v25;
      v138[2] = v24;
      v138[3] = v27;
      v138[4] = 16;
      v138[7] = v25;
      v138[8] = v24;
      v138[5] = v26;
      v138[6] = 16;
    }
    CRegion::Subtract((const struct FastRegion::Internal::CRgnData **)&v129, &v137);
    v28 = (char *)MIDL_user_allocate(0x60uLL);
    v29 = v28;
    if ( v28 )
    {
      *(_OWORD *)(v28 + 28) = 0LL;
      *(_OWORD *)(v28 + 44) = 0LL;
      *(_OWORD *)(v28 + 60) = 0LL;
      *(_QWORD *)(v28 + 76) = 0LL;
      *((_DWORD *)v28 + 21) = 0;
      *((_QWORD *)v28 + 1) = 0LL;
      *(_QWORD *)v28 = &CRegionShape::`vftable';
      *((_QWORD *)v28 + 2) = v28 + 24;
      *((_DWORD *)v28 + 6) = 0;
      *((_QWORD *)v28 + 11) = 0LL;
      CRegionShape::SetEmpty((CRegionShape *)v28);
      CRegion::Copy((CRegion *)(v29 + 16), (const struct CRegion *)&v129);
      *a6 = (struct CShape *)v29;
      FastRegion::CRegion::FreeMemory(&v137);
      FastRegion::CRegion::FreeMemory((FastRegion::CRegion **)&v129);
      return v9;
    }
    v9 = -2147024882;
    Value = 0LL;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x2D8u, 0LL);
    FastRegion::CRegion::FreeMemory(&v137);
    FastRegion::CRegion::FreeMemory((FastRegion::CRegion **)&v129);
    goto LABEL_40;
  }
  v97 = CShape::CopyShape(v8, 0LL, a6);
  v9 = v97;
  if ( v97 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v97, 0x2C8u, 0LL);
  return v9;
}
