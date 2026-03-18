/*
 * XREFs of ?UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1401E4CF4
 * Callers:
 *     ?DxgkUpdateGdiInfo@Win81@@YAJPEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1401E45A8 (-DxgkUpdateGdiInfo@Win81@@YAJPEAXIIHPEAU_DPI_INFORMATION@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x14002E0B0 (-D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x14003B89C (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x140054320 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x140056880 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     ?D3DKMDT_VPPR_GET_CONTENT_ROTATION_PART@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x14005F79C (-D3DKMDT_VPPR_GET_CONTENT_ROTATION_PART@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ??PWin81@@YA_NAEBUtagSIZE@@0@Z @ 0x1401E4268 (--PWin81@@YA_NAEBUtagSIZE@@0@Z.c)
 *     ?AdjustDesktopScaleFactorForOverride@Win81@@YAKKUtagSIZE@@H@Z @ 0x1401E4284 (-AdjustDesktopScaleFactorForOverride@Win81@@YAKKUtagSIZE@@H@Z.c)
 *     ?DetermineViewDistance@Win81@@YA_NQEAXAEBUtagSIZE@@H1HPEAI@Z @ 0x1401E44F4 (-DetermineViewDistance@Win81@@YA_NQEAXAEBUtagSIZE@@H1HPEAI@Z.c)
 *     ?FillDpiInfo@Win81@@YAXAEBUtagSIZE@@0IIHPEAU_DPI_INFORMATION@@@Z @ 0x1401E489C (-FillDpiInfo@Win81@@YAXAEBUtagSIZE@@0IIHPEAU_DPI_INFORMATION@@@Z.c)
 *     ?FillOverridesAndAdjustedScaleFactor@Win81@@YAXIHPEAU_DPI_INFORMATION@@@Z @ 0x1401E49B4 (-FillOverridesAndAdjustedScaleFactor@Win81@@YAXIHPEAU_DPI_INFORMATION@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x140320470 (-DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 *     ?MonitorGetDpiInfoFromDescriptor@@YAJPEAXIPEAUDISPLAY_PREFERRED_MODE_INFO@@PEAI2PEA_N3@Z @ 0x1403F1494 (-MonitorGetDpiInfoFromDescriptor@@YAJPEAXIPEAUDISPLAY_PREFERRED_MODE_INFO@@PEAI2PEA_N3@Z.c)
 *     ?GetCurrentSourceResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAU_D3DKMDT_2DREGION@@@Z @ 0x1404004C8 (-GetCurrentSourceResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@P.c)
 *     ?GetCurrentTargetResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAU_D3DKMDT_2DREGION@@PEAE@Z @ 0x140404E74 (-GetCurrentTargetResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@P.c)
 */

__int64 __fastcall Win81::UpdateGdiInfoForVidPnSource(
        Win81 *this,
        const struct _DXGDMM_INTERFACE *a2,
        void *const a3,
        unsigned int a4,
        unsigned int a5,
        __int64 a6)
{
  Win81 *v6; // r13
  struct _D3DKMDT_2DREGION *v7; // r14
  DXGPROCESS *Current; // rax
  int CurrentSourceResolution; // ebx
  __int64 (__fastcall *v12)(Win81 *, unsigned __int64 *, struct D3DKMDT_HVIDPN__ **); // rax
  int v13; // eax
  __int64 v14; // rdi
  DpiInternal *v15; // r12
  int v16; // eax
  int v17; // eax
  struct _DPI_INFORMATION *v18; // r15
  const wchar_t *v19; // r9
  struct tagSIZE v20; // r9
  int v21; // edi
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rcx
  int v24; // edi
  __int64 v25; // rbx
  int v26; // eax
  int v27; // eax
  __int64 v28; // rdx
  bool v29; // r15
  int v30; // ebx
  int VideoOutputTechnology; // eax
  __int64 v32; // rbx
  unsigned int v33; // edi
  unsigned int v34; // r13d
  unsigned int v35; // r15d
  int v36; // eax
  int v37; // eax
  _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v38; // ebx
  int v39; // ecx
  unsigned int v40; // r8d
  unsigned int v41; // ecx
  unsigned int v42; // eax
  const struct _DXGDMM_VIDPN_INTERFACE *v43; // r15
  int v44; // eax
  int v45; // r10d
  int v46; // r11d
  int v47; // eax
  unsigned int v48; // ebx
  bool v49; // r13
  unsigned int v50; // r10d
  struct _DPI_INFORMATION *v51; // r9
  unsigned int v52; // r11d
  unsigned int v53; // ecx
  __int64 v54; // rdx
  unsigned int v55; // r8d
  struct _D3DKMDT_2DREGION *v56; // rdi
  __int64 v57; // r13
  struct tagSIZE v58; // r8
  unsigned int v59; // eax
  bool v60; // zf
  _OWORD *v61; // rbx
  __int128 v62; // xmm1
  __int128 v63; // xmm0
  struct _D3DKMDT_2DREGION *v64; // [rsp+20h] [rbp-E0h]
  struct _D3DKMDT_2DREGION *v65; // [rsp+20h] [rbp-E0h]
  struct _D3DKMDT_2DREGION *v66; // [rsp+20h] [rbp-E0h]
  __int64 v67; // [rsp+28h] [rbp-D8h]
  bool *v68; // [rsp+28h] [rbp-D8h]
  struct _DPI_INFORMATION *v69; // [rsp+30h] [rbp-D0h]
  bool v70; // [rsp+50h] [rbp-B0h]
  bool v71[11]; // [rsp+51h] [rbp-AFh] BYREF
  _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v72; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned __int64 v73; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v74; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v75; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v76; // [rsp+74h] [rbp-8Ch]
  __int64 v77; // [rsp+78h] [rbp-88h] BYREF
  __int64 v78; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v79; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v80; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v81; // [rsp+94h] [rbp-6Ch]
  int v82; // [rsp+9Ch] [rbp-64h]
  int v83; // [rsp+A0h] [rbp-60h]
  unsigned int v84; // [rsp+A4h] [rbp-5Ch]
  int v85; // [rsp+A8h] [rbp-58h]
  int v86; // [rsp+ACh] [rbp-54h]
  __int64 v87; // [rsp+B0h] [rbp-50h] BYREF
  char v88; // [rsp+B8h] [rbp-48h] BYREF
  DpiInternal *v89; // [rsp+C0h] [rbp-40h]
  void (__fastcall *v90)(__int64, DpiInternal *); // [rsp+C8h] [rbp-38h]
  __int64 v91; // [rsp+D0h] [rbp-30h]
  int v92; // [rsp+D8h] [rbp-28h]
  struct D3DKMDT_HVIDPN__ *v93; // [rsp+E0h] [rbp-20h] BYREF
  unsigned __int64 v94; // [rsp+E8h] [rbp-18h] BYREF
  char v95; // [rsp+F0h] [rbp-10h] BYREF
  const struct _DXGDMM_VIDPN_INTERFACE *v96; // [rsp+F8h] [rbp-8h]
  void (__fastcall *v97)(__int64, const struct _DXGDMM_VIDPN_INTERFACE *); // [rsp+100h] [rbp+0h]
  __int64 v98; // [rsp+108h] [rbp+8h]
  int v99; // [rsp+110h] [rbp+10h]
  BOOL v100; // [rsp+118h] [rbp+18h]
  unsigned __int64 v101; // [rsp+120h] [rbp+20h] BYREF
  Win81 *v102; // [rsp+128h] [rbp+28h]
  __int64 v103; // [rsp+130h] [rbp+30h]
  _OWORD v104[6]; // [rsp+140h] [rbp+40h] BYREF
  _OWORD *v105; // [rsp+1A0h] [rbp+A0h]
  _BYTE v106[96]; // [rsp+1B0h] [rbp+B0h] BYREF
  __int128 v107; // [rsp+210h] [rbp+110h]
  __int128 v108; // [rsp+220h] [rbp+120h]
  __int128 v109; // [rsp+230h] [rbp+130h]
  unsigned __int64 v110; // [rsp+240h] [rbp+140h] BYREF
  int v111; // [rsp+248h] [rbp+148h]

  v6 = a2;
  v7 = (struct _D3DKMDT_2DREGION *)(unsigned int)a3;
  v76 = (unsigned int)a3;
  v105 = (_OWORD *)a6;
  v84 = a4;
  v102 = a2;
  Current = DXGPROCESS::GetCurrent();
  if ( !Current || !DXGPROCESS::IsRemoteConnection(Current) )
  {
    v12 = (__int64 (__fastcall *)(Win81 *, unsigned __int64 *, struct D3DKMDT_HVIDPN__ **))*((_QWORD *)this + 6);
    v93 = 0LL;
    v89 = 0LL;
    v90 = 0LL;
    v91 = 0LL;
    v92 = 0;
    v88 = 0;
    v79 = 0LL;
    v13 = v12(v6, &v79, &v93);
    v14 = v13;
    if ( v13 < 0 )
    {
      WdLogSingleEntry2(2LL, v6, v13);
      WdLogGlobalForLineNumber = 712;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed call to create copy of the last VidPN committed by the client for adapter 0x%I64x (status = 0x%I64x)",
        (__int64)v6,
        v14,
        0LL,
        0LL,
        0LL);
      return (unsigned int)v14;
    }
    DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
      (__int64)&v88,
      v79,
      *((_QWORD *)this + 8),
      (__int64)v6);
    v15 = v89;
    v78 = 0LL;
    v87 = 0LL;
    v16 = (*(__int64 (__fastcall **)(DpiInternal *, __int64 *, __int64 *))v93)(v89, &v78, &v87);
    v14 = v16;
    if ( v16 < 0 )
    {
      WdLogSingleEntry2(2LL, v15, v16);
      WdLogGlobalForLineNumber = 730;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to acquire topology for VidPN 0x%I64x (status = 0x%I64x)",
        (__int64)v15,
        v14,
        0LL,
        0LL,
        0LL);
      if ( v88 )
        v90(v91, v15);
      return (unsigned int)v14;
    }
    v101 = 0LL;
    v17 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned __int64 *))v87)(v78, (unsigned int)v7, &v101);
    v18 = (struct _DPI_INFORMATION *)v17;
    if ( v17 < 0 )
    {
      WdLogSingleEntry3(2LL, v7, v78, v17);
      v19 = L"Failed to determine number of paths originating from source 0x%I64x in topology 0x%I64x (status = 0x%I64x)";
      WdLogGlobalForLineNumber = 741;
      v69 = v18;
      v67 = v78;
      v64 = v7;
LABEL_13:
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v19, (__int64)v64, v67, (__int64)v69, 0LL, 0LL);
      if ( v88 )
        v90(v91, v15);
      return (unsigned int)v18;
    }
    memset(v106, 0, 0x5CuLL);
    v21 = *(_DWORD *)(a6 + 92);
    v22 = 0LL;
    v23 = v101;
    v109 = *(_OWORD *)&v106[64];
    v24 = (v101 > 1) | v21 & 0x20;
    v85 = *(_DWORD *)&v106[60];
    *(_DWORD *)&v106[92] = v24;
    v86 = *(_DWORD *)&v106[56];
    v108 = *(_OWORD *)&v106[48];
    v107 = *(_OWORD *)&v106[16];
    while ( 1 )
    {
      v79 = v22;
      if ( v22 >= v23 )
      {
        if ( (v24 & 2) == 0
          || (v58 = (struct tagSIZE)(unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(_mm_load_si128((const __m128i *)&v106[80]), 4)),
              v58.cx == 1234568) )
        {
          v59 = _mm_cvtsi128_si32(_mm_srli_si128(_mm_load_si128((const __m128i *)v106), 8));
        }
        else
        {
          v59 = Win81::AdjustDesktopScaleFactorForOverride((Win81 *)0x64, *(int *)&v106[32], v58, v20);
          *(_DWORD *)&v106[8] = v59;
        }
        if ( !v59 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 1042;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"DpiInfo.DesktopScaleFactor != DESKTOP_SCALE_INVALID",
            1042LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        v60 = v88 == 0;
        v61 = v105;
        v62 = v107;
        *v105 = *(_OWORD *)v106;
        v63 = *(_OWORD *)&v106[32];
        v61[1] = v62;
        v61[2] = v63;
        v61[3] = v108;
        v61[4] = v109;
        v61[5] = *(_OWORD *)&v106[80];
        if ( !v60 )
          v90(v91, v15);
        return 0LL;
      }
      *(_DWORD *)&v71[3] = -1;
      LOBYTE(v82) = 0;
      v25 = v76;
      v26 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned __int64, bool *))(v87 + 8))(v78, v76, v22, &v71[3]);
      v18 = (struct _DPI_INFORMATION *)v26;
      if ( v26 < 0 )
      {
        v57 = v79;
        WdLogSingleEntry3(2LL, v79, v25, v26);
        WdLogGlobalForLineNumber = 763;
        v19 = L"Failed to enumerate target of %I64d'th path originating from source 0x%I64x (status = 0x%I64x)";
        v69 = v18;
        v67 = v25;
        v64 = (struct _D3DKMDT_2DREGION *)v57;
        goto LABEL_13;
      }
      v96 = 0LL;
      v97 = 0LL;
      v98 = 0LL;
      v99 = 0;
      v95 = 0;
      v74 = 0LL;
      v27 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(v87 + 24))(
              v78,
              (unsigned int)v25,
              *(unsigned int *)&v71[3],
              &v74);
      v18 = (struct _DPI_INFORMATION *)v27;
      if ( v27 < 0 )
      {
        v56 = (struct _D3DKMDT_2DREGION *)v76;
        WdLogSingleEntry3(2LL, v76, *(unsigned int *)&v71[3], v27);
        v19 = L"Failed to acquire info of path (0x%I64x, 0x%I64x) (status = 0x%I64x)";
        WdLogGlobalForLineNumber = 781;
        v69 = v18;
        v67 = *(unsigned int *)&v71[3];
        v64 = v56;
        goto LABEL_13;
      }
      v28 = v74;
      if ( !v74 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 786;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pVidPnPresentPathInfo != NULL",
          786LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v28 = v74;
      }
      DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
        (__int64)&v95,
        v28,
        *(_QWORD *)(v87 + 32),
        v78);
      v29 = 0;
      *(_DWORD *)&v71[7] = D3DKMDT_VPPR_GET_OFFSET_ROTATION(*((_DWORD *)v96 + 5));
      v70 = 0;
      v72 = D3DKMDT_VOT_UNINITIALIZED;
      v30 = *(_DWORD *)&v71[7];
      VideoOutputTechnology = DmmGetVideoOutputTechnology(v6, *(unsigned int *)&v71[3], &v72, 0LL);
      if ( VideoOutputTechnology >= 0 )
      {
        v29 = IsInternalVideoOutput(v72);
        v70 = v29;
      }
      else
      {
        v32 = VideoOutputTechnology;
        WdLogSingleEntry3(2LL, v6, *(unsigned int *)&v71[3], VideoOutputTechnology);
        WdLogGlobalForLineNumber = 803;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to get video output technology from adapter 0x%I64x, target 0x%I64x (status = 0x%I64x)",
          (__int64)v6,
          *(unsigned int *)&v71[3],
          v32,
          0LL,
          0LL);
        v30 = *(_DWORD *)&v71[7];
      }
      v100 = v29;
      v110 = 0LL;
      v111 = 0;
      v33 = v24 & 0xFFFFFFFB | ((unsigned __int8)v24 | (unsigned __int8)(4 * v29)) & 4;
      v73 = 0LL;
      v83 = 0;
      v71[2] = 0;
      v71[0] = 0;
      v80 = 0;
      v75 = 0;
      MonitorGetDpiInfoFromDescriptor(
        v6,
        *(unsigned int *)&v71[3],
        (struct DISPLAY_PREFERRED_MODE_INFO *)&v110,
        &v80,
        &v75,
        &v71[2],
        v71);
      v81 = v110;
      v94 = v110;
      if ( ((v30 - 2) & 0xFFFFFFFD) == 0 )
      {
        v81 = __PAIR64__(v110, HIDWORD(v110));
        v94 = __PAIR64__(v110, HIDWORD(v110));
      }
      if ( !v71[0] )
      {
        v34 = HIDWORD(v73);
        v33 |= 8u;
        v35 = v73;
        goto LABEL_37;
      }
      v35 = v80;
      v34 = v75;
      v73 = __PAIR64__(v75, v80);
      if ( ((v30 - 2) & 0xFFFFFFFD) == 0 )
      {
        v34 = v80;
        v35 = v75;
        v73 = __PAIR64__(v80, v75);
      }
      if ( !v35 || !v34 )
        goto LABEL_36;
      if ( (int)(v35 * v34) <= 16000 && !v70 )
        break;
LABEL_37:
      if ( !v35 )
      {
        v36 = *((_DWORD *)v102 + 111) >> 5;
        LOBYTE(v36) = (*((_DWORD *)v102 + 111) & 0x20) != 0;
        v82 = v36;
      }
      v74 = 0LL;
      CurrentSourceResolution = DpiInternal::GetCurrentSourceResolution(
                                  v15,
                                  v93,
                                  v96,
                                  (const struct _D3DKMDT_VIDPN_PRESENT_PATH *)&v74,
                                  v65);
      if ( CurrentSourceResolution < 0
        || (v77 = 0LL,
            v71[1] = 0,
            CurrentSourceResolution = DpiInternal::GetCurrentTargetResolution(
                                        v15,
                                        v93,
                                        v96,
                                        (const struct _D3DKMDT_VIDPN_PRESENT_PATH *)&v77,
                                        (struct _D3DKMDT_2DREGION *)&v71[1],
                                        (unsigned __int8 *)v68),
            CurrentSourceResolution < 0) )
      {
        if ( v95 )
          v97(v98, v96);
        if ( v88 )
          v90(v91, v15);
        return (unsigned int)CurrentSourceResolution;
      }
      v37 = HIDWORD(v77);
      if ( ((*(_DWORD *)&v71[7] - 2) & 0xFFFFFFFD) != 0 )
      {
        v72 = HIDWORD(v77);
        v37 = v77;
      }
      else
      {
        v72 = (int)v77;
      }
      LODWORD(v77) = v74;
      *(_DWORD *)&v71[7] = v37;
      if ( (v33 & 1) != 0 && (_DWORD)v81 && HIDWORD(v81) )
      {
        v38 = HIDWORD(v74);
        if ( v71[1] )
          v38 = HIDWORD(v74) >> 1;
        if ( (unsigned int)v74 >= 2 * (int)v81 || v38 >= (unsigned int)(2 * HIDWORD(v81)) )
          v39 = 2;
        else
          v39 = 0;
        v33 = v33 & 0xFFFFFFFD ^ (v33 | v39) & 2;
        if ( v71[1] )
          v38 *= 2;
      }
      else
      {
        v38 = HIDWORD(v74);
      }
      memset(v104, 0, sizeof(v104));
      v40 = v77;
      DWORD1(v104[5]) = a5;
      *(_QWORD *)&v104[2] = __PAIR64__(v38, v77);
      if ( *((_DWORD *)v96 + 3) != 1 )
      {
        if ( *((_DWORD *)v96 + 3) == 2 )
          goto LABEL_64;
        if ( *((_DWORD *)v96 + 3) != 3 )
        {
          if ( *((_DWORD *)v96 + 3) == 4 )
          {
LABEL_64:
            if ( *((_DWORD *)v96 + 3) == 4 )
            {
              v41 = *(_DWORD *)&v71[7];
              if ( v35 * v38 <= v34 * (unsigned int)v77 )
              {
                v40 = *(_DWORD *)&v71[7];
                v38 = v38 * *(_DWORD *)&v71[7] / (unsigned int)v77;
              }
              else
              {
                v42 = (int)v77 * v72 / (unsigned int)v38;
                v38 = v72;
                v40 = v42;
              }
            }
            else
            {
              v41 = *(_DWORD *)&v71[7];
            }
            v35 = v35 * v40 / v41;
            v34 = v34 * v38 / v72;
            goto LABEL_70;
          }
          if ( *((_DWORD *)v96 + 3) == 5 )
            goto LABEL_63;
          if ( *((_DWORD *)v96 + 3) != 255 )
          {
            WdLogSingleEntry1(1LL);
            WdLogGlobalForLineNumber = 933;
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"Invalid scaling %I64d",
              *((int *)v96 + 3),
              0LL,
              0LL,
              0LL,
              0LL);
LABEL_63:
            v33 |= 0x100u;
          }
        }
      }
LABEL_70:
      *((_QWORD *)&v104[1] + 1) = __PAIR64__(v34, v35);
      v43 = v96;
      v44 = D3DKMDT_VPPR_GET_CONTENT_ROTATION_PART((enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION)*((_DWORD *)v96 + 5));
      if ( v44 == 2 || v44 == 4 )
        v47 = 128;
      else
        v47 = 0;
      v24 = v47 | v33 & 0xFFFFFF7F;
      *(_DWORD *)&v106[92] = v24;
      if ( !(_BYTE)v82 && !v83 && v71[0] && v71[2] )
      {
        LODWORD(v66) = (unsigned __int8)v111;
        v24 = v24 & 0xFFFFFFEF | (16
                                * (unsigned __int8)Win81::DetermineViewDistance(
                                                     v102,
                                                     (Win81 *)&v73,
                                                     (const struct tagSIZE *)v100,
                                                     (int)&v94,
                                                     (const struct tagSIZE *)v66,
                                                     &v104[4]));
        v48 = v104[4];
        *(_DWORD *)&v106[92] = v24;
        if ( !LODWORD(v104[4]) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 998;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"CurrentDpiInfo.ViewDistTenthsOfInch != 0",
            998LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
LABEL_80:
        v49 = v70;
LABEL_81:
        Win81::FillDpiInfo(
          (Win81 *)((char *)&v104[1] + 8),
          (const struct tagSIZE *)&v104[2],
          (const struct tagSIZE *)v48,
          v84,
          (unsigned int)v66,
          (__int64)v104);
        goto LABEL_82;
      }
      v48 = 0;
      LODWORD(v104[4]) = 0;
      if ( !(_BYTE)v82 )
        goto LABEL_80;
      v49 = v70;
      if ( !v70 )
        goto LABEL_81;
      v50 = 100 * v45;
      v51 = (struct _DPI_INFORMATION *)&unk_140108E30;
      v52 = 100 * v46;
      do
      {
        v53 = *(_DWORD *)v51;
        LODWORD(v103) = v50 / *(_DWORD *)v51;
        HIDWORD(v103) = v52 / v53;
        v74 = v103;
        if ( Win81::operator>=(&v74, dword_1400AC438) )
          break;
        v51 = (struct _DPI_INFORMATION *)((char *)v51 - 4);
        --v55;
      }
      while ( v55 );
      HIDWORD(v104[0]) = PairedScaleFactorsArray_Win81[v55];
      Win81::FillOverridesAndAdjustedScaleFactor((Win81 *)v84, v54, (__int64)v104, v51);
      v24 |= 0x400u;
      *(_DWORD *)&v106[92] = v24;
LABEL_82:
      if ( HIDWORD(v104[5]) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1015;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"CurrentDpiInfo.FlagsUnion.AllFlags == 0",
          1015LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      HIDWORD(v104[5]) = v24;
      if ( v49 || (v24 & 4) == 0 && (v86 + v85) / 2 <= (DWORD2(v104[3]) + HIDWORD(v104[3])) / 2 )
      {
        *(_OWORD *)v106 = v104[0];
        v107 = v104[1];
        *(_OWORD *)&v106[32] = v104[2];
        v109 = v104[4];
        *(_OWORD *)&v106[80] = v104[5];
        v24 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v104[5], 12));
        v86 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v104[3], 8));
        v108 = v104[3];
        v85 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v104[3], 12));
      }
      if ( v95 )
        v97(v98, v43);
      v23 = v101;
      v22 = v79 + 1;
      v6 = v102;
    }
    v33 |= 0x40u;
    v83 = 1;
LABEL_36:
    v35 = 0;
    v73 = 0LL;
    v34 = 0;
    goto LABEL_37;
  }
  CurrentSourceResolution = -1073741637;
  WdLogSingleEntry2(2LL, v6, -1073741637LL);
  WdLogGlobalForLineNumber = 696;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Win32k should not call Win81::UpdateGdiInfoForVidPnSource for adapter 0x%I64x in remote session, returning 0x%I64x!",
    (__int64)v6,
    -1073741637LL,
    0LL,
    0LL,
    0LL);
  return (unsigned int)CurrentSourceResolution;
}
