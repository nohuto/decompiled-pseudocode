/*
 * XREFs of ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x140342C10
 * Callers:
 *     _BmlGetPathModalityForAdapter @ 0x1403427E0 (_BmlGetPathModalityForAdapter.c)
 *     _BmlGetPathModeListForAdapter @ 0x14041E938 (_BmlGetPathModeListForAdapter.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x14002C164 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x14002C1A0 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?IsFunctional@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x14002DB64 (-IsFunctional@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ @ 0x14002DC2C (-AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ.c)
 *     ?D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x14002DFE8 (-D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x14002E0B0 (-D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x140046328 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x140047278 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x14004B63C (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?DivideAndRound@@YA_K_K0@Z @ 0x1400542F0 (-DivideAndRound@@YA_K_K0@Z.c)
 *     Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline @ 0x14005AA24 (Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14005D8A4 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     ?ForceIHVScaling@ADAPTER_DISPLAY@@QEBAEXZ @ 0x14005E030 (-ForceIHVScaling@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1400626DC (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     ?GetDisplayOnlyDriverUseSmallestMode@ADAPTER_DISPLAY@@QEBAHXZ @ 0x14006278C (-GetDisplayOnlyDriverUseSmallestMode@ADAPTER_DISPLAY@@QEBAHXZ.c)
 *     ?GetDisplayOnlyDriverUseRawModes@ADAPTER_DISPLAY@@QEBAHXZ @ 0x140078210 (-GetDisplayOnlyDriverUseRawModes@ADAPTER_DISPLAY@@QEBAHXZ.c)
 *     ?D3DKMDT_VPPR_CONVERT_ROTATION_GIVEN_OFFSET@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@0@Z @ 0x140098188 (-D3DKMDT_VPPR_CONVERT_ROTATION_GIVEN_OFFSET@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@0@Z.c)
 *     ?GetDisplayOnlyDriverIgnoreMonitorFreqCheck@ADAPTER_DISPLAY@@QEBAHXZ @ 0x1400981B0 (-GetDisplayOnlyDriverIgnoreMonitorFreqCheck@ADAPTER_DISPLAY@@QEBAHXZ.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1402AA9B4 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z @ 0x1402AD220 (-GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z.c)
 *     ?MonitorGetMonitorHandle@@YAJPEAXIE0PEAPEAUHDXGMONITOR__@@@Z @ 0x1402CA36C (-MonitorGetMonitorHandle@@YAJPEAXIE0PEAPEAUHDXGMONITOR__@@@Z.c)
 *     ?MonitorReleaseMonitorHandle@@YAJPEAXPEAUHDXGMONITOR__@@0@Z @ 0x1402CC114 (-MonitorReleaseMonitorHandle@@YAJPEAXPEAUHDXGMONITOR__@@0@Z.c)
 *     ?PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z @ 0x1402DB240 (-PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z.c)
 *     ?IsHdrAllowedOnVidPnPath@DMMVIDPNPRESENTPATH@@QEBA_NXZ @ 0x1402DB7D8 (-IsHdrAllowedOnVidPnPath@DMMVIDPNPRESENTPATH@@QEBA_NXZ.c)
 *     BmlGetNextBestTargetMode @ 0x1402DBD7C (BmlGetNextBestTargetMode.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z @ 0x1402DC840 (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z.c)
 *     BmlGetNextBestSourceMode @ 0x1402DE3F8 (BmlGetNextBestSourceMode.c)
 *     ?BmlGetScaledAspectRatio@@YAHAEBU_D3DKMDT_2DREGION@@@Z @ 0x1402DEEDC (-BmlGetScaledAspectRatio@@YAHAEBU_D3DKMDT_2DREGION@@@Z.c)
 *     BmlFillPreferredMonitorMode @ 0x1402DF5D4 (BmlFillPreferredMonitorMode.c)
 *     ?MonitorIsMonitorAndDriverWCGCapable@@YAJPEAUHDXGMONITOR__@@PEA_NPEAW4MonitorAndLinkWCGIncapableReason@@@Z @ 0x140362930 (-MonitorIsMonitorAndDriverWCGCapable@@YAJPEAUHDXGMONITOR__@@PEA_NPEAW4MonitorAndLinkWCGIncapable.c)
 *     ?MonitorIsMonitorAndLinkHDRCapable@@YAJPEAUHDXGMONITOR__@@PEATMONITOR_AND_LINK_HDR_CAPS@@PEAW4MonitorAndLinkHDRIncapableReason@@@Z @ 0x140362EE0 (-MonitorIsMonitorAndLinkHDRCapable@@YAJPEAUHDXGMONITOR__@@PEATMONITOR_AND_LINK_HDR_CAPS@@PEAW4Mo.c)
 *     ?MonitorIsWcgEnabled@@YAJPEAUHDXGMONITOR__@@PEA_N@Z @ 0x1403D81E4 (-MonitorIsWcgEnabled@@YAJPEAUHDXGMONITOR__@@PEA_N@Z.c)
 *     ?MonitorIsHdrEnabled@@YAJPEAUHDXGMONITOR__@@PEA_N@Z @ 0x1403D8E4C (-MonitorIsHdrEnabled@@YAJPEAUHDXGMONITOR__@@PEA_N@Z.c)
 *     BmlIsSecondaryHardwareClonePath @ 0x1403ECF28 (BmlIsSecondaryHardwareClonePath.c)
 *     ?GetPreferredHdrPixelFormat@ADAPTER_DISPLAY@@QEBA?AW4_DISPLAYCONFIG_HDR_PIXEL_FORMAT@@XZ @ 0x1403F5984 (-GetPreferredHdrPixelFormat@ADAPTER_DISPLAY@@QEBA-AW4_DISPLAYCONFIG_HDR_PIXEL_FORMAT@@XZ.c)
 *     ?MonitorIsBoostRefreshRateEnabledByDefault@@YAJPEAXIPEA_N@Z @ 0x1403F6F4C (-MonitorIsBoostRefreshRateEnabledByDefault@@YAJPEAXIPEA_N@Z.c)
 *     ?BmlGetRecommendedRotation@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@QEBUBML_VIDPN_PATH_ORDER@@IE@Z @ 0x140408DF4 (-BmlGetRecommendedRotation@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@QEBUBML_VIDPN_PATH_ORDER.c)
 *     ?GetAdapterDefaultScaling@VIDPN_MGR@@QEBA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@XZ @ 0x14040F3DC (-GetAdapterDefaultScaling@VIDPN_MGR@@QEBA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@XZ.c)
 */

__int64 __fastcall BmlPreparePathOrderAndVidPn(
        const struct BML_VIDPN_PATH_ORDER **a1,
        __int64 a2,
        __int64 a3,
        __int16 a4,
        __int16 a5,
        int a6,
        int a7)
{
  __int16 v10; // r12
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 result; // rax
  VIDPN_MGR *v14; // rbx
  ADAPTER_DISPLAY *v15; // rbx
  void *v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned __int8 v19; // al
  __int64 v20; // rdx
  unsigned int PreferredHdrPixelFormat; // eax
  __int64 v22; // r9
  unsigned int v23; // r11d
  const struct BML_VIDPN_PATH_ORDER *v24; // rcx
  unsigned int v25; // r13d
  int v26; // eax
  __int64 v27; // r15
  const struct BML_VIDPN_PATH_ORDER *v28; // rbx
  __int64 v29; // rdi
  bool v30; // zf
  struct SESSION_VIEW *SessionViewOwner; // rax
  unsigned int v32; // r12d
  DMMVIDPNPRESENTPATH *v33; // rcx
  unsigned int v34; // ecx
  struct DMMVIDPNTOPOLOGY *v35; // r12
  unsigned int v36; // r15d
  __int64 v37; // rbx
  enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE v38; // r9d
  const struct BML_VIDPN_PATH_ORDER *v39; // rdi
  __int64 v40; // rbx
  int v41; // eax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r14
  _QWORD *v45; // rax
  unsigned int i; // r13d
  DMMVIDPNPRESENTPATH *v47; // r12
  unsigned int v48; // eax
  __int64 v49; // r14
  char *v50; // rdi
  __int64 v51; // rbx
  DMMVIDPNTARGET **Path; // rdx
  __int64 v53; // rcx
  _QWORD *v54; // rax
  struct DMMVIDPNTARGETMODESET *v55; // rax
  __int64 v56; // rdx
  __int64 v57; // r8
  __int64 v58; // rcx
  int v59; // eax
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // rbx
  int v63; // edx
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING AdapterDefaultScaling; // eax
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING v65; // eax
  bool v66; // r14
  _DWORD *v67; // rbx
  __int64 v68; // rbx
  int v69; // eax
  int v70; // eax
  const struct BML_VIDPN_PATH_ORDER *v71; // r14
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v72; // ecx
  char IsSecondaryHardwareClonePath; // al
  __int64 v74; // rcx
  __int64 v75; // rcx
  int v76; // edx
  _DWORD *v77; // r8
  __int64 v78; // r10
  int v79; // eax
  int v80; // eax
  unsigned int v81; // edx
  char v82; // al
  int v83; // ebx
  bool v84; // r15
  struct HDXGMONITOR__ *v85; // r13
  int IsMonitorAndLinkHDRCapable; // eax
  unsigned int v87; // r15d
  int IsHdrEnabled; // eax
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // rax
  __int64 v92; // rdx
  int IsMonitorAndDriverWCGCapable; // eax
  int IsWcgEnabled; // eax
  void *v95; // r8
  char v96; // al
  struct HDXGMONITOR__ *v97; // r8
  char v98; // cl
  _QWORD *v99; // rax
  __int64 v100; // rdx
  const struct BML_VIDPN_PATH_ORDER *v101; // rax
  unsigned int v102; // r14d
  __int64 v103; // rbx
  const struct BML_VIDPN_PATH_ORDER *v104; // r8
  unsigned int v105; // edi
  unsigned int v106; // r15d
  unsigned int v107; // r9d
  char v108; // r14
  __int64 v109; // r10
  unsigned __int64 v110; // rbx
  int v111; // eax
  unsigned int v112; // r12d
  unsigned int v113; // r13d
  unsigned int v114; // r12d
  const struct BML_VIDPN_PATH_ORDER *v115; // r14
  __int64 v116; // r15
  struct HDXGMONITOR__ *v117; // rax
  _QWORD *v118; // rcx
  struct DMMVIDPNSOURCEMODESET *v119; // rdi
  __int64 v120; // rax
  __int64 v121; // r13
  const struct BML_VIDPN_PATH_ORDER *v122; // rcx
  __int64 v123; // rdx
  int v124; // eax
  __int64 v125; // r13
  DMMVIDPNTARGET **v126; // r13
  DMMVIDPNPRESENTPATH *v127; // rax
  D3DDDI_RATIONAL v128; // rdx
  __int64 v129; // rcx
  struct DMMVIDPNTARGETMODESET *v130; // rbx
  __int64 v131; // rdi
  int v132; // eax
  __int64 v133; // rdi
  D3DDDI_RATIONAL *v134; // rcx
  __int16 v135; // ax
  const struct BML_VIDPN_PATH_ORDER *v136; // r8
  unsigned int j; // r9d
  __int64 v138; // r10
  unsigned int v139; // eax
  __int64 v140; // r11
  __int64 v141; // r10
  unsigned int v142; // eax
  __int64 v143; // r11
  __int64 v144; // r10
  __int64 v145; // [rsp+20h] [rbp-91h]
  bool v146; // [rsp+50h] [rbp-61h] BYREF
  bool v147; // [rsp+51h] [rbp-60h] BYREF
  unsigned __int64 v148; // [rsp+58h] [rbp-59h]
  DMMVIDPNPRESENTPATH *v149; // [rsp+60h] [rbp-51h] BYREF
  unsigned int v150; // [rsp+68h] [rbp-49h]
  unsigned __int64 v151; // [rsp+70h] [rbp-41h] BYREF
  void *v152; // [rsp+78h] [rbp-39h]
  VIDPN_MGR *v153; // [rsp+80h] [rbp-31h]
  struct HDXGMONITOR__ *v154; // [rsp+88h] [rbp-29h] BYREF
  struct DMMVIDPNTARGETMODESET *v155; // [rsp+90h] [rbp-21h] BYREF
  DMMVIDPNTOPOLOGY *v156; // [rsp+98h] [rbp-19h]
  ADAPTER_DISPLAY *v157; // [rsp+A0h] [rbp-11h]
  unsigned int v158; // [rsp+100h] [rbp+4Fh] BYREF
  __int64 v159; // [rsp+108h] [rbp+57h]
  DMMVIDPNPRESENTPATH *v160; // [rsp+110h] [rbp+5Fh] BYREF
  __int16 v161; // [rsp+118h] [rbp+67h]

  v161 = a4;
  v159 = a2;
  v10 = a4;
  v11 = operator new[](120LL * *(unsigned __int16 *)(a3 + 20) + 16, 0x63644356u, 256LL);
  *a1 = (const struct BML_VIDPN_PATH_ORDER *)v11;
  v12 = v11;
  if ( !v11 )
  {
    WdLogSingleEntry2(6LL, a3, *(unsigned __int16 *)(a3 + 20));
    result = 3221225626LL;
    WdLogGlobalForLineNumber = 4275;
    return result;
  }
  v14 = *(VIDPN_MGR **)(a2 + 48);
  v153 = v14;
  if ( !*((_QWORD *)v14 + 1) )
  {
    WdLogSingleEntry0(1LL);
    v12 = (__int64)*a1;
    WdLogGlobalForLineNumber = 68;
  }
  v15 = (ADAPTER_DISPLAY *)*((_QWORD *)v14 + 1);
  v157 = v15;
  v16 = (void *)*((_QWORD *)v15 + 2);
  v152 = v16;
  v17 = *((_QWORD *)v16 + 395);
  if ( *(_BYTE *)(v17 + 289) && *(_BYTE *)(v17 + 290)
    || (v18 = *((_QWORD *)v16 + 27),
        LOBYTE(v158) = 0,
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v18 + 64) + 40LL) + 28LL) >= 0x4003u) )
  {
    LOBYTE(v158) = 1;
  }
  if ( *((_QWORD *)v16 + 396) )
  {
    *(_DWORD *)(v12 + 8) &= ~1u;
    *((_DWORD *)*a1 + 2) &= ~4u;
    *((_DWORD *)*a1 + 2) &= ~8u;
  }
  else
  {
    *((_DWORD *)*a1 + 2) ^= ((unsigned __int8)ADAPTER_DISPLAY::GetDisplayOnlyDriverUseSmallestMode(v15) ^ (unsigned __int8)*((_DWORD *)*a1 + 2)) & 1;
    *((_DWORD *)*a1 + 2) = *((_DWORD *)*a1 + 2) & 0xFFFFFFFB | ((unsigned int)ADAPTER_DISPLAY::GetDisplayOnlyDriverUseRawModes(v15) != 0
                                                              ? 4
                                                              : 0);
    *((_DWORD *)*a1 + 2) = *((_DWORD *)*a1 + 2) & 0xFFFFFFF7 | ((unsigned int)ADAPTER_DISPLAY::GetDisplayOnlyDriverIgnoreMonitorFreqCheck(v15) != 0
                                                              ? 8
                                                              : 0);
  }
  v19 = ADAPTER_DISPLAY::ForceIHVScaling(v15);
  *(_DWORD *)(v20 + 8) = *(_DWORD *)(v20 + 8) & 0xFFFFFFFD | (v19 != 0 ? 2 : 0);
  PreferredHdrPixelFormat = ADAPTER_DISPLAY::GetPreferredHdrPixelFormat(v15);
  v24 = *a1;
  v25 = v23;
  v150 = PreferredHdrPixelFormat;
  v26 = a7;
  *((_DWORD *)v24 + 2) &= 0xFu;
  *(_BYTE *)*a1 = v23;
  *((_DWORD *)*a1 + 1) = v26;
  while ( v25 < *(unsigned __int16 *)(a3 + 20) )
  {
    v27 = a3 + 296LL * v25 + 56;
    if ( (*(_QWORD *)v27 & 0x4000000000000LL) == 0 )
    {
      WdLogSingleEntry0(1LL);
      v23 = 0;
      WdLogGlobalForLineNumber = 4326;
    }
    if ( *(_DWORD *)(v27 + 16) == *((_DWORD *)v16 + 103) && *(_DWORD *)(v27 + 20) == *((_DWORD *)v16 + 104) )
    {
      if ( (*(_QWORD *)v27 & 0x700000000000LL) != 0x700000000000LL )
      {
        WdLogSingleEntry2(2LL, v25, a3);
        result = 3221225485LL;
        WdLogGlobalForLineNumber = 4338;
        return result;
      }
      v28 = *a1;
      v29 = 120LL * *(unsigned __int8 *)*a1;
      *(_WORD *)((char *)v28 + v29 + 70) = a5;
      v30 = a6 == 2;
      *(_QWORD *)((char *)v28 + v29 + 16) = v27;
      *(_WORD *)((char *)v28 + v29 + 32) = v25;
      *(_WORD *)((char *)v28 + v29 + 64) = v23;
      *(_WORD *)((char *)v28 + v29 + 68) = v23;
      *(_WORD *)((char *)v28 + v29 + 66) = v10;
      *(_QWORD *)((char *)v28 + v29 + 52) = 0LL;
      *(_DWORD *)((char *)v28 + v29 + 60) = v23;
      *(_DWORD *)((char *)v28 + v29 + 124) = v23;
      *(_OWORD *)((char *)v28 + v29 + 72) = 0LL;
      *(_OWORD *)((char *)v28 + v29 + 88) = 0LL;
      *(_DWORD *)((char *)v28 + v29 + 104) = 0;
      if ( v30 )
      {
        SessionViewOwner = ADAPTER_DISPLAY::GetSessionViewOwner(
                             v157,
                             *(unsigned int *)(v27 + 24),
                             0x4000000000000LL,
                             v22);
        v23 = 0;
        if ( SessionViewOwner )
        {
          if ( *((_DWORD *)SessionViewOwner + 10) > 1u )
            *((_BYTE *)v28 + v29 + 132) |= 1u;
        }
      }
      else
      {
        v32 = v23;
        if ( (unsigned __int16)v23 < *(_WORD *)(a3 + 20) )
        {
          do
          {
            v33 = (DMMVIDPNPRESENTPATH *)(296LL * v32);
            v160 = v33;
            if ( (*(_QWORD *)((_BYTE *)v33 + a3 + 56) & 0x4000000000000LL) == 0 )
            {
              WdLogSingleEntry0(1LL);
              v33 = v160;
              WdLogGlobalForLineNumber = 4381;
            }
            if ( v32 != v25 && *(_DWORD *)((char *)v33 + a3 + 240) == *(_DWORD *)(v27 + 184) )
              *((_BYTE *)v28 + v29 + 132) |= 1u;
            ++v32;
          }
          while ( v32 < *(unsigned __int16 *)(a3 + 20) );
          v23 = 0;
        }
        v10 = v161;
      }
      v16 = v152;
      ++*(_BYTE *)*a1;
    }
    ++v25;
  }
  v34 = v23;
  v35 = (struct DMMVIDPNTOPOLOGY *)(v159 + 96);
  v156 = (DMMVIDPNTOPOLOGY *)(v159 + 96);
  while ( v34 < *(unsigned __int8 *)*a1 )
  {
    v36 = v34 + 1;
    v37 = v34;
    v38 = v34 + 1;
    if ( (int)(v34 + 1) > 32 )
    {
      WdLogSingleEntry2(1LL, *a1, v34);
      v38 = 32;
      WdLogGlobalForLineNumber = 4452;
    }
    v39 = *a1;
    v40 = 120 * v37;
    v41 = VIDPN_MGR::AddPathToVidPnTopology(
            v153,
            v35,
            *(_DWORD *)(*(_QWORD *)((char *)*a1 + v40 + 16) + 24LL),
            *(_DWORD *)(*(_QWORD *)((char *)*a1 + v40 + 16) + 28LL),
            v38,
            *(_WORD *)((char *)*a1 + v40 + 32),
            1,
            D3DKMDT_MCC_ENFORCE);
    v23 = 0;
    v44 = v41;
    if ( v41 < 0 )
    {
      v45 = (_QWORD *)WdLogNewEntry5_WdTrace(v43, v42);
      v45[3] = *(unsigned int *)(*(_QWORD *)((char *)v39 + v40 + 16) + 24LL);
      v45[4] = *(unsigned int *)(*(_QWORD *)((char *)v39 + v40 + 16) + 28LL);
      v45[5] = v35;
      v45[6] = v44;
      result = (unsigned int)v44;
      WdLogGlobalForLineNumber = 4472;
      return result;
    }
    v34 = v36;
  }
  for ( i = v23; ; ++i )
  {
    v47 = *a1;
    LODWORD(v148) = i;
    v149 = v47;
    v48 = *(unsigned __int8 *)v47;
    if ( i >= v48 )
      break;
    v49 = 120LL * i;
    v50 = (char *)v47 + v49;
    if ( !_bittest64(*(const signed __int64 **)((char *)v47 + v49 + 16), 0x32u) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 4489;
    }
    v51 = *((_QWORD *)v50 + 2);
    Path = (DMMVIDPNTARGET **)DMMVIDPNTOPOLOGY::FindPath(v156, *(_DWORD *)(v51 + 24), *(_DWORD *)(v51 + 28));
    v149 = (DMMVIDPNPRESENTPATH *)Path;
    if ( *(_BYTE *)(v51 + 129) )
    {
      v54 = (_QWORD *)WdLogNewEntry5_WdTrace(v53, Path);
      v54[3] = *(unsigned int *)(*((_QWORD *)v50 + 2) + 24LL);
      v54[4] = *(unsigned int *)(*((_QWORD *)v50 + 2) + 28LL);
      v54[5] = *(int *)(*((_QWORD *)v50 + 2) + 20LL);
      v54[6] = *(unsigned int *)(*((_QWORD *)v50 + 2) + 16LL);
      Path = (DMMVIDPNTARGET **)v149;
      WdLogGlobalForLineNumber = 4501;
    }
    v55 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(Path[11]);
    v57 = *(_QWORD *)(v56 + 96);
    v58 = (__int64)*a1;
    v155 = v55;
    v59 = BmlFillPreferredMonitorMode(v58, i, *(_QWORD *)(v57 + 96));
    v62 = v59;
    if ( v59 < 0 )
    {
      v99 = (_QWORD *)WdLogNewEntry5_WdTrace(v61, v60);
      v99[3] = *(unsigned int *)(*((_QWORD *)v50 + 2) + 24LL);
      v100 = *(unsigned int *)(*((_QWORD *)v50 + 2) + 28LL);
      v99[5] = v156;
      v99[4] = v100;
      v99[6] = v62;
      v101 = *a1;
      WdLogGlobalForLineNumber = 4528;
      *(_DWORD *)((char *)v101 + v49 + 52) = 0;
      *(_DWORD *)((char *)*a1 + v49 + 56) = 0;
      auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v155, 0LL);
      return (unsigned int)v62;
    }
    if ( !_bittest64(*((const signed __int64 **)v50 + 2), 0x2Au) )
      goto LABEL_61;
    v63 = *(_DWORD *)(*((_QWORD *)v50 + 2) + 136LL);
    if ( v63 == 1 || v63 == 2 || v63 == 3 || v63 == 4 || v63 == 5 )
    {
      *((_DWORD *)v50 + 6) = v63;
      goto LABEL_63;
    }
    if ( v63 == 253 )
      goto LABEL_61;
    if ( v63 != 255 )
    {
      AdapterDefaultScaling = VIDPN_MGR::GetAdapterDefaultScaling(v153);
      *((_DWORD *)v50 + 6) = AdapterDefaultScaling;
      WdLogSingleEntry4(3LL, AdapterDefaultScaling, *a1, i, *(int *)(*((_QWORD *)v50 + 2) + 136LL));
      WdLogGlobalForLineNumber = 4573;
      goto LABEL_63;
    }
    if ( *(int *)(*((_QWORD *)v157 + 2) + 3044LL) >= 1105 )
LABEL_61:
      v65 = VIDPN_MGR::GetAdapterDefaultScaling(v153);
    else
      v65 = D3DKMDT_VPPS_NOTSPECIFIED;
    *((_DWORD *)v50 + 6) = v65;
LABEL_63:
    v66 = 0;
    v160 = (DMMVIDPNPRESENTPATH *)(unsigned int)Feature_BrokeredDisplays_RotMgr__private_featureState;
    if ( (Feature_BrokeredDisplays_RotMgr__private_featureState & 0x10) == 0 )
    {
      LODWORD(v160) = Feature_BrokeredDisplays_RotMgr__private_featureState | 1;
      wil_details_FeatureReporting_ReportUsageToService(
        (__int64)&Feature_BrokeredDisplays_RotMgr__private_descriptor,
        (__int64)v160,
        3LL);
      wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
        (unsigned __int8)v160,
        3,
        (__int64)&Feature_BrokeredDisplays_RotMgr__private_descriptor);
    }
    v67 = (_DWORD *)*((_QWORD *)v50 + 2);
    if ( (*v67 & 0x200LL) == 0 )
    {
      LODWORD(v68) = BmlGetRecommendedRotation(*a1, i, v158);
      v77 = v50 + 28;
      v76 = v68;
      goto LABEL_85;
    }
    v68 = (int)v67[33];
    v69 = D3DKMDT_VPPR_GET_CONTENT_ROTATION((enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION)v68) - 1;
    if ( v69 && (v70 = v69 - 1) != 0 && (unsigned int)(v70 - 1) >= 2 )
    {
      WdLogSingleEntry3(3LL, *a1, i, v68);
      WdLogGlobalForLineNumber = 4730;
    }
    else
    {
      if ( (unsigned int)D3DKMDT_VPPR_GET_OFFSET_ROTATION(v68) == 1 )
      {
        LODWORD(v160) = 0;
        if ( (_BYTE)v158 )
        {
          v71 = *a1;
          if ( (unsigned __int8)BmlIsSecondaryHardwareClonePath(*a1, i, &v160) )
          {
            v72 = *(_DWORD *)(*((_QWORD *)v71 + 15 * (unsigned int)v160 + 2) + 132LL);
            if ( (unsigned int)(v72 - 1) > 0xF || (unsigned int)(v68 - 1) > 0xF )
              LODWORD(v68) = 255;
            else
              LODWORD(v68) = D3DKMDT_VPPR_CONVERT_ROTATION_GIVEN_OFFSET(
                               v72,
                               (enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION)(((int)v68 - v72 + 4) % 4 + 1));
          }
        }
        v66 = 0;
        goto LABEL_83;
      }
      if ( (_BYTE)v158 )
      {
        IsSecondaryHardwareClonePath = BmlIsSecondaryHardwareClonePath(*a1, i, 0LL);
        v74 = *((_QWORD *)v50 + 2);
        LODWORD(v68) = *(_DWORD *)(v74 + 132);
        if ( !IsSecondaryHardwareClonePath )
        {
          WdLogSingleEntry3(1LL, *a1, i, *(int *)(v74 + 132));
          v75 = *((_QWORD *)v50 + 2);
          WdLogGlobalForLineNumber = 4709;
          LODWORD(v68) = D3DKMDT_VPPR_GET_CONTENT_ROTATION((enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION)*(_DWORD *)(v75 + 132));
        }
        goto LABEL_83;
      }
      WdLogSingleEntry3(3LL, *a1, i, v68);
      WdLogGlobalForLineNumber = 4720;
    }
    LODWORD(v68) = 1;
LABEL_83:
    v76 = v68;
    v77 = v50 + 28;
LABEL_85:
    *v77 = v76;
    v78 = *((_QWORD *)v50 + 2);
    if ( *(_BYTE *)(v78 + 129) && (*(_DWORD *)v78 & 0x20000) != 0 )
    {
      v79 = D3DKMDT_VPPR_GET_CONTENT_ROTATION((enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION)v68);
      if ( v79 == 2 || v79 == 4 )
      {
        *((_DWORD *)v50 + 27) = *(_DWORD *)(v78 + 156);
        v80 = *(_DWORD *)(v78 + 152);
      }
      else
      {
        *((_DWORD *)v50 + 27) = *(_DWORD *)(v78 + 152);
        v80 = *(_DWORD *)(v78 + 156);
      }
      *((_DWORD *)v50 + 28) = v80;
      v50[124] |= 1u;
    }
    v81 = *(_DWORD *)(v78 + 28);
    LOBYTE(v160) = 0;
    if ( (int)MonitorIsBoostRefreshRateEnabledByDefault(v152, v81, (bool *)&v160) >= 0 )
    {
      v82 = (char)v160;
    }
    else
    {
      WdLogSingleEntry3(
        2LL,
        *(unsigned int *)(*((_QWORD *)v50 + 2) + 28LL),
        *(int *)(*((_QWORD *)v50 + 2) + 20LL),
        *(unsigned int *)(*((_QWORD *)v50 + 2) + 16LL));
      v82 = 0;
      WdLogGlobalForLineNumber = 4769;
    }
    *((_DWORD *)v50 + 32) = (v82 != 0) | *((_DWORD *)v50 + 32) & 0xFFFFFFFE;
    if ( (unsigned __int8)BmlIsSecondaryHardwareClonePath(*a1, i, 0LL) )
      *((_WORD *)v50 + 33) = 0;
    v147 = 0;
    LOBYTE(v160) = 0;
    v154 = 0LL;
    v83 = 0;
    LODWORD(v151) = 0;
    v84 = 0;
    v146 = 0;
    if ( (int)MonitorGetMonitorHandle(
                v152,
                *(unsigned int *)(*((_QWORD *)v47 + 15 * i + 2) + 28LL),
                1,
                BmlPreparePathOrderAndVidPn,
                &v154) >= 0 )
    {
      v85 = v154;
      IsMonitorAndLinkHDRCapable = MonitorIsMonitorAndLinkHDRCapable(
                                     v154,
                                     (union MONITOR_AND_LINK_HDR_CAPS *)&v151,
                                     0LL);
      v66 = 0;
      if ( IsMonitorAndLinkHDRCapable >= 0 )
      {
        v83 = v151;
        v87 = v148;
      }
      else
      {
        v83 = 0;
        v87 = v148;
        WdLogSingleEntry3(
          2LL,
          *(unsigned int *)(*((_QWORD *)v47 + 15 * (unsigned int)v148 + 2) + 28LL),
          v159,
          IsMonitorAndLinkHDRCapable);
        WdLogGlobalForLineNumber = 4815;
      }
      IsHdrEnabled = MonitorIsHdrEnabled(v85, &v146);
      if ( IsHdrEnabled >= 0 )
      {
        v66 = v146;
      }
      else
      {
        WdLogSingleEntry3(2LL, *(unsigned int *)(*((_QWORD *)v47 + 15 * v87 + 2) + 28LL), v159, IsHdrEnabled);
        WdLogGlobalForLineNumber = 4829;
      }
      if ( (unsigned int)Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline()
        && v66
        && !DMMVIDPNPRESENTPATH::IsHdrAllowedOnVidPnPath((DMMVIDPNTARGET **)v149) )
      {
        v91 = WdLogNewEntry5_WdTrace(v90, v89);
        v92 = *(unsigned int *)(*((_QWORD *)v47 + 15 * v87 + 2) + 28LL);
        *(_QWORD *)(v91 + 32) = v149;
        *(_QWORD *)(v91 + 24) = v92;
        v66 = 0;
        WdLogGlobalForLineNumber = 4842;
      }
      IsMonitorAndDriverWCGCapable = MonitorIsMonitorAndDriverWCGCapable(v85, &v147, 0LL);
      if ( IsMonitorAndDriverWCGCapable >= 0 )
      {
        v84 = v147;
      }
      else
      {
        v84 = 0;
        WdLogSingleEntry3(
          2LL,
          *(unsigned int *)(*((_QWORD *)v47 + 15 * (unsigned int)v148 + 2) + 28LL),
          v159,
          IsMonitorAndDriverWCGCapable);
        WdLogGlobalForLineNumber = 4858;
      }
      IsWcgEnabled = MonitorIsWcgEnabled(v85, (bool *)&v160);
      if ( IsWcgEnabled < 0 )
      {
        v84 = 0;
        WdLogSingleEntry3(
          2LL,
          *(unsigned int *)(*((_QWORD *)v47 + 15 * (unsigned int)v148 + 2) + 28LL),
          v159,
          IsWcgEnabled);
        WdLogGlobalForLineNumber = 4868;
      }
      MonitorReleaseMonitorHandle(v152, v85, v95);
      i = v148;
    }
    v96 = (unsigned __int8)v160 & 1;
    *((_DWORD *)v50 + 29) = v83;
    v97 = (struct HDXGMONITOR__ *)(120LL * i);
    v154 = v97;
    v98 = *((_BYTE *)v47 + (_QWORD)v97 + 132) & 0xF1 | (2 * (v66 | (2 * (v96 | (2 * v84)))));
    *((_DWORD *)v50 + 30) = 0;
    *((_BYTE *)v47 + (_QWORD)v97 + 132) = v98;
    if ( ((unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(
                          *((ADAPTER_DISPLAY **)v152 + 395),
                          *(_DWORD *)(*(_QWORD *)((char *)v47 + (_QWORD)v97 + 16) + 24LL)) == 1
       || !(unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(
                           *((ADAPTER_DISPLAY **)v152 + 395),
                           *(_DWORD *)(*((_QWORD *)v47 + 15 * i + 2) + 24LL)))
      && (*((_BYTE *)v47 + (_QWORD)v154 + 132) & 1) == 0 )
    {
      if ( v66 && (v83 & 1) != 0 )
      {
        *((_DWORD *)v50 + 30) = v150;
      }
      else if ( (_BYTE)v160 && v84 && v150 == 2 )
      {
        *((_DWORD *)v50 + 30) = 3;
      }
    }
    if ( (a7 & 0x20000000) != 0 )
      *((_DWORD *)v50 + 30) = 0;
    *((_BYTE *)v47 + 120 * i + 132) = (*((_DWORD *)v50 + 30) != 0 ? 0x10 : 0) | *((_BYTE *)v47 + 120 * i + 132) & 0xEF;
    auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v155, 0LL);
  }
  v150 = 0;
  v102 = 0;
  if ( (_BYTE)v48 )
  {
    do
    {
      v103 = 120LL * v102;
      v152 = (void *)v103;
      if ( !(unsigned __int8)BmlIsSecondaryHardwareClonePath(v47, v102, 0LL) )
      {
        v104 = *a1;
        v105 = 0;
        v148 = 0LL;
        v106 = 0;
        v107 = v102;
        LODWORD(v160) = v102;
        if ( v102 < *(unsigned __int8 *)v104 )
        {
          v108 = v158;
          do
          {
            v109 = 120LL * v107;
            if ( *(_DWORD *)(*(_QWORD *)((char *)v104 + v109 + 16) + 24LL) == *(_DWORD *)(*(_QWORD *)((char *)v47 + v103 + 16)
                                                                                        + 24LL) )
            {
              v110 = *(_QWORD *)((char *)v104 + v109 + 44);
              v151 = v110;
              if ( v108
                && ((v111 = D3DKMDT_VPPR_GET_OFFSET_ROTATION(*(_DWORD *)((char *)v104 + v109 + 28)), v111 == 2)
                 || v111 == 4) )
              {
                v112 = v151;
                v113 = HIDWORD(v151);
                v151 = __PAIR64__(v151, HIDWORD(v151));
                v110 = v151;
              }
              else
              {
                v112 = HIDWORD(v151);
                v113 = v151;
              }
              if ( !v113 || !v112 )
              {
                WdLogSingleEntry0(1LL);
                v107 = (unsigned int)v160;
                WdLogGlobalForLineNumber = 4948;
              }
              if ( v105 && v106 )
              {
                v103 = (__int64)v152;
                if ( v105 > v113 )
                  v105 = v113;
                LODWORD(v148) = v105;
                if ( v106 > v112 )
                {
                  v106 = v112;
                  HIDWORD(v148) = v112;
                }
              }
              else
              {
                v148 = v110;
                v105 = v110;
                v106 = HIDWORD(v110);
                v103 = (__int64)v152;
              }
              v47 = v149;
            }
            v104 = *a1;
            LODWORD(v160) = ++v107;
          }
          while ( v107 < *(unsigned __int8 *)v104 );
          v102 = v150;
        }
        *(_QWORD *)((char *)v47 + v103 + 36) = v148;
        *(_DWORD *)((char *)v47 + v103 + 60) = BmlGetScaledAspectRatio((const struct _D3DKMDT_2DREGION *)((char *)v47 + v103 + 52));
      }
      v47 = *a1;
      v150 = ++v102;
      v149 = v47;
    }
    while ( v102 < *(unsigned __int8 *)v47 );
  }
  v114 = 0;
  while ( 2 )
  {
    v115 = *a1;
    if ( v114 < *(unsigned __int8 *)*a1 )
    {
      v116 = 120LL * v114;
      v160 = DMMVIDPNTOPOLOGY::FindPath(
               v156,
               *(_DWORD *)(*(_QWORD *)((char *)v115 + v116 + 16) + 24LL),
               *(_DWORD *)(*(_QWORD *)((char *)v115 + v116 + 16) + 28LL));
      v117 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*((DMMVIDPNTARGET **)v160 + 11));
      v118 = *(_QWORD **)((char *)v115 + v116 + 16);
      v119 = v117;
      v154 = v117;
      v120 = v118[1];
      if ( (v120 & 0x18001820B8FLL) != 0 )
      {
        if ( (v120 & *v118 & 0x100) != 0 && !(unsigned __int8)BmlIsSecondaryHardwareClonePath(*a1, v114, 0LL) )
        {
          v121 = v159;
          v122 = *a1;
          v158 = -1;
          if ( (int)BmlGetNextBestSourceMode((__int64)v122, v159, v114, (__int64)v119, 0xFFFFFFFF, &v158) < 0 )
          {
            v123 = *(_QWORD *)((char *)v115 + v116 + 16);
            if ( !_bittest64((const signed __int64 *)v123, 0x36u) )
            {
              DxgkLogCodePointPacket(
                0x13u,
                *(_DWORD *)(v123 + 96),
                *(_DWORD *)(v123 + 100),
                *(_DWORD *)(v123 + 116),
                *(_QWORD *)(v123 + 16));
              WdLogSingleEntry4(3LL, *a1, v121, v114, v158);
              WdLogGlobalForLineNumber = 5036;
LABEL_183:
              LODWORD(v133) = -1071774970;
              goto LABEL_185;
            }
            *(_QWORD *)(v123 + 8) &= 0xFFFFFFFFFFFFFE78uLL;
            goto LABEL_179;
          }
          v124 = VIDPN_MGR::PinVidPnSourceMode(v153, v119, v158, 1);
          v125 = v124;
          if ( v124 < 0 )
          {
            DxgkLogCodePointPacket(
              0x15u,
              *(_DWORD *)(*(_QWORD *)((char *)v115 + v116 + 16) + 96LL),
              *(_DWORD *)(*(_QWORD *)((char *)v115 + v116 + 16) + 100LL),
              *(_DWORD *)(*(_QWORD *)((char *)v115 + v116 + 16) + 116LL),
              *(_QWORD *)(*(_QWORD *)((char *)v115 + v116 + 16) + 16LL));
            WdLogSingleEntry4(3LL, v125, *a1, v159, v114);
            WdLogGlobalForLineNumber = 5057;
            LODWORD(v133) = v125;
            goto LABEL_185;
          }
          v126 = (DMMVIDPNTARGET **)v160;
          *(_WORD *)((char *)v115 + v116 + 66) = 0;
          v127 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(v126[12]);
          v129 = *(_QWORD *)((char *)v115 + v116 + 16);
          v130 = v127;
          v149 = v127;
          if ( (*(_BYTE *)v129 & 0x87) != 0x87
            || (*(_BYTE *)(v129 + 8) & 0x87) != 0x87
            || *(_DWORD *)(v129 + 56) == v128.Numerator
            || *(_DWORD *)(v129 + 52) == v128.Numerator )
          {
            v135 = -1;
          }
          else
          {
            v155 = (struct DMMVIDPNTARGETMODESET *)v128;
            v158 = -1;
            LODWORD(v160) = 1;
            v145 = (__int64)v119;
            v131 = v159;
            if ( (int)BmlGetNextBestTargetMode(
                        (__int64)*a1,
                        v159,
                        v114,
                        v127,
                        v145,
                        0xFFFFFFFF,
                        &v158,
                        (D3DDDI_RATIONAL *)&v155,
                        &v160) < 0 )
            {
              v142 = DivideAndRound(
                       *(unsigned int *)(*(_QWORD *)((char *)v115 + v116 + 16) + 52LL),
                       *(unsigned int *)(*(_QWORD *)((char *)v115 + v116 + 16) + 56LL));
              DxgkLogCodePointPacket(0x14u, *(_DWORD *)(v143 + 44), *(_DWORD *)(v143 + 48), v142, v144);
              WdLogSingleEntry3(3LL, *a1, v131, v114);
              WdLogGlobalForLineNumber = 5101;
              auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v149, 0LL);
              goto LABEL_183;
            }
            v132 = VIDPN_MGR::PinVidPnTargetMode(v153, v130, v158, 1);
            v133 = v132;
            if ( v132 < 0 )
            {
              v139 = DivideAndRound(
                       *(unsigned int *)(*(_QWORD *)((char *)v115 + v116 + 16) + 52LL),
                       *(unsigned int *)(*(_QWORD *)((char *)v115 + v116 + 16) + 56LL));
              DxgkLogCodePointPacket(0x16u, *(_DWORD *)(v140 + 44), *(_DWORD *)(v140 + 48), v139, v141);
              WdLogSingleEntry4(3LL, v133, *a1, v159, v114);
              WdLogGlobalForLineNumber = 5121;
              auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v149, 0LL);
LABEL_185:
              auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v154, 0LL);
              return (unsigned int)v133;
            }
            v134 = (D3DDDI_RATIONAL *)*((_QWORD *)v130 + 18);
            v134[19] = (D3DDDI_RATIONAL)v155;
            v134[20].Numerator = (unsigned int)v160;
            v135 = 0;
          }
          *(_WORD *)((char *)v115 + v116 + 70) = v135;
          auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v149, 0LL);
LABEL_173:
          if ( DMMVIDPNPRESENTPATH::IsFunctional((DMMVIDPNPRESENTPATH *)v126) )
          {
            v136 = *a1;
            for ( j = 0; j < *(unsigned __int8 *)*a1; ++j )
            {
              v138 = 120LL * j;
              if ( *(_DWORD *)(*(_QWORD *)((char *)v136 + v138 + 16) + 24LL) == *(_DWORD *)(*(_QWORD *)((char *)v115 + v116 + 16)
                                                                                          + 24LL) )
                *(_WORD *)((char *)v136 + v138 + 66) = 0;
              v136 = *a1;
            }
            *(_WORD *)((char *)v115 + v116 + 70) = 0;
          }
LABEL_179:
          auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v154, 0LL);
          ++v114;
          continue;
        }
        WdLogSingleEntry2(3LL, *a1, v114);
        WdLogGlobalForLineNumber = 5146;
      }
      v126 = (DMMVIDPNTARGET **)v160;
      goto LABEL_173;
    }
    return 0LL;
  }
}
