/*
 * XREFs of ??ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z @ 0x1402D77B8
 * Callers:
 *     ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z @ 0x140363C84 (-GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x14002DFE8 (-D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x14004A25C (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ?IsUnspecifiedFrequency@@YA_NAEBU_D3DDDI_RATIONAL@@@Z @ 0x1400503A8 (-IsUnspecifiedFrequency@@YA_NAEBU_D3DDDI_RATIONAL@@@Z.c)
 *     ?DivideAndRound@@YA_K_K0@Z @ 0x1400542F0 (-DivideAndRound@@YA_K_K0@Z.c)
 *     ?Own@?$AutoRelease@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@P6AJPEAUD3DKMDT_HVIDPN__@@PEAU1@@ZPEAU2@@DXGDMM@@QEAAXPEAUD3DKMDT_HVIDPNTARGETMODESET__@@Q6AJPEAUD3DKMDT_HVIDPN__@@0@Z1@Z @ 0x140055948 (-Own@-$AutoRelease@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@P6AJPEAUD3DKMDT_HVIDPN__@@PEAU1@@ZPEAU2@@D.c)
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x140056880 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     ?GetDisplayOnlyDriverUseRawModes@ADAPTER_DISPLAY@@QEBAHXZ @ 0x140078210 (-GetDisplayOnlyDriverUseRawModes@ADAPTER_DISPLAY@@QEBAHXZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1402D925C (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 *     ConvertDMMScalingToGdiScaling @ 0x1402D9384 (ConvertDMMScalingToGdiScaling.c)
 *     ?BmlIsSupportedPathRotation@@YA_NW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@U_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@@Z @ 0x1402D947C (-BmlIsSupportedPathRotation@@YA_NW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@U_D3DKMDT_VIDPN_PRESENT.c)
 *     ?AddUniqueMode@MODE_UNION_LIST@@QEAAJAEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1402D9570 (-AddUniqueMode@MODE_UNION_LIST@@QEAAJAEBU_D3DKMT_DISPLAYMODE@@@Z.c)
 *     ?BmlIsSupportedPathScaling@@YA_NW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@U_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@@Z @ 0x1402D9ACC (-BmlIsSupportedPathScaling@@YA_NW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@U_D3DKMDT_VIDPN_PRESENT_P.c)
 *     ?FindMode@MODE_UNION_LIST@@QEAAPEAU_D3DKMT_DISPLAYMODE@@AEBU2@@Z @ 0x1402D9B50 (-FindMode@MODE_UNION_LIST@@QEAAPEAU_D3DKMT_DISPLAYMODE@@AEBU2@@Z.c)
 *     ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x140320470 (-DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 *     ?DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x140349074 (-DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z.c)
 *     ?GetUniqueModes@MODE_UNION_LIST@@QEAAJ_KPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x140427760 (-GetUniqueModes@MODE_UNION_LIST@@QEAAJ_KPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 */

__int64 __fastcall OBTAIN_MODES_ON_SOURCE::operator()(
        __int64 a1,
        struct _D3DKMT_DISPLAYMODE **a2,
        unsigned int *a3,
        void **a4,
        unsigned int *a5)
{
  unsigned int v5; // r15d
  unsigned int v6; // ebx
  int v8; // r12d
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rsi
  __int64 v15; // r8
  __int64 v16; // rbx
  void *v17; // rsi
  int VideoOutputTechnology; // eax
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rax
  __int64 v25; // r15
  __int64 v26; // r13
  __int64 v27; // rcx
  void (__fastcall *v28)(__int64, __int64); // rdi
  __int64 (__fastcall *v29)(__int64, __int64 *); // rax
  int v30; // eax
  __int64 v31; // r8
  unsigned int *v32; // r12
  unsigned int v33; // eax
  int v34; // eax
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 (__fastcall *v37)(__int64, _QWORD, __int64 *, __int64 *); // rax
  int v38; // eax
  __int64 v39; // rdi
  __int64 (__fastcall *v40)(__int64, __int64 *); // rax
  int v41; // eax
  __int64 v42; // r13
  __int64 i; // rdx
  __int64 v44; // r8
  unsigned int *v45; // r13
  int v46; // eax
  __int64 v47; // r8
  unsigned int v48; // eax
  int v49; // eax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  int v55; // eax
  struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT v56; // edi
  char v57; // al
  char v58; // al
  unsigned int v59; // ecx
  int v60; // eax
  __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rcx
  int v64; // eax
  struct _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT v65; // ebx
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v66; // eax
  int v67; // r9d
  __int16 v68; // dx
  unsigned int v69; // r8d
  enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING v70; // r10d
  D3DDDI_RATIONAL v71; // rax
  int v72; // r8d
  int v73; // eax
  __int64 v74; // r10
  int v75; // eax
  int v76; // eax
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v77; // eax
  bool v78; // cc
  __int64 v79; // rcx
  __int64 v80; // r8
  unsigned int v81; // eax
  int v82; // eax
  __int64 v83; // r8
  _DWORD *v84; // rcx
  unsigned int v85; // r8d
  unsigned int v86; // edx
  __int64 j; // rax
  unsigned int *v88; // r10
  unsigned __int64 v89; // r9
  unsigned __int64 v90; // r11
  unsigned __int64 v91; // rax
  unsigned __int64 v92; // rdx
  unsigned __int64 v93; // rcx
  bool v94; // zf
  int v95; // eax
  int v96; // eax
  int v97; // eax
  int v98; // eax
  __int64 v99; // rax
  int v100; // eax
  __int64 v101; // rbx
  __int64 v102; // rdi
  __int64 v103; // rsi
  __int64 v104; // rdi
  const wchar_t *v105; // r9
  __int64 v106; // rdx
  int v107; // eax
  const wchar_t *v108; // r9
  int DisplayOnlyDriverUseRawModes; // eax
  int v110; // eax
  __int64 v111; // rdi
  __int64 v112; // rax
  __int64 v113; // rbx
  bool v114; // zf
  __int64 v115; // rdi
  __int64 v116; // rdx
  __int64 v117; // rbx
  __int64 v118; // rbx
  __int64 v119; // rdi
  __int64 v120; // rsi
  __int64 v121; // rbx
  const wchar_t *v122; // r9
  __int64 v123; // rbx
  const wchar_t *v124; // r9
  int v125; // eax
  __int64 v126; // rax
  struct _D3DKMT_DISPLAYMODE **v127; // rbx
  struct _D3DKMT_DISPLAYMODE *v128; // rax
  unsigned __int64 v129; // rcx
  unsigned __int64 v130; // rax
  int UniqueModes; // eax
  __int64 v132; // rbx
  _QWORD *v133; // rdi
  __int64 v134; // rcx
  unsigned __int64 v135; // rax
  struct _D3DKMT_DISPLAYMODE *v136; // rax
  int v137; // eax
  __int64 v138; // rbx
  int v139; // [rsp+20h] [rbp-E0h]
  __int64 v140; // [rsp+28h] [rbp-D8h]
  __int64 v141; // [rsp+28h] [rbp-D8h]
  __int64 v142; // [rsp+28h] [rbp-D8h]
  __int64 v143; // [rsp+28h] [rbp-D8h]
  __int64 v144; // [rsp+30h] [rbp-D0h]
  __int64 v145; // [rsp+30h] [rbp-D0h]
  __int64 v146; // [rsp+38h] [rbp-C8h]
  __int64 v147; // [rsp+38h] [rbp-C8h]
  unsigned __int8 v148; // [rsp+50h] [rbp-B0h] BYREF
  char v149; // [rsp+51h] [rbp-AFh] BYREF
  char v150; // [rsp+52h] [rbp-AEh] BYREF
  char v151; // [rsp+53h] [rbp-ADh]
  char v152; // [rsp+54h] [rbp-ACh]
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v153; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v154; // [rsp+60h] [rbp-A0h]
  void (__fastcall *v155)(__int64, __int64); // [rsp+68h] [rbp-98h]
  __int16 v156[2]; // [rsp+70h] [rbp-90h] BYREF
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING v157; // [rsp+74h] [rbp-8Ch] BYREF
  int v158; // [rsp+78h] [rbp-88h]
  unsigned int v159; // [rsp+7Ch] [rbp-84h]
  __int64 v160; // [rsp+80h] [rbp-80h]
  __int64 v161; // [rsp+88h] [rbp-78h] BYREF
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v162; // [rsp+90h] [rbp-70h] BYREF
  char v163[8]; // [rsp+98h] [rbp-68h] BYREF
  unsigned int *v164; // [rsp+A0h] [rbp-60h]
  void (__fastcall *v165)(__int64, unsigned int *); // [rsp+A8h] [rbp-58h]
  __int64 v166; // [rsp+B0h] [rbp-50h]
  int v167; // [rsp+B8h] [rbp-48h]
  char v168[8]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v169; // [rsp+C8h] [rbp-38h]
  void (__fastcall *v170)(__int64, __int64); // [rsp+D0h] [rbp-30h]
  __int64 v171; // [rsp+D8h] [rbp-28h]
  int v172; // [rsp+E0h] [rbp-20h]
  __int64 v173; // [rsp+E8h] [rbp-18h] BYREF
  char v174[8]; // [rsp+F0h] [rbp-10h] BYREF
  unsigned int *v175; // [rsp+F8h] [rbp-8h]
  void (__fastcall *v176)(__int64, unsigned int *); // [rsp+100h] [rbp+0h]
  __int64 v177; // [rsp+108h] [rbp+8h]
  int v178; // [rsp+110h] [rbp+10h]
  unsigned int v179; // [rsp+118h] [rbp+18h]
  __int64 v180; // [rsp+120h] [rbp+20h] BYREF
  __int64 v181; // [rsp+128h] [rbp+28h] BYREF
  struct _D3DKMT_DISPLAYMODE v182; // [rsp+130h] [rbp+30h] BYREF
  int v183; // [rsp+160h] [rbp+60h] BYREF
  __int64 v184; // [rsp+168h] [rbp+68h] BYREF
  __int64 v185; // [rsp+170h] [rbp+70h] BYREF
  void **v186; // [rsp+178h] [rbp+78h]
  void *v187; // [rsp+180h] [rbp+80h]
  struct _D3DKMT_DISPLAYMODE **v188; // [rsp+188h] [rbp+88h]
  unsigned int *v189; // [rsp+190h] [rbp+90h]
  unsigned int *v190; // [rsp+198h] [rbp+98h]
  struct _D3DKMDT_MONITOR_SOURCE_MODE v191; // [rsp+1A0h] [rbp+A0h] BYREF

  v190 = a5;
  v5 = -1;
  v159 = -1;
  v6 = 0;
  v186 = a4;
  v189 = a3;
  v188 = a2;
  v8 = 255;
  while ( 1 )
  {
    v9 = *(_QWORD *)(a1 + 32);
    v10 = *(unsigned int *)(a1 + 40);
    v11 = *(_QWORD *)(a1 + 24);
    v157 = -1;
    v12 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING *))(v9 + 8))(
            v11,
            v10,
            v6,
            &v157);
    v13 = v12;
    if ( v12 < 0 )
    {
      WdLogSingleEntry3(1LL, v12, *(unsigned int *)(a1 + 40), v6);
      v140 = *(unsigned int *)(a1 + 40);
      WdLogGlobalForLineNumber = 652;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"Failed call to DXGDMM_VIDPNTOPOLOGY_INTERFACE::pfnEnumPathTargetsFromSource. (Status = 0x%I64x, m_VidPn"
                  "SourceId = 0x%I64x, PathIndex = 0x%I64x)",
        v13,
        v140,
        v6,
        0LL,
        0LL);
      return (unsigned int)v13;
    }
    v15 = (unsigned int)v157;
    if ( v157 == -1 )
      break;
    ++*(_DWORD *)(a1 + 52);
    v106 = *(unsigned int *)(a1 + 40);
    v153 = D3DKMDT_VPPR_UNINITIALIZED;
    v156[0] = -1;
    v107 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *, __int16 *))(*(_QWORD *)(a1 + 32) + 112LL))(
             *(_QWORD *)(a1 + 24),
             v106,
             v15,
             &v153,
             v156);
    v13 = v107;
    if ( v107 < 0 )
    {
      WdLogSingleEntry3(2LL, v107, v5, *(unsigned int *)(a1 + 40));
      v144 = *(unsigned int *)(a1 + 40);
      WdLogGlobalForLineNumber = 675;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed call to DXGDMM_VIDPNTOPOLOGY_INTERFACE::pfnGetPathImportance. (Status = 0x%I64x, PrimVidPnTarget"
                  "Id = 0x%I64x, m_VidPnSourceId = 0x%I64x)",
        v13,
        v5,
        v144,
        0LL,
        0LL);
      return (unsigned int)v13;
    }
    if ( v5 == -1 || v153 < v8 )
    {
      v5 = v157;
      v8 = v153;
      v159 = v157;
      *(_DWORD *)(a1 + 48) = v6;
    }
    ++v6;
  }
  v16 = v159;
  if ( v159 == -1 && *(_DWORD *)(a1 + 52) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 691;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(PrimVidPnTargetId != D3DDDI_ID_UNINITIALIZED) || (m_CloneGroupSize == 0)",
      691LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v17 = *(void **)a1;
  v187 = *(void **)a1;
  v162 = D3DKMDT_VOT_HD15;
  VideoOutputTechnology = DmmGetVideoOutputTechnology(v187, v16, 0LL, &v162);
  v19 = VideoOutputTechnology;
  if ( VideoOutputTechnology < 0 )
  {
    WdLogSingleEntry1(2LL);
    v108 = L"Failed call to DmmGetVideoOutputTechnology(Status = 0x%I64x)";
    WdLogGlobalForLineNumber = 703;
LABEL_153:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v108, v19, 0LL, 0LL, 0LL, 0LL);
    return (unsigned int)v19;
  }
  if ( v162 == D3DKMDT_VOT_MIRACAST
    || v162 == D3DKMDT_VOT_INDIRECT_WIRED
    || (v152 = 0, v162 == (D3DKMDT_VOT_SVIDEO_7PIN|D3DKMDT_VOT_INDIRECT_WIRED)) )
  {
    v152 = 1;
  }
  if ( *((_QWORD *)v17 + 396)
    || (DisplayOnlyDriverUseRawModes = ADAPTER_DISPLAY::GetDisplayOnlyDriverUseRawModes(*((ADAPTER_DISPLAY **)v17 + 395)),
        v151 = 1,
        !DisplayOnlyDriverUseRawModes) )
  {
    v151 = 0;
  }
  memset(&v191, 0, sizeof(v191));
  if ( DmmGetPreferredMonitorSourceModeOnTarget(*(void **)a1, v16, &v191) < 0 )
    memset(&v191, 0, sizeof(v191));
  v20 = *(_QWORD *)(a1 + 16);
  v21 = *(unsigned int *)(a1 + 40);
  v22 = *(_QWORD *)(a1 + 8);
  v181 = 0LL;
  v180 = 0LL;
  v23 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *, __int64 *))(v20 + 8))(v22, v21, &v180, &v181);
  v19 = v23;
  if ( v23 < 0 )
  {
    WdLogSingleEntry1(2LL);
    v108 = L"Failed call to DXGDMM_VIDPN_INTERFACE::pfnAcquireSourceModeSet. (Status = 0x%I64x)";
    WdLogGlobalForLineNumber = 733;
    goto LABEL_153;
  }
  v24 = *(_QWORD *)(a1 + 16);
  v25 = v180;
  v26 = *(_QWORD *)(a1 + 8);
  v27 = v180;
  v154 = v26;
  v28 = *(void (__fastcall **)(__int64, __int64))(v24 + 16);
  v180 = 0LL;
  v155 = v28;
  v164 = 0LL;
  v29 = *(__int64 (__fastcall **)(__int64, __int64 *))(v181 + 8);
  v165 = 0LL;
  v166 = 0LL;
  v167 = 0;
  v163[0] = 0;
  v30 = v29(v27, &v180);
  v13 = v30;
  if ( v30 < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 753;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed call to DXGDMM_VIDPNSOURCEMODESET_INTERFACE::pfnAcquireFirstModeInfo. (Status = 0x%I64x)",
      v13,
      0LL,
      0LL,
      0LL,
      0LL);
    if ( v25 )
      v28(v26, v25);
    return (unsigned int)v13;
  }
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
    (__int64)v163,
    v180,
    *(_QWORD *)(v181 + 32),
    v25);
  *(_BYTE *)(ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle(*(_QWORD *)(a1 + 8)) + 296) = 1;
  while ( 1 )
  {
    v32 = v164;
    if ( !v164 )
    {
      v125 = (*(__int64 (__fastcall **)(__int64, _QWORD))(v181 + 48))(v25, 0LL);
      v19 = v125;
      if ( v125 >= 0 )
      {
        v126 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle(*(_QWORD *)(a1 + 8));
        v127 = v188;
        *(_BYTE *)(v126 + 296) = 0;
        v128 = *v127;
        if ( *v127 )
          goto LABEL_243;
        v129 = *(unsigned int *)(a1 + 80);
        v128 = 0LL;
        if ( !(_DWORD)v129 )
          goto LABEL_243;
        v130 = 44 * v129;
        if ( !is_mul_ok(v129, 0x2CuLL) )
          v130 = -1LL;
        v128 = (struct _D3DKMT_DISPLAYMODE *)operator new[](v130, 0x4B677844u, 256LL);
        *v127 = v128;
        if ( v128 )
        {
LABEL_243:
          UniqueModes = MODE_UNION_LIST::GetUniqueModes(
                          (MODE_UNION_LIST *)(a1 + 64),
                          *(unsigned int *)(a1 + 80),
                          v128,
                          v189);
          if ( UniqueModes < 0 )
          {
            v132 = UniqueModes;
            WdLogSingleEntry1(1LL);
            WdLogGlobalForLineNumber = 1294;
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"GetUniqueModesFromUnionList failed. (Status = 0x%I64x)",
              v132,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          v133 = v186;
          if ( v186 )
          {
            if ( *v186 )
            {
              DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*v186);
              *v133 = 0LL;
            }
            v134 = *(unsigned int *)(a1 + 120);
            if ( (_DWORD)v134 )
            {
              v135 = 44 * v134;
              if ( !is_mul_ok(*(unsigned int *)(a1 + 120), 0x2CuLL) )
                v135 = -1LL;
              v136 = (struct _D3DKMT_DISPLAYMODE *)operator new[](v135, 0x4B677844u, 256LL);
              *v133 = v136;
              if ( v136 )
              {
                v137 = MODE_UNION_LIST::GetUniqueModes(
                         (MODE_UNION_LIST *)(a1 + 104),
                         *(unsigned int *)(a1 + 120),
                         v136,
                         v190);
                if ( v137 < 0 )
                {
                  v138 = v137;
                  WdLogSingleEntry1(1LL);
                  WdLogGlobalForLineNumber = 1321;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146,
                    -1,
                    (__int64)L"GetUniqueModesFromInvalidModesUnionList failed. (Status = 0x%I64x)",
                    v138,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                }
              }
              else
              {
                WdLogSingleEntry0(6LL);
                WdLogGlobalForLineNumber = 1311;
                DxgkLogInternalTriageEvent(
                  0LL,
                  262145,
                  -1,
                  (__int64)L"Unable to allocate mode list memory for invalid modes.",
                  1311LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
            }
          }
          if ( v163[0] )
            v165(v166, 0LL);
          if ( v25 )
            v155(v154, v25);
          return 0LL;
        }
        else
        {
          WdLogSingleEntry0(6LL);
          WdLogGlobalForLineNumber = 1283;
          DxgkLogInternalTriageEvent(
            0LL,
            262145,
            -1,
            (__int64)L"Unable to allocate mode list memory.",
            1283LL,
            0LL,
            0LL,
            0LL,
            0LL);
          if ( v163[0] )
            v165(v166, 0LL);
          if ( v25 )
            v155(v154, v25);
          return 3221225495LL;
        }
      }
      WdLogSingleEntry3(2LL, v125, v25, 0xFFFFFFFFLL);
      WdLogGlobalForLineNumber = 1269;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed call to DXGDMM_VIDPNSOURCEMODESET_INTERFACE::pfnUnpinMode. (Status = 0x%I64x, spVidPnSourceModeI"
                  "nfo.GetResource() = 0x%I64x, spVidPnSourceModeInfo.GetResource()->Id = 0x%I64x)",
        v19,
        v25,
        0xFFFFFFFFLL,
        0LL,
        0LL);
      goto LABEL_228;
    }
    v33 = v164[1];
    if ( (v33 == 3 || v33 == 4 || v33 == 1) && v164[2] == v164[4] && v164[3] == v164[5] )
      break;
LABEL_111:
    v185 = 0LL;
    v98 = (*(__int64 (__fastcall **)(__int64, unsigned int *, __int64 *))(v181 + 16))(v25, v32, &v185);
    v19 = v98;
    if ( v98 < 0 )
    {
      WdLogSingleEntry1(2LL);
      v124 = L"Failed call to DXGDMM_VIDPNSOURCEMODESET_INTERFACE::pfnAcquireNextModeInfo. (Status = 0x%I64x)";
      WdLogGlobalForLineNumber = 1252;
LABEL_226:
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v124, v19, 0LL, 0LL, 0LL, 0LL);
LABEL_228:
      if ( v163[0] )
        v165(v166, v32);
      if ( v25 )
        v155(v154, v25);
      return (unsigned int)v19;
    }
    DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
      (__int64)v163,
      v185,
      *(_QWORD *)(v181 + 32),
      v25);
  }
  LOBYTE(v31) = 1;
  v34 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v181 + 40))(v25, *v164, v31);
  if ( v34 < 0 )
  {
    WdLogSingleEntry2(3LL, v34, *v32);
    WdLogGlobalForLineNumber = 799;
    goto LABEL_111;
  }
  v35 = *(_QWORD *)(a1 + 16);
  v36 = *(_QWORD *)(a1 + 8);
  v173 = 0LL;
  v161 = 0LL;
  v37 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *, __int64 *))(v35 + 24);
  v169 = 0LL;
  v170 = 0LL;
  v171 = 0LL;
  v172 = 0;
  v168[0] = 0;
  v38 = v37(v36, (unsigned int)v16, &v161, &v173);
  v19 = v38;
  if ( v38 < 0 )
  {
    WdLogSingleEntry1(2LL);
    v124 = L"Failed call to DXGDMM_VIDPNSOURCEMODESET_INTERFACE::pfnAcquireTargetModeSet. (Status = 0x%I64x)";
    WdLogGlobalForLineNumber = 818;
    goto LABEL_226;
  }
  DXGDMM::AutoRelease<D3DKMDT_HVIDPNTARGETMODESET__ *,long (*)(D3DKMDT_HVIDPN__ *,D3DKMDT_HVIDPNTARGETMODESET__ *),D3DKMDT_HVIDPN__ *>::Own(
    (__int64)v168,
    v161,
    *(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL),
    *(_QWORD *)(a1 + 8));
  v39 = v169;
  v161 = 0LL;
  v175 = 0LL;
  v40 = *(__int64 (__fastcall **)(__int64, __int64 *))(v173 + 8);
  v176 = 0LL;
  v177 = 0LL;
  v178 = 0;
  v174[0] = 0;
  v41 = v40(v169, &v161);
  v42 = v41;
  if ( v41 < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 838;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed call to DXGDMM_VIDPNSOURCEMODESET_INTERFACE::pfnAcquireFirstModeInfo. (Status = 0x%I64x)",
      v42,
      0LL,
      0LL,
      0LL,
      0LL);
    if ( v168[0] )
      v170(v171, v39);
    if ( v163[0] )
      v165(v166, v32);
    if ( v25 )
      v155(v154, v25);
    return (unsigned int)v42;
  }
  for ( i = v161; ; i = v184 )
  {
    DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
      (__int64)v174,
      i,
      *(_QWORD *)(v173 + 32),
      v39);
    v45 = v175;
    if ( !v175 )
    {
      v97 = (*(__int64 (__fastcall **)(__int64, _QWORD))(v173 + 56))(v39, 0LL);
      LODWORD(v160) = v97;
      if ( v97 < 0 )
      {
        v123 = v97;
        WdLogSingleEntry3(2LL, v97, v39, 0xFFFFFFFFLL);
        WdLogGlobalForLineNumber = 1238;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed call to DXGDMM_VIDPNTARGETMODESET_INTERFACE::pfnUnpinMode. (Status = 0x%I64x, shVidPnTargetMod"
                    "eSet.GetResource() = 0x%I64x, spVidPnTargetModeInfo.GetResource()->Id = 0x%I64x)",
          v123,
          v39,
          0xFFFFFFFFLL,
          0LL,
          0LL);
        goto LABEL_206;
      }
      if ( v174[0] )
        v176(v177, 0LL);
      if ( v168[0] )
        v170(v171, v39);
      goto LABEL_111;
    }
    LOBYTE(v44) = 1;
    v46 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v173 + 48))(v39, *v175, v44);
    if ( v46 >= 0 )
      break;
    WdLogSingleEntry2(3LL, v46, *v45);
    WdLogGlobalForLineNumber = 858;
LABEL_104:
    v184 = 0LL;
    v96 = (*(__int64 (__fastcall **)(__int64, unsigned int *, __int64 *))(v173 + 16))(v39, v45, &v184);
    LODWORD(v160) = v96;
    if ( v96 < 0 )
    {
      v121 = v96;
      WdLogSingleEntry1(2LL);
      v122 = L"Failed call to DXGDMM_VIDPNSOURCEMODESET_INTERFACE::pfnAcquireNextModeInfo. (Status = 0x%I64x)";
      WdLogGlobalForLineNumber = 1221;
      goto LABEL_204;
    }
  }
  v150 = 0;
  v183 = 0;
  v48 = v32[1];
  if ( v48 == 3 || v48 == 4 || v151 )
  {
    v150 = 1;
  }
  else
  {
    v49 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *, int *))(v173 + 64))(v39, *v45, &v150, &v183);
    v179 = v49;
    if ( v49 == -1071774920 )
    {
      v99 = WdLogNewEntry5_WdTrace(v51, v50);
      *(_QWORD *)(v99 + 24) = (unsigned int)v16;
      *(_QWORD *)(v99 + 32) = *(unsigned int *)(a1 + 40);
      WdLogGlobalForLineNumber = 883;
    }
    else if ( v49 < 0 )
    {
      v113 = v49;
      WdLogSingleEntry2(2LL, v49, v45);
      WdLogGlobalForLineNumber = 888;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to determine whether mode is supported by monitor. (Status = 0x%I64x, spVidPnTargetModeInfo.GetR"
                  "esource() = 0x%I64x)",
        v113,
        (__int64)v45,
        0LL,
        0LL,
        0LL);
      if ( v174[0] )
        v176(v177, v45);
      if ( v168[0] )
        v170(v171, v39);
      if ( v163[0] )
        v165(v166, v32);
      if ( v25 )
        v155(v154, v25);
      return v179;
    }
  }
  v149 = 0;
  if ( v191.VideoSignalInfo.ActiveSize.cx == v32[2] && v191.VideoSignalInfo.ActiveSize.cy == v32[3] )
  {
    LOBYTE(v47) = v152;
    if ( (*(int (__fastcall **)(unsigned int *, struct _D3DKMDT_MONITOR_SOURCE_MODE *, __int64, char *))(v173 + 80))(
           v45,
           &v191,
           v47,
           &v149) < 0 )
      v149 = 0;
  }
  v52 = *(_QWORD *)(a1 + 32);
  v53 = *(unsigned int *)(a1 + 40);
  v54 = *(_QWORD *)(a1 + 24);
  v161 = 0LL;
  v55 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64 *))(v52 + 24))(v54, v53, (unsigned int)v16, &v161);
  LODWORD(v160) = v55;
  if ( v55 < 0 )
  {
    v121 = v55;
    WdLogSingleEntry1(2LL);
    v122 = L"Failed call to DXGDMM_VIDPNTOPOLOGY_INTERFACE::pfnAcquirePathInfo. (Status = 0x%I64x)";
    WdLogGlobalForLineNumber = 925;
LABEL_204:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v122, v121, 0LL, 0LL, 0LL, 0LL);
LABEL_206:
    if ( v174[0] )
      v176(v177, v45);
    if ( v168[0] )
    {
      v116 = v39;
LABEL_210:
      v170(v171, v116);
    }
    goto LABEL_211;
  }
  v56 = *(struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT *)(v161 + 16);
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(a1 + 32) + 32LL))(*(_QWORD *)(a1 + 24));
  if ( v32[2] == v45[5] && v32[3] == v45[6] )
    v57 = (char)v56;
  else
    v57 = -((*(_BYTE *)&v56 & 0x1E) != 0);
  v58 = v57 & 1;
  LOBYTE(v156[0]) = v58;
  v59 = 0;
  while ( 2 )
  {
    v179 = v59;
    if ( v59 < 5 && v58 )
    {
      v157 = dword_1400F3C80[v59];
      if ( !BmlIsSupportedPathScaling(v157, v56) )
        goto LABEL_87;
      LOBYTE(v139) = 1;
      v60 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int))(*(_QWORD *)(a1 + 32) + 64LL))(
              *(_QWORD *)(a1 + 24),
              *(unsigned int *)(a1 + 40),
              (unsigned int)v16,
              (unsigned int)v157,
              v139);
      LODWORD(v160) = v60;
      if ( v60 == -1071774970 )
      {
        v104 = v157;
        WdLogSingleEntry4(1LL, v157, *(unsigned int *)(a1 + 40), v16, -1071774970LL);
        v105 = L"Failed to pin the reported-as-supported scaling mode 0x%I64x on the path (0x%I64x, 0x%I64x) because of no"
                "t supported by driver, returning 0x%I64x.";
        WdLogGlobalForLineNumber = 976;
LABEL_130:
        DxgkLogInternalTriageEvent(
          0LL,
          262147,
          -1,
          (__int64)v105,
          v104,
          *(unsigned int *)(a1 + 40),
          v16,
          -1071774970LL,
          0LL);
        if ( v174[0] )
          v176(v177, v45);
        if ( v168[0] )
          v170(v171, v169);
        if ( v163[0] )
          v165(v166, v32);
        if ( v25 )
          v155(v154, v25);
        return 3223192326LL;
      }
      if ( v60 < 0 )
      {
        v118 = v157;
        v119 = v159;
        v120 = v60;
        WdLogSingleEntry5(2LL, v60, *(unsigned int *)(a1 + 40), v159, *(_QWORD *)(a1 + 24), v157);
        v147 = *(_QWORD *)(a1 + 24);
        v143 = *(unsigned int *)(a1 + 40);
        WdLogGlobalForLineNumber = 982;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Unable to set scaling on the path. ( Status = 0x%I64x, m_VidPnSourceId = 0x%I64x, PrimVidPnTargetId ="
                    " 0x%I64x, m_hVidPnTopology = 0x%I64x, PathScaling = 0x%I64x)",
          v120,
          v143,
          v119,
          v147,
          v118);
        if ( v174[0] )
          v176(v177, v45);
        if ( v168[0] )
          v170(v171, v169);
        v114 = v163[0] == 0;
        goto LABEL_212;
      }
      v61 = *(_QWORD *)(a1 + 32);
      v62 = *(unsigned int *)(a1 + 40);
      v63 = *(_QWORD *)(a1 + 24);
      v161 = 0LL;
      v64 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64 *))(v61 + 24))(
              v63,
              v62,
              (unsigned int)v16,
              &v161);
      LODWORD(v160) = v64;
      if ( v64 < 0 )
      {
        v117 = v64;
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 997;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed call to DXGDMM_VIDPNTOPOLOGY_INTERFACE::pfnAcquirePathInfo. (Status = 0x%I64x)",
          v117,
          0LL,
          0LL,
          0LL,
          0LL);
        if ( v174[0] )
          v176(v177, v45);
        if ( v168[0] )
          v170(v171, v169);
        v114 = v163[0] == 0;
        goto LABEL_212;
      }
      v65 = *(struct _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT *)(v161 + 24);
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(a1 + 32) + 32LL))(*(_QWORD *)(a1 + 24));
      v66 = D3DKMDT_VPPR_IDENTITY;
LABEL_46:
      v153 = v66;
      if ( v66 > D3DKMDT_VPPR_ROTATE270 )
      {
        v16 = v159;
        if ( *(_DWORD *)(a1 + 52) > 1u )
        {
          v110 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(a1 + 32) + 88LL))(
                   *(_QWORD *)(a1 + 24),
                   *(unsigned int *)(a1 + 40),
                   v159,
                   0LL);
          LODWORD(v160) = v110;
          if ( v110 < 0 )
          {
            v111 = v110;
            WdLogSingleEntry4(2LL, v110, *(_QWORD *)(a1 + 24), *(unsigned int *)(a1 + 40), v16);
            v112 = *(unsigned int *)(a1 + 40);
            WdLogGlobalForLineNumber = 1194;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Unable to unpin rotation. (Status = 0x%I64x, m_hVidPnTopology = 0x%I64x, m_VidPnSourceId = 0x%I64"
                        "x, PrimVidPnTargetId = 0x%I64x)",
              v111,
              *(_QWORD *)(a1 + 24),
              v112,
              v16,
              0LL);
            goto LABEL_188;
          }
        }
LABEL_87:
        v58 = v156[0];
        v59 = v179 + 1;
        continue;
      }
      if ( BmlIsSupportedPathRotation(v66, v65) )
      {
        v182.IntegerRefreshRate = 0;
        *(_OWORD *)&v182.DisplayOrientation = 0LL;
        v67 = *((_QWORD *)v187 + 396) || !*(_BYTE *)(*((_QWORD *)v187 + 395) + 289LL) || v153 == D3DKMDT_VPPR_IDENTITY;
        if ( v149 && v157 == D3DKMDT_VPPS_IDENTITY )
          v68 = 64;
        else
          v68 = 0;
        v69 = v45[14];
        v182.Format = v32[7];
        v182.Width = v32[4];
        v182.Height = v32[5];
        *(_DWORD *)&v182.Flags = *(_DWORD *)&v182.Flags & 0xFFFFFFFC | v150 & 1;
        v70 = (int)(v69 << 29) >> 29;
        v71 = *(D3DDDI_RATIONAL *)(v45 + 7);
        v148 = 0;
        v182.ScanLineOrdering = v70;
        *((_DWORD *)&v182.Flags + 1) = (v67 << 7) | v68 & 0x17F | v183 & 0xF | *((_WORD *)&v182.Flags + 2) & 0x100;
        v182.RefreshRate = v71;
        v72 = (v69 >> 3) & 0x3F;
        if ( v72 )
          v182.RefreshRate.Denominator = v72 * v71.Denominator;
        v182.IntegerRefreshRate = DmmMapVSyncFromRationalToInteger(&v182.RefreshRate, v70, &v148);
        ConvertDMMScalingToGdiScaling((unsigned int)v157, &v182.DisplayFixedOutput);
        v73 = D3DKMDT_VPPR_GET_CONTENT_ROTATION(v153) - 1;
        if ( !v73 )
          goto LABEL_58;
        v75 = v73 - 1;
        if ( v75 )
        {
          v76 = v75 - 1;
          if ( !v76 )
          {
            v182.DisplayOrientation = D3DDDI_ROTATION_180;
            goto LABEL_59;
          }
          if ( v76 == 1 )
          {
            v182.DisplayOrientation = D3DDDI_ROTATION_270;
            goto LABEL_59;
          }
          WdLogSingleEntry3(3LL, v74, *v32, *v45);
          LODWORD(v74) = v153;
          WdLogGlobalForLineNumber = 2694;
LABEL_58:
          v182.DisplayOrientation = D3DDDI_ROTATION_IDENTITY;
          goto LABEL_59;
        }
        v182.DisplayOrientation = D3DDDI_ROTATION_90;
LABEL_59:
        v77 = *((_DWORD *)&v182.Flags + 1);
        if ( v32[1] != 3 )
        {
          if ( v32[1] != 4 )
          {
LABEL_61:
            v78 = *(_DWORD *)(a1 + 52) <= 1u;
            v162 = v77;
            if ( !v78 )
            {
              LOBYTE(v139) = 0;
              v100 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int))(*(_QWORD *)(a1 + 32) + 80LL))(
                       *(_QWORD *)(a1 + 24),
                       *(unsigned int *)(a1 + 40),
                       v159,
                       (unsigned int)v74,
                       v139);
              v158 = v100;
              if ( v100 == -1071774970 )
              {
                v16 = v159;
                v104 = v153;
                WdLogSingleEntry4(1LL, v153, *(unsigned int *)(a1 + 40), v159, -1071774970LL);
                v105 = L"Failed to pin the reported-as-supported rotation mode 0x%I64x on the path (0x%I64x, 0x%I64x) beca"
                        "use of not supported by driver, returning 0x%I64x.";
                WdLogGlobalForLineNumber = 1063;
                goto LABEL_130;
              }
              if ( v100 < 0 )
              {
                v101 = v153;
                v102 = v159;
                v103 = v100;
                WdLogSingleEntry5(2LL, v100, *(unsigned int *)(a1 + 40), v159, *(_QWORD *)(a1 + 24), v153);
                v146 = *(_QWORD *)(a1 + 24);
                v141 = *(unsigned int *)(a1 + 40);
                WdLogGlobalForLineNumber = 1069;
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"Unable to set rotation on the path. (Status = 0x%I64x, m_VidPnSourceId = 0x%I64x, PrimVidPnTa"
                            "rgetId = 0x%I64x, m_hVidPnTopology = 0x%I64x, PathRotation = 0x%I64x)",
                  v103,
                  v141,
                  v102,
                  v146,
                  v101);
                if ( v174[0] )
                  v176(v177, v45);
                if ( v168[0] )
                  v170(v171, v169);
                v94 = v163[0] == 0;
                goto LABEL_97;
              }
            }
            if ( v182.Format != D3DDDIFMT_A8R8G8B8 && *(_BYTE *)(a1 + 44)
              || v182.Format <= (unsigned int)D3DDDIFMT_P8 && (v79 = 0x20003900000LL, _bittest64(&v79, v182.Format)) )
            {
              if ( v186 )
              {
                v158 = MODE_UNION_LIST::AddUniqueMode((MODE_UNION_LIST *)(a1 + 104), &v182);
                if ( v158 < 0 )
                  goto LABEL_92;
              }
            }
            else
            {
              v148 = v148 != 0;
              v158 = MODE_UNION_LIST::AddUniqueMode((MODE_UNION_LIST *)(a1 + 64), &v182);
              if ( v158 < 0
                || v148
                && (++v182.IntegerRefreshRate,
                    *(_DWORD *)&v182.Flags |= 2u,
                    v158 = MODE_UNION_LIST::AddUniqueMode((MODE_UNION_LIST *)(a1 + 64), &v182),
                    v158 < 0) )
              {
LABEL_92:
                if ( v174[0] )
                  v176(v177, v45);
                if ( v168[0] )
                  v170(v171, v169);
                v94 = v163[0] == 0;
LABEL_97:
                if ( !v94 )
                  v165(v166, v32);
                if ( v25 )
                  v155(v154, v25);
                return (unsigned int)v158;
              }
              v80 = *(_QWORD *)(v45 + 7);
              v81 = v45[14] >> 3;
              v180 = v80;
              v82 = v81 & 0x3F;
              if ( v82 )
                v83 = (unsigned int)(v82 * HIDWORD(v80));
              else
                v83 = HIDWORD(v180);
              v161 = v83;
              if ( !IsUnspecifiedFrequency((const struct _D3DDDI_RATIONAL *)(v45 + 17)) )
              {
                v86 = v180;
                if ( *v84 != (_DWORD)v180 || v45[18] != v85 )
                {
                  for ( j = 0LL; ; j = (unsigned int)(v158 + 1) )
                  {
                    v158 = j;
                    if ( (unsigned int)j >= 7 )
                      break;
                    v160 = j;
                    v88 = (unsigned int *)((char *)&unk_1400F3C48 + 8 * j);
                    if ( !v85
                      || (v89 = v88[1], !(_DWORD)v89)
                      || (v90 = 100000 * (unsigned __int64)v86 / v85,
                          v91 = 100000 * (unsigned __int64)*v88 / v89,
                          v90 < v91)
                      || v90 > v91 )
                    {
                      if ( (*(int (__fastcall **)(__int64, _QWORD, unsigned int *, __int64))(v173 + 88))(
                             v169,
                             *v45,
                             v88,
                             1LL) >= 0 )
                      {
                        v92 = (unsigned int)dword_1400F3C4C[2 * v160];
                        v93 = (unsigned int)*(_QWORD *)(8 * v160 + 998472 + 0x140000000LL);
                        v182.RefreshRate = *(D3DDDI_RATIONAL *)(8 * v160 + 998472 + 0x140000000LL);
                        v182.IntegerRefreshRate = DivideAndRound(v93, v92);
                        if ( !MODE_UNION_LIST::FindMode((MODE_UNION_LIST *)(a1 + 64), &v182) )
                        {
                          v162 |= 0x100u;
                          *((_DWORD *)&v182.Flags + 1) = v162;
                          LODWORD(v160) = MODE_UNION_LIST::AddUniqueMode((MODE_UNION_LIST *)(a1 + 64), &v182);
                          if ( (int)v160 < 0 )
                          {
                            if ( v174[0] )
                              v176(v177, v45);
                            if ( v168[0] )
                              v170(v171, v169);
                            v114 = v163[0] == 0;
                            goto LABEL_212;
                          }
                        }
                      }
                      v85 = v161;
                    }
                    v86 = v180;
                  }
                }
              }
            }
            goto LABEL_67;
          }
          v77 = *((_DWORD *)&v182.Flags + 1) | 0x20;
        }
        v77 |= 0x10u;
        *(_DWORD *)&v182.Flags |= 1u;
        *((_DWORD *)&v182.Flags + 1) = v77;
        goto LABEL_61;
      }
LABEL_67:
      v66 = v153 + 1;
      goto LABEL_46;
    }
    break;
  }
  v95 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(a1 + 32) + 72LL))(
          *(_QWORD *)(a1 + 24),
          *(unsigned int *)(a1 + 40),
          (unsigned int)v16,
          0LL);
  LODWORD(v160) = v95;
  if ( v95 >= 0 )
  {
    v39 = v169;
    goto LABEL_104;
  }
  v115 = v95;
  WdLogSingleEntry4(2LL, v95, *(unsigned int *)(a1 + 40), *(_QWORD *)(a1 + 24), v16);
  v145 = *(_QWORD *)(a1 + 24);
  v142 = *(unsigned int *)(a1 + 40);
  WdLogGlobalForLineNumber = 1208;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Unable to unpin scaling. (Status = 0x%I64x, m_VidPnSourceId = 0x%I64x, m_hVidPnTopology = 0x%I64x, PrimVidP"
              "nTargetId = 0x%I64x)",
    v115,
    v142,
    v145,
    v16,
    0LL);
LABEL_188:
  if ( v174[0] )
    v176(v177, v45);
  if ( v168[0] )
  {
    v116 = v169;
    goto LABEL_210;
  }
LABEL_211:
  v114 = v163[0] == 0;
LABEL_212:
  if ( !v114 )
    v165(v166, v32);
  if ( v25 )
    v155(v154, v25);
  return (unsigned int)v160;
}
