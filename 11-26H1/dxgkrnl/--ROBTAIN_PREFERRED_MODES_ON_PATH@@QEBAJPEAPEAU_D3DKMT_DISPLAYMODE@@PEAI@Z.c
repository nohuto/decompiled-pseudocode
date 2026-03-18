/*
 * XREFs of ??ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x14034A3DC
 * Callers:
 *     ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z @ 0x140363C84 (-GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?Own@?$AutoRelease@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@P6AJPEAUD3DKMDT_HVIDPN__@@PEAU1@@ZPEAU2@@DXGDMM@@QEAAXPEAUD3DKMDT_HVIDPNTARGETMODESET__@@Q6AJPEAUD3DKMDT_HVIDPN__@@0@Z1@Z @ 0x140055948 (-Own@-$AutoRelease@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@P6AJPEAUD3DKMDT_HVIDPN__@@PEAU1@@ZPEAU2@@D.c)
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x140056880 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     _PopulateDisplayModeFromPresentPath @ 0x1402D8FF0 (_PopulateDisplayModeFromPresentPath.c)
 *     ?BmlIsSupportedPathRotation@@YA_NW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@U_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@@Z @ 0x1402D947C (-BmlIsSupportedPathRotation@@YA_NW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@U_D3DKMDT_VIDPN_PRESENT.c)
 *     ?AddUniqueMode@MODE_UNION_LIST@@QEAAJAEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1402D9570 (-AddUniqueMode@MODE_UNION_LIST@@QEAAJAEBU_D3DKMT_DISPLAYMODE@@@Z.c)
 *     ?BmlIsSupportedPathScaling@@YA_NW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@U_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@@Z @ 0x1402D9ACC (-BmlIsSupportedPathScaling@@YA_NW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@U_D3DKMDT_VIDPN_PRESENT_P.c)
 *     ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x140320470 (-DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 *     ?DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x140349074 (-DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z.c)
 *     DxgkQueryDmmInterface @ 0x140365A0C (DxgkQueryDmmInterface.c)
 *     ?GetUniqueModes@MODE_UNION_LIST@@QEAAJ_KPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x140427760 (-GetUniqueModes@MODE_UNION_LIST@@QEAAJ_KPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 */

__int64 __fastcall OBTAIN_PREFERRED_MODES_ON_PATH::operator()(
        _QWORD *a1,
        struct _D3DKMT_DISPLAYMODE **a2,
        unsigned int *a3)
{
  int PreferredMonitorSourceModeOnTarget; // eax
  DXGADAPTER *v5; // rcx
  int DmmInterface; // eax
  __int64 v7; // rdi
  const wchar_t *v8; // r9
  __int64 v10; // r14
  DXGADAPTER *v11; // rcx
  int v12; // eax
  void (__fastcall *v13)(DXGADAPTER *, __int64); // r14
  DXGADAPTER *v14; // r12
  __int64 v15; // rdi
  __int64 (__fastcall *v16)(__int64, __int64 *, __int64 *); // rax
  int v17; // eax
  __int64 v18; // r15
  DXGADAPTER *v19; // rax
  const wchar_t *v20; // r9
  int v21; // eax
  unsigned int v22; // edx
  DXGADAPTER *v23; // rcx
  int VideoOutputTechnology; // eax
  __int64 v25; // rdx
  __int64 (__fastcall *v26)(__int64, __int64, __int64 *, __int64 *); // rax
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // r15
  __int64 (__fastcall *v30)(__int64, __int64 *); // rax
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v31; // eax
  __int64 v32; // rbx
  __int64 v33; // r8
  unsigned int *v34; // r14
  int v35; // eax
  int v36; // ecx
  int v37; // edx
  int v38; // eax
  int v39; // eax
  __int64 v40; // rdx
  __int64 (__fastcall *v41)(__int64, __int64, __int64 *, __int64 *); // rax
  int v42; // eax
  __int64 v43; // r12
  __int64 v44; // r12
  __int64 (__fastcall *v45)(__int64, enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *); // rax
  int v46; // eax
  __int64 v47; // r8
  unsigned int *v48; // rbx
  __int64 v49; // r8
  int v50; // eax
  __int64 v51; // r8
  __int64 v52; // rdx
  int v53; // eax
  struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT v54; // ebx
  int v55; // eax
  __int64 v56; // r8
  __int64 v57; // rdx
  int v58; // eax
  struct _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT v59; // ebx
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION i; // eax
  int v61; // eax
  int v62; // eax
  __int64 v63; // rbx
  int v64; // eax
  int v65; // eax
  bool v66; // zf
  __int64 v67; // rbx
  const wchar_t *v68; // r9
  __int64 v69; // rbx
  __int64 v70; // rbx
  __int64 v71; // rax
  unsigned int v72; // eax
  unsigned __int64 v73; // rax
  unsigned __int64 v74; // kr00_8
  struct _D3DKMT_DISPLAYMODE *v75; // rax
  int UniqueModes; // eax
  __int64 v77; // rbx
  int v78; // [rsp+20h] [rbp-E0h]
  __int64 v79; // [rsp+20h] [rbp-E0h]
  __int64 v80; // [rsp+28h] [rbp-D8h]
  __int64 v81; // [rsp+28h] [rbp-D8h]
  __int64 v82; // [rsp+30h] [rbp-D0h]
  char v83; // [rsp+50h] [rbp-B0h]
  char v84; // [rsp+51h] [rbp-AFh] BYREF
  unsigned __int8 v85[6]; // [rsp+52h] [rbp-AEh] BYREF
  __int64 v86; // [rsp+58h] [rbp-A8h] BYREF
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v87[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v88; // [rsp+68h] [rbp-98h] BYREF
  DXGADAPTER *v89; // [rsp+70h] [rbp-90h]
  void (__fastcall *v90)(DXGADAPTER *, __int64); // [rsp+78h] [rbp-88h]
  char v91[8]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v92; // [rsp+88h] [rbp-78h]
  void (__fastcall *v93)(__int64, __int64); // [rsp+90h] [rbp-70h]
  __int64 v94; // [rsp+98h] [rbp-68h]
  int v95; // [rsp+A0h] [rbp-60h]
  char v96[8]; // [rsp+A8h] [rbp-58h] BYREF
  int v97[2]; // [rsp+B0h] [rbp-50h]
  void (__fastcall *v98)(__int64, unsigned int *); // [rsp+B8h] [rbp-48h]
  __int64 v99; // [rsp+C0h] [rbp-40h]
  int v100; // [rsp+C8h] [rbp-38h]
  char v101[8]; // [rsp+D0h] [rbp-30h] BYREF
  int v102[2]; // [rsp+D8h] [rbp-28h]
  void (__fastcall *v103)(__int64, _QWORD); // [rsp+E0h] [rbp-20h]
  __int64 v104; // [rsp+E8h] [rbp-18h]
  int v105; // [rsp+F0h] [rbp-10h]
  __int64 v106; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v107; // [rsp+100h] [rbp+0h] BYREF
  char v108[8]; // [rsp+108h] [rbp+8h] BYREF
  __int64 v109; // [rsp+110h] [rbp+10h]
  void (__fastcall *v110)(__int64, __int64); // [rsp+118h] [rbp+18h]
  __int64 v111; // [rsp+120h] [rbp+20h]
  int v112; // [rsp+128h] [rbp+28h]
  __int64 v113; // [rsp+130h] [rbp+30h] BYREF
  __int64 v114; // [rsp+138h] [rbp+38h] BYREF
  unsigned int *v115; // [rsp+140h] [rbp+40h]
  struct _D3DKMT_DISPLAYMODE **v116; // [rsp+148h] [rbp+48h]
  struct _D3DKMT_DISPLAYMODE v117; // [rsp+150h] [rbp+50h] BYREF
  struct _D3DKMDT_MONITOR_SOURCE_MODE v118; // [rsp+180h] [rbp+80h] BYREF

  v116 = a2;
  v115 = a3;
  memset(&v118, 0, sizeof(v118));
  PreferredMonitorSourceModeOnTarget = DmmGetPreferredMonitorSourceModeOnTarget(
                                         (DXGADAPTER *)*a1,
                                         *((_DWORD *)a1 + 3),
                                         &v118);
  if ( PreferredMonitorSourceModeOnTarget < 0 )
  {
    WdLogSingleEntry3(3LL, *a1, *((unsigned int *)a1 + 3), PreferredMonitorSourceModeOnTarget);
    WdLogGlobalForLineNumber = 1356;
    return 0LL;
  }
  v5 = (DXGADAPTER *)*a1;
  v88 = 0LL;
  DmmInterface = DxgkQueryDmmInterface(v5);
  v7 = DmmInterface;
  if ( DmmInterface < 0 )
  {
    WdLogSingleEntry2(2LL, *a1, DmmInterface);
    v8 = L"Failed to QueryDxgDmmInterface on hAdapter 0x%I64x (status = 0x%I64x).";
    WdLogGlobalForLineNumber = 1368;
LABEL_5:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v8, *a1, v7, 0LL, 0LL, 0LL);
    return (unsigned int)v7;
  }
  v10 = v88;
  v11 = (DXGADAPTER *)*a1;
  v113 = 0LL;
  v86 = 0LL;
  v12 = (*(__int64 (__fastcall **)(DXGADAPTER *, __int64 *, __int64 *))(v88 + 40))(v11, &v86, &v113);
  v7 = v12;
  if ( v12 < 0 )
  {
    WdLogSingleEntry2(2LL, *a1, v12);
    v8 = L"Failed call to create an empty VidPN on adapter 0x%I64x (status = 0x%I64x).";
    WdLogGlobalForLineNumber = 1387;
    goto LABEL_5;
  }
  v13 = *(void (__fastcall **)(DXGADAPTER *, __int64))(v10 + 64);
  v14 = (DXGADAPTER *)*a1;
  v15 = v86;
  v107 = 0LL;
  v106 = 0LL;
  v16 = *(__int64 (__fastcall **)(__int64, __int64 *, __int64 *))v113;
  v89 = v14;
  v90 = v13;
  v17 = v16(v86, &v107, &v106);
  v18 = v17;
  if ( v17 < 0 )
  {
    WdLogSingleEntry3(2LL, v15, *a1, v17);
    v19 = (DXGADAPTER *)*a1;
    v20 = L"Failed to get VidPn topology from hVidPn 0x%I64x on Adapter 0x%I64x (Status=0x%I64x).";
    WdLogGlobalForLineNumber = 1410;
    v82 = v18;
    v80 = (__int64)v19;
LABEL_10:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v20, v15, v80, v82, 0LL, 0LL);
LABEL_11:
    if ( v15 )
      v13(v14, v15);
    return (unsigned int)v18;
  }
  v21 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, _WORD, int))(v106 + 40))(
          v107,
          *((unsigned int *)a1 + 2),
          *((unsigned int *)a1 + 3),
          1LL,
          0,
          2);
  v22 = *((_DWORD *)a1 + 3);
  v18 = v21;
  if ( v21 < 0 )
  {
    WdLogSingleEntry4(2LL, *((unsigned int *)a1 + 2), v22, v15, v21);
    v81 = *((unsigned int *)a1 + 3);
    v79 = *((unsigned int *)a1 + 2);
    WdLogGlobalForLineNumber = 1429;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to Add VidPn path from source 0x%I64x to target 0x%I64x on VidPn 0x%I64x (Status=0x%I64x).",
      v79,
      v81,
      v15,
      v18,
      0LL);
    goto LABEL_11;
  }
  v23 = (DXGADAPTER *)*a1;
  v87[0] = D3DKMDT_VOT_HD15;
  VideoOutputTechnology = DmmGetVideoOutputTechnology(v23, v22, 0LL, v87);
  v18 = VideoOutputTechnology;
  if ( VideoOutputTechnology < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 1441;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed call to DmmGetVideoOutputTechnology(Status = 0x%I64x)",
      v18,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_11;
  }
  if ( v87[0] == D3DKMDT_VOT_MIRACAST
    || v87[0] == D3DKMDT_VOT_INDIRECT_WIRED
    || (v83 = 0, v87[0] == (D3DKMDT_VOT_SVIDEO_7PIN|D3DKMDT_VOT_INDIRECT_WIRED)) )
  {
    v83 = 1;
  }
  v25 = *((unsigned int *)a1 + 2);
  v114 = 0LL;
  v88 = 0LL;
  v26 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *, __int64 *))(v113 + 8);
  v92 = 0LL;
  v93 = 0LL;
  v94 = 0LL;
  v95 = 0;
  v91[0] = 0;
  v27 = v26(v15, v25, &v88, &v114);
  v18 = v27;
  if ( v27 < 0 )
  {
    WdLogSingleEntry3(2LL, v15, *((unsigned int *)a1 + 2), v27);
    v28 = *((unsigned int *)a1 + 2);
    v20 = L"Failed to acquire VidPn source mode set from VidPn 0x%I64x for VidPn source ID 0x%I64x (Status = 0x%I64x).";
    WdLogGlobalForLineNumber = 1463;
    v82 = v18;
    v80 = v28;
    goto LABEL_10;
  }
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
    (__int64)v91,
    v88,
    *(_QWORD *)(v113 + 16),
    v15);
  v29 = v92;
  v88 = 0LL;
  *(_QWORD *)v97 = 0LL;
  v30 = *(__int64 (__fastcall **)(__int64, __int64 *))(v114 + 8);
  v98 = 0LL;
  v99 = 0LL;
  v100 = 0;
  v96[0] = 0;
  v31 = (unsigned int)v30(v92, &v88);
  v87[0] = v31;
  if ( v31 >= D3DKMDT_VOT_HD15 )
  {
    while ( 1 )
    {
      DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
        (__int64)v96,
        v88,
        *(_QWORD *)(v114 + 32),
        v29);
      v34 = *(unsigned int **)v97;
      if ( !*(_QWORD *)v97 )
        break;
      v35 = *(_DWORD *)(*(_QWORD *)v97 + 4LL);
      if ( v35 == 1 || (unsigned int)(v35 - 3) <= 1 )
      {
        v36 = *(_DWORD *)(*(_QWORD *)v97 + 8LL);
        if ( v36 == *(_DWORD *)(*(_QWORD *)v97 + 16LL) )
        {
          v37 = *(_DWORD *)(*(_QWORD *)v97 + 12LL);
          if ( v37 == *(_DWORD *)(*(_QWORD *)v97 + 20LL) )
          {
            v38 = *(_DWORD *)(*(_QWORD *)v97 + 28LL);
            if ( (v38 == 21 || v38 == 22)
              && v36 == v118.VideoSignalInfo.ActiveSize.cx
              && v37 == v118.VideoSignalInfo.ActiveSize.cy )
            {
              LOBYTE(v33) = 1;
              v39 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v114 + 40))(
                      v29,
                      (unsigned int)**(_DWORD **)v97,
                      v33);
              if ( v39 >= 0 )
              {
                v40 = *((unsigned int *)a1 + 3);
                v88 = 0LL;
                v86 = 0LL;
                v41 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *, __int64 *))(v113 + 24);
                v109 = 0LL;
                v110 = 0LL;
                v111 = 0LL;
                v112 = 0;
                v108[0] = 0;
                v42 = v41(v15, v40, &v86, &v88);
                v43 = v42;
                if ( v42 < 0 )
                {
                  WdLogSingleEntry3(2LL, v15, *((unsigned int *)a1 + 3), v42);
                  v71 = *((unsigned int *)a1 + 3);
                  WdLogGlobalForLineNumber = 1561;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    0x40000,
                    -1,
                    (__int64)L"Failed to acquire target mode set from VidPn 0x%I64x for Target 0x%I64x (Status = 0x%I64x).",
                    v15,
                    v71,
                    v43,
                    0LL,
                    0LL);
                  goto LABEL_97;
                }
                DXGDMM::AutoRelease<D3DKMDT_HVIDPNTARGETMODESET__ *,long (*)(D3DKMDT_HVIDPN__ *,D3DKMDT_HVIDPNTARGETMODESET__ *),D3DKMDT_HVIDPN__ *>::Own(
                  (__int64)v108,
                  v86,
                  *(_QWORD *)(v113 + 32),
                  v15);
                v44 = v109;
                *(_QWORD *)v87 = 0LL;
                *(_QWORD *)v102 = 0LL;
                v45 = *(__int64 (__fastcall **)(__int64, enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *))(v88 + 8);
                v103 = 0LL;
                v104 = 0LL;
                v105 = 0;
                v101[0] = 0;
                v46 = v45(v109, v87);
                LODWORD(v86) = v46;
                if ( v46 < 0 )
                {
                  v70 = v46;
                  WdLogSingleEntry2(2LL, v44, v46);
                  WdLogGlobalForLineNumber = 1582;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    0x40000,
                    -1,
                    (__int64)L"Failed to acquire first target mode info from target mode set 0x%I64x (Status = 0x%I64x).",
                    v44,
                    v70,
                    0LL,
                    0LL,
                    0LL);
LABEL_86:
                  if ( v108[0] )
                    v110(v111, v44);
                  if ( v96[0] )
                    v98(v99, v34);
                  v66 = v91[0] == 0;
LABEL_91:
                  if ( !v66 )
                    v93(v94, v29);
                  if ( v15 )
                    v90(v89, v15);
                  return (unsigned int)v86;
                }
                while ( 1 )
                {
                  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
                    (__int64)v101,
                    *(__int64 *)v87,
                    *(_QWORD *)(v88 + 32),
                    v44);
                  v48 = *(unsigned int **)v102;
                  if ( !*(_QWORD *)v102 )
                    break;
                  LOBYTE(v47) = v83;
                  v84 = 0;
                  if ( (*(int (__fastcall **)(_QWORD, struct _D3DKMDT_MONITOR_SOURCE_MODE *, __int64, char *))(v88 + 80))(
                         *(_QWORD *)v102,
                         &v118,
                         v47,
                         &v84) >= 0
                    && v84 )
                  {
                    LOBYTE(v49) = 1;
                    v50 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v88 + 48))(v44, *v48, v49);
                    if ( v50 >= 0 )
                    {
                      v51 = *((unsigned int *)a1 + 3);
                      v52 = *((unsigned int *)a1 + 2);
                      *(_QWORD *)v87 = 0LL;
                      v53 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *))(v106 + 24))(
                              v107,
                              v52,
                              v51,
                              v87);
                      LODWORD(v86) = v53;
                      if ( v53 < 0 )
                      {
                        v67 = v53;
                        WdLogSingleEntry3(2LL, *((unsigned int *)a1 + 2), *((unsigned int *)a1 + 3), v53);
                        v68 = L"Failed to acquire VidPn path info from source 0x%I64x to target 0x%I64x (Status = 0x%I64x).";
                        WdLogGlobalForLineNumber = 1632;
                        goto LABEL_78;
                      }
                      v54 = *(struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT *)(*(_QWORD *)v87 + 16LL);
                      (*(void (__fastcall **)(__int64))(v106 + 32))(v107);
                      if ( BmlIsSupportedPathScaling(D3DKMDT_VPPS_IDENTITY, v54) )
                      {
                        LOBYTE(v78) = 1;
                        v55 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, int))(v106 + 64))(
                                v107,
                                *((unsigned int *)a1 + 2),
                                *((unsigned int *)a1 + 3),
                                1LL,
                                v78);
                        LODWORD(v86) = v55;
                        if ( v55 < 0 )
                        {
                          v67 = v55;
                          WdLogSingleEntry3(2LL, *((unsigned int *)a1 + 2), *((unsigned int *)a1 + 3), v55);
                          v68 = L"Failed to pin D3DKMDT_VPPS_IDENTITY on path from source 0x%I64x to target 0x%I64x (Status = 0x%I64x).";
                          WdLogGlobalForLineNumber = 1657;
                        }
                        else
                        {
                          v56 = *((unsigned int *)a1 + 3);
                          v57 = *((unsigned int *)a1 + 2);
                          *(_QWORD *)v87 = 0LL;
                          v58 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *))(v106 + 24))(
                                  v107,
                                  v57,
                                  v56,
                                  v87);
                          LODWORD(v86) = v58;
                          if ( v58 < 0 )
                          {
                            v67 = v58;
                            WdLogSingleEntry3(2LL, *((unsigned int *)a1 + 2), *((unsigned int *)a1 + 3), v58);
                            v68 = L"Failed to acquire path info on path from source 0x%I64x to target 0x%I64x (Status = 0x%I64x).";
                            WdLogGlobalForLineNumber = 1674;
                          }
                          else
                          {
                            v59 = *(struct _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT *)(*(_QWORD *)v87 + 24LL);
                            (*(void (__fastcall **)(__int64))(v106 + 32))(v107);
                            for ( i = D3DKMDT_VPPR_IDENTITY; ; i = v87[0] + 1 )
                            {
                              v87[0] = i;
                              if ( i > D3DKMDT_VPPR_ROTATE270 )
                                break;
                              if ( BmlIsSupportedPathRotation(i, v59) )
                              {
                                v85[0] = 0;
                                memset(&v117, 0, sizeof(v117));
                                PopulateDisplayModeFromPresentPath(
                                  v34,
                                  *(unsigned int **)v102,
                                  1,
                                  v87[0],
                                  1,
                                  1,
                                  0,
                                  2u,
                                  (struct _D3DDDI_RATIONAL *)&v117,
                                  v85);
                                LODWORD(v86) = MODE_UNION_LIST::AddUniqueMode((MODE_UNION_LIST *)(a1 + 3), &v117);
                                if ( (int)v86 < 0
                                  || v85[0]
                                  && (++v117.IntegerRefreshRate,
                                      *(_DWORD *)&v117.Flags |= 2u,
                                      LODWORD(v86) = MODE_UNION_LIST::AddUniqueMode((MODE_UNION_LIST *)(a1 + 3), &v117),
                                      (int)v86 < 0) )
                                {
                                  if ( v101[0] )
                                    v103(v104, *(_QWORD *)v102);
                                  if ( v108[0] )
                                    v110(v111, v44);
                                  if ( v96[0] )
                                    v98(v99, v34);
                                  v66 = v91[0] == 0;
                                  goto LABEL_91;
                                }
                              }
                            }
                            v61 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(v106 + 72))(
                                    v107,
                                    *((unsigned int *)a1 + 2),
                                    *((unsigned int *)a1 + 3),
                                    0LL);
                            LODWORD(v86) = v61;
                            if ( v61 >= 0 )
                              goto LABEL_60;
                            v67 = v61;
                            WdLogSingleEntry3(2LL, *((unsigned int *)a1 + 2), *((unsigned int *)a1 + 3), v61);
                            v68 = L"Unable to unpin content scaling on path from source 0x%I64x to target 0x%I64x (Status = 0x%I64x).";
                            WdLogGlobalForLineNumber = 1773;
                          }
                        }
LABEL_78:
                        DxgkLogInternalTriageEvent(
                          0LL,
                          0x40000,
                          -1,
                          (__int64)v68,
                          *((unsigned int *)a1 + 2),
                          *((unsigned int *)a1 + 3),
                          v67,
                          0LL,
                          0LL);
LABEL_79:
                        if ( v101[0] )
                          v103(v104, *(_QWORD *)v102);
                        goto LABEL_86;
                      }
LABEL_60:
                      v48 = *(unsigned int **)v102;
                    }
                    else
                    {
                      WdLogSingleEntry3(3LL, *v48, v44, v50);
                      WdLogGlobalForLineNumber = 1615;
                    }
                  }
                  *(_QWORD *)v87 = 0LL;
                  v62 = (*(__int64 (__fastcall **)(__int64, unsigned int *, enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *))(v88 + 16))(
                          v44,
                          v48,
                          v87);
                  LODWORD(v86) = v62;
                  if ( v62 < 0 )
                  {
                    v63 = v62;
                    WdLogSingleEntry2(2LL, v44, v62);
                    WdLogGlobalForLineNumber = 1788;
                    DxgkLogInternalTriageEvent(
                      0LL,
                      0x40000,
                      -1,
                      (__int64)L"Failed to acquire next target mode info on target mode set 0x%I64x (Status = 0x%I64x).",
                      v44,
                      v63,
                      0LL,
                      0LL,
                      0LL);
                    goto LABEL_79;
                  }
                }
                v64 = (*(__int64 (__fastcall **)(__int64, _QWORD))(v88 + 56))(v44, 0LL);
                LODWORD(v86) = v64;
                if ( v64 < 0 )
                {
                  v69 = v64;
                  WdLogSingleEntry2(2LL, v44, v64);
                  WdLogGlobalForLineNumber = 1805;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    0x40000,
                    -1,
                    (__int64)L"Failed to Dunpin target mode set 0x%I64x (Status = 0x%I64x).",
                    v44,
                    v69,
                    0LL,
                    0LL,
                    0LL);
                  goto LABEL_79;
                }
                if ( v101[0] )
                  v103(v104, 0LL);
                if ( v108[0] )
                  v110(v111, v44);
              }
              else
              {
                WdLogSingleEntry3(3LL, *v34, v29, v39);
                WdLogGlobalForLineNumber = 1540;
              }
            }
          }
        }
      }
      v88 = 0LL;
      v65 = (*(__int64 (__fastcall **)(__int64, unsigned int *, __int64 *))(v114 + 16))(v29, v34, &v88);
      v43 = v65;
      if ( v65 < 0 )
      {
        WdLogSingleEntry2(2LL, v29, v65);
        WdLogGlobalForLineNumber = 1821;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to acquire next source mode info from source mode set 0x%I64x (Status = 0x%I64x).",
          v29,
          v43,
          0LL,
          0LL,
          0LL);
LABEL_97:
        if ( v96[0] )
          v98(v99, v34);
        if ( v91[0] )
          v93(v94, v29);
        if ( v15 )
          v90(v89, v15);
        return (unsigned int)v43;
      }
    }
    v72 = *((_DWORD *)a1 + 10);
    if ( v72 )
    {
      v74 = v72;
      v73 = 44LL * v72;
      if ( !is_mul_ok(v74, 0x2CuLL) )
        v73 = -1LL;
      v75 = (struct _D3DKMT_DISPLAYMODE *)operator new[](v73, 0x4B677844u, 256LL);
      *v116 = v75;
      if ( !v75 )
      {
        WdLogSingleEntry0(6LL);
        WdLogGlobalForLineNumber = 1837;
        DxgkLogInternalTriageEvent(
          0LL,
          262145,
          -1,
          (__int64)L"Unable to allocate mode list memory.",
          1837LL,
          0LL,
          0LL,
          0LL,
          0LL);
        if ( v96[0] )
          v98(v99, 0LL);
        if ( v91[0] )
          v93(v94, v29);
        if ( v15 )
          v90(v89, v15);
        return 3221225495LL;
      }
      UniqueModes = MODE_UNION_LIST::GetUniqueModes((MODE_UNION_LIST *)(a1 + 3), *((unsigned int *)a1 + 10), v75, v115);
      if ( UniqueModes < 0 )
      {
        v77 = UniqueModes;
        WdLogSingleEntry1(1LL);
        WdLogGlobalForLineNumber = 1847;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"Failed to get unique modes (Status = 0x%I64x).",
          v77,
          0LL,
          0LL,
          0LL,
          0LL);
      }
    }
    else
    {
      *v115 = 0;
    }
    if ( v96[0] )
      v98(v99, 0LL);
    if ( v91[0] )
      v93(v94, v29);
    if ( v15 )
      v90(v89, v15);
    return 0LL;
  }
  v32 = v31;
  WdLogSingleEntry2(2LL, v29, v31);
  WdLogGlobalForLineNumber = 1484;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Failed to acquire first mode info from source mode set 0x%I64x (Status = 0x%I64x).",
    v29,
    v32,
    0LL,
    0LL,
    0LL);
  if ( v91[0] )
    v93(v94, v29);
  if ( v15 )
    v13(v14, v15);
  return (unsigned int)v87[0];
}
