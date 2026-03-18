/*
 * XREFs of ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x1800B8950
 * Callers:
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800B6780 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800B6BA0 (-Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc.c)
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z @ 0x1800B7170 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ?PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_NPEAVCCpuClipAntialiasSink@@PEA_N@Z @ 0x1800C61E0 (-PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_.c)
 *     ?PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAUNodeEffects@1@PEA_N@Z @ 0x1800C70F0 (-PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJPEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_REC.c)
 *     ?ComputeBrushClamp@CBrushDrawListGenerator@@CAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@KAEBVMatrix3x3@@PEAPEAVCShape@@@Z @ 0x1800DA580 (-ComputeBrushClamp@CBrushDrawListGenerator@@CAJV-$span@PEBVCDrawListBrush@@$0-0@gsl@@KAEBVMatrix.c)
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800DB820 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?FlattenToLineSegments@CRoundedRectangleShape@@UEBAJMPEAPEAVCShape@@@Z @ 0x1800DE4E0 (-FlattenToLineSegments@CRoundedRectangleShape@@UEBAJMPEAPEAVCShape@@@Z.c)
 *     ?GetAccumShape@CGdiSpriteBitmap@@QEAA?AVCShapePtr@@_N@Z @ 0x18012F694 (-GetAccumShape@CGdiSpriteBitmap@@QEAA-AVCShapePtr@@_N@Z.c)
 *     ?AddNewContent@CComposeTop@@QEAAJPEAVIBitmapResource@@AEBVCShape@@AEBVCMILMatrix@@@Z @ 0x180158998 (-AddNewContent@CComposeTop@@QEAAJPEAVIBitmapResource@@AEBVCShape@@AEBVCMILMatrix@@@Z.c)
 *     ?GetShapeDataWorker@CGeometry@@AEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18016BED0 (-GetShapeDataWorker@CGeometry@@AEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ @ 0x180193F90 (-EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ.c)
 *     ?ConvertContextDependentClipToLocal@CCpuClip@@AEAAJXZ @ 0x18021888C (-ConvertContextDependentClipToLocal@CCpuClip@@AEAAJXZ.c)
 *     ?FlattenToLineSegments@CRegionShape@@UEBAJMPEAPEAVCShape@@@Z @ 0x180228AB0 (-FlattenToLineSegments@CRegionShape@@UEBAJMPEAPEAVCShape@@@Z.c)
 *     ?AddPrimitiveClip@CCpuClip@@QEAAJPEBVCShape@@PEBVCMILMatrix@@@Z @ 0x18025A0D8 (-AddPrimitiveClip@CCpuClip@@QEAAJPEBVCShape@@PEBVCMILMatrix@@@Z.c)
 *     ?UpdateMaskIntermediate@CProjectedShadowCaster@@QEAAJPEAVCDrawingContext@@@Z @ 0x180263EC0 (-UpdateMaskIntermediate@CProjectedShadowCaster@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     ?HitTest@CCompositionSurfaceBitmap@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x1802661C0 (-HitTest@CCompositionSurfaceBitmap@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z.c)
 * Callees:
 *     ?_Verify_offset@?$checked_array_iterator@PEAD@stdext@@QEBAX_J@Z @ 0x18000A774 (-_Verify_offset@-$checked_array_iterator@PEAD@stdext@@QEBAX_J@Z.c)
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ??Y?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEAAAEAV01@_J@Z @ 0x18000CAF0 (--Y-$checked_array_iterator@PEAV-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdex.c)
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x18000D87C (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ @ 0x1800111B0 (-Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ.c)
 *     ??$Is90Or270RotationWithTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x180011FD0 (--$Is90Or270RotationWithTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x18002D598 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ??1?$unique_ptr@$$BY0A@U?$aligned_storage_for@UtagCOMPOSITION_TARGET_ID_AND_STATS@@@detail@@U?$default_delete@$$BY0A@U?$aligned_storage_for@UtagCOMPOSITION_TARGET_ID_AND_STATS@@@detail@@@std@@@std@@QEAA@XZ @ 0x18002D63C (--1-$unique_ptr@$$BY0A@U-$aligned_storage_for@UtagCOMPOSITION_TARGET_ID_AND_STATS@@@detail@@U-$d.c)
 *     ??_U@YAPEAX_K@Z @ 0x18002D660 (--_U@YAPEAX_K@Z.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@std@@V?$checked_array_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@stdext@@V?$move_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@0@0V12@@Z @ 0x18002D6AC (--$uninitialized_move@V-$move_iterator@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDS.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180074C60 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUD2D_RECT_F@@QEAUD2D_POINT_2F@@@Z @ 0x1800757E0 (-Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUD2D_RECT_F@@QEAUD2D_POINT_2F@@@Z.c)
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??F?$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ @ 0x18008FA08 (--F-$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ.c)
 *     ?CMilRectLFromD2D_RECT_F@@YA?AV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@AEBUD2D_RECT_F@@@Z @ 0x18009DFF0 (-CMilRectLFromD2D_RECT_F@@YA-AV-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRe.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A9EDC (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800B1E20 (--$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??0CComplexShape@@QEAA@PEAUID2D1Geometry@@@Z @ 0x1800D9B1C (--0CComplexShape@@QEAA@PEAUID2D1Geometry@@@Z.c)
 *     ??0CPolygonShape@@QEAA@PEAUID2D1Geometry@@@Z @ 0x1800D9BD4 (--0CPolygonShape@@QEAA@PEAUID2D1Geometry@@@Z.c)
 *     ??_ECRegionShape@@UEAAPEAXI@Z @ 0x1800DCF70 (--_ECRegionShape@@UEAAPEAXI@Z.c)
 *     ?Transform_AxisAlignedPreserving@CRoundedRectangleGeometryData@@SAXAEBU1@AEBVCMILMatrix@@PEAU1@@Z @ 0x1800DD030 (-Transform_AxisAlignedPreserving@CRoundedRectangleGeometryData@@SAXAEBU1@AEBVCMILMatrix@@PEAU1@@.c)
 *     ?Alloc@?$CThreadLocalObjectCache@VCRoundedRectangleShape@@V1@@@SAPEAX_K@Z @ 0x1800DDC94 (-Alloc@-$CThreadLocalObjectCache@VCRoundedRectangleShape@@V1@@@SAPEAX_K@Z.c)
 *     ?Create@SharedData@CRoundedRectangleShape@@SAPEAV12@AEBUCRoundedRectangleGeometryData@@@Z @ 0x1800DDD80 (-Create@SharedData@CRoundedRectangleShape@@SAPEAV12@AEBUCRoundedRectangleGeometryData@@@Z.c)
 *     ?SetEmpty@CRegionShape@@QEAAXXZ @ 0x1800E9694 (-SetEmpty@CRegionShape@@QEAAXXZ.c)
 *     ?TryAddRectangle@CRegion@@QEAAJAEBUtagRECT@@@Z @ 0x1800E9F90 (-TryAddRectangle@CRegion@@QEAAJAEBUtagRECT@@@Z.c)
 *     ?BuildFromCRegion@CRegionShape@@QEAAXAEBVCRegion@@@Z @ 0x18012F7A4 (-BuildFromCRegion@CRegionShape@@QEAAXAEBVCRegion@@@Z.c)
 *     ?Copy@CRegion@@QEAAXAEBV1@@Z @ 0x18012F7D8 (-Copy@CRegion@@QEAAXAEBV1@@Z.c)
 *     ??C?$checked_array_iterator@PEAUD2D_RECT_F@@@stdext@@QEBAPEAUD2D_RECT_F@@XZ @ 0x180142FD8 (--C-$checked_array_iterator@PEAUD2D_RECT_F@@@stdext@@QEBAPEAUD2D_RECT_F@@XZ.c)
 *     ??1?$vector_facade@V?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@V?$buffer_impl@V?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x1801802F0 (--1-$vector_facade@V-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectU.c)
 *     ?Is2DAxisAlignedIntegerPreserving@CMILMatrix@@QEBA_NXZ @ 0x180189B6C (-Is2DAxisAlignedIntegerPreserving@CMILMatrix@@QEBA_NXZ.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x180203284 (--0CThreadContext@@AEAA@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     memmove_0 @ 0x1802B97BC (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CShape::CopyShape(CShape *this, const struct CMILMatrix *a2, struct CShape **a3)
{
  _QWORD *v3; // r12
  CMILMatrix *v5; // rbx
  CShape *v6; // r14
  int v7; // eax
  _DWORD *v8; // rdi
  int v9; // ecx
  HANDLE v10; // rax
  CShape *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // r8
  __int64 v15; // r8
  gsl::details *v16; // rcx
  unsigned __int64 v17; // r13
  __int64 v18; // rdx
  __int64 v19; // rdi
  unsigned __int64 v20; // rsi
  unsigned __int64 v21; // rax
  int v22; // eax
  int v23; // eax
  __int64 *v24; // rax
  struct CShape *v25; // rdi
  __int64 v26; // rdx
  unsigned int v27; // r13d
  char v29; // dl
  char v30; // al
  char v31; // cl
  unsigned __int32 v32; // xmm7_4
  float v33; // xmm6_4
  float v34; // xmm9_4
  char v35; // di
  char v36; // al
  _DWORD *v37; // rsi
  int v38; // ecx
  struct CShape *v39; // rdi
  HANDLE v40; // rax
  void (__fastcall ***v41)(_QWORD); // rcx
  _OWORD *v42; // r14
  _BYTE *v43; // rdi
  unsigned __int64 v44; // rbx
  unsigned __int64 v45; // rsi
  SIZE_T v46; // r9
  SIZE_T v47; // rax
  void *v48; // rdi
  void *v49; // rcx
  bool v50; // zf
  unsigned __int64 v51; // r12
  unsigned __int64 v52; // rax
  _BYTE *v53; // rsi
  char *v54; // xmm6_8
  signed __int64 v55; // rdi
  void *v56; // rdi
  const void *v57; // rsi
  unsigned int v58; // esi
  char *v59; // r10
  const struct D2D_RECT_F *v60; // rdi
  __m128 x_low; // xmm3
  __m128 v62; // xmm6
  float y; // xmm5_4
  float v64; // xmm4_4
  __m128 v65; // xmm3
  __m128 v66; // xmm3
  __int64 v67; // rax
  __m128 v68; // xmm3
  __m128 v69; // xmm3
  _DWORD *Value; // rdi
  int v71; // ecx
  HANDLE v72; // rax
  __int64 v73; // rdx
  unsigned __int64 v74; // rdi
  __int64 v75; // r8
  __int64 v76; // r8
  detail::liberal_expansion_policy *v77; // rcx
  unsigned __int64 v78; // r13
  __int64 v79; // rdx
  __int64 v80; // rdi
  unsigned __int64 v81; // rsi
  unsigned __int64 v82; // rax
  HANDLE v83; // rax
  struct CShape *v84; // rax
  struct CShape *v85; // rdi
  void (__fastcall ***v86)(_QWORD); // rdx
  const struct CRoundedRectangleGeometryData *v87; // rcx
  struct CShape *v88; // rax
  struct CShape *v89; // rsi
  CMILMatrix *v90; // rcx
  float v91; // xmm11_4
  __int32 v92; // xmm0_4
  char v93; // al
  HANDLE ProcessHeap; // rax
  char *v95; // rax
  HANDLE v96; // rax
  CThreadContext *v97; // rax
  CThreadContext *v98; // rax
  HANDLE v99; // rax
  char *v100; // rax
  char *v101; // rsi
  char *v102; // rdi
  unsigned __int64 v103; // rsi
  unsigned __int64 v104; // rax
  char *v105; // rsi
  __int64 v106; // rdi
  char *v107; // xmm6_8
  signed __int64 v108; // rdi
  __int64 v109; // rdi
  __int128 v110; // xmm0
  CShape *v111; // xmm1_8
  _OWORD *v112; // rdi
  CMILMatrix *m; // rax
  char v114; // al
  CThreadContext *v115; // rax
  CThreadContext *v116; // rax
  char *v117; // rdi
  char *v118; // rsi
  unsigned __int64 v119; // rax
  char *v120; // rsi
  void *v121; // rdi
  char *v122; // xmm6_8
  char *v123; // rsi
  signed __int64 v124; // rdi
  __int64 v125; // rdi
  __int128 v126; // xmm0
  CShape *v127; // xmm1_8
  _OWORD *v128; // rdi
  CMILMatrix *k; // rax
  _BYTE *v130; // rdi
  __int64 v131; // r8
  __int64 v132; // r8
  HANDLE v133; // rax
  CThreadContext *v134; // rax
  CThreadContext *v135; // rax
  _BYTE *v136; // rdi
  __int64 v137; // r8
  __int64 v138; // r8
  HANDLE v139; // rax
  int v140; // eax
  unsigned __int64 v141; // rax
  float x; // xmm1_4
  float v143; // xmm0_4
  char v144; // cl
  char v145; // al
  char v146; // cl
  char v147; // cl
  char v148; // cl
  CPolygonShape *v149; // rax
  struct CShape *v150; // rax
  char *v151; // rax
  CRegionShape *v152; // rdi
  unsigned int v153; // esi
  int v154; // eax
  unsigned __int64 v155; // rsi
  LPVOID v156; // rdi
  __int64 v157; // r8
  void *v158; // rdx
  _QWORD *v159; // rcx
  __int64 v160; // rsi
  unsigned __int64 v161; // rsi
  LPVOID v162; // rdi
  __int64 v163; // r8
  void *v164; // rdx
  _QWORD *v165; // rcx
  __int64 v166; // rsi
  CComplexShape *v167; // rax
  unsigned int v168; // [rsp+28h] [rbp-E0h]
  void *v169; // [rsp+30h] [rbp-D8h]
  unsigned __int64 v170; // [rsp+38h] [rbp-D0h] BYREF
  unsigned __int64 v171; // [rsp+40h] [rbp-C8h]
  void *v172[3]; // [rsp+48h] [rbp-C0h] BYREF
  CShape *v173; // [rsp+60h] [rbp-A8h]
  __int128 v174; // [rsp+68h] [rbp-A0h] BYREF
  CShape *i; // [rsp+78h] [rbp-90h]
  unsigned int v176; // [rsp+88h] [rbp-80h]
  __int128 v177; // [rsp+98h] [rbp-70h] BYREF
  CShape *v178; // [rsp+A8h] [rbp-60h]
  CMILMatrix *v179; // [rsp+B8h] [rbp-50h]
  CShape *v180; // [rsp+C0h] [rbp-48h]
  struct ID2D1Geometry *v181; // [rsp+C8h] [rbp-40h] BYREF
  unsigned __int64 v182; // [rsp+D0h] [rbp-38h]
  struct D2D_POINT_2F v183[2]; // [rsp+D8h] [rbp-30h] BYREF
  CShape *j; // [rsp+E8h] [rbp-20h]
  int v185; // [rsp+108h] [rbp+0h]
  LPVOID lpMem; // [rsp+128h] [rbp+20h] BYREF
  _BYTE *v187; // [rsp+130h] [rbp+28h]
  char *v188; // [rsp+138h] [rbp+30h]
  _BYTE Src[160]; // [rsp+140h] [rbp+38h] BYREF
  char v190[8]; // [rsp+1E0h] [rbp+D8h] BYREF
  void *retaddr; // [rsp+290h] [rbp+188h]

  v3 = 0LL;
  v179 = a2;
  v180 = this;
  v176 = 0;
  v5 = a2;
  v181 = 0LL;
  v6 = this;
  LODWORD(v170) = 0;
  *a3 = 0LL;
  if ( a2 )
  {
    v29 = *((_BYTE *)a2 + 64);
    v30 = (char)(v29 << 6) >> 6;
    if ( v30 == 1 )
      goto LABEL_49;
    if ( v30 < 0 && v30 == -2 )
      goto LABEL_2;
    v31 = *((_BYTE *)v5 + 65);
    if ( (char)(16 * v31) >> 6 == 1 )
    {
LABEL_49:
      v32 = _mm_load_si128((const __m128i *)&_xmm).m128i_u32[0];
      v33 = FLOAT_61440_0;
      v34 = FLOAT_1_0;
      goto LABEL_52;
    }
    v32 = _mm_load_si128((const __m128i *)&_xmm).m128i_u32[0];
    v33 = FLOAT_61440_0;
    v34 = FLOAT_1_0;
    if ( (char)(16 * v31) >> 6 != 0xFE )
    {
      if ( (char)(4 * v31) >> 6 == 1 )
        goto LABEL_52;
      if ( (char)(4 * v31) >> 6 == 0xFE )
      {
        v36 = (float)(COERCE_FLOAT(*((_DWORD *)v5 + 11) & v32) * 61440.0) == 0.0;
      }
      else
      {
        if ( (float)((float)((float)(COERCE_FLOAT(*((_DWORD *)v5 + 7) & v32) * 61440.0)
                           + (float)(COERCE_FLOAT(*((_DWORD *)v5 + 3) & v32) * 61440.0))
                   + COERCE_FLOAT(*((_DWORD *)v5 + 15) & v32)) == 1.0 )
        {
          v35 = 1;
          *((_BYTE *)v5 + 65) = v31 & 0xCF ^ 0x20;
        }
        else
        {
          v35 = 0;
        }
        v36 = v35 & ((float)(COERCE_FLOAT(*((_DWORD *)v5 + 11) & v32) * 61440.0) == 0.0);
      }
      if ( !v36 || *((float *)v5 + 8) != 0.0 || *((float *)v5 + 9) != 0.0 )
        goto LABEL_52;
      *((_BYTE *)v5 + 65) = *((_BYTE *)v5 + 65) & 0xF3 ^ 8;
    }
    if ( (char)(16 * v29) >> 6 == 1 )
      goto LABEL_52;
    if ( (char)(16 * v29) >> 6 != 0xFE )
    {
      v148 = *((_BYTE *)v5 + 65);
      if ( (char)(4 * v148) >> 6 == 1 )
        goto LABEL_52;
      if ( (char)(4 * v148) >> 6 != 0xFE )
      {
        if ( (float)((float)((float)(COERCE_FLOAT(*((_DWORD *)v5 + 7) & v32) * 61440.0)
                           + (float)(COERCE_FLOAT(*((_DWORD *)v5 + 3) & v32) * 61440.0))
                   + COERCE_FLOAT(*((_DWORD *)v5 + 15) & v32)) != 1.0 )
          goto LABEL_52;
        *((_BYTE *)v5 + 65) = v148 & 0xCF ^ 0x20;
      }
      if ( *((float *)v5 + 2) != 0.0 || *((float *)v5 + 6) != 0.0 )
      {
LABEL_52:
        if ( !(*(unsigned __int8 (__fastcall **)(CShape *, unsigned __int64 *))(*(_QWORD *)v6 + 64LL))(v6, &v170) )
        {
          if ( !(*(unsigned int (__fastcall **)(CShape *))(*(_QWORD *)v6 + 8LL))(v6)
            && CMILMatrix::Is2DAxisAlignedPreserving(v5) )
          {
            v87 = (const struct CRoundedRectangleGeometryData *)(*((_QWORD *)v6 + 2) + 16LL);
            v185 = 0;
            CRoundedRectangleGeometryData::Transform_AxisAlignedPreserving(
              v87,
              v5,
              (struct CRoundedRectangleGeometryData *)v183);
            v88 = (struct CShape *)CThreadLocalObjectCache<CRoundedRectangleShape,CRoundedRectangleShape>::Alloc();
            v89 = v88;
            if ( !v88 )
            {
              v169 = 0LL;
              v168 = 329;
              *a3 = 0LL;
              goto LABEL_118;
            }
            *((_QWORD *)v88 + 1) = 0LL;
            *(_QWORD *)v88 = &CRoundedRectangleShape::`vftable';
            *((_QWORD *)v88 + 2) = CRoundedRectangleShape::SharedData::Create((const struct CRoundedRectangleGeometryData *)v183);
            Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))v89 + 2);
            *a3 = v89;
          }
          goto LABEL_23;
        }
        if ( *((char *)v5 + 64) >> 6 == 1 )
          goto LABEL_106;
        if ( *((char *)v5 + 64) >> 6 < 0 )
        {
LABEL_55:
          if ( !(_DWORD)v170 )
          {
            ProcessHeap = GetProcessHeap();
            v95 = (char *)HeapAlloc(ProcessHeap, 0, 0x60uLL);
            if ( !v95 )
            {
              v169 = 0LL;
              v168 = 312;
              *a3 = 0LL;
              goto LABEL_118;
            }
            *(_OWORD *)(v95 + 28) = 0LL;
            *(_OWORD *)(v95 + 44) = 0LL;
            *(_OWORD *)(v95 + 60) = 0LL;
            *(_QWORD *)(v95 + 76) = 0LL;
            *((_DWORD *)v95 + 21) = 0;
            *((_QWORD *)v95 + 1) = 0LL;
            *(_QWORD *)v95 = &CRegionShape::`vftable';
            *((_QWORD *)v95 + 2) = v95 + 24;
            *((_DWORD *)v95 + 6) = 0;
            *((_QWORD *)v95 + 11) = 0LL;
            *a3 = (struct CShape *)v95;
            goto LABEL_23;
          }
          v42 = Src;
          lpMem = Src;
          v43 = Src;
          v187 = Src;
          v188 = v190;
          v44 = (unsigned int)v170;
          if ( (unsigned int)v170 > 0xAuLL )
          {
            v45 = detail::liberal_expansion_policy::expand(
                    (detail::liberal_expansion_policy *)v190,
                    0xAuLL,
                    (unsigned int)v170);
            v47 = 16 * v45;
            if ( !is_mul_ok(v45, 0x10uLL) )
              v47 = v46;
            v48 = operator new[](v47);
            stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(v183, (__int64)v48, 0LL);
            v174 = *(_OWORD *)&v183[0].x;
            i = j;
            std::uninitialized_move<std::move_iterator<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded> *>,stdext::checked_array_iterator<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded> *>>(
              (__int64)v183,
              lpMem,
              (__int64)v187,
              &v174);
            v49 = lpMem;
            v50 = lpMem == Src;
            v172[0] = 0LL;
            lpMem = v48;
            if ( v50 )
              v49 = 0LL;
            operator delete(v49);
            v187 = lpMem;
            v188 = (char *)lpMem + 16 * v45;
            std::unique_ptr<detail::aligned_storage_for<tagCOMPOSITION_TARGET_ID_AND_STATS> [0],std::default_delete<detail::aligned_storage_for<tagCOMPOSITION_TARGET_ID_AND_STATS> [0]>>::~unique_ptr<detail::aligned_storage_for<tagCOMPOSITION_TARGET_ID_AND_STATS> [0],std::default_delete<detail::aligned_storage_for<tagCOMPOSITION_TARGET_ID_AND_STATS> [0]>>(v172);
            v43 = v187;
            v42 = lpMem;
          }
          v51 = (v43 - (_BYTE *)v42) >> 4;
          stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(v183, (__int64)&v42[v51], v44);
          *(_OWORD *)&v172[1] = *(_OWORD *)&v183[0].x;
          v173 = j;
          stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(
            &v172[1],
            v44);
          v52 = v51;
          if ( v44 < v51 )
            v52 = v44;
          v174 = *(_OWORD *)&v172[1];
          v53 = &v43[-16 * v52];
          for ( i = v173;
                v43 != v53;
                *(_OWORD *)stdext::checked_array_iterator<D2D_RECT_F *>::operator->(&v174) = *(_OWORD *)v43 )
          {
            v43 -= 16;
            stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *>::operator--(&v174);
          }
          if ( v51 > v44 )
          {
            stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(v183, (__int64)v42, v51);
            *(_OWORD *)&v172[1] = *(_OWORD *)&v183[0].x;
            v173 = j;
            stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(
              &v172[1],
              v51);
            v54 = (char *)v172[1];
            *(_OWORD *)&v183[0].x = *(_OWORD *)&v172[1];
            j = v173;
            v55 = 16 * v51 - 16 * v44;
            stdext::checked_array_iterator<char *>::_Verify_offset((__int64)v183, -(v55 >> 4));
            memmove_0(&v54[16LL * (_QWORD)v173 - v55], v42, v55);
          }
          v56 = v42 + 1;
          v57 = v42;
          v187 += 16 * v44;
          v3 = 0LL;
          *v42 = 0LL;
          v6 = v180;
          qmemcpy(v56, v57, 8 * ((16 * v44 - 9) >> 3));
          (*(void (__fastcall **)(CShape *, LPVOID, _QWORD))(*(_QWORD *)v6 + 80LL))(v6, lpMem, (unsigned int)v170);
          v58 = 0;
          v5 = v179;
          if ( !(_DWORD)v170 )
          {
LABEL_72:
            if ( (*(unsigned int (__fastcall **)(CShape *))(*(_QWORD *)v6 + 8LL))(v6) == 2
              && CMILMatrix::Is2DAxisAlignedIntegerPreserving(v5) )
            {
              v151 = (char *)MIDL_user_allocate(0x60uLL);
              v152 = (CRegionShape *)v151;
              if ( !v151 )
              {
                v27 = -2147024882;
                MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x11Bu, 0LL);
                detail::vector_facade<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,detail::buffer_impl<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,10,1,detail::liberal_expansion_policy>>::~vector_facade<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,detail::buffer_impl<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,10,1,detail::liberal_expansion_policy>>(&lpMem);
                goto LABEL_25;
              }
              *(_OWORD *)(v151 + 28) = 0LL;
              v153 = 0;
              *(_OWORD *)(v151 + 44) = 0LL;
              *(_OWORD *)(v151 + 60) = 0LL;
              *(_QWORD *)(v151 + 76) = 0LL;
              *((_DWORD *)v151 + 21) = 0;
              *((_QWORD *)v151 + 1) = 0LL;
              *(_QWORD *)v151 = &CRegionShape::`vftable';
              *((_QWORD *)v151 + 2) = v151 + 24;
              *((_DWORD *)v151 + 6) = 0;
              *((_QWORD *)v151 + 11) = 0LL;
              v183[0] = (struct D2D_POINT_2F)&v183[1];
              v183[1].x = 0.0;
              while ( v153 < (unsigned int)v170 )
              {
                CMilRectLFromD2D_RECT_F((int *)&v172[1], (__int64)lpMem + 16 * v153);
                v154 = CRegion::TryAddRectangle((CRegion *)v183, (const struct tagRECT *)&v172[1]);
                v176 = v154;
                v27 = v154;
                if ( v154 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v154, 0x121u, 0LL);
                  FastRegion::CRegion::FreeMemory((FastRegion::CRegion **)v183);
                  detail::vector_facade<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,detail::buffer_impl<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,10,1,detail::liberal_expansion_policy>>::~vector_facade<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,detail::buffer_impl<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,10,1,detail::liberal_expansion_policy>>(&lpMem);
                  CRegionShape::`vector deleting destructor'(v152, 1u);
                  goto LABEL_25;
                }
                ++v153;
              }
              CRegionShape::BuildFromCRegion(v152, (const struct CRegion *)v183);
              *a3 = v152;
              FastRegion::CRegion::FreeMemory((FastRegion::CRegion **)v183);
            }
            else
            {
              Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
              if ( !Value )
              {
                v134 = (CThreadContext *)MIDL_user_allocate(0x1C0uLL);
                if ( !v134 || (v135 = CThreadContext::CThreadContext(v134), (Value = v135) == 0LL) )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x28u, 0LL);
                  ModuleFailFastForHRESULT(-2147024882, retaddr);
                }
                TlsSetValue(CThreadContext::s_dwTlsIndex, v135);
              }
              v71 = Value[13];
              if ( v71 )
              {
                v3 = (_QWORD *)*((_QWORD *)Value + 7);
                *((_QWORD *)Value + 7) = *v3;
                Value[13] = v71 - 1;
              }
              if ( !v3 )
              {
                v72 = GetProcessHeap();
                v3 = HeapAlloc(v72, 0, 0x40uLL);
                if ( !v3 )
                {
                  v27 = -2147024882;
                  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x12Du, 0LL);
                  v136 = lpMem;
                  v137 = (v187 - (_BYTE *)lpMem) >> 4;
                  if ( v137 )
                  {
                    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(v183, (__int64)lpMem, v137);
                    v136 = lpMem;
                    v187 -= 16 * v138;
                  }
                  lpMem = 0LL;
                  if ( v136 != Src && v136 )
                  {
                    v139 = GetProcessHeap();
                    HeapFree(v139, 0, v136);
                  }
                  goto LABEL_25;
                }
              }
              v3[1] = 0LL;
              *v3 = &CRectanglesShape::`vftable';
              v3[2] = v3 + 5;
              v3[3] = v3 + 5;
              v3[4] = v3 + 7;
              v3[7] = 0LL;
              v73 = v3[2];
              v74 = (unsigned int)v170;
              v6 = (CShape *)lpMem;
              v75 = (v3[3] - v73) >> 4;
              if ( v75 )
              {
                stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(v183, v73, v75);
                v3[3] += -16 * v76;
              }
              v77 = (detail::liberal_expansion_policy *)v3[7];
              if ( v77 )
              {
                (*(void (__fastcall **)(detail::liberal_expansion_policy *))(*(_QWORD *)v77 + 16LL))(v77);
                v3[7] = 0LL;
              }
              v78 = v74;
              if ( !v6 && (_DWORD)v74 )
              {
LABEL_159:
                ((void (__fastcall *)(detail::liberal_expansion_policy *, __int64))`gsl::details::get_terminate_handler'::`2'::handler)(
                  v77,
                  v73);
                __debugbreak();
              }
              v79 = v3[4];
              v80 = v3[2];
              v5 = (CShape *)((char *)v6 + 16 * v78);
              v81 = (v3[3] - v80) >> 4;
              v82 = (v79 - v3[3]) >> 4;
              *(_QWORD *)&v174 = v6;
              *((_QWORD *)&v174 + 1) = v5;
              i = v6;
              v171 = v81;
              if ( v82 < v78 )
              {
                if ( v81 + v78 < v81 )
                {
                  std::_Xoverflow_error("overflow");
                  __debugbreak();
LABEL_86:
                  v83 = GetProcessHeap();
                  v84 = (struct CShape *)HeapAlloc(v83, 0, 0x18uLL);
                  v85 = v84;
                  if ( !v84 )
                  {
                    v169 = v3;
                    v168 = 243;
                    *a3 = (struct CShape *)v3;
                    goto LABEL_118;
                  }
                  *((_QWORD *)v84 + 1) = v3;
                  *(_QWORD *)v84 = &CPolygonShape::`vftable';
                  v86 = (void (__fastcall ***)(_QWORD))*((_QWORD *)v6 + 2);
                  *((_QWORD *)v84 + 2) = v86;
                  if ( v86 )
                    (**v86)(v86);
                  *a3 = v85;
                  goto LABEL_23;
                }
                v155 = detail::liberal_expansion_policy::expand(v77, (v79 - v80) >> 4, v81 + v78);
                v156 = operator new[](saturated_mul(v155, 0x10uLL));
                stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(v183, (__int64)v156, v171);
                v157 = v3[3];
                v158 = (void *)v3[2];
                v177 = *(_OWORD *)&v183[0].x;
                v178 = j;
                std::uninitialized_move<std::move_iterator<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded> *>,stdext::checked_array_iterator<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded> *>>(
                  (__int64)v183,
                  v158,
                  v157,
                  &v177);
                v159 = (_QWORD *)v3[2];
                v3[2] = v156;
                v172[0] = 0LL;
                if ( v159 == v3 + 5 )
                  v159 = 0LL;
                operator delete(v159);
                v160 = v3[2] + 16 * v155;
                v3[3] = v3[2] + 16 * v171;
                v3[4] = v160;
                std::unique_ptr<detail::aligned_storage_for<tagCOMPOSITION_TARGET_ID_AND_STATS> [0],std::default_delete<detail::aligned_storage_for<tagCOMPOSITION_TARGET_ID_AND_STATS> [0]>>::~unique_ptr<detail::aligned_storage_for<tagCOMPOSITION_TARGET_ID_AND_STATS> [0],std::default_delete<detail::aligned_storage_for<tagCOMPOSITION_TARGET_ID_AND_STATS> [0]>>(v172);
              }
              v117 = (char *)v3[3];
              v172[0] = *((void **)v3 + 2);
              v172[1] = (void *)((v117 - (char *)v172[0]) >> 4);
              v118 = (char *)v172[1] - v171;
              v182 = (unsigned __int64)v172[1] - v171;
              stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(
                v183,
                (__int64)v172[0] + 16 * (__int64)v172[1],
                v78);
              v177 = *(_OWORD *)&v183[0].x;
              v178 = j;
              stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(
                &v177,
                v78);
              v119 = (unsigned __int64)v118;
              if ( v78 < (unsigned __int64)v118 )
                v119 = v78;
              *(_OWORD *)&v183[0].x = v177;
              v120 = &v117[-16 * v119];
              for ( j = v178;
                    v117 != v120;
                    *(_OWORD *)stdext::checked_array_iterator<D2D_RECT_F *>::operator->(v183) = *(_OWORD *)v117 )
              {
                v117 -= 16;
                stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *>::operator--(v183);
              }
              if ( v182 > v78 )
              {
                v121 = v172[1];
                stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(
                  v183,
                  (__int64)v172[0],
                  (__int64)v172[1]);
                *(_OWORD *)&v172[1] = *(_OWORD *)&v183[0].x;
                v173 = j;
                stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(
                  &v172[1],
                  (__int64)v121);
                v122 = (char *)v172[1];
                v123 = (char *)v172[0] + 16 * v171;
                *(_OWORD *)&v183[0].x = *(_OWORD *)&v172[1];
                v124 = 16 * (__int64)((__int64)v121 - v78) - 16 * v171;
                j = v173;
                stdext::checked_array_iterator<char *>::_Verify_offset((__int64)v183, -(v124 >> 4));
                memmove_0(&v122[16LL * (_QWORD)v173 - v124], v123, v124);
              }
              v125 = v171;
              v126 = v174;
              v127 = i;
              v3[3] += 16 * v78;
              v177 = v126;
              v73 = *((_QWORD *)&v126 + 1);
              v77 = (detail::liberal_expansion_policy *)v126;
              v128 = (char *)v172[0] + 16 * v125;
              v178 = v127;
              for ( k = v127; ; k = (CMILMatrix *)((char *)k + 16) )
              {
                if ( v126 != __PAIR128__((unsigned __int64)v5, (unsigned __int64)v6) )
                  goto LABEL_159;
                if ( k == v5 )
                  break;
                if ( !(_QWORD)v126 )
                  goto LABEL_159;
                if ( !*((_QWORD *)&v126 + 1) )
                  goto LABEL_159;
                if ( (unsigned __int64)v126 > (unsigned __int64)k )
                  goto LABEL_159;
                if ( (unsigned __int64)k >= *((_QWORD *)&v126 + 1) )
                  goto LABEL_159;
                *v128 = *(_OWORD *)k;
                if ( !k )
                  goto LABEL_159;
                ++v128;
              }
              v5 = v179;
              v6 = v180;
              *a3 = (struct CShape *)v3;
              v3 = 0LL;
            }
            v130 = lpMem;
            v131 = (v187 - (_BYTE *)lpMem) >> 4;
            if ( v131 )
            {
              stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(v183, (__int64)lpMem, v131);
              v130 = lpMem;
              v187 -= 16 * v132;
            }
            lpMem = 0LL;
            if ( v130 != Src && v130 )
            {
              v133 = GetProcessHeap();
              HeapFree(v133, 0, v130);
            }
            goto LABEL_23;
          }
          while ( 1 )
          {
            v59 = (char *)lpMem;
            v60 = (const struct D2D_RECT_F *)((char *)lpMem + 16 * v58);
            if ( (char)(4 * *((_BYTE *)v5 + 64)) >> 6 == 1 )
              goto LABEL_95;
            if ( (char)(4 * *((_BYTE *)v5 + 64)) >> 6 >= 0 )
            {
              if ( !CMILMatrix::IsTranslateAndScaleIgnoreZ<1>((__int64)v5)
                || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)v5 - v34) & v32) >= 0.000081380211
                || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v5 + 5) - v34) & v32) >= 0.000081380211 )
              {
                *((_BYTE *)v5 + 64) = *((_BYTE *)v5 + 64) & 0xCF ^ 0x10;
LABEL_95:
                if ( CMILMatrix::IsTranslateAndScaleIgnoreZ<1>((__int64)v5) )
                {
                  x_low = (__m128)*(unsigned int *)v5;
                  v91 = *((float *)v5 + 5);
                  v62 = x_low;
                  x_low.m128_f32[0] = (float)(x_low.m128_f32[0] * v60->left) + *((float *)v5 + 12);
                  y = (float)(v91 * v60->top) + *((float *)v5 + 13);
                  v62.m128_f32[0] = (float)(v62.m128_f32[0] * v60->right) + *((float *)v5 + 12);
                  v64 = (float)(v91 * v60->bottom) + *((float *)v5 + 13);
                  if ( *(float *)v5 <= 0.0 || v91 <= 0.0 )
                  {
                    if ( x_low.m128_f32[0] > v62.m128_f32[0] )
                    {
                      v92 = x_low.m128_i32[0];
                      x_low = v62;
                      v62.m128_i32[0] = v92;
                    }
                    if ( y > v64 )
                    {
                      y = (float)(v91 * v60->bottom) + *((float *)v5 + 13);
                      v64 = (float)(*((float *)v5 + 5) * v60->top) + *((float *)v5 + 13);
                    }
                  }
                }
                else
                {
                  CMILMatrix::Transform2DRectToPerspective(v90, v60, v183);
                  x_low = (__m128)LODWORD(v183[0].x);
                  v141 = 1LL;
                  y = v183[0].y;
                  v62.m128_i32[0] = LODWORD(v183[0].x);
                  v64 = v183[0].y;
                  do
                  {
                    x = v183[v141].x;
                    v143 = v183[v141].y;
                    x_low.m128_f32[0] = fminf(x_low.m128_f32[0], x);
                    ++v141;
                    y = fminf(y, v143);
                    v62.m128_f32[0] = fmaxf(v62.m128_f32[0], x);
                    v64 = fmaxf(v64, v143);
                  }
                  while ( v141 < 4 );
                }
                goto LABEL_71;
              }
              *((_BYTE *)v5 + 64) = *((_BYTE *)v5 + 64) & 0xCF ^ 0x30;
            }
            x_low = (__m128)*((unsigned int *)v5 + 12);
            x_low.m128_f32[0] = x_low.m128_f32[0] + v60->left;
            v62.m128_f32[0] = *((float *)v5 + 12) + v60->right;
            y = *((float *)v5 + 13) + v60->top;
            v64 = *((float *)v5 + 13) + v60->bottom;
LABEL_71:
            v65 = _mm_shuffle_ps(x_low, x_low, 225);
            v65.m128_f32[0] = y;
            v66 = _mm_shuffle_ps(v65, v65, 198);
            v67 = 2LL * v58;
            v66.m128_f32[0] = v62.m128_f32[0];
            ++v58;
            v68 = _mm_shuffle_ps(v66, v66, 39);
            v68.m128_f32[0] = v64;
            v69 = _mm_shuffle_ps(v68, v68, 57);
            *(__m128 *)&v59[8 * v67] = v69;
            *(__m128 *)&v172[1] = v69;
            if ( v58 >= (unsigned int)v170 )
              goto LABEL_72;
          }
        }
        v93 = *((_BYTE *)v5 + 65);
        if ( (char)(4 * v93) >> 6 != 1 )
        {
          if ( (char)(4 * v93) >> 6 < 0 )
          {
LABEL_104:
            if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v5 + 1) - 0.0) & v32) < 0.000081380211
              && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v5 + 4) - 0.0) & v32) < 0.000081380211 )
            {
              *((_BYTE *)v5 + 64) |= 0xC0u;
              goto LABEL_55;
            }
            goto LABEL_105;
          }
          v114 = v93 & 0xCF;
          if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                              (float)((float)((float)(COERCE_FLOAT(*((_DWORD *)v5 + 7) & v32) * v33)
                                            + (float)(COERCE_FLOAT(*((_DWORD *)v5 + 3) & v32) * v33))
                                    + COERCE_FLOAT(*((_DWORD *)v5 + 15) & v32))
                            - v34) & v32) < 0.000081380211 )
          {
            *((_BYTE *)v5 + 65) = v114 ^ 0x30;
            goto LABEL_104;
          }
          *((_BYTE *)v5 + 65) = v114 ^ 0x10;
        }
LABEL_105:
        *((_BYTE *)v5 + 64) = *((_BYTE *)v5 + 64) & 0x3F | 0x40;
LABEL_106:
        if ( !CMILMatrix::Is90Or270RotationWithTranslateAndScaleIgnoreZ<1>((__int64)v5) )
          goto LABEL_23;
        goto LABEL_55;
      }
      *((_BYTE *)v5 + 64) = v29 & 0xF3 ^ 8;
    }
    v144 = *((_BYTE *)v5 + 64);
    v145 = (char)(4 * v144) >> 6;
    if ( v145 == 1 )
      goto LABEL_52;
    if ( v145 >= 0 || v145 != -2 )
    {
      v146 = v144 >> 6;
      if ( v146 > 0 )
        goto LABEL_52;
      if ( v146 >= 0 || v146 != -2 )
      {
        v147 = *((_BYTE *)v5 + 65);
        if ( (char)(4 * v147) >> 6 == 1 )
          goto LABEL_52;
        if ( (char)(4 * v147) >> 6 != 0xFE )
        {
          if ( (float)((float)((float)(COERCE_FLOAT(*((_DWORD *)v5 + 7) & v32) * 61440.0)
                             + (float)(COERCE_FLOAT(*((_DWORD *)v5 + 3) & v32) * 61440.0))
                     + COERCE_FLOAT(*((_DWORD *)v5 + 15) & v32)) != 1.0 )
            goto LABEL_52;
          *((_BYTE *)v5 + 65) = v147 & 0xCF ^ 0x20;
        }
        if ( *((float *)v5 + 1) != 0.0 || *((float *)v5 + 4) != 0.0 )
          goto LABEL_52;
        *((_BYTE *)v5 + 64) = *((_BYTE *)v5 + 64) & 0x3F | 0x80;
      }
      if ( *(float *)v5 != 1.0 || *((float *)v5 + 5) != 1.0 )
        goto LABEL_52;
      *((_BYTE *)v5 + 64) = *((_BYTE *)v5 + 64) & 0xCF ^ 0x20;
    }
    if ( *((float *)v5 + 10) == 1.0
      && *((float *)v5 + 12) == 0.0
      && *((float *)v5 + 13) == 0.0
      && *((float *)v5 + 14) == 0.0 )
    {
      *((_BYTE *)v5 + 64) = *((_BYTE *)v5 + 64) & 0xFC ^ 2;
      goto LABEL_2;
    }
    goto LABEL_52;
  }
LABEL_2:
  v7 = (*(__int64 (__fastcall **)(CShape *))(*(_QWORD *)v6 + 8LL))(v6);
  if ( v7 == 1 )
  {
    v8 = TlsGetValue(CThreadContext::s_dwTlsIndex);
    if ( !v8 )
    {
      v96 = GetProcessHeap();
      v97 = (CThreadContext *)HeapAlloc(v96, 0, 0x1C0uLL);
      if ( !v97 || (v98 = CThreadContext::CThreadContext(v97), (v8 = v98) == 0LL) )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x28u, 0LL);
        ModuleFailFastForHRESULT(-2147024882, retaddr);
      }
      TlsSetValue(CThreadContext::s_dwTlsIndex, v98);
    }
    v9 = v8[13];
    if ( v9 )
    {
      v3 = (_QWORD *)*((_QWORD *)v8 + 7);
      *((_QWORD *)v8 + 7) = *v3;
      v8[13] = v9 - 1;
    }
    if ( !v3 )
    {
      v10 = GetProcessHeap();
      v3 = HeapAlloc(v10, 0, 0x40uLL);
      if ( !v3 )
      {
        v169 = 0LL;
        v168 = 215;
        goto LABEL_118;
      }
    }
    v11 = v180;
    v3[1] = 0LL;
    *v3 = &CRectanglesShape::`vftable';
    v3[2] = v3 + 5;
    v3[3] = v3 + 5;
    v3[4] = v3 + 7;
    v3[7] = 0LL;
    v6 = (CShape *)*((_QWORD *)v6 + 2);
    v12 = v3[2];
    v13 = (__int64)(*((_QWORD *)v11 + 3) - (_QWORD)v6) >> 4;
    v14 = (v3[3] - v12) >> 4;
    if ( v14 )
    {
      stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(v183, v12, v14);
      v3[3] += -16 * v15;
    }
    v16 = (gsl::details *)v3[7];
    if ( v16 )
    {
      (*(void (__fastcall **)(gsl::details *))(*(_QWORD *)v16 + 16LL))(v16);
      v3[7] = 0LL;
    }
    v17 = (unsigned int)v13;
    if ( !v6 && (_DWORD)v13 )
    {
LABEL_136:
      `gsl::details::get_terminate_handler'::`2'::handler(v16);
      __debugbreak();
    }
    v18 = v3[4];
    v19 = v3[2];
    v5 = (CShape *)((char *)v6 + 16 * v17);
    v20 = (v3[3] - v19) >> 4;
    v21 = (v18 - v3[3]) >> 4;
    *(_QWORD *)&v177 = v6;
    *((_QWORD *)&v177 + 1) = v5;
    v178 = v6;
    v171 = v20;
    if ( v21 < v17 )
    {
      if ( v20 + v17 < v20 )
      {
        std::_Xoverflow_error("overflow");
        __debugbreak();
        goto LABEL_16;
      }
      v161 = detail::liberal_expansion_policy::expand(v16, (v18 - v19) >> 4, v20 + v17);
      v162 = operator new[](saturated_mul(v161, 0x10uLL));
      stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(v183, (__int64)v162, v171);
      v163 = v3[3];
      v164 = (void *)v3[2];
      v174 = *(_OWORD *)&v183[0].x;
      i = j;
      std::uninitialized_move<std::move_iterator<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded> *>,stdext::checked_array_iterator<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded> *>>(
        (__int64)v183,
        v164,
        v163,
        &v174);
      v165 = (_QWORD *)v3[2];
      v3[2] = v162;
      v172[1] = 0LL;
      if ( v165 == v3 + 5 )
        v165 = 0LL;
      operator delete(v165);
      v166 = v3[2] + 16 * v161;
      v3[3] = v3[2] + 16 * v171;
      v3[4] = v166;
      std::unique_ptr<detail::aligned_storage_for<tagCOMPOSITION_TARGET_ID_AND_STATS> [0],std::default_delete<detail::aligned_storage_for<tagCOMPOSITION_TARGET_ID_AND_STATS> [0]>>::~unique_ptr<detail::aligned_storage_for<tagCOMPOSITION_TARGET_ID_AND_STATS> [0],std::default_delete<detail::aligned_storage_for<tagCOMPOSITION_TARGET_ID_AND_STATS> [0]>>(&v172[1]);
    }
    v102 = (char *)v3[3];
    v172[0] = *((void **)v3 + 2);
    v182 = (v102 - (char *)v172[0]) >> 4;
    v103 = v182 - v171;
    v172[1] = (void *)(v182 - v171);
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(v183, (__int64)v172[0] + 16 * v182, v17);
    v174 = *(_OWORD *)&v183[0].x;
    i = j;
    stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v174, v17);
    v104 = v103;
    if ( v17 < v103 )
      v104 = v17;
    *(_OWORD *)&v183[0].x = v174;
    v105 = &v102[-16 * v104];
    for ( j = i; v102 != v105; *(_OWORD *)stdext::checked_array_iterator<D2D_RECT_F *>::operator->(v183) = *(_OWORD *)v102 )
    {
      v102 -= 16;
      stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *>::operator--(v183);
    }
    if ( v172[1] > (void *)v17 )
    {
      v106 = v182;
      stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(v183, (__int64)v172[0], v182);
      *(_OWORD *)&v172[1] = *(_OWORD *)&v183[0].x;
      v173 = j;
      stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v172[1], v106);
      v107 = (char *)v172[1];
      *(_OWORD *)&v183[0].x = *(_OWORD *)&v172[1];
      v108 = 16 * (v106 - v17) - 16 * v171;
      j = v173;
      stdext::checked_array_iterator<char *>::_Verify_offset((__int64)v183, -(v108 >> 4));
      memmove_0(&v107[16LL * (_QWORD)v173 - v108], (char *)v172[0] + 16 * v171, v108);
    }
    v109 = v171;
    v110 = v177;
    v111 = v178;
    v3[3] += 16 * v17;
    v174 = v110;
    v16 = (gsl::details *)*((_QWORD *)&v110 + 1);
    v112 = (char *)v172[0] + 16 * v109;
    i = v111;
    for ( m = v111; ; m = (CMILMatrix *)((char *)m + 16) )
    {
      if ( v110 != __PAIR128__((unsigned __int64)v5, (unsigned __int64)v6) )
        goto LABEL_136;
      if ( m == v5 )
        break;
      if ( !(_QWORD)v110 )
        goto LABEL_136;
      if ( !*((_QWORD *)&v110 + 1) )
        goto LABEL_136;
      if ( (unsigned __int64)v110 > (unsigned __int64)m )
        goto LABEL_136;
      if ( (unsigned __int64)m >= *((_QWORD *)&v110 + 1) )
        goto LABEL_136;
      *v112 = *(_OWORD *)m;
      if ( !m )
        goto LABEL_136;
      ++v112;
    }
    v5 = v179;
    v6 = v180;
    *a3 = (struct CShape *)v3;
    v3 = 0LL;
    goto LABEL_23;
  }
LABEL_16:
  if ( v7 )
  {
    v22 = v7 - 2;
    if ( !v22 )
    {
      v99 = GetProcessHeap();
      v100 = (char *)HeapAlloc(v99, 0, 0x60uLL);
      v101 = v100;
      if ( !v100 )
      {
        v169 = v3;
        v168 = 230;
        goto LABEL_118;
      }
      *(_OWORD *)(v100 + 28) = 0LL;
      *(_OWORD *)(v100 + 44) = 0LL;
      *(_OWORD *)(v100 + 60) = 0LL;
      *(_QWORD *)(v100 + 76) = 0LL;
      *((_DWORD *)v100 + 21) = 0;
      *((_QWORD *)v100 + 1) = v3;
      *(_QWORD *)v100 = &CRegionShape::`vftable';
      *((_QWORD *)v100 + 2) = v100 + 24;
      *((_DWORD *)v100 + 6) = (_DWORD)v3;
      *((_QWORD *)v100 + 11) = v3;
      CRegionShape::SetEmpty((CRegionShape *)v100);
      CRegion::Copy((CRegion *)(v101 + 16), (CShape *)((char *)v6 + 16));
      *a3 = (struct CShape *)v101;
      goto LABEL_23;
    }
    v23 = v22 - 1;
    if ( v23 )
    {
      if ( v23 != 2 )
        goto LABEL_23;
      v24 = (__int64 *)MIDL_user_allocate(0x18uLL);
      v25 = (struct CShape *)v24;
      if ( v24 )
      {
        v26 = *((_QWORD *)v6 + 2);
        v24[1] = (__int64)v3;
        *v24 = (__int64)&CPathSegmentsShape::`vftable';
        v24[2] = v26;
        Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(v24 + 2);
        *a3 = v25;
        goto LABEL_23;
      }
      v169 = v3;
      v168 = 252;
LABEL_118:
      v27 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, v168, v169);
      goto LABEL_25;
    }
    goto LABEL_86;
  }
  v37 = TlsGetValue(CThreadContext::s_dwTlsIndex);
  if ( !v37 )
  {
    v115 = (CThreadContext *)MIDL_user_allocate(0x1C0uLL);
    if ( !v115 || (v116 = CThreadContext::CThreadContext(v115), (v37 = v116) == 0LL) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x28u, v3);
      ModuleFailFastForHRESULT(-2147024882, retaddr);
    }
    TlsSetValue(CThreadContext::s_dwTlsIndex, v116);
  }
  v38 = v37[17];
  v39 = (struct CShape *)v3;
  if ( v38 )
  {
    v39 = (struct CShape *)*((_QWORD *)v37 + 9);
    *((_QWORD *)v37 + 9) = *(_QWORD *)v39;
    v37[17] = v38 - 1;
  }
  if ( !v39 )
  {
    v40 = GetProcessHeap();
    v39 = (struct CShape *)HeapAlloc(v40, 0, 0x18uLL);
    if ( !v39 )
    {
      *a3 = (struct CShape *)v3;
      v169 = v3;
      v168 = 206;
      goto LABEL_118;
    }
  }
  *((_QWORD *)v39 + 1) = v3;
  *(_QWORD *)v39 = &CRoundedRectangleShape::`vftable';
  v41 = (void (__fastcall ***)(_QWORD))*((_QWORD *)v6 + 2);
  *((_QWORD *)v39 + 2) = v41;
  if ( v41 )
    (**v41)(v41);
  *a3 = v39;
LABEL_23:
  if ( *a3 )
  {
    v27 = v176;
    goto LABEL_25;
  }
  v140 = (*(__int64 (__fastcall **)(CShape *, CMILMatrix *, struct ID2D1Geometry **))(*(_QWORD *)v6 + 24LL))(
           v6,
           v5,
           &v181);
  v27 = v140;
  if ( v140 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v140, 0x14Fu, v3);
    goto LABEL_25;
  }
  if ( (*(unsigned __int8 (__fastcall **)(CShape *))(*(_QWORD *)v6 + 56LL))(v6) )
  {
    v149 = (CPolygonShape *)MIDL_user_allocate(0x18uLL);
    if ( v149 )
    {
      v150 = CPolygonShape::CPolygonShape(v149, v181);
      goto LABEL_252;
    }
  }
  else
  {
    v167 = (CComplexShape *)MIDL_user_allocate(0x18uLL);
    if ( v167 )
    {
      v150 = CComplexShape::CComplexShape(v167, v181);
      goto LABEL_252;
    }
  }
  v150 = (struct CShape *)v3;
LABEL_252:
  *a3 = v150;
  if ( !v150 )
  {
    v169 = v3;
    v168 = 346;
    goto LABEL_118;
  }
LABEL_25:
  if ( v181 )
    (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v181 + 16LL))(v181);
  return v27;
}
