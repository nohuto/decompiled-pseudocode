/*
 * XREFs of ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@33AEBVCCornerRects@@AEBVCMILMatrix@@W4DXGI_MODE_ROTATION@@I_NAEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@78@Z @ 0x1802398DC
 * Callers:
 *     ?CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@AEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x1801FD204 (-CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisu.c)
 * Callees:
 *     ?ConvertSDRBoostToSDRWhiteLevel@@YAIMW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180013268 (-ConvertSDRBoostToSDRWhiteLevel@@YAIMW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?DoesContain@?$TMilRect@HUtagRECT@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800E4E6C (-DoesContain@-$TMilRect@HUtagRECT@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x1800E69E8 (-IsEmpty@-$TMilRect@HUtagRECT@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?IsHDR@RenderTargetInfo@@QEBA_NXZ @ 0x1800F6FA0 (-IsHDR@RenderTargetInfo@@QEBA_NXZ.c)
 *     McTemplateU0x_EventWriteTransfer @ 0x1800F8600 (McTemplateU0x_EventWriteTransfer.c)
 *     ?Init@CDirectFlipInfo@@QEAAXPEAVIOverlayMonitorTarget@@PEBVCVisual@@PEAVCCompositionSurfaceInfo@@W4Enum@DirectFlipMode@@AEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1801267C4 (-Init@CDirectFlipInfo@@QEAAXPEAVIOverlayMonitorTarget@@PEBVCVisual@@PEAVCCompositionSurfaceInfo@.c)
 *     ?IsHardwareProtectionDisabled@CD2DContext@@QEBA_NXZ @ 0x180187E60 (-IsHardwareProtectionDisabled@CD2DContext@@QEBA_NXZ.c)
 *     ?GetClipBox@CMonitorTransform@@QEBA?AV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x18018C160 (-GetClipBox@CMonitorTransform@@QEBA-AV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniquen.c)
 *     ?AnyDesktopPlaneScaling@COverlayContext@@QEBA_NXZ @ 0x180194BF8 (-AnyDesktopPlaneScaling@COverlayContext@@QEBA_NXZ.c)
 *     ?DoesContain@?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1801A7660 (-DoesContain@-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     McTemplateU0xdddddddqqddddddddddddqqq_EventWriteTransfer @ 0x1801AAAAC (McTemplateU0xdddddddqqddddddddddddqqq_EventWriteTransfer.c)
 *     McTemplateU0xddqqddddddddddddqqq_EventWriteTransfer @ 0x1801B1920 (McTemplateU0xddqqddddddddddddqqq_EventWriteTransfer.c)
 *     ?IsIntelWorkaroundNeeded@COverlayContext@@IEBA_NAEBUtagRECT@@00@Z @ 0x1801D8264 (-IsIntelWorkaroundNeeded@COverlayContext@@IEBA_NAEBUtagRECT@@00@Z.c)
 *     McTemplateU0xqqdddd_EventWriteTransfer @ 0x1801DA270 (McTemplateU0xqqdddd_EventWriteTransfer.c)
 *     ?CalcOverlaySize@COverlayContext@@IEBA?AW4OverlaySize@@AEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@@Z @ 0x180211294 (-CalcOverlaySize@COverlayContext@@IEBA-AW4OverlaySize@@AEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@@.c)
 *     ?IsCandidateOverlayCompatible@COverlayContext@@IEBA_NPEAVCVisual@@PEBVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@AEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@W4OverlaySize@@_NI5@Z @ 0x180218B50 (-IsCandidateOverlayCompatible@COverlayContext@@IEBA_NPEAVCVisual@@PEBVCCompositionSurfaceInfo@@P.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 *     ??$emplace_back@PEAVCOverlayContext@@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@_KUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@V?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@VCCornerRects@@VCMILMatrix@@V?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@V8@_N_NW4OverlaySize@@@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXPEAVCOverlayContext@@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@_KUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@V?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@VCCornerRects@@VCMILMatrix@@V?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@8_N9W4OverlaySize@@@Z @ 0x180238C74 (--$emplace_back@PEAVCOverlayContext@@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@_KUDXGI_MULTIPLAN.c)
 *     ?IsCandidateDirectFlipCompatible@COverlayContext@@IEBA_NPEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@AEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@I_N@Z @ 0x18023CAF0 (-IsCandidateDirectFlipCompatible@COverlayContext@@IEBA_NPEAVCCompositionSurfaceInfo@@PEAVISwapCh.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DDisplay_AggCheckMpo@@@details@wil@@QEAA_NXZ @ 0x18023E358 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DDisplay_AggCheckMpo@@@details@wi.c)
 *     McTemplateU0xddddd_EventWriteTransfer @ 0x18023E668 (McTemplateU0xddddd_EventWriteTransfer.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall COverlayContext::CheckAndRecordOverlayCandidate(
        COverlayContext *this,
        __int64 a2,
        __int64 a3,
        struct ISwapChainRealization *a4,
        float *a5,
        float *a6,
        __int64 a7,
        __int128 *a8,
        __int64 a9,
        unsigned int a10,
        LONG a11,
        bool a12,
        __int128 *a13,
        char a14,
        __int128 *a15)
{
  COverlayContext *v15; // r15
  struct ISwapChainRealization *v16; // rbx
  __int128 *v17; // r12
  struct CCompositionSurfaceInfo *v18; // rdi
  _QWORD *v19; // rsi
  __int64 v20; // rax
  int v21; // r13d
  _DWORD *v22; // rax
  float v23; // xmm0_4
  float v24; // eax
  double v25; // xmm0_8
  int v26; // eax
  double v27; // xmm0_8
  int v28; // eax
  double v29; // xmm0_8
  int v30; // eax
  double v31; // xmm0_8
  int v32; // eax
  double v33; // xmm0_8
  int v34; // eax
  double v35; // xmm0_8
  int v36; // eax
  double v37; // xmm0_8
  int v38; // eax
  double v39; // xmm0_8
  int v40; // eax
  int v41; // eax
  int v42; // eax
  __int64 v43; // r8
  float v44; // r10d
  bool v45; // cc
  bool DoesContain; // al
  int v47; // r10d
  bool IsEmpty; // al
  void (__fastcall **v49)(struct ISwapChainRealization *, GUID *, float **); // rcx
  char v50; // r14
  _QWORD *v51; // rax
  __int64 v52; // rax
  int v53; // eax
  void (__fastcall **v54)(struct ISwapChainRealization *, GUID *, float **); // rcx
  int v55; // r13d
  int v56; // r13d
  char v57; // r12
  int v58; // r15d
  char v59; // r14
  char v60; // di
  char v61; // si
  int v62; // ebx
  _QWORD *v63; // rax
  __int64 v64; // rdx
  bool IsCandidateDirectFlipCompatible; // al
  float *v66; // rax
  unsigned int v67; // eax
  bool v68; // r13
  _QWORD *v69; // rax
  int v70; // eax
  __int64 (__fastcall *v71)(_QWORD *, __int128 *); // rdi
  _DWORD *v72; // rbx
  int v73; // ebx
  int v74; // edi
  int v75; // esi
  int v76; // r14d
  _DWORD *v77; // rax
  void *v78; // rdx
  __int64 *v79; // r14
  const struct CVisual *v80; // rsi
  __int64 v81; // r12
  int v82; // ebx
  int v83; // edi
  int v84; // esi
  int v85; // r14d
  _QWORD *v86; // rax
  __int64 v87; // rdx
  __int64 v88; // r9
  unsigned int v89; // ebx
  RenderTargetInfo *v90; // rax
  char v91; // di
  char v92; // r13
  char v93; // al
  __int64 v94; // r9
  unsigned int v95; // eax
  struct tagRECT v96; // xmm11
  struct tagRECT v97; // xmm12
  char v98; // si
  struct tagRECT v99; // xmm13
  __int128 v100; // xmm14
  __int128 v101; // xmm15
  int v102; // edi
  __int128 v103; // xmm7
  __int128 v104; // xmm8
  __int128 v105; // xmm9
  __int128 v106; // xmm10
  int v107; // ebx
  const __m128i *v108; // rax
  __m128i v109; // xmm6
  __int64 v110; // rax
  __int64 v111; // rax
  int v112; // esi
  int v113; // edi
  int v114; // ebx
  _QWORD *v115; // rax
  __int64 v116; // rdx
  int v118; // [rsp+28h] [rbp-140h]
  float v119; // [rsp+E8h] [rbp-80h] BYREF
  int v120; // [rsp+ECh] [rbp-7Ch]
  bool v121; // [rsp+F0h] [rbp-78h]
  char IsIntelWorkaroundNeeded; // [rsp+F1h] [rbp-77h]
  int v123; // [rsp+F4h] [rbp-74h]
  struct ISwapChainRealization *v124; // [rsp+F8h] [rbp-70h] BYREF
  struct CCompositionSurfaceInfo *v125; // [rsp+100h] [rbp-68h]
  const struct CVisual *v126; // [rsp+108h] [rbp-60h]
  float *v127; // [rsp+110h] [rbp-58h] BYREF
  float *v128; // [rsp+118h] [rbp-50h] BYREF
  COverlayContext *v129; // [rsp+120h] [rbp-48h] BYREF
  __int128 *v130; // [rsp+128h] [rbp-40h]
  __int128 v131; // [rsp+130h] [rbp-38h] BYREF
  __int128 v132; // [rsp+140h] [rbp-28h]
  __int128 v133; // [rsp+150h] [rbp-18h] BYREF
  __int128 v134; // [rsp+160h] [rbp-8h] BYREF
  __int64 v135; // [rsp+170h] [rbp+8h] BYREF
  int v136; // [rsp+178h] [rbp+10h]
  float v137; // [rsp+180h] [rbp+18h]
  _OWORD v138[4]; // [rsp+188h] [rbp+20h] BYREF
  int v139; // [rsp+1C8h] [rbp+60h]
  _OWORD v140[4]; // [rsp+1D8h] [rbp+70h] BYREF
  int v141; // [rsp+218h] [rbp+B0h]
  _OWORD v142[7]; // [rsp+228h] [rbp+C0h] BYREF
  struct tagRECT v143; // [rsp+298h] [rbp+130h] BYREF
  struct tagRECT v144; // [rsp+2A8h] [rbp+140h] BYREF
  struct tagRECT v145; // [rsp+2B8h] [rbp+150h] BYREF
  __int128 v146; // [rsp+2C8h] [rbp+160h]
  __int128 v147; // [rsp+2D8h] [rbp+170h]
  __int128 v148; // [rsp+2E8h] [rbp+180h]
  __int128 v149; // [rsp+2F8h] [rbp+190h]
  __int128 v150[2]; // [rsp+308h] [rbp+1A0h] BYREF
  __int128 v151; // [rsp+328h] [rbp+1C0h] BYREF
  __int128 v152; // [rsp+338h] [rbp+1D0h] BYREF
  __m128i v153; // [rsp+348h] [rbp+1E0h] BYREF

  v15 = this;
  v16 = a4;
  v17 = a13;
  v18 = (struct CCompositionSurfaceInfo *)a3;
  v129 = this;
  v126 = (const struct CVisual *)a2;
  v125 = (struct CCompositionSurfaceInfo *)a3;
  v127 = a5;
  v128 = a6;
  v124 = a4;
  *(_QWORD *)&v132 = a7;
  v130 = a13;
  v143.left = a11;
  memset_0(&v143.top, 0, 0x6CuLL);
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(*((_QWORD *)v15 + 7) + 8LL) + 24LL))(
    *((_QWORD *)v15 + 7) + 8LL,
    &v135);
  v19 = (_QWORD *)((char *)v16 + 8);
  v20 = *((_QWORD *)v16 + 1);
  *(_QWORD *)&v131 = (char *)v16 + 8;
  if ( *(_DWORD *)((*(__int64 (__fastcall **)(_QWORD *, __int128 *))(v20 + 24))((_QWORD *)v16 + 1, &v152) + 4) != 1 )
  {
    v21 = v136;
    v22 = (_DWORD *)(*(__int64 (__fastcall **)(_QWORD *, float *))(*v19 + 56LL))((_QWORD *)v16 + 1, &v119);
    if ( *v22 == -1 || *v22 == v21 || v21 == -3 )
    {
      v23 = *v127 + 6291456.25;
      v119 = v23;
      v24 = v23;
      v25 = v127[1];
      v143.top = (int)(LODWORD(v24) << 10) >> 11;
      *(float *)&v25 = v25 + 6291456.25;
      v119 = *(float *)&v25;
      v26 = LODWORD(v25);
      v27 = v127[2];
      v143.right = v26 << 10 >> 11;
      *(float *)&v27 = v27 + 6291456.25;
      v119 = *(float *)&v27;
      v28 = LODWORD(v27);
      v29 = v127[3];
      v143.bottom = v28 << 10 >> 11;
      *(float *)&v29 = v29 + 6291456.25;
      v119 = *(float *)&v29;
      v30 = LODWORD(v29);
      v31 = *v128;
      v144.left = v30 << 10 >> 11;
      *(float *)&v31 = v31 + 6291456.25;
      v119 = *(float *)&v31;
      v32 = LODWORD(v31);
      v33 = v128[1];
      v144.top = v32 << 10 >> 11;
      *(float *)&v33 = v33 + 6291456.25;
      v119 = *(float *)&v33;
      v34 = LODWORD(v33);
      v35 = v128[2];
      v144.right = v34 << 10 >> 11;
      *(float *)&v35 = v35 + 6291456.25;
      v119 = *(float *)&v35;
      v36 = LODWORD(v35);
      v37 = v128[3];
      v144.bottom = v36 << 10 >> 11;
      *(float *)&v37 = v37 + 6291456.25;
      v119 = *(float *)&v37;
      v38 = LODWORD(v37);
      v39 = *(float *)a7;
      v145.left = v38 << 10 >> 11;
      *(float *)&v39 = v39 + 6291456.25;
      v119 = *(float *)&v39;
      v40 = LODWORD(v39);
      LODWORD(v39) = *(_DWORD *)(a7 + 4);
      v145.top = v40 << 10 >> 11;
      *(float *)&v39 = *(float *)&v39 + 6291456.25;
      v119 = *(float *)&v39;
      v41 = LODWORD(v39);
      LODWORD(v39) = *(_DWORD *)(a7 + 8);
      v145.right = v41 << 10 >> 11;
      *(float *)&v39 = *(float *)&v39 + 6291456.25;
      v119 = *(float *)&v39;
      v42 = LODWORD(v39);
      LODWORD(v39) = *(_DWORD *)(a7 + 12);
      v145.bottom = v42 << 10 >> 11;
      v119 = *(float *)&v39 + 6291456.25;
      LODWORD(v146) = (int)(LODWORD(v119) << 10) >> 11;
      *(_QWORD *)((char *)&v146 + 4) = a10;
      HIDWORD(v147) = *(_DWORD *)((*(__int64 (__fastcall **)(_QWORD *, __int128 *))(*v19 + 24LL))(
                                    (_QWORD *)v16 + 1,
                                    &v152)
                                + 8);
      LODWORD(v149) = 2;
      DWORD2(v149) = ConvertSDRBoostToSDRWhiteLevel(v137, SHIDWORD(v147));
      if ( (*(unsigned int (__fastcall **)(struct CCompositionSurfaceInfo *))(*(_QWORD *)v18 + 88LL))(v18) == 2
        && (float)((float)(*(float *)(a7 + 8) - *(float *)a7) * (float)(*(float *)(a7 + 12) - *(float *)(a7 + 4))) > (float)((float)(*((float *)v15 + 4835) - *((float *)v15 + 4833)) * (float)(*((float *)v15 + 4834) - *((float *)v15 + 4832))) )
      {
        *((_OWORD *)v15 + 1208) = *(_OWORD *)a7;
      }
      LOBYTE(v44) = 0;
      v45 = *((_DWORD *)v15 + 4824) < 2000;
      v119 = v44;
      if ( v45 && (a11 & 3) != 0 )
      {
        DoesContain = TMilRect<int,tagRECT,Mil3DRectL,RectUniqueness::_CMilRectL_>::DoesContain(
                        (__int64)&v145.top,
                        (__int64)&v144.top,
                        v43);
        v47 = (unsigned __int8)v47;
        if ( !DoesContain )
          v47 = 1;
        v119 = *(float *)&v47;
      }
      IsIntelWorkaroundNeeded = COverlayContext::IsIntelWorkaroundNeeded(
                                  v15,
                                  (const struct tagRECT *)&v143.top,
                                  (const struct tagRECT *)&v144.top,
                                  (const struct tagRECT *)&v145.top);
      IsEmpty = TMilRect<int,tagRECT,Mil3DRectL,RectUniqueness::_CMilRectL_>::IsEmpty(a13);
      v49 = *(void (__fastcall ***)(struct ISwapChainRealization *, GUID *, float **))v16;
      v50 = IsEmpty;
      v121 = IsEmpty;
      v51 = (_QWORD *)((__int64 (__fastcall *)(struct ISwapChainRealization *, float **))v49[8])(v16, &v127);
      if ( *v51 == v135 )
      {
        if ( !(*(unsigned __int8 (__fastcall **)(struct ISwapChainRealization *))(*(_QWORD *)v16 + 56LL))(v16)
          || (v52 = (*(__int64 (__fastcall **)(struct ISwapChainRealization *))(*(_QWORD *)v16 + 40LL))(v16),
              !CD2DContext::IsHardwareProtectionDisabled((CD2DContext *)(v52 + 16))) )
        {
          v53 = COverlayContext::CalcOverlaySize((__int64)v15, (__int64)&v143);
          v54 = *(void (__fastcall ***)(struct ISwapChainRealization *, GUID *, float **))v16;
          v55 = v53;
          v120 = v53;
          v127 = 0LL;
          (*v54)(v16, &GUID_51e2a1f0_4a0d_4788_800f_3cee7a2512a6, &v127);
          v128 = 0LL;
          if ( *(_QWORD *)(*((_QWORD *)g_pComposition + 77) + 32LL)
             - *(_QWORD *)(*((_QWORD *)g_pComposition + 77) + 24LL) == 8LL
            && *(int *)((*(__int64 (__fastcall **)(struct ISwapChainRealization *))(*(_QWORD *)v16 + 40LL))(v16) + 628) < 3200 )
          {
            if ( v128 )
              (*(void (__fastcall **)(float *))(*(_QWORD *)v128 + 16LL))(v128);
            (**(void (__fastcall ***)(struct ISwapChainRealization *, GUID *, float **))v16)(
              v16,
              &GUID_302508ed_c63d_40f8_af07_af5881d2df95,
              &v128);
          }
          LOBYTE(v123) = BYTE1(Microsoft_Windows_Dwm_CoreEnableBits) & 2;
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
          {
            v123 = *(_DWORD *)(*(__int64 (__fastcall **)(_QWORD *, __m128i *))(*v19 + 24LL))((_QWORD *)v16 + 1, &v153);
            v56 = *(_DWORD *)((*(__int64 (__fastcall **)(_QWORD *, __int128 *))(*v19 + 32LL))((_QWORD *)v16 + 1, &v133)
                            + 4);
            v57 = v50;
            v58 = *(_DWORD *)(*(__int64 (__fastcall **)(_QWORD *, __int128 *))(*v19 + 32LL))((_QWORD *)v16 + 1, &v134);
            v59 = (*(__int64 (__fastcall **)(struct ISwapChainRealization *))(*(_QWORD *)v16 + 152LL))(v16);
            v60 = (*(__int64 (__fastcall **)(struct ISwapChainRealization *))(*(_QWORD *)v16 + 144LL))(v16);
            v61 = v128 != 0LL;
            v62 = (*(unsigned __int8 (__fastcall **)(struct ISwapChainRealization *))(*(_QWORD *)v16 + 168LL))(v16);
            v63 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, __int128 *))(*((_QWORD *)v124 + 2) + 24LL))(
                              (_QWORD *)v124 + 2,
                              &v152);
            McTemplateU0xdddddddqqddddddddddddqqq_EventWriteTransfer(
              *(unsigned int *)v63,
              v64,
              *(unsigned int *)v63 | (unsigned __int64)((__int64)(int)HIDWORD(*v63) << 32),
              v62,
              v61,
              v60,
              v59,
              v57,
              v58,
              v56,
              v123,
              v143.left,
              v143.top,
              v143.right,
              v143.bottom,
              v144.left,
              v144.top,
              v144.right,
              v144.bottom,
              v145.left,
              v145.top,
              v145.right,
              v145.bottom,
              v146,
              SBYTE4(v146),
              SBYTE8(v146),
              SBYTE12(v147));
            v15 = v129;
            v16 = v124;
            v17 = v130;
            v18 = v125;
            v19 = (_QWORD *)v131;
            v55 = v120;
          }
          IsCandidateDirectFlipCompatible = 0;
          if ( v55 == 2 && !*((_BYTE *)v15 + 19360) )
          {
            v66 = v127;
            if ( v127 )
              goto LABEL_51;
            v67 = (*(__int64 (__fastcall **)(struct CCompositionSurfaceInfo *))(*(_QWORD *)v18 + 72LL))(v18);
            IsCandidateDirectFlipCompatible = COverlayContext::IsCandidateDirectFlipCompatible(
                                                v15,
                                                v18,
                                                v16,
                                                (const struct DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES *)&v143,
                                                v67,
                                                a12);
          }
          if ( IsCandidateDirectFlipCompatible && (*(_DWORD *)v15 <= 1u || *((int *)v15 + 4824) < 2200) )
          {
            v68 = 0;
            if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
            {
              v69 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, __int128 *))(*((_QWORD *)v16 + 2) + 24LL))(
                                (_QWORD *)v16 + 2,
                                &v131);
              McTemplateU0x_EventWriteTransfer(
                *(unsigned int *)v69,
                &EVTDESC_ETWGUID_DIRECTFLIP_CANDIDATERECORDEVENT,
                *(unsigned int *)v69 | (unsigned __int64)((__int64)(int)HIDWORD(*v69) << 32));
            }
            v70 = 2;
            if ( v121 )
              goto LABEL_40;
            if ( v128 )
            {
              v71 = *(__int64 (__fastcall **)(_QWORD *, __int128 *))(*v19 + 24LL);
              v72 = (_DWORD *)(*(__int64 (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)v15 + 7) + 24LL))(
                                *((_QWORD *)v15 + 7),
                                &v151);
              if ( *(_DWORD *)v71(v19, v150) == *v72 )
              {
                if ( a14 )
                {
                  v123 = 4;
                  LOBYTE(v129) = BYTE1(Microsoft_Windows_Dwm_CoreEnableBits) & 2;
                  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) == 0 )
                  {
                    v70 = 4;
                    goto LABEL_40;
                  }
                  v73 = *((_DWORD *)v17 + 3);
                  v74 = *((_DWORD *)v17 + 2);
                  v75 = *((_DWORD *)v17 + 1);
                  v76 = *(_DWORD *)v17;
                  v77 = (_DWORD *)(*(__int64 (__fastcall **)(_QWORD *, COverlayContext **))(*((_QWORD *)v124 + 2) + 24LL))(
                                    (_QWORD *)v124 + 2,
                                    &v129);
                  v78 = &EVTDESC_ADVANCED_DIRECTFLIP_NORESTORE_RECORDCANDIDATE;
                }
                else
                {
                  v123 = 3;
                  LOBYTE(v129) = BYTE1(Microsoft_Windows_Dwm_CoreEnableBits) & 2;
                  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) == 0 )
                  {
LABEL_39:
                    v70 = v123;
LABEL_40:
                    v79 = (__int64 *)v125;
                    v80 = v126;
                    CDirectFlipInfo::Init(
                      (__int64)v15 + 19176,
                      *((_QWORD *)v15 + 7),
                      (__int64)v126,
                      (__int64)v125,
                      v70,
                      v17);
                    v81 = (__int64)v124;
LABEL_58:
                    v89 = v120;
                    goto LABEL_59;
                  }
                  v73 = *((_DWORD *)v17 + 3);
                  v74 = *((_DWORD *)v17 + 2);
                  v75 = *((_DWORD *)v17 + 1);
                  v76 = *(_DWORD *)v17;
                  v77 = (_DWORD *)(*(__int64 (__fastcall **)(_QWORD *, COverlayContext **))(*((_QWORD *)v124 + 2) + 24LL))(
                                    (_QWORD *)v124 + 2,
                                    &v129);
                  v78 = &EVTDESC_ADVANCED_DIRECTFLIP_RECORDCANDIDATE;
                }
                McTemplateU0xddddd_EventWriteTransfer(*v77, (_DWORD)v78, *v77, 1, v76, v75, v74, v73);
                goto LABEL_39;
              }
              if ( a14 )
              {
                v70 = 1;
                goto LABEL_40;
              }
              LOBYTE(v129) = Microsoft_Windows_Dwm_CoreEnableBits & 0x10;
              if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
              {
                v82 = *((_DWORD *)v17 + 3);
                v83 = *((_DWORD *)v17 + 2);
                v84 = *((_DWORD *)v17 + 1);
                v85 = *(_DWORD *)v17;
                v81 = (__int64)v124;
                v86 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, struct ISwapChainRealization **))(*((_QWORD *)v124 + 2) + 24LL))(
                                  (_QWORD *)v124 + 2,
                                  &v124);
                McTemplateU0xqqdddd_EventWriteTransfer(
                  *(unsigned int *)v86,
                  v87,
                  *(unsigned int *)v86 | (unsigned __int64)((__int64)(int)HIDWORD(*v86) << 32),
                  v88,
                  v118,
                  v85,
                  v84,
                  v83,
                  v82);
LABEL_57:
                v80 = v126;
                v79 = (__int64 *)v125;
                goto LABEL_58;
              }
            }
            else if ( a14 )
            {
              v70 = 1;
              goto LABEL_40;
            }
LABEL_56:
            v81 = (__int64)v124;
            goto LABEL_57;
          }
          v66 = v127;
LABEL_51:
          if ( v66 )
          {
            if ( *(_DWORD *)v15 <= 1u || !*((_DWORD *)v15 + 2) )
              goto LABEL_55;
          }
          else if ( *(_DWORD *)v15 <= 1u && (v55 != 2 || !v121) )
          {
LABEL_55:
            v68 = 0;
            goto LABEL_56;
          }
          v68 = 1;
          v90 = (RenderTargetInfo *)(*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)(*((_QWORD *)v15 + 7)
                                                                                               + 8LL)
                                                                                   + 24LL))(
                                      *((_QWORD *)v15 + 7) + 8LL,
                                      v150);
          if ( RenderTargetInfo::IsHDR(v90)
            && *(_DWORD *)((*(__int64 (__fastcall **)(struct ISwapChainRealization *))(*(_QWORD *)v16 + 40LL))(v16) + 904) == 1297040209
            && (*(unsigned __int8 (__fastcall **)(struct CCompositionSurfaceInfo *))(*(_QWORD *)v18 + 152LL))(v18) )
          {
            v89 = v120;
            v81 = (__int64)v124;
            v80 = v126;
            v68 = v120 != 0;
            v79 = (__int64 *)v125;
LABEL_59:
            if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DDisplay_AggCheckMpo>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DDisplay_AggCheckMpo>::GetImpl'::`2'::impl) )
            {
              if ( v68 )
              {
LABEL_72:
                v91 = 0;
                if ( v128 )
                  v91 = (*(__int64 (__fastcall **)(float *))(*(_QWORD *)v128 + 24LL))(v128);
                if ( !(*(unsigned __int8 (__fastcall **)(__int64 *))(*v79 + 136))(v79)
                  && !LOBYTE(v119)
                  && !IsIntelWorkaroundNeeded
                  && !v91 )
                {
                  v92 = a12;
                  if ( a12
                    && (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)v15 + 7) + 96LL))(*((_QWORD *)v15 + 7))
                     - 1 <= 0xFFFFFFFD )
                  {
                    if ( v144.top < 0 || v144.right < 0 )
                    {
                      v92 = 0;
                    }
                    else
                    {
                      *(_QWORD *)&v150[0] = *(_QWORD *)&v144.top;
                      *((_QWORD *)&v150[0] + 1) = __PAIR64__(v145.left, v144.bottom);
                      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v15 + 7) + 256LL))(*((_QWORD *)v15 + 7));
                      v93 = COverlayContext::AnyDesktopPlaneScaling(v15);
                      CMonitorTransform::GetClipBox(v94, (__int64)&v151, v93);
                      v92 = TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::DoesContain(
                              (unsigned int *)&v151,
                              (unsigned int *)v150)
                         && a12;
                    }
                  }
                  v95 = (*(__int64 (__fastcall **)(__int64 *))(*v79 + 72))(v79);
                  if ( COverlayContext::IsCandidateOverlayCompatible(
                         v15,
                         v80,
                         v79,
                         v81,
                         (__int64)&v143,
                         v89,
                         v127 != 0LL,
                         v95,
                         v92) )
                  {
                    v96 = v143;
                    v97 = v144;
                    v98 = v127 != 0LL;
                    v99 = v145;
                    v100 = v146;
                    v101 = v147;
                    v150[0] = *a15;
                    v151 = *v130;
                    v102 = *(_DWORD *)(a9 + 64);
                    v153 = *(__m128i *)a9;
                    v152 = *(_OWORD *)(a9 + 16);
                    v134 = *(_OWORD *)(a9 + 32);
                    v133 = *(_OWORD *)(a9 + 48);
                    v103 = *a8;
                    v104 = a8[1];
                    v105 = a8[2];
                    v106 = a8[3];
                    v107 = *((_DWORD *)a8 + 16);
                    v108 = (const __m128i *)v132;
                    v132 = v148;
                    v109 = _mm_loadu_si128(v108);
                    v110 = *v79;
                    v131 = v149;
                    v111 = (*(__int64 (__fastcall **)(__int64 *))(v110 + 64))(v79);
                    v139 = v102;
                    v141 = v107;
                    v138[0] = v153;
                    v138[1] = v152;
                    v138[2] = v134;
                    v138[3] = v133;
                    v142[5] = v132;
                    v142[6] = v131;
                    v140[0] = v103;
                    v140[1] = v104;
                    v140[2] = v105;
                    v140[3] = v106;
                    v153 = v109;
                    v142[0] = v96;
                    v142[1] = v97;
                    v142[2] = v99;
                    v142[3] = v100;
                    v142[4] = v101;
                    detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::emplace_back<COverlayContext *,CVisual *,CCompositionSurfaceInfo *,unsigned __int64,DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES,TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,CCornerRects,CMILMatrix,TMilRect_<int,tagRECT,Mil3DRectL,D2D_POINTANDSIZE_L,RectUniqueness::_CMilRectL_>,TMilRect_<int,tagRECT,Mil3DRectL,D2D_POINTANDSIZE_L,RectUniqueness::_CMilRectL_>,bool,bool,enum OverlaySize>(
                      (__int64 *)v15 + 12,
                      (int)v15,
                      (__int64)v126,
                      (__int64)v79,
                      v111,
                      v142,
                      (__int128 *)v153.m128i_i8,
                      (__int64)v140,
                      (__int64)v138,
                      &v151,
                      v150,
                      v98,
                      v92,
                      v120);
                    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
                    {
                      v112 = *(_DWORD *)(*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)(v81 + 8) + 24LL))(
                                          v81 + 8,
                                          v150);
                      v113 = *(_DWORD *)((*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)(v81 + 8) + 32LL))(
                                           v81 + 8,
                                           &v152)
                                       + 4);
                      v114 = *(_DWORD *)(*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)(v81 + 8) + 32LL))(
                                          v81 + 8,
                                          &v134);
                      v115 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)(v81 + 16) + 24LL))(
                                         v81 + 16,
                                         &v133);
                      McTemplateU0xddqqddddddddddddqqq_EventWriteTransfer(
                        *(unsigned int *)v115,
                        v116,
                        *(unsigned int *)v115 | (unsigned __int64)((__int64)(int)HIDWORD(*v115) << 32),
                        v114,
                        v113,
                        v112,
                        v143.left,
                        v143.top,
                        v143.right,
                        v143.bottom,
                        v144.left,
                        v144.top,
                        v144.right,
                        v144.bottom,
                        v145.left,
                        v145.top,
                        v145.right,
                        v145.bottom,
                        v146,
                        SBYTE4(v146),
                        SBYTE8(v146),
                        SBYTE12(v147));
                    }
                  }
                }
              }
            }
            else if ( v68
                   && (!*((_BYTE *)v15 + 19360)
                    || v89
                    || *(_QWORD *)(*((_QWORD *)g_pComposition + 77) + 32LL)
                     - *(_QWORD *)(*((_QWORD *)g_pComposition + 77) + 24LL) == 8LL) )
            {
              goto LABEL_72;
            }
            wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v128);
            wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v127);
            return 0LL;
          }
          goto LABEL_56;
        }
      }
    }
  }
  return 0LL;
}
