/*
 * XREFs of ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@PEBVCMILMatrix@@PEBV1@W4D2D1_ANTIALIAS_MODE@@W4CpuClippingScopeMode@@@Z @ 0x1800A3010
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800831C0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ??0CCpuClip@@QEAA@XZ @ 0x180007CF8 (--0CCpuClip@@QEAA@XZ.c)
 *     ?Initialize@CCpuClip@@QEAAXPEBVCShape@@PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@IPEBVCCpuClipAntialiasSinkContext@@@Z @ 0x18000FB50 (-Initialize@CCpuClip@@QEAAXPEBVCShape@@PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@IPEBVCCpuClipAntia.c)
 *     ?Update@CpuClipRealization@CCpuClippingData@@QEAAJPEAVCVisual@@PEBVCShape@@AEBVCMILMatrix@@1W4D2D1_ANTIALIAS_MODE@@PEA_N@Z @ 0x1800120B0 (-Update@CpuClipRealization@CCpuClippingData@@QEAAJPEAVCVisual@@PEBVCShape@@AEBVCMILMatrix@@1W4D2.c)
 *     ?ShouldRealizeCpuClipOnGpu@CCpuClippingData@@SA_NPEBVCShape@@AEBVCMILMatrix@@@Z @ 0x180012950 (-ShouldRealizeCpuClipOnGpu@CCpuClippingData@@SA_NPEBVCShape@@AEBVCMILMatrix@@@Z.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x180038E20 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180042890 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ??0?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@QEAA@XZ @ 0x18005A290 (--0-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@QEAA@.c)
 *     ?CalcScopeMode@CCpuClippingData@@CA?AW4CpuClippingScopeMode@@PEAVCVisual@@PEBVCShape@@W42@@Z @ 0x18005F190 (-CalcScopeMode@CCpuClippingData@@CA-AW4CpuClippingScopeMode@@PEAVCVisual@@PEBVCShape@@W42@@Z.c)
 *     ?IsScopePreservingTransform@CCpuClippingData@@CA_NAEBVCMILMatrix@@@Z @ 0x18005F3B4 (-IsScopePreservingTransform@CCpuClippingData@@CA_NAEBVCMILMatrix@@@Z.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x18005FB60 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ??$IsTranslate@$00@CMILMatrix@@AEBA_NXZ @ 0x18005FDD0 (--$IsTranslate@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180061980 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z @ 0x180063BB0 (-invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_ptr@UCpuClipRealization@CCpuClippingData@@U?$default_delete@UCpuClipRealization@CCpuClippingData@@@std@@@std@@QEAA@XZ @ 0x1800ADC20 (--1-$unique_ptr@UCpuClipRealization@CCpuClippingData@@U-$default_delete@UCpuClipRealization@CCpu.c)
 *     ?reset@?$unique_ptr@UCpuClipRealization@CCpuClippingData@@U?$default_delete@UCpuClipRealization@CCpuClippingData@@@std@@@std@@QEAAXPEAUCpuClipRealization@CCpuClippingData@@@Z @ 0x1800ADC50 (-reset@-$unique_ptr@UCpuClipRealization@CCpuClippingData@@U-$default_delete@UCpuClipRealization@.c)
 *     ??$?4U?$default_delete@UCpuClipRealization@CCpuClippingData@@@std@@$0A@@?$unique_ptr@UCpuClipRealization@CCpuClippingData@@U?$default_delete@UCpuClipRealization@CCpuClippingData@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800AF188 (--$-4U-$default_delete@UCpuClipRealization@CCpuClippingData@@@std@@$0A@@-$unique_ptr@UCpuClipRea.c)
 *     ??$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ @ 0x1800B1930 (--$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$IsPure2DUniformZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800B1BF0 (--$IsPure2DUniformZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800B1E20 (--$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?UpdateScopeTransforms@CCpuClippingData@@AEAAXPEAVCVisual@@_NPEBVCMILMatrix@@@Z @ 0x1800B1F20 (-UpdateScopeTransforms@CCpuClippingData@@AEAAXPEAVCVisual@@_NPEBVCMILMatrix@@@Z.c)
 *     ?FullyContains@CCpuClip@@QEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800CCC30 (-FullyContains@CCpuClip@@QEBA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 *     ?GetCpuClippingData@CVisual@@QEBAPEAVCCpuClippingData@@PEBVCVisualTree@@@Z @ 0x1800D1CD0 (-GetCpuClippingData@CVisual@@QEBAPEAVCCpuClippingData@@PEBVCVisualTree@@@Z.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x1800D5790 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ??$make_unique@UCpuClipRealization@CCpuClippingData@@$$V$0A@@std@@YA?AV?$unique_ptr@UCpuClipRealization@CCpuClippingData@@U?$default_delete@UCpuClipRealization@CCpuClippingData@@@std@@@0@XZ @ 0x1800E8838 (--$make_unique@UCpuClipRealization@CCpuClippingData@@$$V$0A@@std@@YA-AV-$unique_ptr@UCpuClipReal.c)
 *     ?Translate@CMILMatrix@@QEAAXMMM@Z @ 0x18015F740 (-Translate@CMILMatrix@@QEAAXMMM@Z.c)
 *     ??$?8UCpuClipRealization@CCpuClippingData@@U?$default_delete@UCpuClipRealization@CCpuClippingData@@@std@@@std@@YA_NAEBV?$unique_ptr@UCpuClipRealization@CCpuClippingData@@U?$default_delete@UCpuClipRealization@CCpuClippingData@@@std@@@0@$$T@Z @ 0x180175C00 (--$-8UCpuClipRealization@CCpuClippingData@@U-$default_delete@UCpuClipRealization@CCpuClippingDat.c)
 *     ?UpdateCachingGenerationId@CCpuClippingData@@AEAAXPEBVCVisualTree@@PEAVCVisual@@PEBV1@@Z @ 0x1801788C0 (-UpdateCachingGenerationId@CCpuClippingData@@AEAAXPEBVCVisualTree@@PEAVCVisual@@PEBV1@@Z.c)
 *     ?GetD2D1Matrix3x2@CMILMatrix@@QEBA?AVMatrix3x2F@D2D1@@XZ @ 0x180178C20 (-GetD2D1Matrix3x2@CMILMatrix@@QEBA-AVMatrix3x2F@D2D1@@XZ.c)
 *     ?HasCpuClip@CCpuClippingData@@QEBA_NXZ @ 0x180185E10 (-HasCpuClip@CCpuClippingData@@QEBA_NXZ.c)
 *     ??XNumerics@Foundation@Windows@@YAAEAUfloat4x4@012@AEAU3012@AEBU3012@@Z @ 0x180187D18 (--XNumerics@Foundation@Windows@@YAAEAUfloat4x4@012@AEAU3012@AEBU3012@@Z.c)
 *     ?Set2DAffineMatrix@CMILMatrix@@QEAAXMMMMMM@Z @ 0x18018A5E8 (-Set2DAffineMatrix@CMILMatrix@@QEAAXMMMMMM@Z.c)
 *     ??$max@W4CpuClippingScopeMode@@@@YA?AW4CpuClippingScopeMode@@W40@0@Z @ 0x18018EF7C (--$max@W4CpuClippingScopeMode@@@@YA-AW4CpuClippingScopeMode@@W40@0@Z.c)
 *     ??1CCpuClip@@QEAA@XZ @ 0x18018F3E0 (--1CCpuClip@@QEAA@XZ.c)
 *     ??C?$unique_ptr@UCpuClipRealization@CCpuClippingData@@U?$default_delete@UCpuClipRealization@CCpuClippingData@@@std@@@std@@QEBAPEAUCpuClipRealization@CCpuClippingData@@XZ @ 0x180195AB4 (--C-$unique_ptr@UCpuClipRealization@CCpuClippingData@@U-$default_delete@UCpuClipRealization@CCpu.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x18019D418 (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ?InvalidateAllFlags@CMILMatrix@@QEAAXXZ @ 0x1801E315C (-InvalidateAllFlags@CMILMatrix@@QEAAXXZ.c)
 *     ?GetClipNoRef@CVisual@@QEBAPEAVCGeometry@@XZ @ 0x18021FC40 (-GetClipNoRef@CVisual@@QEBAPEAVCGeometry@@XZ.c)
 *     ?GetDrawListGenerationCount@CVisualTree@@QEBA_KXZ @ 0x18021FC80 (-GetDrawListGenerationCount@CVisualTree@@QEBA_KXZ.c)
 *     ?OnClipChanged@CCpuClippingData@@QEAAXXZ @ 0x18021FC90 (-OnClipChanged@CCpuClippingData@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@PEAVCMILMatrix@@PEA_N1@Z @ 0x180260DD4 (-GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@PEAVCMILMatrix@@PEA_N1@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCpuClippingData::Update(
        __int64 a1,
        const struct CVisualTree *a2,
        __int64 a3,
        _QWORD *a4,
        struct CShape *a5,
        struct CMILMatrix *a6,
        __m128 **a7,
        enum D2D1_ANTIALIAS_MODE a8,
        int a9)
{
  struct CMILMatrix *v10; // r8
  struct CShape *v12; // rcx
  unsigned __int64 v13; // r11
  int v16; // eax
  __int64 v17; // rcx
  bool v18; // zf
  const struct CCpuClippingData *v19; // r13
  unsigned __int32 v20; // xmm12_4
  __m128 *v21; // r14
  int v22; // eax
  float v23; // xmm7_4
  char v24; // dl
  __int64 v25; // r15
  CVisual *v26; // r15
  _DWORD *v27; // rdx
  unsigned int v28; // r8d
  _BYTE *v29; // rax
  __int64 k; // rcx
  __int64 v31; // rax
  _QWORD **v32; // rcx
  _QWORD *v33; // rcx
  char v34; // al
  _QWORD *v35; // rax
  int v36; // ecx
  struct CShape *v37; // r12
  char v38; // r15
  __m128i si128; // xmm2
  __m128 v40; // xmm6
  char v41; // r9
  __m128 v42; // xmm8
  __m128 v43; // xmm5
  float v44; // xmm11_4
  char v45; // r10
  float v46; // xmm9_4
  float v47; // xmm10_4
  __m128 v48; // xmm3
  __m128 *v49; // r15
  float *v50; // rdx
  char v51; // cl
  __m128 v52; // xmm11
  __m128 v53; // xmm1
  __m128 v54; // xmm14
  __m128 v55; // xmm7
  char v56; // al
  char v57; // dl
  __m128 v58; // xmm0
  __m128 v59; // xmm2
  __m128 v60; // xmm3
  __m128 v61; // xmm4
  __m128 v62; // xmm2
  __m128 v63; // xmm11
  __m128 v64; // xmm4
  __m128 v65; // xmm5
  __m128 v66; // xmm5
  __m128 v67; // xmm5
  int WorldTransform; // eax
  unsigned int v69; // r15d
  unsigned int v71; // eax
  int v72; // eax
  unsigned int v73; // r15d
  int *v74; // rdx
  unsigned int v75; // r8d
  _BYTE *v76; // rax
  __int64 i; // rcx
  __int64 v78; // rax
  _QWORD **v79; // rcx
  _QWORD *v80; // rcx
  _QWORD *j; // rax
  int *v82; // rdx
  unsigned int v83; // r8d
  _BYTE *v84; // rax
  __int64 m; // rcx
  __int64 v86; // rax
  int *v87; // rdx
  _QWORD *v88; // rdx
  _QWORD *n; // rcx
  CCpuClippingData::CpuClipRealization *v90; // r10
  bool v91; // r14
  __int64 v92; // rdx
  const struct CShape *v93; // rdx
  int v94; // eax
  unsigned int v95; // r14d
  _QWORD *v96; // rcx
  __int64 v97; // r10
  bool v98; // r11
  char v99; // dl
  unsigned __int64 v100; // rax
  unsigned __int64 v101; // r9
  int v102; // ebx
  unsigned __int64 v103; // rax
  __int64 v104; // rbx
  __int64 *v105; // rax
  __int64 v106; // rcx
  bool v107; // al
  __m128 v108; // xmm2
  __m128 v109; // xmm0
  __m128 v110; // xmm1
  char v111; // r9
  __int32 v112; // xmm1_4
  char v113; // cl
  float v114; // xmm2_4
  char v115; // cl
  char v116; // r8
  float v117; // xmm4_4
  float v118; // xmm2_4
  float v119; // xmm3_4
  __int8 v120; // dl
  __int8 v121; // al
  __m128 *v122; // r10
  char v123; // al
  __int8 v124; // r9
  char v125; // dl
  __m128 v126; // xmm4
  float v127; // xmm6_4
  float v128; // xmm8_4
  float v129; // xmm9_4
  __m128 v130; // xmm3
  __m128 v131; // xmm5
  float v132; // xmm5_4
  char v133; // al
  float v134; // xmm5_4
  float v135; // xmm6_4
  float v136; // xmm8_4
  char v137; // al
  float v138; // xmm0_4
  float v139; // xmm2_4
  float v140; // xmm3_4
  float v141; // xmm10_4
  __int32 v142; // xmm4_4
  __int32 v143; // xmm7_4
  __int32 v144; // xmm11_4
  char v145; // al
  float v146; // xmm1_4
  float v147; // xmm2_4
  float v148; // xmm6_4
  float v149; // xmm7_4
  float v150; // xmm2_4
  char v151; // al
  int v152; // r11d
  float v153; // xmm8_4
  float v154; // xmm7_4
  float v155; // xmm6_4
  float v156; // xmm6_4
  float v157; // xmm5_4
  __int64 v158; // r13
  _QWORD *v159; // r15
  struct CGeometry *ClipNoRef; // rax
  int v161; // edx
  char v162; // dl
  char v163; // al
  float v164; // xmm10_4
  float v165; // xmm8_4
  float v166; // xmm6_4
  float v167; // xmm2_4
  float v168; // xmm4_4
  float v169; // xmm11_4
  float v170; // xmm9_4
  float v171; // xmm7_4
  float v172; // xmm3_4
  char v173; // al
  float v174; // xmm5_4
  float v175; // xmm14_4
  float v176; // xmm1_4
  char v177; // dl
  char v178; // cl
  float v179; // xmm2_4
  __m128 v180; // xmm7
  __m128 v181; // xmm6
  __m128 v182; // xmm4
  __m128 v183; // xmm14
  __m128 v184; // xmm4
  __m128 v185; // xmm6
  __m128 v186; // xmm7
  __m128 v187; // xmm7
  void (__fastcall ***v188)(_QWORD, __int64); // rcx
  char v189; // dl
  char v190; // al
  char v191; // r8
  char v192; // cl
  char IsTranslateAndScaleIgnore; // al
  char v194; // al
  char v195; // dl
  char v196; // al
  float v197; // xmm7_4
  float v198; // xmm5_4
  float v199; // xmm1_4
  __m128 v200; // xmm14
  __m128 v201; // xmm14
  __m128 v202; // xmm14
  __m128 v203; // xmm11
  __m128 v204; // xmm11
  __m128 v205; // xmm4
  __m128 v206; // xmm11
  __m128 v207; // xmm4
  __m128 v208; // xmm4
  int v209; // eax
  struct CShape *v210; // r15
  __int64 v211; // rcx
  __int64 v212; // rdx
  __int64 v213; // rcx
  __int64 v214; // rax
  CCpuClippingData::CpuClipRealization *v215; // rax
  unsigned int v216; // eax
  int v217; // eax
  unsigned int v218; // r15d
  char v219; // al
  char v220; // r8
  char v221; // cl
  char v222; // al
  char v223; // cl
  __m128 v224; // xmm3
  char v225; // al
  __int64 v226; // rdx
  __int64 v227; // rax
  _BYTE *v228; // r8
  __int64 v229; // rcx
  _QWORD **v230; // rcx
  _QWORD *v231; // rcx
  _QWORD *ii; // rax
  char v233; // cl
  char v234; // al
  __int8 v235; // cl
  char v236; // cl
  char v237; // dl
  char v238; // al
  __int64 v239; // r9
  struct Windows::Foundation::Numerics::float4x4 *v240; // r8
  bool v241; // al
  __int64 v242; // r9
  char IsScopePreservingTransform; // al
  char v244; // dl
  char v245; // cl
  char v246; // r8
  char v247; // cl
  char v248; // dl
  char v249; // al
  char v250; // r9
  char v251; // r8
  char v252; // cl
  char v253; // r8
  char v254; // cl
  char v255; // cl
  float v256; // xmm6_4
  __m128 v257; // xmm7
  char v258; // r8
  char v259; // cl
  char v260; // r10
  char v261; // dl
  __int64 v262; // r14
  struct CCpuClippingData *CpuClippingData; // rax
  struct Windows::Foundation::Numerics::float4x4 *v264; // r8
  __int64 v265; // r9
  float v266; // xmm1_4
  float v267; // xmm3_4
  float v268; // xmm4_4
  float v269; // xmm2_4
  float v270; // xmm5_4
  float v271; // xmm6_4
  __m128 v272; // xmm0
  __m128 v273; // xmm1
  __m128 v274; // xmm0
  __m128 v275; // xmm1
  __m128 v276; // xmm1
  __m128 v277; // xmm1
  bool v278; // al
  char v279; // [rsp+40h] [rbp-C0h]
  char v280; // [rsp+41h] [rbp-BFh]
  bool v281[2]; // [rsp+42h] [rbp-BEh] BYREF
  unsigned int v282; // [rsp+44h] [rbp-BCh]
  __m128 v283; // [rsp+50h] [rbp-B0h] BYREF
  __m128 v284; // [rsp+60h] [rbp-A0h]
  __m128 v285; // [rsp+70h] [rbp-90h]
  _BYTE v286[20]; // [rsp+80h] [rbp-80h]
  __m128 v287; // [rsp+A0h] [rbp-60h] BYREF
  __m128 v288; // [rsp+B0h] [rbp-50h]
  __m128 v289; // [rsp+C0h] [rbp-40h]
  __m128 v290; // [rsp+D0h] [rbp-30h]
  __int32 v291; // [rsp+E0h] [rbp-20h]
  bool v292; // [rsp+F0h] [rbp-10h]
  struct CShape *v293; // [rsp+F8h] [rbp-8h]
  __m128 v294; // [rsp+100h] [rbp+0h]
  __m128 v295; // [rsp+110h] [rbp+10h]
  __m128 v296; // [rsp+120h] [rbp+20h]
  __m128 v297; // [rsp+130h] [rbp+30h]
  __m128 v298; // [rsp+140h] [rbp+40h]
  __m128 v299; // [rsp+150h] [rbp+50h]
  __m128 v300; // [rsp+160h] [rbp+60h]
  __m128 v301; // [rsp+170h] [rbp+70h]
  __m128 v302; // [rsp+180h] [rbp+80h]
  __m128 v303; // [rsp+190h] [rbp+90h]
  __m128 v304; // [rsp+1A0h] [rbp+A0h]
  struct CShape *v305; // [rsp+1B0h] [rbp+B0h]
  __m128 v306; // [rsp+1C0h] [rbp+C0h]
  __m128 v307; // [rsp+1D0h] [rbp+D0h]
  __m128 v308; // [rsp+1E0h] [rbp+E0h]
  __m128 v309; // [rsp+1F0h] [rbp+F0h]
  __m128 v310; // [rsp+200h] [rbp+100h]
  __m128 v311; // [rsp+210h] [rbp+110h]
  int v312; // [rsp+220h] [rbp+120h]
  struct CMILMatrix *v313; // [rsp+228h] [rbp+128h]
  __m128 v314; // [rsp+230h] [rbp+130h]
  __m128 v315; // [rsp+240h] [rbp+140h] BYREF
  __m128 v316; // [rsp+250h] [rbp+150h]
  __int128 v317; // [rsp+260h] [rbp+160h]
  __m128 v318; // [rsp+270h] [rbp+170h]
  int v319; // [rsp+280h] [rbp+180h]
  __m128 v320; // [rsp+290h] [rbp+190h]
  __m256i v321; // [rsp+2A0h] [rbp+1A0h]
  _BYTE v322[20]; // [rsp+2C0h] [rbp+1C0h]
  float v323[6]; // [rsp+2D8h] [rbp+1D8h] BYREF
  _BYTE v324[16]; // [rsp+2F0h] [rbp+1F0h] BYREF
  __m128 v325; // [rsp+300h] [rbp+200h]
  __m128 v326; // [rsp+310h] [rbp+210h]
  _BYTE v327[24]; // [rsp+320h] [rbp+220h] BYREF
  _BYTE v328[24]; // [rsp+338h] [rbp+238h] BYREF
  _BYTE v329[32]; // [rsp+350h] [rbp+250h] BYREF
  _BYTE v330[64]; // [rsp+370h] [rbp+270h] BYREF
  int v331; // [rsp+3B0h] [rbp+2B0h]
  _BYTE v332[64]; // [rsp+3C0h] [rbp+2C0h] BYREF
  int v333; // [rsp+400h] [rbp+300h]
  _BYTE v334[112]; // [rsp+410h] [rbp+310h] BYREF
  _QWORD v335[2]; // [rsp+480h] [rbp+380h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+578h] [rbp+478h]

  v10 = a6;
  v12 = a5;
  LODWORD(v13) = 0;
  v293 = a5;
  v313 = a6;
  if ( g_pComposition && *(_QWORD *)a1 < *((_QWORD *)g_pComposition + 110) || a7 )
    goto LABEL_3;
  if ( !*(_QWORD *)(a1 + 48) && *(_DWORD *)(a1 + 32) == 1 )
  {
    v262 = *(_QWORD *)(a1 + 56) != 0LL;
    if ( *((_QWORD *)a2 + 9) != a3 )
    {
      CpuClippingData = CVisual::GetCpuClippingData(*(CVisual **)(a3 + 88), a2);
      v10 = v313;
      v262 += *((unsigned int *)CpuClippingData + 9);
      v12 = v293;
      LODWORD(v13) = 0;
    }
    if ( *(_DWORD *)(a1 + 36) != v262 )
    {
LABEL_3:
      v16 = *(_DWORD *)(a1 + 32);
      v17 = a4[1];
      v281[0] = v16 == 0;
      v312 = v16;
      if ( v17 != *a4 && *(_QWORD *)(v17 - 176) )
        v305 = *(struct CShape **)(a4[244] - 40LL);
      else
        v305 = 0LL;
      v18 = *((_QWORD *)a2 + 9) == a3;
      v19 = 0LL;
      v20 = _mm_load_si128((const __m128i *)&_xmm).m128i_u32[0];
      v21 = 0LL;
      v22 = 2;
      v23 = FLOAT_1_0;
      v331 = 0;
      if ( v18 )
      {
        v24 = 1;
        v292 = 1;
        if ( a7 )
        {
          v21 = a7[5];
          v19 = (const struct CCpuClippingData *)a7;
          *(_BYTE *)(a1 + 65) = 1;
LABEL_29:
          if ( v21 )
          {
            v36 = a9;
            goto LABEL_31;
          }
LABEL_333:
          v36 = a9;
          if ( a9 <= 2 )
            v36 = 2;
LABEL_31:
          v37 = v293;
          v38 = *(_BYTE *)(a1 + 64);
          v282 = v36;
          v280 = v38;
          if ( !v293 || !v21 )
          {
            v38 = 0;
            v282 = v36;
            v280 = 0;
            if ( !v293 )
              goto LABEL_271;
            goto LABEL_265;
          }
          if ( !v305 )
          {
            if ( v36 > 2 )
              v22 = v36;
            v38 = 0;
            v280 = 0;
            v36 = v22;
            v282 = v22;
            goto LABEL_265;
          }
          if ( !*(_BYTE *)(a1 + 66) && !*(_BYTE *)(a1 + 65) && *((_QWORD *)v19 + 3) <= *(_QWORD *)(a1 + 24) )
          {
LABEL_484:
            if ( v38 )
            {
              v36 = max<enum CpuClippingScopeMode>(v282);
              v282 = v36;
              goto LABEL_265;
            }
LABEL_167:
            v36 = v282;
LABEL_265:
            if ( v36 > 2 )
            {
LABEL_270:
              v37 = 0LL;
              goto LABEL_271;
            }
            ClipNoRef = CVisual::GetClipNoRef((CVisual *)a3);
            if ( !(*(unsigned __int8 (__fastcall **)(struct CGeometry *, _QWORD))(*(_QWORD *)ClipNoRef + 216LL))(
                    ClipNoRef,
                    0LL)
              || v282 == 2 && CCpuClippingData::ShouldRealizeCpuClipOnGpu(v37, v313) )
            {
              v282 = 3;
              goto LABEL_270;
            }
LABEL_271:
            if ( CCpuClippingData::HasCpuClip((CCpuClippingData *)a1) != (v37 != 0LL) )
            {
              CCpuClippingData::OnClipChanged((CCpuClippingData *)a1);
              v279 = 0;
              goto LABEL_375;
            }
            if ( v312 )
            {
              if ( v161 > *(_DWORD *)(a1 + 32) )
              {
                v279 = 0;
                goto LABEL_375;
              }
              if ( v161 <= 1 && *(_BYTE *)(a1 + 65) )
              {
                v279 = 0;
LABEL_375:
                v209 = CCpuClippingData::CalcScopeMode(a3, (__int64)v37, v161);
                if ( *(_DWORD *)(a1 + 32) != v209 )
                {
                  *(_DWORD *)(a1 + 32) = v209;
                  *(_QWORD *)(a1 + 8) = CVisualTree::GetDrawListGenerationCount(a2);
                  v279 = 1;
                }
LABEL_378:
                if ( *(_DWORD *)(a1 + 32) == 1 )
                {
                  if ( *(_BYTE *)(a1 + 65) || *(_BYTE *)(a1 + 66) || *(_BYTE *)(a1 + 67) )
                    v279 = 1;
                  v210 = v305;
                }
                else
                {
                  if ( *(_DWORD *)(a1 + 32) != 2 )
                  {
                    v19 = 0LL;
                    v211 = a1 + 56;
                    v21 = 0LL;
                    goto LABEL_609;
                  }
                  if ( *(_BYTE *)(a1 + 66) || *(_BYTE *)(a1 + 67) )
                    v279 = 1;
                  v19 = 0LL;
                  v21 = 0LL;
                  v210 = 0LL;
                }
                v211 = a1 + 56;
                if ( v37 )
                {
                  v281[0] = *(_BYTE *)(a1 + 66);
                  if ( (unsigned __int8)std::operator==<CCpuClippingData::CpuClipRealization,std::default_delete<CCpuClippingData::CpuClipRealization>>(v211) )
                  {
                    v214 = std::make_unique<CCpuClippingData::CpuClipRealization,,0>(v324);
                    std::unique_ptr<CCpuClippingData::CpuClipRealization>::operator=<std::default_delete<CCpuClippingData::CpuClipRealization>,0>(
                      a1 + 56,
                      v214);
                    std::unique_ptr<CCpuClippingData::CpuClipRealization>::~unique_ptr<CCpuClippingData::CpuClipRealization>(v324);
                    v213 = a1 + 56;
                    v281[0] = 1;
                  }
                  v215 = (CCpuClippingData::CpuClipRealization *)std::unique_ptr<CCpuClippingData::CpuClipRealization>::operator->(
                                                                   v213,
                                                                   v212);
                  v216 = CCpuClippingData::CpuClipRealization::Update(
                           v215,
                           (struct CVisual *)a3,
                           v37,
                           v313,
                           v210,
                           a8,
                           v281);
                  v217 = wil::verify_hresult<long>(v216);
                  v218 = v217;
                  if ( v217 < 0 )
                  {
                    wil::details::in1diag3::Return_Hr(
                      retaddr,
                      (void *)0x1D5,
                      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cpuclippingdata.cpp",
                      (const char *)(unsigned int)v217);
                    return v218;
                  }
                  if ( v281[0] )
                  {
                    CCpuClippingData::OnClipChanged((CCpuClippingData *)a1);
LABEL_389:
                    CCpuClippingData::UpdateScopeTransforms(
                      (CCpuClippingData *)a1,
                      (struct CVisual *)a3,
                      v292,
                      (const struct CMILMatrix *)v21);
                    CCpuClippingData::UpdateCachingGenerationId((CCpuClippingData *)a1, a2, (struct CVisual *)a3, v19);
LABEL_390:
                    *(_BYTE *)(a1 + 64) = v280;
                    *(_WORD *)(a1 + 65) = 0;
                    *(_BYTE *)(a1 + 67) = 0;
                    *(_QWORD *)a1 = GetCurrentFrameId();
                    return 0LL;
                  }
LABEL_610:
                  if ( !v279 )
                    goto LABEL_390;
                  goto LABEL_389;
                }
LABEL_609:
                std::unique_ptr<CCpuClippingData::CpuClipRealization>::reset(v211, 0LL);
                goto LABEL_610;
              }
              if ( v161 <= 2 && *(_BYTE *)(a1 + 67) )
              {
                v279 = 0;
                goto LABEL_375;
              }
              if ( *(_BYTE *)(a1 + 64) != v38 )
              {
                v279 = 0;
                goto LABEL_375;
              }
            }
            v279 = 0;
            if ( !v281[0] )
              goto LABEL_378;
            goto LABEL_375;
          }
          si128 = _mm_load_si128((const __m128i *)&_xmm);
          v38 = 0;
          v40 = (__m128)_mm_load_si128((const __m128i *)&_xmm);
          v41 = -86;
          v42 = (__m128)_mm_load_si128((const __m128i *)&_xmm);
          v43 = (__m128)_mm_load_si128((const __m128i *)&_xmm);
          v44 = FLOAT_61440_0;
          HIWORD(v291) = WORD1(v13);
          v280 = 0;
          v45 = BYTE1(v13) & 0xC0 | 0x29;
          v287 = v40;
          v288 = v42;
          v289 = (__m128)si128;
          v290 = v43;
          LOBYTE(v291) = -86;
          BYTE1(v291) = v45;
          v307 = (__m128)si128;
          if ( v24 )
          {
            v47 = v290.m128_f32[2];
LABEL_150:
            if ( (char)(16 * v41) >> 6 == 1 )
              goto LABEL_167;
            if ( (char)(16 * v41) >> 6 < 0 )
            {
LABEL_152:
              if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v47 - 0.0) & v20) >= 0.000081380211 )
                goto LABEL_167;
              v114 = (float)(v40.m128_f32[0] * _mm_shuffle_ps(v42, v42, 85).m128_f32[0])
                   - (float)(_mm_shuffle_ps(v40, v40, 85).m128_f32[0] * v42.m128_f32[0]);
              if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v114 - 0.0) & v20) < 0.00000011920929
                || !_finite((float)(v23 / v114)) )
              {
                goto LABEL_167;
              }
              v115 = v291;
              if ( (char)((_BYTE)v291 << 6) >> 6 == 1 )
              {
                v116 = BYTE1(v291);
                v117 = v290.m128_f32[3];
                v118 = v288.m128_f32[3];
                v119 = v287.m128_f32[3];
                goto LABEL_169;
              }
              if ( (char)((_BYTE)v291 << 6) >> 6 < 0 )
                goto LABEL_66;
              v116 = BYTE1(v291);
              v117 = v290.m128_f32[3];
              v118 = v288.m128_f32[3];
              v119 = v287.m128_f32[3];
              if ( (char)(16 * BYTE1(v291)) >> 6 == 1 )
                goto LABEL_165;
              if ( (char)(16 * BYTE1(v291)) >> 6 >= 0 )
              {
                if ( (char)(4 * BYTE1(v291)) >> 6 == 1
                  || ((char)(4 * BYTE1(v291)) >> 6 >= 0
                    ? (COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                      (float)((float)((float)(COERCE_FLOAT(v288.m128_i32[3] & v20) * v44)
                                                    + (float)(COERCE_FLOAT(v287.m128_i32[3] & v20) * v44))
                                            + COERCE_FLOAT(v290.m128_i32[3] & v20))
                                    - v23) & v20) >= 0.000081380211
                     ? (v237 = 0, v238 = 16)
                     : (v237 = 1, v238 = 48),
                       v116 = v238 | BYTE1(v291) & 0xCF,
                       v219 = v237 & (COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(v289.m128_i32[3] & v20) * v44) - 0.0) & v20) < 0.000081380211))
                    : (v219 = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(v289.m128_i32[3] & v20) * v44) - 0.0) & v20) < 0.000081380211),
                      !v219
                   || COERCE_FLOAT(COERCE_UNSIGNED_INT(v289.m128_f32[0] - 0.0) & v20) >= 0.000081380211
                   || COERCE_FLOAT(COERCE_UNSIGNED_INT(v289.m128_f32[1] - 0.0) & v20) >= 0.000081380211) )
                {
                  v116 = v116 & 0xF3 | 4;
                  v115 = v291 & 0xFC | 1;
                  BYTE1(v291) = v116;
                  LOBYTE(v291) = v115;
                  goto LABEL_169;
                }
                v116 |= 0xCu;
                BYTE1(v291) = v116;
              }
              if ( (char)(16 * v291) >> 6 == 1 )
                goto LABEL_165;
              if ( (char)(16 * v291) >> 6 < 0 )
                goto LABEL_161;
              if ( (char)(4 * v116) >> 6 != 1 )
              {
                if ( (char)(4 * v116) >> 6 < 0 )
                {
LABEL_425:
                  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v287.m128_f32[2] - 0.0) & v20) < 0.000081380211
                    && COERCE_FLOAT(COERCE_UNSIGNED_INT(v288.m128_f32[2] - 0.0) & v20) < 0.000081380211 )
                  {
                    v115 = v291 | 0xC;
LABEL_161:
                    if ( (char)(4 * v115) >> 6 != 1 )
                    {
                      if ( (char)(4 * v115) >> 6 < 0 )
                        goto LABEL_163;
                      if ( v115 >> 6 == 1 )
                        goto LABEL_305;
                      if ( v115 >> 6 < 0 )
                        goto LABEL_304;
                      if ( (char)(4 * v116) >> 6 != 1 )
                      {
                        if ( (char)(4 * v116) >> 6 >= 0 )
                        {
                          if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                              (float)((float)((float)(COERCE_FLOAT(v288.m128_i32[3] & v20) * v44)
                                                            + (float)(COERCE_FLOAT(v287.m128_i32[3] & v20) * v44))
                                                    + COERCE_FLOAT(v290.m128_i32[3] & v20))
                                            - v23) & v20) >= 0.000081380211 )
                          {
                            v116 = v116 & 0xCF | 0x10;
                            BYTE1(v291) = v116;
                            v115 = v115 & 0x3F | 0x40;
                            goto LABEL_305;
                          }
                          v116 |= 0x30u;
                          BYTE1(v291) = v116;
                        }
                        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v287.m128_f32[1] - 0.0) & v20) < 0.000081380211
                          && COERCE_FLOAT(COERCE_UNSIGNED_INT(v288.m128_f32[0] - 0.0) & v20) < 0.000081380211 )
                        {
                          v115 |= 0xC0u;
LABEL_304:
                          if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v287.m128_f32[0] - v23) & v20) < 0.000081380211
                            && COERCE_FLOAT(COERCE_UNSIGNED_INT(v288.m128_f32[1] - v23) & v20) < 0.000081380211 )
                          {
                            v115 |= 0x30u;
LABEL_163:
                            if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v289.m128_f32[2] - v23) & v20) >= 0.000081380211
                              || COERCE_FLOAT(COERCE_UNSIGNED_INT(v290.m128_f32[0] - 0.0) & v20) >= 0.000081380211
                              || COERCE_FLOAT(COERCE_UNSIGNED_INT(v290.m128_f32[1] - 0.0) & v20) >= 0.000081380211
                              || COERCE_FLOAT(COERCE_UNSIGNED_INT(v290.m128_f32[2] - 0.0) & v20) >= 0.000081380211 )
                            {
                              goto LABEL_165;
                            }
                            LOBYTE(v291) = v115 | 3;
LABEL_66:
                            v287 = *v21;
                            v288 = v21[1];
                            v289 = v21[2];
                            v290 = v21[3];
                            v291 = v21[4].m128_i32[0];
                            goto LABEL_67;
                          }
                          goto LABEL_305;
                        }
                      }
                      v115 = v115 & 0x3F | 0x40;
LABEL_305:
                      v115 = v115 & 0xCC | 0x11;
                      LOBYTE(v291) = v115;
                      goto LABEL_169;
                    }
LABEL_165:
                    v115 = v115 & 0xFC | 1;
                    LOBYTE(v291) = v115;
                    goto LABEL_169;
                  }
                  goto LABEL_426;
                }
                if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                    (float)((float)((float)(COERCE_FLOAT(v288.m128_i32[3] & v20) * v44)
                                                  + (float)(COERCE_FLOAT(v287.m128_i32[3] & v20) * v44))
                                          + COERCE_FLOAT(v290.m128_i32[3] & v20))
                                  - v23) & v20) < 0.000081380211 )
                {
                  v116 |= 0x30u;
                  BYTE1(v291) = v116;
                  goto LABEL_425;
                }
                v116 = v116 & 0xCF | 0x10;
                BYTE1(v291) = v116;
              }
LABEL_426:
              v115 = v291 & 0xF0 | 5;
              LOBYTE(v291) = v115;
LABEL_169:
              if ( (char)(v21[4].m128_i8[0] << 6) >> 6 == 1 )
              {
                v122 = v21;
LABEL_180:
                v124 = v21[4].m128_i8[1];
                if ( (v124 & 8) == 0 && 16 * (v124 & 0xFC) != 0 )
                  goto LABEL_187;
                if ( (v124 & 8) == 0 )
                {
                  if ( (char)(4 * v124) >> 6 == 1
                    || ((char)(4 * v124) >> 6 >= 0
                      ? (COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                        (float)((float)((float)(COERCE_FLOAT(v21[1].m128_i32[3] & v20) * v44)
                                                      + (float)(COERCE_FLOAT(v21->m128_i32[3] & v20) * v44))
                                              + COERCE_FLOAT(v21[3].m128_i32[3] & v20))
                                      - v23) & v20) >= 0.000081380211
                       ? (v244 = 0, v245 = 16)
                       : (v244 = 1, v245 = -16),
                         v21[4].m128_i8[1] = v245 ^ (v124 ^ v245) & 0xCF,
                         v222 = v244 & (COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(v21[2].m128_i32[3] & v20)
                                                                               * v44) - 0.0) & v20) < 0.000081380211))
                      : (v222 = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(v21[2].m128_i32[3] & v20) * v44) - 0.0) & v20) < 0.000081380211),
                        !v222
                     || COERCE_FLOAT(COERCE_UNSIGNED_INT(v21[2].m128_f32[0] - 0.0) & v20) >= 0.000081380211
                     || COERCE_FLOAT(COERCE_UNSIGNED_INT(v21[2].m128_f32[1] - 0.0) & v20) >= 0.000081380211) )
                  {
                    v122[4].m128_i8[1] = v122[4].m128_i8[1] & 0xF3 ^ 4;
                    goto LABEL_320;
                  }
                  v124 = v122[4].m128_i8[1] & 0xF3 ^ 0xC;
                  v122[4].m128_i8[1] = v124;
                  v116 = BYTE1(v291);
                  v115 = v291;
                  v117 = v290.m128_f32[3];
                  v118 = v288.m128_f32[3];
                  v119 = v287.m128_f32[3];
                }
                v125 = v21[4].m128_i8[0];
                if ( (char)(16 * v125) >> 6 == 1 )
                  goto LABEL_187;
                if ( (char)(16 * v125) >> 6 >= 0 )
                {
                  if ( (char)(4 * v124) >> 6 == 1 )
                    goto LABEL_446;
                  if ( (char)(4 * v124) >> 6 >= 0 )
                  {
                    v250 = v124 & 0xCF;
                    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                        (float)((float)((float)(COERCE_FLOAT(v21[1].m128_i32[3] & v20) * v44)
                                                      + (float)(COERCE_FLOAT(v21->m128_i32[3] & v20) * v44))
                                              + COERCE_FLOAT(v21[3].m128_i32[3] & v20))
                                      - v23) & v20) >= 0.000081380211 )
                    {
                      v122[4].m128_i8[1] = v250 ^ 0x10;
                      v122[4].m128_i8[0] = v122[4].m128_i8[0] & 0xF3 ^ 4;
                      goto LABEL_320;
                    }
                    v122[4].m128_i8[1] = v250 ^ 0x30;
                  }
                  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v21->m128_f32[2] - 0.0) & v20) >= 0.000081380211
                    || COERCE_FLOAT(COERCE_UNSIGNED_INT(v21[1].m128_f32[2] - 0.0) & v20) >= 0.000081380211 )
                  {
LABEL_446:
                    v122[4].m128_i8[0] = v122[4].m128_i8[0] & 0xF3 ^ 4;
                    goto LABEL_320;
                  }
                  v125 = v122[4].m128_i8[0] & 0xF3 ^ 0xC;
                  v122[4].m128_i8[0] = v125;
                  v116 = BYTE1(v291);
                  v115 = v291;
                  v117 = v290.m128_f32[3];
                  v118 = v288.m128_f32[3];
                  v119 = v287.m128_f32[3];
                }
                if ( (char)(4 * v125) >> 6 == 1 )
                  goto LABEL_187;
                if ( (char)(4 * v125) >> 6 < 0 )
                  goto LABEL_186;
                if ( v125 >> 6 != 1 )
                {
                  if ( v125 >> 6 < 0 )
                  {
LABEL_318:
                    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v21->m128_f32[0] - v23) & v20) < 0.000081380211
                      && COERCE_FLOAT(COERCE_UNSIGNED_INT(v21[1].m128_f32[1] - v23) & v20) < 0.000081380211 )
                    {
                      v122[4].m128_i8[0] = v125 & 0xCF ^ 0x30;
                      v116 = BYTE1(v291);
                      v115 = v291;
                      v117 = v290.m128_f32[3];
                      v118 = v288.m128_f32[3];
                      v119 = v287.m128_f32[3];
LABEL_186:
                      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v21[2].m128_f32[2] - v23) & v20) < 0.000081380211 )
                      {
                        v134 = v21[3].m128_f32[0];
                        v135 = v21[3].m128_f32[2];
                        v136 = v21[3].m128_f32[1];
                        if ( COERCE_FLOAT(LODWORD(v134) & v20) >= 0.000081380211
                          || COERCE_FLOAT(LODWORD(v136) & v20) >= 0.000081380211
                          || COERCE_FLOAT(LODWORD(v135) & v20) >= 0.000081380211 )
                        {
                          if ( (char)(4 * v116) >> 6 == 1
                            || ((char)(4 * v116) >> 6 >= 0
                              ? (COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                                (float)((float)((float)(COERCE_FLOAT(LODWORD(v118) & v20) * v44)
                                                              + (float)(COERCE_FLOAT(LODWORD(v119) & v20) * v44))
                                                      + COERCE_FLOAT(LODWORD(v117) & v20))
                                              - v23) & v20) >= 0.000081380211
                               ? (v162 = 0, v163 = 16)
                               : (v162 = 1, v163 = 48),
                                 v116 = v163 | v116 & 0xCF,
                                 BYTE1(v291) = v116,
                                 v137 = v162 & (COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(v289.m128_i32[3] & v20)
                                                                                       * v44) - 0.0) & v20) < 0.000081380211))
                              : (v137 = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(v289.m128_i32[3] & v20)
                                                                               * v44) - 0.0) & v20) < 0.000081380211),
                                !v137) )
                          {
                            BYTE1(v291) = v116 & 0xF3;
                            v287.m128_f32[0] = v287.m128_f32[0] + (float)(v119 * v134);
                            v287.m128_f32[1] = v287.m128_f32[1] + (float)(v119 * v136);
                            v287.m128_f32[2] = v287.m128_f32[2] + (float)(v119 * v135);
                            v288.m128_f32[0] = v288.m128_f32[0] + (float)(v118 * v134);
                            v288.m128_f32[1] = v288.m128_f32[1] + (float)(v118 * v136);
                            v288.m128_f32[2] = v288.m128_f32[2] + (float)(v118 * v135);
                            v289.m128_f32[0] = v289.m128_f32[0] + (float)(v289.m128_f32[3] * v134);
                            v289.m128_f32[1] = v289.m128_f32[1] + (float)(v289.m128_f32[3] * v136);
                            v289.m128_f32[2] = v289.m128_f32[2] + (float)(v289.m128_f32[3] * v135);
                            v290.m128_f32[0] = v290.m128_f32[0] + (float)(v117 * v134);
                            v290.m128_f32[1] = v290.m128_f32[1] + (float)(v117 * v136);
                            v138 = v290.m128_f32[2] + (float)(v117 * v135);
                          }
                          else
                          {
                            v290.m128_f32[0] = v290.m128_f32[0] + v134;
                            v138 = v290.m128_f32[2] + v135;
                            v290.m128_f32[1] = v290.m128_f32[1] + v136;
                          }
                          v290.m128_f32[2] = v138;
                          LOBYTE(v291) = v115 & 0xFC;
                        }
                        goto LABEL_67;
                      }
LABEL_187:
                      if ( (char)(16 * v116) >> 6 == 1 )
                        goto LABEL_201;
                      if ( (char)(16 * v116) >> 6 >= 0 )
                      {
                        if ( (char)(4 * v116) >> 6 == 1
                          || ((char)(4 * v116) >> 6 >= 0
                            ? (COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                              (float)((float)((float)(COERCE_FLOAT(LODWORD(v118) & v20) * v44)
                                                            + (float)(COERCE_FLOAT(LODWORD(v119) & v20) * v44))
                                                    + COERCE_FLOAT(LODWORD(v117) & v20))
                                            - v23) & v20) >= 0.000081380211
                             ? (v248 = 0, v249 = 16)
                             : (v248 = 1, v249 = 48),
                               v116 = v249 | v116 & 0xCF,
                               v225 = v248 & (COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(v289.m128_i32[3] & v20)
                                                                                     * v44) - 0.0) & v20) < 0.000081380211))
                            : (v225 = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(v289.m128_i32[3] & v20) * v44) - 0.0) & v20) < 0.000081380211),
                              !v225
                           || COERCE_FLOAT(COERCE_UNSIGNED_INT(v289.m128_f32[0] - 0.0) & v20) >= 0.000081380211
                           || COERCE_FLOAT(COERCE_UNSIGNED_INT(v289.m128_f32[1] - 0.0) & v20) >= 0.000081380211) )
                        {
                          BYTE1(v291) = v116 & 0xF3 | 4;
                          goto LABEL_201;
                        }
                        v116 |= 0xCu;
                        BYTE1(v291) = v116;
                      }
                      if ( (char)(16 * v115) >> 6 == 1 )
                        goto LABEL_201;
                      if ( (char)(16 * v115) >> 6 >= 0 )
                      {
                        if ( (char)(4 * v116) >> 6 == 1 )
                          goto LABEL_504;
                        if ( (char)(4 * v116) >> 6 >= 0 )
                        {
                          if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                              (float)((float)((float)(COERCE_FLOAT(LODWORD(v118) & v20) * v44)
                                                            + (float)(COERCE_FLOAT(LODWORD(v119) & v20) * v44))
                                                    + COERCE_FLOAT(LODWORD(v117) & v20))
                                            - v23) & v20) >= 0.000081380211 )
                          {
                            BYTE1(v291) = v116 & 0xCF | 0x10;
                            LOBYTE(v291) = v115 & 0xF3 | 4;
                            goto LABEL_201;
                          }
                          v116 |= 0x30u;
                          BYTE1(v291) = v116;
                        }
                        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v287.m128_f32[2] - 0.0) & v20) >= 0.000081380211
                          || COERCE_FLOAT(COERCE_UNSIGNED_INT(v288.m128_f32[2] - 0.0) & v20) >= 0.000081380211 )
                        {
LABEL_504:
                          LOBYTE(v291) = v115 & 0xF3 | 4;
                          goto LABEL_201;
                        }
                        v115 |= 0xCu;
                        LOBYTE(v291) = v115;
                      }
                      if ( (char)(4 * v115) >> 6 == 1 )
                        goto LABEL_201;
                      if ( (char)(4 * v115) >> 6 < 0 )
                      {
LABEL_193:
                        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v289.m128_f32[2] - v23) & v20) < 0.000081380211 )
                        {
                          v126 = *v21;
                          v127 = v290.m128_f32[0];
                          v128 = v290.m128_f32[1];
                          v129 = v290.m128_f32[2];
                          v287 = *v21;
                          v130 = v21[1];
                          v288 = v130;
                          v131 = v21[2];
                          v289 = v131;
                          v290 = v21[3];
                          v291 = v21[4].m128_i32[0];
                          if ( COERCE_FLOAT(LODWORD(v127) & v20) < 0.000081380211
                            && COERCE_FLOAT(LODWORD(v128) & v20) < 0.000081380211
                            && COERCE_FLOAT(LODWORD(v129) & v20) < 0.000081380211 )
                          {
                            goto LABEL_67;
                          }
                          v290.m128_f32[0] = v290.m128_f32[0]
                                           + (float)((float)((float)(v130.m128_f32[0] * v128)
                                                           + (float)(v126.m128_f32[0] * v127))
                                                   + (float)(v131.m128_f32[0] * v129));
                          v290.m128_f32[1] = v290.m128_f32[1]
                                           + (float)((float)((float)(_mm_shuffle_ps(v130, v130, 85).m128_f32[0] * v128)
                                                           + (float)(_mm_shuffle_ps(v126, v126, 85).m128_f32[0] * v127))
                                                   + (float)(_mm_shuffle_ps(v131, v131, 85).m128_f32[0] * v129));
                          v290.m128_f32[2] = v290.m128_f32[2]
                                           + (float)((float)((float)(_mm_shuffle_ps(v130, v130, 170).m128_f32[0] * v128)
                                                           + (float)(_mm_shuffle_ps(v126, v126, 170).m128_f32[0] * v127))
                                                   + (float)(_mm_shuffle_ps(v131, v131, 170).m128_f32[0] * v129));
                          if ( (char)(4 * BYTE1(v291)) >> 6 == 1 )
                          {
                            v132 = v289.m128_f32[3];
                          }
                          else
                          {
                            if ( (char)(4 * BYTE1(v291)) >> 6 >= 0 )
                            {
                              if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                                  (float)((float)((float)(COERCE_FLOAT(v288.m128_i32[3] & v20) * v44)
                                                                + (float)(COERCE_FLOAT(v287.m128_i32[3] & v20) * v44))
                                                        + COERCE_FLOAT(v290.m128_i32[3] & v20))
                                                - v23) & v20) >= 0.000081380211 )
                              {
                                v189 = 0;
                                v190 = 16;
                              }
                              else
                              {
                                v189 = 1;
                                v190 = 48;
                              }
                              BYTE1(v291) = v190 | BYTE1(v291) & 0xCF;
                              LODWORD(v132) = _mm_shuffle_ps(v131, v131, 255).m128_u32[0];
                              v133 = v189 & (COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(LODWORD(v132) & v20)
                                                                                    * v44) - 0.0) & v20) < 0.000081380211);
                            }
                            else
                            {
                              v132 = _mm_shuffle_ps(v131, v131, 255).m128_f32[0];
                              v133 = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(LODWORD(v132) & v20) * v44) - 0.0) & v20) < 0.000081380211;
                            }
                            if ( v133 )
                            {
                              LOBYTE(v291) = v291 & 0xFC;
                              goto LABEL_67;
                            }
                          }
                          v291 = 0;
                          v290.m128_f32[3] = v290.m128_f32[3]
                                           + (float)((float)((float)(v288.m128_f32[3] * v128)
                                                           + (float)(v287.m128_f32[3] * v127))
                                                   + (float)(v132 * v129));
                          goto LABEL_67;
                        }
LABEL_201:
                        if ( (unsigned __int8)CMILMatrix::IsTranslateAndScale<1>(v21) )
                        {
                          v153 = v21[3].m128_f32[0];
                          v154 = v21[3].m128_f32[1];
                          v155 = v21[3].m128_f32[2];
                          CMILMatrix::Scale(
                            (CMILMatrix *)&v287,
                            v21->m128_f32[0],
                            v21[1].m128_f32[1],
                            v21[2].m128_f32[2]);
                          CMILMatrix::Translate((CMILMatrix *)&v287, v153, v154, v155);
                        }
                        else if ( (unsigned __int8)CMILMatrix::IsPure2DUniformZ<1>(&v287)
                               && (unsigned __int8)CMILMatrix::IsPure2DUniformZ<1>(v21) )
                        {
                          v156 = v290.m128_f32[2];
                          CMILMatrix::GetD2D1Matrix3x2(&v287, v328);
                          CMILMatrix::GetD2D1Matrix3x2(v21, v327);
                          D2D1::Matrix3x2F::SetProduct(
                            (D2D1::Matrix3x2F *)v323,
                            (const struct D2D1::Matrix3x2F *)v328,
                            (const struct D2D1::Matrix3x2F *)v327);
                          CMILMatrix::Set2DAffineMatrix(
                            (CMILMatrix *)&v287,
                            v323[0],
                            v323[1],
                            v323[2],
                            v323[3],
                            v323[4],
                            v323[5]);
                          v289.m128_f32[2] = v157 * v21[2].m128_f32[2];
                          v290.m128_f32[2] = (float)(v156 * v21[2].m128_f32[2]) + v21[3].m128_f32[2];
                        }
                        else
                        {
                          Windows::Foundation::Numerics::operator*=(&v287, v21);
                          CMILMatrix::InvalidateAllFlags((CMILMatrix *)&v287);
                        }
                        goto LABEL_67;
                      }
                      if ( v115 >> 6 == 1 )
                      {
LABEL_343:
                        LOBYTE(v291) = v115 & 0xCF | 0x10;
                        goto LABEL_201;
                      }
                      if ( v115 >> 6 < 0 )
                      {
LABEL_342:
                        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v287.m128_f32[0] - v23) & v20) < 0.000081380211
                          && COERCE_FLOAT(COERCE_UNSIGNED_INT(v288.m128_f32[1] - v23) & v20) < 0.000081380211 )
                        {
                          LOBYTE(v291) = v115 | 0x30;
                          goto LABEL_193;
                        }
                        goto LABEL_343;
                      }
                      if ( (char)(4 * v116) >> 6 != 1 )
                      {
                        if ( (char)(4 * v116) >> 6 >= 0 )
                        {
                          if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                              (float)((float)((float)(COERCE_FLOAT(LODWORD(v118) & v20) * v44)
                                                            + (float)(COERCE_FLOAT(LODWORD(v119) & v20) * v44))
                                                    + COERCE_FLOAT(LODWORD(v117) & v20))
                                            - v23) & v20) >= 0.000081380211 )
                          {
                            BYTE1(v291) = v116 & 0xCF | 0x10;
                            goto LABEL_528;
                          }
                          BYTE1(v291) = v116 | 0x30;
                        }
                        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v287.m128_f32[1] - 0.0) & v20) < 0.000081380211
                          && COERCE_FLOAT(COERCE_UNSIGNED_INT(v288.m128_f32[0] - 0.0) & v20) < 0.000081380211 )
                        {
                          v115 |= 0xC0u;
                          goto LABEL_342;
                        }
                      }
LABEL_528:
                      LOBYTE(v291) = v115 & 0xF | 0x50;
                      goto LABEL_201;
                    }
                    goto LABEL_319;
                  }
                  v235 = v21[4].m128_i8[1];
                  if ( (char)(4 * v235) >> 6 != 1 )
                  {
                    if ( (char)(4 * v235) >> 6 >= 0 )
                    {
                      v255 = v235 & 0xCF;
                      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                          (float)((float)((float)(COERCE_FLOAT(v21[1].m128_i32[3] & v20) * v44)
                                                        + (float)(COERCE_FLOAT(v21->m128_i32[3] & v20) * v44))
                                                + COERCE_FLOAT(v21[3].m128_i32[3] & v20))
                                        - v23) & v20) >= 0.000081380211 )
                      {
                        v122[4].m128_i8[1] = v255 ^ 0x10;
                        v125 = v122[4].m128_i8[0] & 0x3F | 0x40;
                        goto LABEL_319;
                      }
                      v122[4].m128_i8[1] = v255 ^ 0x30;
                    }
                    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v21->m128_f32[1] - 0.0) & v20) < 0.000081380211
                      && COERCE_FLOAT(COERCE_UNSIGNED_INT(v21[1].m128_f32[0] - 0.0) & v20) < 0.000081380211 )
                    {
                      v125 = v122[4].m128_i8[0] | 0xC0;
                      goto LABEL_318;
                    }
                  }
                  v125 = v122[4].m128_i8[0] & 0x3F | 0x40;
                }
LABEL_319:
                v122[4].m128_i8[0] = v125 & 0xCF ^ 0x10;
LABEL_320:
                v116 = BYTE1(v291);
                v115 = v291;
                v117 = v290.m128_f32[3];
                v118 = v288.m128_f32[3];
                v119 = v287.m128_f32[3];
                goto LABEL_187;
              }
              if ( (char)(v21[4].m128_i8[0] << 6) >> 6 >= 0 )
              {
                v120 = v21[4].m128_i8[1];
                if ( (v120 & 8) != 0 || 16 * (v120 & 0xFC) == 0 )
                {
                  if ( (v120 & 8) != 0 )
                    goto LABEL_173;
                  if ( (char)(4 * v120) >> 6 != 1 )
                  {
                    if ( (char)(4 * v120) >> 6 >= 0 )
                    {
                      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                          (float)((float)((float)(COERCE_FLOAT(v21[1].m128_i32[3] & v20) * v44)
                                                        + (float)(COERCE_FLOAT(v21->m128_i32[3] & v20) * v44))
                                                + COERCE_FLOAT(v21[3].m128_i32[3] & v20))
                                        - v23) & v20) >= 0.000081380211 )
                      {
                        v253 = 0;
                        v254 = 16;
                      }
                      else
                      {
                        v253 = 1;
                        v254 = -16;
                      }
                      v21[4].m128_i8[1] = v254 ^ (v120 ^ v254) & 0xCF;
                      v234 = v253 & (COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(v21[2].m128_i32[3] & v20)
                                                                            * v44) - 0.0) & v20) < 0.000081380211);
                    }
                    else
                    {
                      v234 = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(v21[2].m128_i32[3] & v20) * v44) - 0.0) & v20) < 0.000081380211;
                    }
                    if ( v234
                      && COERCE_FLOAT(COERCE_UNSIGNED_INT(v21[2].m128_f32[0] - 0.0) & v20) < 0.000081380211
                      && COERCE_FLOAT(COERCE_UNSIGNED_INT(v21[2].m128_f32[1] - 0.0) & v20) < 0.000081380211 )
                    {
                      v120 = v21[4].m128_i8[1] & 0xF3 ^ 0xC;
                      v21[4].m128_i8[1] = v120;
LABEL_173:
                      v121 = v21[4].m128_i8[0];
                      v122 = v21;
                      if ( (char)(16 * v121) >> 6 != 1 )
                      {
                        if ( (char)(16 * v121) >> 6 >= 0 )
                        {
                          if ( (char)(4 * v120) >> 6 == 1 )
                            goto LABEL_519;
                          if ( (char)(4 * v120) >> 6 >= 0 )
                          {
                            v261 = v120 & 0xCF;
                            if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                                (float)((float)((float)(COERCE_FLOAT(v21[1].m128_i32[3] & v20) * v44)
                                                              + (float)(COERCE_FLOAT(v21->m128_i32[3] & v20) * v44))
                                                      + COERCE_FLOAT(v21[3].m128_i32[3] & v20))
                                              - v23) & v20) >= 0.000081380211 )
                            {
                              v21[4].m128_i8[1] = v261 ^ 0x10;
                              v21[4].m128_i8[0] = v21[4].m128_i8[0] & 0xF3 ^ 4;
                              goto LABEL_179;
                            }
                            v21[4].m128_i8[1] = v261 ^ 0x30;
                          }
                          if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v21->m128_f32[2] - 0.0) & v20) >= 0.000081380211
                            || COERCE_FLOAT(COERCE_UNSIGNED_INT(v21[1].m128_f32[2] - 0.0) & v20) >= 0.000081380211 )
                          {
LABEL_519:
                            v21[4].m128_i8[0] = v21[4].m128_i8[0] & 0xF3 ^ 4;
                            goto LABEL_179;
                          }
                          v121 = v21[4].m128_i8[0] & 0xF3 ^ 0xC;
                          v21[4].m128_i8[0] = v121;
                        }
                        v123 = (char)(4 * v121) >> 6;
                        if ( v123 <= 0 )
                        {
                          if ( v123 < 0 )
                          {
LABEL_177:
                            if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v21[2].m128_f32[2] - v23) & v20) < 0.000081380211
                              && COERCE_FLOAT(COERCE_UNSIGNED_INT(v21[3].m128_f32[0] - 0.0) & v20) < 0.000081380211
                              && COERCE_FLOAT(COERCE_UNSIGNED_INT(v21[3].m128_f32[1] - 0.0) & v20) < 0.000081380211
                              && COERCE_FLOAT(COERCE_UNSIGNED_INT(v21[3].m128_f32[2] - 0.0) & v20) < 0.000081380211 )
                            {
                              v122[4].m128_i8[0] = ~(~v122[4].m128_i8[0] & 0xFC);
                              goto LABEL_67;
                            }
                            goto LABEL_179;
                          }
                          if ( (unsigned __int8)CMILMatrix::IsTranslateAndScaleIgnoreZ<1>(v21)
                            && COERCE_FLOAT(COERCE_UNSIGNED_INT(v21->m128_f32[0] - v23) & v20) < 0.000081380211
                            && COERCE_FLOAT(COERCE_UNSIGNED_INT(v21[1].m128_f32[1] - v23) & v20) < 0.000081380211 )
                          {
                            v122[4].m128_i8[0] = v122[4].m128_i8[0] & 0xCF ^ 0x30;
                            goto LABEL_177;
                          }
                          v122[4].m128_i8[0] = v122[4].m128_i8[0] & 0xCF ^ 0x10;
                        }
                      }
LABEL_179:
                      v122[4].m128_i8[0] = v122[4].m128_i8[0] & 0xFC ^ 1;
                      v116 = BYTE1(v291);
                      v115 = v291;
                      v117 = v290.m128_f32[3];
                      v118 = v288.m128_f32[3];
                      v119 = v287.m128_f32[3];
                      goto LABEL_180;
                    }
                  }
                  v21[4].m128_i8[1] = v21[4].m128_i8[1] & 0xF3 ^ 4;
                }
                v122 = v21;
                goto LABEL_179;
              }
LABEL_67:
              TMilRect_<int,tagRECT,Mil3DRectL,D2D_POINTANDSIZE_L,RectUniqueness::_CMilRectL_>::TMilRect_<int,tagRECT,Mil3DRectL,D2D_POINTANDSIZE_L,RectUniqueness::_CMilRectL_>(v335);
              v71 = (*(__int64 (__fastcall **)(struct CShape *, _QWORD *, _QWORD))(*(_QWORD *)v37 + 48LL))(
                      v37,
                      v335,
                      0LL);
              v72 = wil::verify_hresult<long>(v71);
              v73 = v72;
              if ( v72 < 0 )
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x13D,
                  (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cpuclippingdata.cpp",
                  (const char *)(unsigned int)v72);
                return v73;
              }
              CCpuClip::CCpuClip((CCpuClip *)v334);
              CCpuClip::Initialize((CCpuClip *)v334, v305, 0LL, D2D1_ANTIALIAS_MODE_ALIASED, 0, 0LL);
              CMILMatrix::GetD2D1Matrix3x2(&v287, v329);
              v280 = CCpuClip::FullyContains(v334, v335, v329);
              v38 = v280;
              CCpuClip::~CCpuClip((CCpuClip *)v334);
              goto LABEL_484;
            }
            if ( (char)(4 * v45) >> 6 != 1 )
            {
              if ( (char)(4 * v45) >> 6 >= 0 )
              {
                if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                    (float)((float)((float)(COERCE_FLOAT(_mm_shuffle_ps(v42, v42, 255).m128_u32[0] & v20)
                                                          * v44)
                                                  + (float)(COERCE_FLOAT(_mm_shuffle_ps(v40, v40, 255).m128_u32[0] & v20)
                                                          * v44))
                                          + COERCE_FLOAT(v290.m128_i32[3] & v20))
                                  - v23) & v20) >= 0.000081380211 )
                {
                  BYTE1(v291) = v45 & 0xCF | 0x10;
                  goto LABEL_166;
                }
                BYTE1(v291) = v45 | 0x30;
              }
              if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v40, v40, 170).m128_f32[0] - 0.0) & v20) < 0.000081380211
                && COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v42, v42, 170).m128_f32[0] - 0.0) & v20) < 0.000081380211 )
              {
                LOBYTE(v291) = v41 | 0xC;
                goto LABEL_152;
              }
            }
LABEL_166:
            LOBYTE(v291) = v41 & 0xF3 | 4;
            goto LABEL_167;
          }
          LODWORD(v293) = *(_DWORD *)(a3 + 124);
          v46 = *(float *)&v293;
          if ( *(float *)&v293 == 0.0 && *(float *)(a3 + 128) == 0.0 && *(float *)(a3 + 120) == 0.0 )
          {
            LODWORD(v293) = v43.m128_i32[0];
            LODWORD(v47) = _mm_shuffle_ps(v43, v43, 170).m128_u32[0];
            v48 = _mm_shuffle_ps(v43, v43, 85);
            v46 = v43.m128_f32[0];
          }
          else
          {
            v48 = (__m128)*(unsigned int *)(a3 + 128);
            v41 = -88;
            v47 = *(float *)(a3 + 120);
            v65 = v290;
            si128 = _mm_load_si128((const __m128i *)&_xmm);
            v65.m128_f32[0] = *(float *)&v293;
            v66 = _mm_shuffle_ps(v65, v65, 225);
            v66.m128_f32[0] = v48.m128_f32[0];
            LOBYTE(v291) = -88;
            v67 = _mm_shuffle_ps(v66, v66, 198);
            v67.m128_f32[0] = v47;
            v43 = _mm_shuffle_ps(v67, v67, 201);
            v290 = v43;
          }
          v49 = *(__m128 **)(a3 + 232);
          v314 = v48;
          if ( !v49 )
          {
LABEL_149:
            v38 = 0;
            goto LABEL_150;
          }
          v50 = (float *)(a3 + 140);
          v51 = v49[2].m128_i8[8] & 1;
          if ( a3 != -140 )
          {
            if ( (v49[2].m128_i8[8] & 1) == 0
              && v49[9].m128_i8[12]
              && (v49[9].m128_f32[1] != *v50 || v49[9].m128_f32[2] != *(float *)(a3 + 144)) )
            {
              v51 = 1;
            }
            *(unsigned __int64 *)((char *)v49[9].m128_u64 + 4) = *(_QWORD *)v50;
            v48.m128_i32[0] = v290.m128_i32[1];
            v46 = v290.m128_f32[0];
            si128 = (__m128i)v289;
            v45 = BYTE1(v291);
            v41 = v291;
            v47 = v290.m128_f32[2];
            v43 = v290;
            v42 = v288;
            v40 = v287;
            LODWORD(v293) = v290.m128_i32[0];
            v314 = (__m128)v290.m128_u32[1];
            v307 = v289;
          }
          if ( v51 )
          {
            (*(void (__fastcall **)(__m128 *, float *, __m128 *))(v49->m128_u64[0] + 208))(v49, v50, v49 + 5);
            v49[2].m128_i32[2] &= ~1u;
            v48.m128_i32[0] = v290.m128_i32[1];
            LODWORD(v13) = 0;
            v46 = v290.m128_f32[0];
            si128 = (__m128i)v289;
            v45 = BYTE1(v291);
            v41 = v291;
            v47 = v290.m128_f32[2];
            v43 = v290;
            v42 = v288;
            v40 = v287;
            LODWORD(v293) = v290.m128_i32[0];
            v314 = (__m128)v290.m128_u32[1];
            v307 = v289;
          }
          v52 = v49[5];
          v283 = v52;
          v53 = v49[6];
          v294 = v52;
          v284 = v53;
          v54 = v49[7];
          v298 = v53;
          v285 = v54;
          v55 = v49[8];
          *(__m128 *)v286 = v55;
          *(_DWORD *)&v286[16] = v49[9].m128_i32[0];
          v56 = v286[16];
          if ( (char)(v286[16] << 6) >> 6 == 1 )
          {
            v63 = v298;
            v57 = v286[17];
            v64 = v294;
            v296.m128_i32[0] = v55.m128_i32[0];
            v303.m128_i32[0] = _mm_shuffle_ps(v55, v55, 255).m128_u32[0];
            v297.m128_i32[0] = _mm_shuffle_ps(v55, v55, 85).m128_u32[0];
            v295.m128_i32[0] = _mm_shuffle_ps(v55, v55, 170).m128_u32[0];
            v300.m128_i32[0] = _mm_shuffle_ps(v54, v54, 255).m128_u32[0];
            v299.m128_i32[0] = _mm_shuffle_ps(v54, v54, 170).m128_u32[0];
            v310.m128_i32[0] = _mm_shuffle_ps(v54, v54, 85).m128_u32[0];
            v304.m128_i32[0] = _mm_shuffle_ps(v298, v298, 170).m128_u32[0];
            v302.m128_i32[0] = _mm_shuffle_ps(v298, v298, 255).m128_u32[0];
            v301.m128_i32[0] = _mm_shuffle_ps(v294, v294, 255).m128_u32[0];
            v306.m128_i32[0] = _mm_shuffle_ps(v294, v294, 170).m128_u32[0];
            v309.m128_i32[0] = v54.m128_i32[0];
            v308 = _mm_shuffle_ps(v298, v298, 85);
            v311 = v294;
            goto LABEL_126;
          }
          if ( (char)(v286[16] << 6) >> 6 < 0 )
            goto LABEL_147;
          v57 = v286[17];
          v58 = _mm_shuffle_ps(v55, v55, 255);
          if ( (char)(16 * v286[17]) >> 6 == 1 )
          {
            v63 = v298;
            v64 = v294;
            v303.m128_i32[0] = v58.m128_i32[0];
            v297.m128_i32[0] = _mm_shuffle_ps(v55, v55, 85).m128_u32[0];
            v300.m128_i32[0] = _mm_shuffle_ps(v54, v54, 255).m128_u32[0];
            v310.m128_i32[0] = _mm_shuffle_ps(v54, v54, 85).m128_u32[0];
            v295.m128_i32[0] = _mm_shuffle_ps(v55, v55, 170).m128_u32[0];
            v302.m128_i32[0] = _mm_shuffle_ps(v298, v298, 255).m128_u32[0];
            v299.m128_i32[0] = _mm_shuffle_ps(v54, v54, 170).m128_u32[0];
            v308.m128_i32[0] = _mm_shuffle_ps(v298, v298, 85).m128_u32[0];
            v304.m128_i32[0] = _mm_shuffle_ps(v298, v298, 170).m128_u32[0];
            v306.m128_i32[0] = _mm_shuffle_ps(v294, v294, 170).m128_u32[0];
            v301.m128_i32[0] = _mm_shuffle_ps(v294, v294, 255).m128_u32[0];
            v309 = v54;
            goto LABEL_253;
          }
          v303 = v58;
          v59 = _mm_shuffle_ps(v54, v54, 255);
          v60 = _mm_shuffle_ps(v53, v53, 255);
          v61 = _mm_shuffle_ps(v52, v52, 255);
          v310 = _mm_shuffle_ps(v54, v54, 85);
          v309.m128_i32[0] = v54.m128_i32[0];
          v300 = v59;
          v302 = v60;
          v301 = v61;
          if ( (char)(16 * v286[17]) >> 6 >= 0 )
          {
            if ( (char)(4 * v286[17]) >> 6 == 1
              || ((char)(4 * v286[17]) >> 6 >= 0
                ? (COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                  (float)((float)((float)(COERCE_FLOAT(v60.m128_i32[0] & v20) * 61440.0)
                                                + (float)(COERCE_FLOAT(v61.m128_i32[0] & v20) * 61440.0))
                                        + COERCE_FLOAT(v303.m128_i32[0] & v20))
                                - 1.0) & v20) >= 0.000081380211
                 ? (v246 = 0, v247 = 16)
                 : (v246 = 1, v247 = 48),
                   v53 = v298,
                   v57 = v247 | v286[17] & 0xCF,
                   v223 = v246 & (COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(v59.m128_i32[0] & v20) * 61440.0) - 0.0) & v20) < 0.000081380211))
                : (v223 = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(v59.m128_i32[0] & v20) * 61440.0) - 0.0) & v20) < 0.000081380211),
                  !v223
               || COERCE_FLOAT(COERCE_UNSIGNED_INT(v309.m128_f32[0] - 0.0) & v20) >= 0.000081380211
               || COERCE_FLOAT(COERCE_UNSIGNED_INT(v310.m128_f32[0] - 0.0) & v20) >= 0.000081380211) )
            {
              v64 = v294;
              v311.m128_i32[0] = v52.m128_i32[0];
              v295 = _mm_shuffle_ps(v55, v55, 170);
              v57 = v57 & 0xF3 | 4;
              v297 = _mm_shuffle_ps(v55, v55, 85);
              v299 = _mm_shuffle_ps(v54, v54, 170);
              v224 = _mm_shuffle_ps(v52, v52, 170);
              v63 = v298;
              v286[17] = v57;
              v306 = v224;
              v304 = _mm_shuffle_ps(v53, v53, 170);
              v308 = _mm_shuffle_ps(v53, v53, 85);
              goto LABEL_60;
            }
            v57 |= 0xCu;
            v286[17] = v57;
          }
          if ( (char)(16 * v286[16]) >> 6 == 1 )
          {
            v63 = v298;
            v64 = v294;
            v56 = v286[16] & 0xFC | 1;
            v48.m128_i32[0] = v314.m128_i32[0];
            v295 = _mm_shuffle_ps(v55, v55, 170);
            v296 = v55;
            v299 = _mm_shuffle_ps(v54, v54, 170);
            v304 = _mm_shuffle_ps(v298, v298, 170);
            v308 = _mm_shuffle_ps(v298, v298, 85);
            v306 = _mm_shuffle_ps(v294, v294, 170);
            v311 = v294;
            v297.m128_i32[0] = _mm_shuffle_ps(v55, v55, 85).m128_u32[0];
            v286[16] = v56;
            goto LABEL_126;
          }
          v62 = _mm_shuffle_ps(v52, v52, 170);
          v304.m128_i32[0] = _mm_shuffle_ps(v53, v53, 170).m128_u32[0];
          v306 = v62;
          if ( (char)(16 * v286[16]) >> 6 < 0 )
          {
LABEL_55:
            if ( (char)(4 * v56) >> 6 != 1 )
            {
              if ( (char)(4 * v56) >> 6 >= 0 )
              {
                IsTranslateAndScaleIgnore = CMILMatrix::IsTranslateAndScaleIgnoreZ<1>(&v283);
                v308 = (__m128)v284.m128_u32[1];
                v311 = (__m128)v283.m128_u32[0];
                if ( !IsTranslateAndScaleIgnore
                  || COERCE_FLOAT(COERCE_UNSIGNED_INT(v283.m128_f32[0] - 1.0) & v20) >= 0.000081380211
                  || COERCE_FLOAT(COERCE_UNSIGNED_INT(v284.m128_f32[1] - 1.0) & v20) >= 0.000081380211 )
                {
                  v57 = v286[17];
                  v55 = *(__m128 *)v286;
                  v56 = v286[16] & 0xCC | 0x11;
                  v54 = v285;
                  v63 = v284;
                  v64 = v283;
                  v48.m128_i32[0] = v314.m128_i32[0];
                  v303 = (__m128)*(unsigned int *)&v286[12];
                  v295 = (__m128)*(unsigned int *)&v286[8];
                  v297 = (__m128)*(unsigned int *)&v286[4];
                  v296 = (__m128)*(unsigned int *)v286;
                  v300 = (__m128)v285.m128_u32[3];
                  v299 = (__m128)v285.m128_u32[2];
                  v310 = (__m128)v285.m128_u32[1];
                  v309 = (__m128)v285.m128_u32[0];
                  v302 = (__m128)v284.m128_u32[3];
                  v301 = (__m128)v283.m128_u32[3];
                  v304 = (__m128)v284.m128_u32[2];
                  v306 = (__m128)v283.m128_u32[2];
                  v286[16] = v56;
                  goto LABEL_126;
                }
                v57 = v286[17];
                v56 = v286[16] | 0x30;
                v55 = *(__m128 *)v286;
                v54 = v285;
                v63 = v284;
                v64 = v283;
                v303 = (__m128)*(unsigned int *)&v286[12];
                v300 = (__m128)v285.m128_u32[3];
                v310 = (__m128)v285.m128_u32[1];
                v309 = (__m128)v285.m128_u32[0];
                v302 = (__m128)v284.m128_u32[3];
                v304 = (__m128)v284.m128_u32[2];
                v301 = (__m128)v283.m128_u32[3];
                v306 = (__m128)v283.m128_u32[2];
              }
              else
              {
                v63 = v298;
                v64 = v294;
                v308.m128_i32[0] = _mm_shuffle_ps(v298, v298, 85).m128_u32[0];
                v311.m128_i32[0] = v294.m128_i32[0];
              }
              v299 = _mm_shuffle_ps(v54, v54, 170);
              if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v299.m128_f32[0] - 1.0) & v20) >= 0.000081380211 )
              {
                v295.m128_i32[0] = _mm_shuffle_ps(v55, v55, 170).m128_u32[0];
                v297.m128_i32[0] = _mm_shuffle_ps(v55, v55, 85).m128_u32[0];
LABEL_60:
                v48.m128_i32[0] = v314.m128_i32[0];
                v56 = v56 & 0xFC | 1;
                v296.m128_i32[0] = v55.m128_i32[0];
                v286[16] = v56;
LABEL_126:
                if ( (char)(v41 << 6) >> 6 == 1 )
                {
                  v108 = v307;
                  goto LABEL_131;
                }
                if ( (char)(v41 << 6) >> 6 >= 0 )
                {
                  v107 = CMILMatrix::IsTranslate<1>((__int64)&v287);
                  v48.m128_i32[0] = v290.m128_i32[1];
                  v46 = v290.m128_f32[0];
                  v47 = v290.m128_f32[2];
                  v314 = (__m128)v290.m128_u32[1];
                  LODWORD(v293) = v290.m128_i32[0];
                  if ( v107
                    && COERCE_FLOAT(COERCE_UNSIGNED_INT(v290.m128_f32[0] - 0.0) & v20) < 0.000081380211
                    && COERCE_FLOAT(COERCE_UNSIGNED_INT(v290.m128_f32[1] - 0.0) & v20) < 0.000081380211
                    && COERCE_FLOAT(COERCE_UNSIGNED_INT(v290.m128_f32[2] - 0.0) & v20) < 0.000081380211 )
                  {
LABEL_296:
                    v55 = *(__m128 *)v286;
                    v54 = v285;
                    v63 = v284;
                    v64 = v283;
                    goto LABEL_148;
                  }
                  v108 = v289;
                  v45 = BYTE1(v291);
                  v41 = v291 & 0xFC ^ 1;
                  v43 = v290;
                  v42 = v288;
                  v40 = v287;
                  v57 = v286[17];
                  v56 = v286[16];
                  v55 = *(__m128 *)v286;
                  v54 = v285;
                  v63 = v284;
                  v64 = v283;
                  v303 = (__m128)*(unsigned int *)&v286[12];
                  v295 = (__m128)*(unsigned int *)&v286[8];
                  v297 = (__m128)*(unsigned int *)&v286[4];
                  v296 = (__m128)*(unsigned int *)v286;
                  v300 = (__m128)v285.m128_u32[3];
                  v299 = (__m128)v285.m128_u32[2];
                  v310 = (__m128)v285.m128_u32[1];
                  v309 = (__m128)v285.m128_u32[0];
                  v302 = (__m128)v284.m128_u32[3];
                  v304 = (__m128)v284.m128_u32[2];
                  v308 = (__m128)v284.m128_u32[1];
                  v301 = (__m128)v283.m128_u32[3];
                  v306 = (__m128)v283.m128_u32[2];
                  v311 = (__m128)v283.m128_u32[0];
                  LOBYTE(v291) = v41;
                  v307 = v289;
LABEL_131:
                  if ( (char)(16 * v45) >> 6 == 1 )
                  {
                    v298 = v108;
                  }
                  else
                  {
                    v298.m128_i32[0] = v108.m128_i32[0];
                    v325 = _mm_shuffle_ps(v43, v43, 255);
                    v109 = _mm_shuffle_ps(v42, v42, 255);
                    v110 = _mm_shuffle_ps(v40, v40, 255);
                    v326 = v109;
                    v294 = v110;
                    if ( (char)(16 * v45) >> 6 < 0 )
                      goto LABEL_133;
                    if ( (char)(4 * v45) >> 6 != 1 )
                    {
                      if ( (char)(4 * v45) >> 6 >= 0 )
                      {
                        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                            (float)((float)((float)(COERCE_FLOAT(v109.m128_i32[0] & v20) * 61440.0)
                                                          + (float)(COERCE_FLOAT(v294.m128_i32[0] & v20) * 61440.0))
                                                  + COERCE_FLOAT(v325.m128_i32[0] & v20))
                                          - 1.0) & v20) >= 0.000081380211 )
                        {
                          v251 = 0;
                          v252 = 16;
                        }
                        else
                        {
                          v251 = 1;
                          v252 = -16;
                        }
                        v110.m128_i32[0] = v294.m128_i32[0];
                        v45 = v252 ^ (v252 ^ v45) & 0xCF;
                        v233 = v251 & (COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                                      (float)(COERCE_FLOAT(_mm_shuffle_ps(v108, v108, 255).m128_u32[0] & v20)
                                                            * 61440.0)
                                                    - 0.0) & v20) < 0.000081380211);
                      }
                      else
                      {
                        v233 = COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                              (float)(COERCE_FLOAT(_mm_shuffle_ps(v108, v108, 255).m128_u32[0] & v20)
                                                    * 61440.0)
                                            - 0.0) & v20) < 0.000081380211;
                      }
                      if ( v233
                        && COERCE_FLOAT(COERCE_UNSIGNED_INT(v298.m128_f32[0] - 0.0) & v20) < 0.000081380211
                        && COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v108, v108, 85).m128_f32[0] - 0.0) & v20) < 0.000081380211 )
                      {
                        v109.m128_i32[0] = v326.m128_i32[0];
                        v45 = v45 & 0xF3 ^ 0xC;
                        BYTE1(v291) = v45;
LABEL_133:
                        if ( (char)(16 * v41) >> 6 == 1 )
                          goto LABEL_260;
                        if ( (char)(16 * v41) >> 6 < 0 )
                        {
LABEL_135:
                          v111 = (char)(4 * v41) >> 6;
                          if ( v111 <= 0 )
                          {
                            if ( v111 >= 0 )
                            {
                              v194 = CMILMatrix::IsTranslateAndScaleIgnoreZ<1>(&v287);
                              v294 = (__m128)v287.m128_u32[0];
                              if ( !v194
                                || COERCE_FLOAT(COERCE_UNSIGNED_INT(v287.m128_f32[0] - 1.0) & v20) >= 0.000081380211
                                || COERCE_FLOAT(COERCE_UNSIGNED_INT(v288.m128_f32[1] - 1.0) & v20) >= 0.000081380211 )
                              {
                                v46 = v290.m128_f32[0];
                                v43 = v290;
                                v54 = v289;
                                v42 = v288;
                                v40 = v287;
                                v57 = v286[17];
                                v141 = *(float *)&v286[8];
                                v140 = *(float *)v286;
                                v142 = v285.m128_i32[3];
                                v139 = v285.m128_f32[2];
                                v143 = v284.m128_i32[3];
                                v144 = v283.m128_i32[3];
                                v298 = (__m128)v289.m128_u32[0];
                                v303 = (__m128)*(unsigned int *)&v286[12];
                                v297 = (__m128)*(unsigned int *)&v286[4];
                                v310 = (__m128)v285.m128_u32[1];
                                v309 = (__m128)v285.m128_u32[0];
                                v304 = (__m128)v284.m128_u32[2];
                                LOBYTE(v291) = v291 & 0xCF ^ 0x10;
                                v56 = v286[16];
                                v306 = (__m128)v283.m128_u32[2];
LABEL_214:
                                if ( (char)(16 * v57) >> 6 != 1 )
                                {
                                  if ( (char)(16 * v57) >> 6 >= 0 )
                                  {
                                    if ( (char)(4 * v57) >> 6 == 1
                                      || ((char)(4 * v57) >> 6 >= 0
                                        ? (COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                                          (float)((float)((float)(COERCE_FLOAT(v143 & v20) * 61440.0)
                                                                        + (float)(COERCE_FLOAT(v144 & v20) * 61440.0))
                                                                + COERCE_FLOAT(v303.m128_i32[0] & v20))
                                                        - 1.0) & v20) >= 0.000081380211
                                         ? (v258 = 0, v259 = 16)
                                         : (v258 = 1, v259 = 48),
                                           v57 = v259 | v57 & 0xCF,
                                           v236 = v258 & (COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                                                         (float)(COERCE_FLOAT(v142 & v20) * 61440.0)
                                                                       - 0.0) & v20) < 0.000081380211))
                                        : (v236 = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(v142 & v20)
                                                                                         * 61440.0) - 0.0) & v20) < 0.000081380211),
                                          !v236
                                       || COERCE_FLOAT(COERCE_UNSIGNED_INT(v309.m128_f32[0] - 0.0) & v20) >= 0.000081380211
                                       || COERCE_FLOAT(COERCE_UNSIGNED_INT(v310.m128_f32[0] - 0.0) & v20) >= 0.000081380211) )
                                    {
                                      v286[17] = v57 & 0xF3 | 4;
                                      goto LABEL_231;
                                    }
                                    v57 |= 0xCu;
                                    v286[17] = v57;
                                  }
                                  if ( (char)(16 * v56) >> 6 != 1 )
                                  {
                                    if ( (char)(16 * v56) >> 6 >= 0 )
                                    {
                                      if ( (char)(4 * v57) >> 6 == 1 )
                                        goto LABEL_551;
                                      if ( (char)(4 * v57) >> 6 >= 0 )
                                      {
                                        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                                            (float)((float)((float)(COERCE_FLOAT(v143 & v20) * 61440.0)
                                                                          + (float)(COERCE_FLOAT(v144 & v20) * 61440.0))
                                                                  + COERCE_FLOAT(v303.m128_i32[0] & v20))
                                                          - 1.0) & v20) >= 0.000081380211 )
                                        {
                                          v286[17] = v57 & 0xCF | 0x10;
                                          v286[16] = v56 & 0xF3 | 4;
                                          goto LABEL_231;
                                        }
                                        v286[17] = v57 | 0x30;
                                      }
                                      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v306.m128_f32[0] - 0.0) & v20) >= 0.000081380211
                                        || COERCE_FLOAT(COERCE_UNSIGNED_INT(v304.m128_f32[0] - 0.0) & v20) >= 0.000081380211 )
                                      {
LABEL_551:
                                        v286[16] = v56 & 0xF3 | 4;
                                        goto LABEL_231;
                                      }
                                      v56 |= 0xCu;
                                      v286[16] = v56;
                                    }
                                    v145 = (char)(4 * v56) >> 6;
                                    if ( v145 <= 0 )
                                    {
                                      if ( v145 < 0 )
                                      {
                                        v146 = v297.m128_f32[0];
                                        goto LABEL_221;
                                      }
                                      if ( (unsigned __int8)CMILMatrix::IsTranslateAndScaleIgnoreZ<1>(&v283)
                                        && COERCE_FLOAT(COERCE_UNSIGNED_INT(v283.m128_f32[0] - 1.0) & v20) < 0.000081380211
                                        && COERCE_FLOAT(COERCE_UNSIGNED_INT(v284.m128_f32[1] - 1.0) & v20) < 0.000081380211 )
                                      {
                                        v146 = *(float *)&v286[4];
                                        v286[16] |= 0x30u;
                                        v141 = *(float *)&v286[8];
                                        v140 = *(float *)v286;
                                        v139 = v285.m128_f32[2];
                                        v297 = (__m128)*(unsigned int *)&v286[4];
LABEL_221:
                                        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v139 - 1.0) & v20) < 0.000081380211 )
                                        {
                                          v283 = v40;
                                          *(_DWORD *)&v286[16] = v291;
                                          v64 = v40;
                                          v284 = v42;
                                          v63 = v42;
                                          v285 = v54;
                                          v55 = v43;
                                          *(__m128 *)v286 = v43;
                                          if ( COERCE_FLOAT(LODWORD(v140) & v20) < 0.000081380211
                                            && COERCE_FLOAT(LODWORD(v146) & v20) < 0.000081380211
                                            && COERCE_FLOAT(LODWORD(v141) & v20) < 0.000081380211 )
                                          {
                                            goto LABEL_148;
                                          }
                                          v147 = _mm_shuffle_ps(v40, v40, 85).m128_f32[0];
                                          LODWORD(v148) = _mm_shuffle_ps(v42, v42, 255).m128_u32[0];
                                          LODWORD(v149) = _mm_shuffle_ps(v64, v64, 255).m128_u32[0];
                                          *(float *)v286 = (float)((float)((float)(v42.m128_f32[0] * v146)
                                                                         + (float)(v294.m128_f32[0] * v140))
                                                                 + (float)(v298.m128_f32[0] * v141))
                                                         + v46;
                                          *(float *)&v286[4] = *(float *)&v286[4]
                                                             + (float)((float)((float)(v147 * v140)
                                                                             + (float)(_mm_shuffle_ps(v42, v42, 85).m128_f32[0]
                                                                                     * v146))
                                                                     + (float)(_mm_shuffle_ps(v54, v54, 85).m128_f32[0]
                                                                             * v141));
                                          *(float *)&v286[8] = *(float *)&v286[8]
                                                             + (float)((float)((float)(_mm_shuffle_ps(v42, v42, 170).m128_f32[0]
                                                                                     * v297.m128_f32[0])
                                                                             + (float)(_mm_shuffle_ps(v64, v64, 170).m128_f32[0]
                                                                                     * v140))
                                                                     + (float)(_mm_shuffle_ps(v54, v54, 170).m128_f32[0]
                                                                             * v141));
                                          if ( (char)(4 * v286[17]) >> 6 == 1 )
                                          {
                                            LODWORD(v150) = _mm_shuffle_ps(v54, v54, 255).m128_u32[0];
                                          }
                                          else
                                          {
                                            if ( (char)(4 * v286[17]) >> 6 >= 0 )
                                            {
                                              if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                                                  (float)((float)((float)(COERCE_FLOAT(LODWORD(v148) & v20)
                                                                                        * 61440.0)
                                                                                + (float)(COERCE_FLOAT(LODWORD(v149) & v20)
                                                                                        * 61440.0))
                                                                        + COERCE_FLOAT(*(_DWORD *)&v286[12] & v20))
                                                                - 1.0) & v20) >= 0.000081380211 )
                                              {
                                                v195 = 0;
                                                v196 = 16;
                                              }
                                              else
                                              {
                                                v195 = 1;
                                                v196 = 48;
                                              }
                                              v286[17] = v196 | v286[17] & 0xCF;
                                              LODWORD(v150) = _mm_shuffle_ps(v54, v54, 255).m128_u32[0];
                                              v151 = v195 & (COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                                                            (float)(COERCE_FLOAT(LODWORD(v150) & v20)
                                                                                  * 61440.0)
                                                                          - 0.0) & v20) < 0.000081380211);
                                            }
                                            else
                                            {
                                              v150 = _mm_shuffle_ps(v54, v54, 255).m128_f32[0];
                                              v151 = COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                                                    (float)(COERCE_FLOAT(LODWORD(v150) & v20) * 61440.0)
                                                                  - 0.0) & v20) < 0.000081380211;
                                            }
                                            if ( v151 )
                                            {
                                              v286[16] &= 0xFCu;
                                              v55 = *(__m128 *)v286;
                                              goto LABEL_148;
                                            }
                                          }
                                          *(_DWORD *)&v286[16] = v13;
                                          v256 = (float)(v148 * v297.m128_f32[0]) + (float)(v149 * v140);
                                          v257 = _mm_shuffle_ps(*(__m128 *)v286, *(__m128 *)v286, 147);
                                          v257.m128_f32[0] = *(float *)&v286[12] + (float)(v256 + (float)(v150 * v141));
                                          v55 = _mm_shuffle_ps(v257, v257, 57);
                                          *(__m128 *)v286 = v55;
                                          goto LABEL_148;
                                        }
                                        goto LABEL_231;
                                      }
                                      v286[16] = v286[16] & 0xCF | 0x10;
                                    }
                                  }
                                }
LABEL_231:
                                if ( !(unsigned __int8)CMILMatrix::IsTranslateAndScale<1>(&v287) )
                                {
                                  if ( (unsigned __int8)CMILMatrix::IsPure2DUniformZ<1>(&v283)
                                    && (unsigned __int8)CMILMatrix::IsPure2DUniformZ<1>(&v287) )
                                  {
                                    *(_QWORD *)&v286[12] = 0x28083F800000LL;
                                    v285.m128_u64[0] = 0LL;
                                    v285.m128_i32[3] = 0;
                                    v180 = *(__m128 *)v286;
                                    v181 = (__m128)v284.m128_u64[0];
                                    v182 = (__m128)v283.m128_u64[0];
                                    v183 = _mm_shuffle_ps(v285, v285, 210);
                                    v182.m128_f32[0] = (float)(v288.m128_f32[0] * v283.m128_f32[1])
                                                     + (float)(v287.m128_f32[0] * v283.m128_f32[0]);
                                    v184 = _mm_shuffle_ps(v182, v182, 225);
                                    v184.m128_f32[0] = (float)(v288.m128_f32[1] * v283.m128_f32[1])
                                                     + (float)(v287.m128_f32[1] * v283.m128_f32[0]);
                                    v64 = _mm_shuffle_ps(v184, v184, 225);
                                    v181.m128_f32[0] = (float)(v287.m128_f32[0] * v284.m128_f32[0])
                                                     + (float)(v288.m128_f32[0] * v284.m128_f32[1]);
                                    v185 = _mm_shuffle_ps(v181, v181, 225);
                                    v183.m128_f32[0] = v285.m128_f32[2] * v289.m128_f32[2];
                                    v185.m128_f32[0] = (float)(v287.m128_f32[1] * v284.m128_f32[0])
                                                     + (float)(v288.m128_f32[1] * v284.m128_f32[1]);
                                    v54 = _mm_shuffle_ps(v183, v183, 201);
                                    v180.m128_f32[0] = (float)((float)(v287.m128_f32[0] * *(float *)v286)
                                                             + (float)(v288.m128_f32[0] * *(float *)&v286[4]))
                                                     + v290.m128_f32[0];
                                    v285 = v54;
                                    v186 = _mm_shuffle_ps(v180, v180, 225);
                                    v63 = _mm_shuffle_ps(v185, v185, 225);
                                    v186.m128_f32[0] = (float)((float)(v287.m128_f32[1] * *(float *)v286)
                                                             + (float)(v288.m128_f32[1] * *(float *)&v286[4]))
                                                     + v290.m128_f32[1];
                                    v284 = v63;
                                    v187 = _mm_shuffle_ps(v186, v186, 198);
                                    v187.m128_f32[0] = (float)(v289.m128_f32[2] * *(float *)&v286[8]) + v290.m128_f32[2];
                                    v283 = v64;
                                    v55 = _mm_shuffle_ps(v187, v187, 201);
                                    *(__m128 *)v286 = v55;
                                    v298 = v63;
                                  }
                                  else
                                  {
                                    *(_DWORD *)&v286[16] = v152;
                                    v294 = _mm_add_ps(
                                             _mm_add_ps(
                                               _mm_mul_ps(_mm_shuffle_ps(v283, v283, 255), v290),
                                               _mm_mul_ps(_mm_shuffle_ps(v283, v283, 85), v288)),
                                             _mm_add_ps(
                                               _mm_mul_ps(_mm_shuffle_ps(v283, v283, 170), v289),
                                               _mm_mul_ps(_mm_shuffle_ps(v283, v283, 0), v287)));
                                    v283 = v294;
                                    v63 = _mm_add_ps(
                                            _mm_add_ps(
                                              _mm_mul_ps(_mm_shuffle_ps(v284, v284, 255), v290),
                                              _mm_mul_ps(_mm_shuffle_ps(v284, v284, 85), v288)),
                                            _mm_add_ps(
                                              _mm_mul_ps(_mm_shuffle_ps(v284, v284, 170), v289),
                                              _mm_mul_ps(_mm_shuffle_ps(v284, v284, 0), v287)));
                                    v284 = v63;
                                    v54 = _mm_add_ps(
                                            _mm_add_ps(
                                              _mm_mul_ps(_mm_shuffle_ps(v285, v285, 255), v290),
                                              _mm_mul_ps(_mm_shuffle_ps(v285, v285, 85), v288)),
                                            _mm_add_ps(
                                              _mm_mul_ps(_mm_shuffle_ps(v285, v285, 170), v289),
                                              _mm_mul_ps(_mm_shuffle_ps(v285, v285, 0), v287)));
                                    v64 = v294;
                                    v285 = v54;
                                    v55 = _mm_add_ps(
                                            _mm_add_ps(
                                              _mm_mul_ps(_mm_shuffle_ps(*(__m128 *)v286, *(__m128 *)v286, 255), v290),
                                              _mm_mul_ps(_mm_shuffle_ps(*(__m128 *)v286, *(__m128 *)v286, 85), v288)),
                                            _mm_add_ps(
                                              _mm_mul_ps(_mm_shuffle_ps(*(__m128 *)v286, *(__m128 *)v286, 170), v289),
                                              _mm_mul_ps(_mm_shuffle_ps(*(__m128 *)v286, *(__m128 *)v286, 0), v287)));
                                    *(__m128 *)v286 = v55;
                                  }
                                  goto LABEL_148;
                                }
                                if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v287.m128_f32[0] - 1.0) & v20) >= 0.000081380211
                                  || COERCE_FLOAT(COERCE_UNSIGNED_INT(v288.m128_f32[1] - 1.0) & v20) >= 0.000081380211
                                  || COERCE_FLOAT(COERCE_UNSIGNED_INT(v289.m128_f32[2] - 1.0) & v20) >= 0.000081380211 )
                                {
                                  v164 = v283.m128_f32[1] * v288.m128_f32[1];
                                  v165 = v284.m128_f32[1] * v288.m128_f32[1];
                                  v166 = v285.m128_f32[1] * v288.m128_f32[1];
                                  v167 = *(float *)&v286[4] * v288.m128_f32[1];
                                  v168 = *(float *)&v286[8];
                                  v169 = v283.m128_f32[0] * v287.m128_f32[0];
                                  v170 = v284.m128_f32[0] * v287.m128_f32[0];
                                  v171 = v285.m128_f32[0] * v287.m128_f32[0];
                                  v172 = *(float *)v286 * v287.m128_f32[0];
                                  v283.m128_f32[0] = v283.m128_f32[0] * v287.m128_f32[0];
                                  v284.m128_f32[0] = v284.m128_f32[0] * v287.m128_f32[0];
                                  v285.m128_f32[0] = v285.m128_f32[0] * v287.m128_f32[0];
                                  *(float *)v286 = *(float *)v286 * v287.m128_f32[0];
                                  v283.m128_f32[1] = v283.m128_f32[1] * v288.m128_f32[1];
                                  v284.m128_f32[1] = v284.m128_f32[1] * v288.m128_f32[1];
                                  v285.m128_f32[1] = v285.m128_f32[1] * v288.m128_f32[1];
                                  *(float *)&v286[4] = *(float *)&v286[4] * v288.m128_f32[1];
                                  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v289.m128_f32[2] - 1.0) & v20) >= 0.000081380211 )
                                  {
                                    v283.m128_f32[2] = v283.m128_f32[2] * v289.m128_f32[2];
                                    v168 = *(float *)&v286[8] * v289.m128_f32[2];
                                    v285.m128_f32[2] = v285.m128_f32[2] * v289.m128_f32[2];
                                    v284.m128_f32[2] = v284.m128_f32[2] * v289.m128_f32[2];
                                    *(float *)&v286[8] = *(float *)&v286[8] * v289.m128_f32[2];
                                  }
                                  v173 = v286[16] & 0xCC;
                                  v286[16] &= 0xCCu;
                                }
                                else
                                {
                                  v173 = v286[16];
                                  v168 = *(float *)&v286[8];
                                  v167 = *(float *)&v286[4];
                                  v172 = *(float *)v286;
                                  v166 = v285.m128_f32[1];
                                  v171 = v285.m128_f32[0];
                                  v165 = v284.m128_f32[1];
                                  v170 = v284.m128_f32[0];
                                  v164 = v283.m128_f32[1];
                                  v169 = v283.m128_f32[0];
                                }
                                v174 = v290.m128_f32[0];
                                v175 = v290.m128_f32[2];
                                v176 = v290.m128_f32[1];
                                if ( COERCE_FLOAT(v290.m128_i32[0] & v20) >= 0.000081380211
                                  || COERCE_FLOAT(v290.m128_i32[1] & v20) >= 0.000081380211
                                  || COERCE_FLOAT(v290.m128_i32[2] & v20) >= 0.000081380211 )
                                {
                                  v177 = v286[17];
                                  if ( (char)(4 * v286[17]) >> 6 == 1
                                    || ((char)(4 * v286[17]) >> 6 >= 0
                                      ? (COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                                        (float)((float)((float)(COERCE_FLOAT(v284.m128_i32[3] & v20)
                                                                              * 61440.0)
                                                                      + (float)(COERCE_FLOAT(v283.m128_i32[3] & v20)
                                                                              * 61440.0))
                                                              + COERCE_FLOAT(*(_DWORD *)&v286[12] & v20))
                                                      - 1.0) & v20) >= 0.000081380211
                                       ? (v220 = 0, v221 = 16)
                                       : (v220 = 1, v221 = 48),
                                         v176 = v290.m128_f32[1],
                                         v177 = v221 | v286[17] & 0xCF,
                                         v286[17] = v177,
                                         v178 = v220 & (COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                                                       (float)(COERCE_FLOAT(v285.m128_i32[3] & v20)
                                                                             * 61440.0)
                                                                     - 0.0) & v20) < 0.000081380211))
                                      : (v178 = COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                                               (float)(COERCE_FLOAT(v285.m128_i32[3] & v20) * 61440.0)
                                                             - 0.0) & v20) < 0.000081380211),
                                        !v178) )
                                  {
                                    v286[17] = v177 & 0xF3;
                                    v283.m128_f32[1] = v164 + (float)(v176 * v283.m128_f32[3]);
                                    v283.m128_f32[0] = v169 + (float)(v290.m128_f32[0] * v283.m128_f32[3]);
                                    v283.m128_f32[2] = v283.m128_f32[2] + (float)(v290.m128_f32[2] * v283.m128_f32[3]);
                                    v284.m128_f32[0] = v170 + (float)(v290.m128_f32[0] * v284.m128_f32[3]);
                                    v284.m128_f32[1] = v165 + (float)(v290.m128_f32[1] * v284.m128_f32[3]);
                                    v284.m128_f32[2] = v284.m128_f32[2] + (float)(v290.m128_f32[2] * v284.m128_f32[3]);
                                    v285.m128_f32[0] = v171 + (float)(v290.m128_f32[0] * v285.m128_f32[3]);
                                    v285.m128_f32[1] = v166 + (float)(v290.m128_f32[1] * v285.m128_f32[3]);
                                    v285.m128_f32[2] = v285.m128_f32[2] + (float)(v290.m128_f32[2] * v285.m128_f32[3]);
                                    v179 = v167 + (float)(v290.m128_f32[1] * *(float *)&v286[12]);
                                    v174 = v290.m128_f32[0] * *(float *)&v286[12];
                                    v175 = v290.m128_f32[2] * *(float *)&v286[12];
                                  }
                                  else
                                  {
                                    v179 = v167 + v176;
                                  }
                                  *(float *)&v286[4] = v179;
                                  v286[16] = v173 & 0xFC;
                                  *(float *)&v286[8] = v168 + v175;
                                  *(float *)v286 = v172 + v174;
                                }
                                goto LABEL_296;
                              }
                              v48.m128_i32[0] = v290.m128_i32[1];
                              v46 = v290.m128_f32[0];
                              v108 = v289;
                              v112 = v285.m128_i32[3];
                              v47 = v290.m128_f32[2];
                              v43 = v290;
                              v42 = v288;
                              v40 = v287;
                              v57 = v286[17];
                              v55 = *(__m128 *)v286;
                              v54 = v285;
                              v63 = v284;
                              v64 = v283;
                              v298 = (__m128)v289.m128_u32[0];
                              v303 = (__m128)*(unsigned int *)&v286[12];
                              v295 = (__m128)*(unsigned int *)&v286[8];
                              v297 = (__m128)*(unsigned int *)&v286[4];
                              v296 = (__m128)*(unsigned int *)v286;
                              v299 = (__m128)v285.m128_u32[2];
                              v310 = (__m128)v285.m128_u32[1];
                              v309 = (__m128)v285.m128_u32[0];
                              v302 = (__m128)v284.m128_u32[3];
                              v304 = (__m128)v284.m128_u32[2];
                              v308 = (__m128)v284.m128_u32[1];
                              v301 = (__m128)v283.m128_u32[3];
                              v306 = (__m128)v283.m128_u32[2];
                              LOBYTE(v291) = v291 & 0xCF ^ 0x30;
                              v56 = v286[16];
                              v311 = (__m128)v283.m128_u32[0];
                              LODWORD(v293) = v290.m128_i32[0];
                              v314 = (__m128)v290.m128_u32[1];
                              v307 = v289;
                              v300 = (__m128)v285.m128_u32[3];
                            }
                            else
                            {
                              v112 = v300.m128_i32[0];
                              v294.m128_i32[0] = v40.m128_i32[0];
                            }
                            if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v108, v108, 170).m128_f32[0] - 1.0) & v20) < 0.000081380211 )
                            {
                              if ( COERCE_FLOAT(LODWORD(v46) & v20) >= 0.000081380211
                                || COERCE_FLOAT(v48.m128_i32[0] & v20) >= 0.000081380211
                                || COERCE_FLOAT(LODWORD(v47) & v20) >= 0.000081380211 )
                              {
                                if ( (char)(4 * v57) >> 6 == 1
                                  || ((char)(4 * v57) >> 6 >= 0
                                    ? (COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                                      (float)((float)((float)(COERCE_FLOAT(v302.m128_i32[0] & v20)
                                                                            * 61440.0)
                                                                    + (float)(COERCE_FLOAT(v301.m128_i32[0] & v20)
                                                                            * 61440.0))
                                                            + COERCE_FLOAT(v303.m128_i32[0] & v20))
                                                    - 1.0) & v20) >= 0.000081380211
                                     ? (v191 = 0, v192 = 16)
                                     : (v191 = 1, v192 = 48),
                                       v57 = v192 | v57 & 0xCF,
                                       v286[17] = v57,
                                       v113 = v191 & (COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                                                     (float)(COERCE_FLOAT(v300.m128_i32[0] & v20)
                                                                           * 61440.0)
                                                                   - 0.0) & v20) < 0.000081380211))
                                    : (v113 = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(v112 & v20) * 61440.0) - 0.0) & v20) < 0.000081380211),
                                      !v113) )
                                {
                                  v286[17] = v57 & 0xF3;
                                  v197 = v306.m128_f32[0] + (float)(v47 * v301.m128_f32[0]);
                                  v198 = v304.m128_f32[0] + (float)(v47 * v302.m128_f32[0]);
                                  v199 = v299.m128_f32[0] + (float)(v47 * v300.m128_f32[0]);
                                  v47 = v47 * v303.m128_f32[0];
                                  *(float *)v286 = v296.m128_f32[0] + (float)(*(float *)&v293 * v303.m128_f32[0]);
                                  v200 = v285;
                                  v200.m128_f32[0] = v309.m128_f32[0] + (float)(*(float *)&v293 * v300.m128_f32[0]);
                                  v201 = _mm_shuffle_ps(v200, v200, 225);
                                  v201.m128_f32[0] = v310.m128_f32[0] + (float)(v48.m128_f32[0] * v300.m128_f32[0]);
                                  v202 = _mm_shuffle_ps(v201, v201, 198);
                                  v202.m128_f32[0] = v199;
                                  v54 = _mm_shuffle_ps(v202, v202, 201);
                                  *(float *)&v286[4] = v297.m128_f32[0] + (float)(v314.m128_f32[0] * v303.m128_f32[0]);
                                  v203 = v284;
                                  v203.m128_f32[0] = v284.m128_f32[0] + (float)(*(float *)&v293 * v302.m128_f32[0]);
                                  v285 = v54;
                                  v204 = _mm_shuffle_ps(v203, v203, 225);
                                  v204.m128_f32[0] = v308.m128_f32[0] + (float)(v48.m128_f32[0] * v302.m128_f32[0]);
                                  v205 = v283;
                                  v205.m128_f32[0] = v311.m128_f32[0] + (float)(v46 * v301.m128_f32[0]);
                                  v206 = _mm_shuffle_ps(v204, v204, 198);
                                  v207 = _mm_shuffle_ps(v205, v205, 225);
                                  v206.m128_f32[0] = v198;
                                  v207.m128_f32[0] = v283.m128_f32[1] + (float)(v48.m128_f32[0] * v301.m128_f32[0]);
                                  v63 = _mm_shuffle_ps(v206, v206, 201);
                                  v208 = _mm_shuffle_ps(v207, v207, 198);
                                  v208.m128_f32[0] = v197;
                                  v284 = v63;
                                  v64 = _mm_shuffle_ps(v208, v208, 201);
                                  v283 = v64;
                                }
                                else
                                {
                                  *(float *)v286 = v296.m128_f32[0] + v46;
                                  *(float *)&v286[4] = v297.m128_f32[0] + v48.m128_f32[0];
                                }
                                v286[16] = v56 & 0xFC;
                                *(float *)&v286[8] = v295.m128_f32[0] + v47;
                                v55 = *(__m128 *)v286;
                              }
                              goto LABEL_148;
                            }
LABEL_213:
                            v54 = v307;
                            v139 = v299.m128_f32[0];
                            v140 = v296.m128_f32[0];
                            v141 = v295.m128_f32[0];
                            v142 = v300.m128_i32[0];
                            v143 = v302.m128_i32[0];
                            v144 = v301.m128_i32[0];
                            goto LABEL_214;
                          }
LABEL_260:
                          v294 = v40;
                          goto LABEL_213;
                        }
                        if ( (char)(4 * v45) >> 6 != 1 )
                        {
                          if ( (char)(4 * v45) >> 6 >= 0 )
                          {
                            v260 = v45 & 0xCF;
                            if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                                (float)((float)((float)(COERCE_FLOAT(v109.m128_i32[0] & v20) * 61440.0)
                                                              + (float)(COERCE_FLOAT(v110.m128_i32[0] & v20) * 61440.0))
                                                      + COERCE_FLOAT(v325.m128_i32[0] & v20))
                                              - 1.0) & v20) >= 0.000081380211 )
                            {
                              BYTE1(v291) = v260 ^ 0x10;
                              goto LABEL_515;
                            }
                            BYTE1(v291) = v260 ^ 0x30;
                          }
                          if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v40, v40, 170).m128_f32[0] - 0.0) & v20) < 0.000081380211
                            && COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v42, v42, 170).m128_f32[0] - 0.0) & v20) < 0.000081380211 )
                          {
                            v41 = v41 & 0xF3 ^ 0xC;
                            LOBYTE(v291) = v41;
                            goto LABEL_135;
                          }
                        }
LABEL_515:
                        v294 = v40;
                        LOBYTE(v291) = v41 & 0xF3 ^ 4;
                        goto LABEL_213;
                      }
                    }
                    BYTE1(v291) = v45 & 0xF3 ^ 4;
                  }
                  v294 = v40;
                  goto LABEL_213;
                }
LABEL_148:
                v41 = v286[16];
                v42 = v63;
                v290 = v55;
                v40 = v64;
                LODWORD(v47) = _mm_shuffle_ps(v55, v55, 170).m128_u32[0];
                v288 = v63;
                v23 = FLOAT_1_0;
                v44 = FLOAT_61440_0;
                v289 = v54;
                v291 = *(_DWORD *)&v286[16];
                v45 = v286[17];
                v287 = v64;
                goto LABEL_149;
              }
              v296 = v55;
              if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v55.m128_f32[0] - 0.0) & v20) >= 0.000081380211 )
              {
                v48.m128_i32[0] = v314.m128_i32[0];
                v56 = v56 & 0xFC | 1;
                v295.m128_i32[0] = _mm_shuffle_ps(v55, v55, 170).m128_u32[0];
                v297.m128_i32[0] = _mm_shuffle_ps(v55, v55, 85).m128_u32[0];
                v286[16] = v56;
                goto LABEL_126;
              }
              v297 = _mm_shuffle_ps(v55, v55, 85);
              if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v297.m128_f32[0] - 0.0) & v20) >= 0.000081380211 )
              {
                v48.m128_i32[0] = v314.m128_i32[0];
                v56 = v56 & 0xFC | 1;
                v295.m128_i32[0] = _mm_shuffle_ps(v55, v55, 170).m128_u32[0];
                v286[16] = v56;
                goto LABEL_126;
              }
              v295 = _mm_shuffle_ps(v55, v55, 170);
              if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v295.m128_f32[0] - 0.0) & v20) >= 0.000081380211 )
              {
                v48.m128_i32[0] = v314.m128_i32[0];
                v56 = v56 & 0xFC | 1;
                v286[16] = v56;
                goto LABEL_126;
              }
              si128 = (__m128i)v307;
LABEL_147:
              v64 = v40;
              *(_DWORD *)&v286[16] = v291;
              v63 = v42;
              v283 = v40;
              v54 = (__m128)si128;
              v284 = v42;
              v55 = v43;
              v285 = (__m128)si128;
              *(__m128 *)v286 = v43;
              goto LABEL_148;
            }
            v63 = v298;
            v64 = v294;
            v295.m128_i32[0] = _mm_shuffle_ps(v55, v55, 170).m128_u32[0];
            v297.m128_i32[0] = _mm_shuffle_ps(v55, v55, 85).m128_u32[0];
            v299.m128_i32[0] = _mm_shuffle_ps(v54, v54, 170).m128_u32[0];
            v308.m128_i32[0] = _mm_shuffle_ps(v298, v298, 85).m128_u32[0];
LABEL_253:
            v311.m128_i32[0] = v64.m128_i32[0];
            goto LABEL_60;
          }
          if ( (char)(4 * v57) >> 6 != 1 )
          {
            if ( (char)(4 * v57) >> 6 >= 0 )
            {
              if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                  (float)((float)((float)(COERCE_FLOAT(v60.m128_i32[0] & v20) * 61440.0)
                                                + (float)(COERCE_FLOAT(v61.m128_i32[0] & v20) * 61440.0))
                                        + COERCE_FLOAT(v303.m128_i32[0] & v20))
                                - 1.0) & v20) >= 0.000081380211 )
              {
                v57 = v57 & 0xCF | 0x10;
                v286[17] = v57;
                goto LABEL_496;
              }
              v57 |= 0x30u;
              v286[17] = v57;
            }
            if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v62.m128_f32[0] - 0.0) & v20) < 0.000081380211
              && COERCE_FLOAT(COERCE_UNSIGNED_INT(v304.m128_f32[0] - 0.0) & v20) < 0.000081380211 )
            {
              v56 = v286[16] | 0xC;
              v286[16] |= 0xCu;
              goto LABEL_55;
            }
          }
LABEL_496:
          v63 = v298;
          v64 = v294;
          v48.m128_i32[0] = v314.m128_i32[0];
          v295.m128_i32[0] = _mm_shuffle_ps(v55, v55, 170).m128_u32[0];
          v56 = v286[16] & 0xF0 | 5;
          v299.m128_i32[0] = _mm_shuffle_ps(v54, v54, 170).m128_u32[0];
          v308 = _mm_shuffle_ps(v298, v298, 85);
          v297.m128_i32[0] = _mm_shuffle_ps(v55, v55, 85).m128_u32[0];
          v296 = v55;
          v311 = v294;
          v286[16] = v56;
          goto LABEL_126;
        }
        goto LABEL_28;
      }
      v24 = 0;
      v292 = 0;
      if ( !*(_BYTE *)(v17 - 8) )
        goto LABEL_28;
      v25 = *(_QWORD *)(a3 + 88);
      if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a2 + 192LL))(a2) )
      {
        v19 = (const struct CCpuClippingData *)(v25 + 320);
      }
      else
      {
        v74 = *(int **)(v25 + 224);
        if ( *v74 < 0 )
        {
          v75 = v74[1];
          v76 = v74 + 2;
          LODWORD(v13) = 0;
          for ( i = 0LL; (unsigned int)i < v75; ++v76 )
          {
            if ( *v76 == 1 )
              break;
            i = (unsigned int)(i + 1);
          }
          v78 = (unsigned int)v74[1];
          if ( (unsigned int)i >= (unsigned int)v78 )
            v79 = 0LL;
          else
            v79 = (_QWORD **)((char *)&v74[2 * i] + ((v78 + 15) & 0xFFFFFFFFFFFFFFF8uLL));
          v80 = *v79;
          if ( v80 )
          {
            for ( j = (_QWORD *)*v80; j != v80; j = (_QWORD *)*j )
            {
              if ( (const struct CVisualTree *)j[4] == a2 )
              {
                v19 = (const struct CCpuClippingData *)(j - 44);
                break;
              }
            }
          }
LABEL_11:
          v19 = (const struct CCpuClippingData *)((char *)v19 + 72);
          if ( *((_QWORD *)v19 + 2) > *(_QWORD *)(a1 + 16) )
            *(_BYTE *)(a1 + 65) = 1;
          v26 = 0LL;
          if ( a3 == *((_QWORD *)a2 + 9) )
            goto LABEL_26;
          v27 = *(_DWORD **)(a3 + 224);
          if ( (*v27 & 0x4000000) != 0 )
          {
            v28 = v27[1];
            v29 = v27 + 2;
            for ( k = 0LL; (unsigned int)k < v28; ++v29 )
            {
              if ( *v29 == 6 )
                break;
              k = (unsigned int)(k + 1);
            }
            v31 = (unsigned int)v27[1];
            if ( (unsigned int)k >= (unsigned int)v31 )
              v32 = 0LL;
            else
              v32 = (_QWORD **)((char *)&v27[2 * k] + ((v31 + 15) & 0xFFFFFFFFFFFFFFF8uLL));
            v33 = *v32;
            if ( v33 )
              v26 = (CVisual *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v33 + 192LL))(*v33);
          }
          v34 = (*(__int64 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a2 + 192LL))(a2);
          LODWORD(v13) = 0;
          if ( !v34 )
          {
            v82 = *(int **)(a3 + 224);
            if ( *v82 < 0 )
            {
              v83 = v82[1];
              v84 = v82 + 2;
              for ( m = 0LL; (unsigned int)m < v83; ++v84 )
              {
                if ( *v84 == 1 )
                  break;
                m = (unsigned int)(m + 1);
              }
              v86 = (unsigned int)v82[1];
              v87 = (unsigned int)m >= (unsigned int)v86
                  ? 0LL
                  : (int *)((char *)&v82[2 * m] + ((v86 + 15) & 0xFFFFFFFFFFFFFFF8uLL));
              v88 = *(_QWORD **)v87;
              if ( v88 )
              {
                for ( n = (_QWORD *)*v88; n != v88; n = (_QWORD *)*n )
                {
                  v35 = n - 44;
                  if ( (const struct CVisualTree *)n[4] == a2 )
                    goto LABEL_23;
                }
              }
            }
            goto LABEL_26;
          }
          v35 = (_QWORD *)(a3 + 320);
LABEL_23:
          if ( !v35 || !*((_BYTE *)v35 + 12) || !v26 )
          {
LABEL_26:
            v21 = (__m128 *)*((_QWORD *)v19 + 5);
LABEL_27:
            v24 = 0;
            v22 = 2;
            goto LABEL_28;
          }
          v333 = 0;
          WorldTransform = CVisual::GetWorldTransform(v26, a2, (struct CMILMatrix *)v332, 0LL, 0LL);
          v69 = WorldTransform;
          if ( WorldTransform < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0xFB,
              (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cpuclippingdata.cpp",
              (const char *)(unsigned int)WorldTransform);
            return v69;
          }
          CMILMatrix::Multiply((CMILMatrix *)v332, (const struct CMILMatrix *)(a4[1] - 152LL));
          v239 = a4[1];
          v319 = 0;
          v315 = *(__m128 *)(v239 - 84);
          v316 = *(__m128 *)(v239 - 68);
          v317 = *(_OWORD *)(v239 - 52);
          v318 = *(__m128 *)(v239 - 36);
          v319 = *(_DWORD *)(v239 - 20);
          v241 = Windows::Foundation::Numerics::invert((Windows::Foundation::Numerics *)&v315, &v315, v240);
          LOWORD(v319) = v319 & 0xC003;
          if ( !v241 )
          {
            LODWORD(v13) = 0;
            v319 = 0;
            if ( COERCE_FLOAT(*(_DWORD *)(v242 - 44) & v20) >= 0.000081380211
              || !(unsigned __int8)CMILMatrix::IsPure2DUniformZ<1>(v242 - 84) )
            {
              goto LABEL_27;
            }
            v266 = *(float *)(v265 - 84);
            v267 = *(float *)(v265 - 68);
            v268 = *(float *)(v265 - 64);
            v269 = *(float *)(v265 - 80);
            v270 = *(float *)(v265 - 36);
            v271 = *(float *)(v265 - 32);
            *(_OWORD *)&v321.m256i_u64[1] = 0LL;
            *(_QWORD *)&v322[12] = 0x28083F800000LL;
            v320.m128_u64[1] = v13;
            v272 = v320;
            *(_DWORD *)&v322[8] = v13;
            v272.m128_f32[0] = v266;
            v321.m256i_i64[3] = 1065353216LL;
            v273 = *(__m128 *)v321.m256i_i8;
            v273.m128_f32[0] = v267;
            v274 = _mm_shuffle_ps(v272, v272, 225);
            v275 = _mm_shuffle_ps(v273, v273, 225);
            v274.m128_f32[0] = v269;
            v275.m128_f32[0] = v268;
            v316 = _mm_shuffle_ps(v275, v275, 225);
            v276 = *(__m128 *)v322;
            v319 = 10248;
            v315 = _mm_shuffle_ps(v274, v274, 225);
            v276.m128_f32[0] = v270;
            v277 = _mm_shuffle_ps(v276, v276, 225);
            v277.m128_f32[0] = v271;
            v317 = *(_OWORD *)&v321.m256i_u64[2];
            v318 = _mm_shuffle_ps(v277, v277, 225);
            v278 = Windows::Foundation::Numerics::invert((Windows::Foundation::Numerics *)&v315, &v315, v264);
            LOWORD(v319) = v319 & 0xC003;
            if ( !v278 )
            {
              LODWORD(v13) = 0;
              v319 = 0;
              goto LABEL_27;
            }
          }
          CMILMatrix::Multiply((const struct CMILMatrix *)v332, &v315, (struct CMILMatrix *)v330);
          IsScopePreservingTransform = CCpuClippingData::IsScopePreservingTransform((const struct CMILMatrix *)v330);
          v24 = 0;
          LODWORD(v13) = 0;
          v18 = IsScopePreservingTransform == 0;
          v22 = 2;
          if ( !v18 )
            v21 = (__m128 *)v330;
LABEL_28:
          if ( !v19 )
            goto LABEL_333;
          goto LABEL_29;
        }
      }
      LODWORD(v13) = 0;
      goto LABEL_11;
    }
  }
  v90 = *(CCpuClippingData::CpuClipRealization **)(a1 + 56);
  v91 = 0;
  v281[0] = 0;
  if ( !v90 )
    goto LABEL_98;
  v92 = a4[1];
  if ( v92 != *a4 && *(_QWORD *)(v92 - 176) )
    v93 = *(const struct CShape **)(a4[244] - 40LL);
  else
    v93 = 0LL;
  v94 = CCpuClippingData::CpuClipRealization::Update(v90, (struct CVisual *)a3, v12, v10, v93, a8, v281);
  v95 = v94;
  if ( v94 >= 0 )
  {
    v91 = v281[0];
    if ( v281[0] )
      *(_BYTE *)(a1 + 66) = 1;
LABEL_98:
    v96 = 0LL;
    if ( *((_QWORD *)a2 + 9) == a3 || *(_DWORD *)(a1 + 32) != 1 )
    {
LABEL_100:
      if ( !v91 )
        return 0LL;
LABEL_101:
      v97 = *((_QWORD *)a2 + 325);
      *(_QWORD *)(a1 + 16) = v97;
      v98 = v96 && *((_DWORD *)v96 + 9);
      *(_QWORD *)(a1 + 48) = a3;
      v99 = 0;
      *(_DWORD *)(a1 + 36) = 0;
      v100 = *(_QWORD *)(a1 + 8);
      v101 = *(_QWORD *)(a1 + 24);
      if ( v101 < v100 )
      {
        *(_QWORD *)(a1 + 24) = v100;
        v99 = 1;
        v101 = v100;
      }
      v102 = 0;
      if ( *(_DWORD *)(a1 + 32) == 1 )
      {
        *(_QWORD *)(a1 + 48) = v96[6];
        v103 = v96[3];
        if ( v101 < v103 )
        {
          *(_QWORD *)(a1 + 24) = v103;
          v99 = 1;
        }
        if ( v98 )
        {
          v102 = *((_DWORD *)v96 + 9);
          *(_DWORD *)(a1 + 36) = v102;
          if ( *(_BYTE *)(a1 + 65) )
          {
            *(_QWORD *)(a1 + 24) = v97;
            v99 = 1;
          }
        }
      }
      else if ( *(_DWORD *)(a1 + 32) != 2 )
      {
LABEL_119:
        v104 = *(_QWORD *)(a1 + 56);
        if ( v104 )
        {
          if ( *(_BYTE *)(v104 + 32) )
          {
            v188 = *(void (__fastcall ****)(_QWORD, __int64))(v104 + 24);
            if ( v188 )
              (**v188)(v188, 1LL);
          }
          *(_QWORD *)(v104 + 24) = 0LL;
          *(_BYTE *)(v104 + 32) = 0;
          v105 = *(__int64 **)(a1 + 56);
          v106 = *v105;
          *v105 = 0LL;
          if ( v106 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v106 + 8LL))(v106);
        }
LABEL_123:
        *(_BYTE *)(a1 + 66) = 0;
        return 0LL;
      }
      if ( *(_BYTE *)(a1 + 66) )
      {
        *(_QWORD *)(a1 + 24) = v97;
        v99 = 1;
      }
      if ( v98 || *(_QWORD *)(a1 + 56) )
      {
        if ( *(_BYTE *)(a1 + 67) )
          *(_QWORD *)(a1 + 24) = v97;
        if ( *(_QWORD *)(a1 + 56) )
          *(_DWORD *)(a1 + 36) = v102 + 1;
      }
      if ( !v99 )
        goto LABEL_123;
      goto LABEL_119;
    }
    v158 = *(_QWORD *)(a3 + 88);
    v159 = 0LL;
    if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a2 + 192LL))(a2) )
    {
      v159 = (_QWORD *)(v158 + 320);
      goto LABEL_257;
    }
    v226 = *(_QWORD *)(v158 + 224);
    if ( *(int *)v226 >= 0 )
      goto LABEL_257;
    v227 = *(unsigned int *)(v226 + 4);
    v228 = (_BYTE *)(v226 + 8);
    v229 = 0LL;
    if ( (_DWORD)v227 )
    {
      while ( *v228 != 1 )
      {
        v229 = (unsigned int)(v229 + 1);
        ++v228;
        if ( (unsigned int)v229 >= (unsigned int)v227 )
          goto LABEL_596;
      }
    }
    else
    {
LABEL_596:
      if ( (unsigned int)v229 >= (unsigned int)v227 )
      {
        v230 = 0LL;
LABEL_451:
        v231 = *v230;
        if ( v231 )
        {
          for ( ii = (_QWORD *)*v231; ii != v231; ii = (_QWORD *)*ii )
          {
            if ( (const struct CVisualTree *)ii[4] == a2 )
            {
              v159 = ii - 44;
              break;
            }
          }
        }
LABEL_257:
        v96 = v159 + 9;
        if ( *((_DWORD *)v159 + 27) && v159[12] > *(_QWORD *)(a1 + 24) )
          goto LABEL_101;
        goto LABEL_100;
      }
    }
    v230 = (_QWORD **)(v226 + ((v227 + 15) & 0xFFFFFFFFFFFFFFF8uLL) + 8 * v229);
    goto LABEL_451;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x21A,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cpuclippingdata.cpp",
    (const char *)(unsigned int)v94);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xBF,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cpuclippingdata.cpp",
    (const char *)v95);
  return v95;
}
