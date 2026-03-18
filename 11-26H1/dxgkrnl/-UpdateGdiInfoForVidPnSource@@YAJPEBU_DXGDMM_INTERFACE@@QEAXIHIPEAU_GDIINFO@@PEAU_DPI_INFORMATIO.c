/*
 * XREFs of ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHIPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x140381104
 * Callers:
 *     DxgkUpdateGdiInfo @ 0x1403809B0 (DxgkUpdateGdiInfo.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x14002E0B0 (-D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAXI_N@Z @ 0x140035738 (-AcquireMonitorShared@MONITOR_MGR@@SA-AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAXI_N@Z.c)
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x14003B89C (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     ??1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x14003C96C (--1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x140054320 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?RtlStringCchCopyUnicodeString@@YAJPEAG_KPEBU_UNICODE_STRING@@@Z @ 0x140055544 (-RtlStringCchCopyUnicodeString@@YAJPEAG_KPEBU_UNICODE_STRING@@@Z.c)
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x140056880 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x14005B6A4 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     ?FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z @ 0x14005EE90 (-FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z.c)
 *     ?FillOverridesAndAdjustedScaleFactor@DpiInternal@@YAXIHPEBU_DPI_SCALE_FACTOR_COLLECTION@@PEAU_DPI_INFORMATION@@H@Z @ 0x14005F4CC (-FillOverridesAndAdjustedScaleFactor@DpiInternal@@YAXIHPEBU_DPI_SCALE_FACTOR_COLLECTION@@PEAU_DP.c)
 *     ?D3DKMDT_VPPR_GET_CONTENT_ROTATION_PART@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x14005F79C (-D3DKMDT_VPPR_GET_CONTENT_ROTATION_PART@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?ScaleOverrideTestHook@@YAXQEBGPEAK@Z @ 0x14006165C (-ScaleOverrideTestHook@@YAXQEBGPEAK@Z.c)
 *     ?AdjustDesktopScaleFactorForOverride@DpiInternal@@YAKKUtagSIZE@@PEBU_DPI_SCALE_FACTOR_COLLECTION@@HH@Z @ 0x14006C024 (-AdjustDesktopScaleFactorForOverride@DpiInternal@@YAKKUtagSIZE@@PEBU_DPI_SCALE_FACTOR_COLLECTION.c)
 *     ?AvgXY@DpiInternal@@YAJUtagSIZE@@@Z @ 0x14006D740 (-AvgXY@DpiInternal@@YAJUtagSIZE@@@Z.c)
 *     ?HeuristicallyPickScaleFactorsForInternalEdidlessBdd@DpiInternal@@YAXUtagSIZE@@IPEBU_DPI_SCALE_FACTOR_COLLECTION@@PEAU_DPI_INFORMATION@@@Z @ 0x14006E364 (-HeuristicallyPickScaleFactorsForInternalEdidlessBdd@DpiInternal@@YAXUtagSIZE@@IPEBU_DPI_SCALE_F.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?GetPhysicalDisplaySizeOverride@@YAJPEAUtagSIZE@@@Z @ 0x1401D48C0 (-GetPhysicalDisplaySizeOverride@@YAJPEAUtagSIZE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x140320470 (-DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 *     ?DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x140349074 (-DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z.c)
 *     ?DetermineViewDistance@@YA_NQEAXAEBUtagSIZE@@H1PEAI@Z @ 0x1403912AC (-DetermineViewDistance@@YA_NQEAXAEBUtagSIZE@@H1PEAI@Z.c)
 *     DpiReadPnpRegistryValue @ 0x1403914A0 (DpiReadPnpRegistryValue.c)
 *     ?MonitorGetDpiInfoFromDescriptor@@YAJPEAXIPEAUDISPLAY_PREFERRED_MODE_INFO@@PEAI2PEA_N3@Z @ 0x1403F1494 (-MonitorGetDpiInfoFromDescriptor@@YAJPEAXIPEAUDISPLAY_PREFERRED_MODE_INFO@@PEAI2PEA_N3@Z.c)
 *     ?QueryWin32DpiValues@@YAJPEAIPEAU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x1403F8654 (-QueryWin32DpiValues@@YAJPEAIPEAU_DPI_SCALE_FACTOR_COLLECTION@@@Z.c)
 *     ?GetCurrentSourceResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAU_D3DKMDT_2DREGION@@@Z @ 0x1404004C8 (-GetCurrentSourceResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@P.c)
 *     ?GetPreferredScaleFactorForMonitor@DpiInternal@@YA_NQEAXIHPEAI@Z @ 0x140400BC0 (-GetPreferredScaleFactorForMonitor@DpiInternal@@YA_NQEAXIHPEAI@Z.c)
 *     ?GetCurrentTargetResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAU_D3DKMDT_2DREGION@@PEAE@Z @ 0x140404E74 (-GetCurrentTargetResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@P.c)
 *     ?GetCurrentContentResolution@@YAJQEAXIPEAPEBUtagRECT@@PEAU1@PEAK@Z @ 0x14040A5F0 (-GetCurrentContentResolution@@YAJQEAXIPEAPEBUtagRECT@@PEAU1@PEAK@Z.c)
 *     ?TraceLogDpiInfo@@YAXPEAU_DPI_INFORMATION@@PEBGAEBU_LUID@@II@Z @ 0x14040EAC4 (-TraceLogDpiInfo@@YAXPEAU_DPI_INFORMATION@@PEBGAEBU_LUID@@II@Z.c)
 *     ?LogScaleFactor@@YAXU_LUID@@IIPEAU_DPI_INFORMATION@@@Z @ 0x140414198 (-LogScaleFactor@@YAXU_LUID@@IIPEAU_DPI_INFORMATION@@@Z.c)
 */

__int64 __fastcall UpdateGdiInfoForVidPnSource(
        const struct _DXGDMM_INTERFACE *a1,
        char *a2,
        unsigned int a3,
        int a4,
        unsigned int a5,
        struct _GDIINFO *a6,
        struct _DPI_INFORMATION *a7)
{
  char *v7; // r14
  __int64 v9; // r13
  DXGPROCESS *Current; // rax
  struct _LUID *v11; // rdx
  bool IsRemoteConnection; // al
  char v13; // r11
  __int64 v14; // rdx
  __int64 v15; // rcx
  char IsAdapterSessionized; // bl
  __int64 v17; // r8
  __int64 v18; // r9
  char v19; // r11
  int CurrentProcessSessionId; // eax
  __int64 (__fastcall *v21)(char *, UINT *, UCHAR *); // rax
  int v22; // eax
  __int64 v23; // rdi
  __int64 v25; // r12
  int v26; // eax
  int v27; // eax
  __int64 v28; // rsi
  __int64 v29; // rdx
  int CurrentContentResolution; // ebx
  __int64 v31; // rdx
  _DWORD *v32; // rdi
  int Win32DpiValues; // eax
  __int64 v34; // rbx
  unsigned int v35; // ebx
  int v36; // eax
  int v37; // ecx
  unsigned int v38; // edi
  unsigned __int64 v39; // rcx
  int v40; // eax
  __int64 (__fastcall *v41)(_QWORD, _QWORD, _QWORD, struct _D3DKMDT_VIDPN_PRESENT_PATH *); // rax
  int v42; // eax
  __int64 v43; // rdx
  int v44; // eax
  int v45; // r13d
  bool v46; // si
  int VideoOutputTechnology; // eax
  __int64 v48; // rbx
  unsigned int v49; // edi
  int DpiInfoFromDescriptor; // eax
  int v51; // r12d
  int v52; // r14d
  __int64 v53; // rbx
  LONG cx; // ecx
  UINT v55; // edx
  LONG cy; // eax
  DXGADAPTER *v57; // rbx
  unsigned int v58; // eax
  int v59; // esi
  int PreferredMonitorSourceModeOnTarget; // eax
  UINT FirstChannel; // edx
  UINT SecondChannel; // ecx
  __int64 v63; // rbx
  DpiInternal *v64; // rsi
  int PhysicalDisplaySizeOverride; // eax
  struct tagSIZE v66; // rcx
  LONG v67; // esi
  D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId; // r13d
  D3DDDI_VIDEO_PRESENT_TARGET_ID VidPnTargetId; // ebx
  int v70; // ecx
  __int64 v71; // r14
  int v72; // eax
  int v73; // ecx
  int v74; // edx
  int v75; // ecx
  unsigned __int32 v76; // ecx
  int v77; // r8d
  D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT ScalingSupport; // r9d
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v79; // r10d
  struct tagSIZE v80; // rdx
  unsigned __int32 v81; // r8d
  unsigned int v82; // ecx
  unsigned __int32 v83; // eax
  char v84; // r12
  char cy_high; // cl
  __int64 v86; // rax
  bool v87; // r14
  DpiInternal *v88; // r13
  int v89; // ecx
  unsigned int v90; // eax
  unsigned __int8 v91; // r9
  unsigned int v92; // esi
  char v93; // bl
  bool PreferredScaleFactorForMonitor; // al
  unsigned int v95; // r14d
  bool v96; // r14
  struct tagSIZE v97; // rdx
  struct tagSIZE v98; // rdx
  int v99; // eax
  int v100; // r8d
  __int64 v101; // rbx
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // rax
  int v105; // ebx
  unsigned int *v106; // r8
  __m128i v107; // xmm1
  bool v108; // zf
  __int64 v109; // r14
  int v110; // edx
  int v111; // ecx
  int v112; // eax
  __int64 v113; // rcx
  int v114; // eax
  __int64 v115; // rdx
  const struct _DPI_SCALE_FACTOR_COLLECTION *v116; // r9
  unsigned int v117; // eax
  struct _DPI_INFORMATION *v118; // rax
  __int128 v119; // xmm1
  __int128 v120; // xmm0
  struct _D3DKMDT_2DREGION *v121; // [rsp+20h] [rbp-E0h]
  struct _D3DKMDT_2DREGION *v122; // [rsp+20h] [rbp-E0h]
  struct _D3DKMDT_2DREGION *v123; // [rsp+20h] [rbp-E0h]
  __int64 v124; // [rsp+20h] [rbp-E0h]
  bool *v125; // [rsp+28h] [rbp-D8h]
  bool v126; // [rsp+50h] [rbp-B0h] BYREF
  bool v127; // [rsp+51h] [rbp-AFh]
  struct _D3DKMDT_2DREGION v128; // [rsp+54h] [rbp-ACh] BYREF
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY Rotation; // [rsp+5Ch] [rbp-A4h] BYREF
  struct tagSIZE v130; // [rsp+60h] [rbp-A0h] BYREF
  tagSIZE v131; // [rsp+68h] [rbp-98h] BYREF
  UINT v132; // [rsp+70h] [rbp-90h]
  unsigned int v133; // [rsp+74h] [rbp-8Ch] BYREF
  struct _D3DKMDT_VIDPN_PRESENT_PATH v134; // [rsp+78h] [rbp-88h] BYREF
  struct _DPI_INFORMATION *v135; // [rsp+1E0h] [rbp+E0h]
  __int128 v136; // [rsp+1E8h] [rbp+E8h]
  struct tagSIZE v137[2]; // [rsp+1F8h] [rbp+F8h] BYREF
  __int128 v138; // [rsp+208h] [rbp+108h]
  _QWORD v139[3]; // [rsp+218h] [rbp+118h] BYREF
  struct _D3DKMDT_MONITOR_SOURCE_MODE v140; // [rsp+230h] [rbp+130h] BYREF
  __int64 v141; // [rsp+290h] [rbp+190h] BYREF
  int v142; // [rsp+298h] [rbp+198h]
  _OWORD v143[6]; // [rsp+2A0h] [rbp+1A0h] BYREF
  unsigned __int16 v144[128]; // [rsp+300h] [rbp+200h] BYREF

  v7 = a2;
  *(_QWORD *)&v134.CopyProtection.OEMCopyProtection[156] = a6;
  v9 = a3;
  v135 = a7;
  *(_DWORD *)&v134.CopyProtection.OEMCopyProtection[56] = a4;
  *(_DWORD *)&v134.CopyProtection.OEMCopyProtection[148] = a3;
  *(_QWORD *)&v134.ContentTransformation.RotationSupport = a2;
  Current = DXGPROCESS::GetCurrent((__int64)a1);
  if ( !Current || (IsRemoteConnection = DXGPROCESS::IsRemoteConnection(Current), v13 = 1, !IsRemoteConnection) )
    v13 = 0;
  LOBYTE(v128.cy) = v13;
  v133 = 0;
  IsAdapterSessionized = DXGADAPTER::IsAdapterSessionized((DXGADAPTER *)v7, v11, &v133, 0LL);
  if ( v19 != IsAdapterSessionized )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1645;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"IsRemote == IsAdapterSessionized",
      1645LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( IsAdapterSessionized )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v15, v14, v17, v18);
    if ( v133 != CurrentProcessSessionId )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1646;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"!IsAdapterSessionized || (TargetSession == PsGetCurrentProcessSessionId())",
        1646LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
  v21 = (__int64 (__fastcall *)(char *, UINT *, UCHAR *))*((_QWORD *)a1 + 6);
  *(_QWORD *)&v134.CopyProtection.OEMCopyProtection[84] = 0LL;
  memset(&v134.CopyProtection.OEMCopyProtection[12], 0, 28);
  v134.CopyProtection.OEMCopyProtection[4] = 0;
  *(_QWORD *)&v134.VidPnTargetColorCoeffDynamicRanges.ThirdChannel = 0LL;
  v22 = v21(v7, &v134.VidPnTargetColorCoeffDynamicRanges.ThirdChannel, &v134.CopyProtection.OEMCopyProtection[84]);
  v23 = v22;
  if ( v22 < 0 )
  {
    WdLogSingleEntry2(2LL, v7, v22);
    WdLogGlobalForLineNumber = 1660;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed call to create copy of the last VidPN committed by the client for adapter 0x%I64x (status = 0x%I64x)",
      (__int64)v7,
      v23,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v23;
  }
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
    (__int64)&v134.CopyProtection.OEMCopyProtection[4],
    *(__int64 *)&v134.VidPnTargetColorCoeffDynamicRanges.ThirdChannel,
    *((_QWORD *)a1 + 8),
    (__int64)v7);
  v25 = *(_QWORD *)&v134.CopyProtection.OEMCopyProtection[12];
  *(_QWORD *)&v134.VisibleFromActiveBROffset.cy = 0LL;
  *(_QWORD *)&v134.CopyProtection.OEMCopyProtection[68] = 0LL;
  v26 = (**(__int64 (__fastcall ***)(_QWORD, UINT *, UCHAR *))&v134.CopyProtection.OEMCopyProtection[84])(
          *(_QWORD *)&v134.CopyProtection.OEMCopyProtection[12],
          &v134.VisibleFromActiveBROffset.cy,
          &v134.CopyProtection.OEMCopyProtection[68]);
  v23 = v26;
  if ( v26 < 0 )
  {
    WdLogSingleEntry2(2LL, v25, v26);
    WdLogGlobalForLineNumber = 1678;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to acquire topology for VidPN 0x%I64x (status = 0x%I64x)",
      v25,
      v23,
      0LL,
      0LL,
      0LL);
    if ( v134.CopyProtection.OEMCopyProtection[4] )
      (*(void (__fastcall **)(_QWORD, __int64))&v134.CopyProtection.OEMCopyProtection[20])(
        *(_QWORD *)&v134.CopyProtection.OEMCopyProtection[28],
        v25);
    return (unsigned int)v23;
  }
  *(_QWORD *)&v134.CopyProtection.OEMCopyProtection[140] = 0LL;
  v27 = (**(__int64 (__fastcall ***)(_QWORD, _QWORD, UCHAR *))&v134.CopyProtection.OEMCopyProtection[68])(
          *(_QWORD *)&v134.VisibleFromActiveBROffset.cy,
          (unsigned int)v9,
          &v134.CopyProtection.OEMCopyProtection[140]);
  v28 = v27;
  if ( v27 < 0 )
  {
    WdLogSingleEntry3(2LL, v9, *(_QWORD *)&v134.VisibleFromActiveBROffset.cy, v27);
    WdLogGlobalForLineNumber = 1689;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to determine number of paths originating from source 0x%I64x in topology 0x%I64x (status = 0x%I64x)",
      v9,
      *(__int64 *)&v134.VisibleFromActiveBROffset.cy,
      v28,
      0LL,
      0LL);
    if ( v134.CopyProtection.OEMCopyProtection[4] )
    {
      v29 = v25;
      goto LABEL_18;
    }
    return (unsigned int)v28;
  }
  *(_QWORD *)&v134.CopyProtection.OEMCopyProtection[132] = 0LL;
  v134.VisibleFromActiveBROffset.cx = 0;
  *(_OWORD *)&v134.Content = 0LL;
  CurrentContentResolution = GetCurrentContentResolution(
                               v7,
                               v9,
                               (const struct tagRECT **)&v134.CopyProtection.OEMCopyProtection[132],
                               (struct tagRECT *)&v134.Content,
                               (unsigned int *)&v134.VisibleFromActiveBROffset);
  if ( CurrentContentResolution < 0 )
  {
    if ( v134.CopyProtection.OEMCopyProtection[4] )
    {
      v31 = v25;
LABEL_23:
      (*(void (__fastcall **)(_QWORD, __int64))&v134.CopyProtection.OEMCopyProtection[20])(
        *(_QWORD *)&v134.CopyProtection.OEMCopyProtection[28],
        v31);
    }
    return (unsigned int)CurrentContentResolution;
  }
  v32 = *(_DWORD **)&v134.CopyProtection.OEMCopyProtection[132];
  if ( !*(_QWORD *)&v134.CopyProtection.OEMCopyProtection[132] )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1703;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pContentRect != NULL", 1703LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( v32[2] - *v32 <= 0 || v32[3] - v32[1] <= 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1706;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(pContentRect->right - pContentRect->left > 0) && (pContentRect->bottom - pContentRect->top > 0)",
      1706LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v134.ImportanceOrdinal = D3DKMDT_VPPI_UNINITIALIZED;
  *(_OWORD *)&v137[0].cx = 0LL;
  v138 = 0LL;
  Win32DpiValues = QueryWin32DpiValues(
                     (unsigned int *)&v134.ImportanceOrdinal,
                     (struct _DPI_SCALE_FACTOR_COLLECTION *)v137);
  v34 = Win32DpiValues;
  if ( Win32DpiValues < 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1712;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NT_SUCCESS(ntStatus)", 1712LL, 0LL, 0LL, 0LL, 0LL);
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 1715;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Could not retrieve Win8StyleOverride and/or ScaleFactorCollection from Win32. (0x%I64x)",
      v34,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v35 = 0;
  *(_DWORD *)&v134.CopyProtection.OEMCopyProtection[60] = 0;
  memset(&v134.CopyProtection.OEMCopyProtection[172], 0, 0x5CuLL);
  v36 = 1;
  if ( *(_QWORD *)&v134.CopyProtection.OEMCopyProtection[140] > 1uLL || (v37 = 0, v134.VisibleFromActiveBROffset.cx > 1) )
    v37 = 1;
  if ( *v32 || v32[1] )
    v36 = 0;
  v38 = v37 | (32 * v36);
  *((_DWORD *)&v134.GammaRamp.Type + 1) = v38;
  if ( v36 )
    dword_140168A40 = *(_DWORD *)&v134.CopyProtection.OEMCopyProtection[56];
  v39 = 0LL;
  *(_QWORD *)&v134.VidPnTargetColorCoeffDynamicRanges.ThirdChannel = 0LL;
  v136 = *(_OWORD *)&v134.CopyProtection.OEMCopyProtection[236];
  if ( !*(_QWORD *)&v134.CopyProtection.OEMCopyProtection[140] )
  {
    v107 = *(__m128i *)&v134.CopyProtection.OEMCopyProtection[188];
    *(_OWORD *)&v134.GammaRamp.DataSize = *(_OWORD *)&v134.CopyProtection.OEMCopyProtection[188];
LABEL_188:
    v110 = _mm_cvtsi128_si32(_mm_srli_si128(v107, 8));
    if ( v110 )
    {
      v111 = _mm_cvtsi128_si32(_mm_srli_si128(v107, 12));
      if ( v111 )
      {
        if ( (v38 & 0x80u) == 0 )
        {
          v114 = 1000 * v110;
          v115 = *(_QWORD *)&v134.CopyProtection.OEMCopyProtection[156];
          *(_DWORD *)(*(_QWORD *)&v134.CopyProtection.OEMCopyProtection[156] + 8LL) = v114;
          *(_DWORD *)(v115 + 12) = 1000 * v111;
        }
        else
        {
          v112 = 1000 * v111;
          v113 = *(_QWORD *)&v134.CopyProtection.OEMCopyProtection[156];
          *(_DWORD *)(*(_QWORD *)&v134.CopyProtection.OEMCopyProtection[156] + 8LL) = v112;
          *(_DWORD *)(v113 + 12) = 1000 * v110;
        }
      }
    }
    if ( (v38 & 2) == 0
      || (v116 = (const struct _DPI_SCALE_FACTOR_COLLECTION *)(unsigned int)_mm_cvtsi128_si32(
                                                                              _mm_srli_si128(
                                                                                _mm_load_si128((const __m128i *)&v134.CopyProtection.OEMCopyProtection[252]),
                                                                                4)),
          (_DWORD)v116 == 1234568) )
    {
      v117 = *(_DWORD *)&v134.CopyProtection.OEMCopyProtection[180];
    }
    else
    {
      LODWORD(v121) = 0;
      v117 = DpiInternal::AdjustDesktopScaleFactorForOverride(
               (DpiInternal *)0x64,
               *(int *)&v134.CopyProtection.OEMCopyProtection[204],
               (struct tagSIZE)v137,
               v116,
               (struct _DPI_SCALE_FACTOR_COLLECTION *)v121);
      *(_DWORD *)&v134.CopyProtection.OEMCopyProtection[180] = v117;
    }
    if ( v35 )
    {
      v117 = v35;
      *(_DWORD *)&v134.CopyProtection.OEMCopyProtection[180] = v35;
      v134.CopyProtection.CopyProtectionSupport = (D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT)1234567;
    }
    if ( !v117 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2187;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"DpiInfo.DesktopScaleFactor != DESKTOP_SCALE_INVALID",
        2187LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v118 = v135;
    v119 = *(_OWORD *)&v134.CopyProtection.OEMCopyProtection[220];
    *(_DWORD *)&v134.CopyProtection.OEMCopyProtection[172] = 100;
    *(_DWORD *)&v134.CopyProtection.OEMCopyProtection[176] = 100;
    *(_OWORD *)v135 = *(_OWORD *)&v134.CopyProtection.OEMCopyProtection[172];
    *((_OWORD *)v118 + 1) = *(_OWORD *)&v134.GammaRamp.DataSize;
    *((_OWORD *)v118 + 2) = *(_OWORD *)&v134.CopyProtection.OEMCopyProtection[204];
    v120 = v136;
    *((_OWORD *)v118 + 3) = v119;
    *((_OWORD *)v118 + 4) = v120;
    *((_OWORD *)v118 + 5) = *(_OWORD *)&v134.CopyProtection.OEMCopyProtection[252];
    if ( v134.CopyProtection.OEMCopyProtection[4] )
      (*(void (__fastcall **)(_QWORD, __int64))&v134.CopyProtection.OEMCopyProtection[20])(
        *(_QWORD *)&v134.CopyProtection.OEMCopyProtection[28],
        v25);
    return 0LL;
  }
  *(_OWORD *)&v134.GammaRamp.DataSize = *(_OWORD *)&v134.CopyProtection.OEMCopyProtection[188];
  while ( 1 )
  {
    LOBYTE(v133) = 0;
    v128.cx = -1;
    v40 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int64, struct _D3DKMDT_2DREGION *))(*(_QWORD *)&v134.CopyProtection.OEMCopyProtection[68]
                                                                                                  + 8LL))(
            *(_QWORD *)&v134.VisibleFromActiveBROffset.cy,
            (unsigned int)v9,
            v39,
            &v128);
    v28 = v40;
    if ( v40 < 0 )
      break;
    *(_QWORD *)&v134.VidPnSourceId = 0LL;
    v41 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, struct _D3DKMDT_VIDPN_PRESENT_PATH *))(*(_QWORD *)&v134.CopyProtection.OEMCopyProtection[68]
                                                                                                 + 24LL);
    memset(&v134.CopyProtection.OEMCopyProtection[100], 0, 28);
    v134.CopyProtection.OEMCopyProtection[92] = 0;
    v42 = v41(*(_QWORD *)&v134.VisibleFromActiveBROffset.cy, (unsigned int)v9, v128.cx, &v134);
    v28 = v42;
    if ( v42 < 0 )
    {
      WdLogSingleEntry3(2LL, (unsigned int)v9, v128.cx, v42);
      WdLogGlobalForLineNumber = 1771;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to acquire info of path (0x%I64x, 0x%I64x) (status = 0x%I64x)",
        (unsigned int)v9,
        v128.cx,
        v28,
        0LL,
        0LL);
      goto LABEL_185;
    }
    v43 = *(_QWORD *)&v134.VidPnSourceId;
    if ( !*(_QWORD *)&v134.VidPnSourceId )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1776;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pVidPnPresentPathInfo != NULL", 1776LL, 0LL, 0LL, 0LL, 0LL);
      v43 = *(_QWORD *)&v134.VidPnSourceId;
    }
    DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
      (__int64)&v134.CopyProtection.OEMCopyProtection[92],
      v43,
      *(_QWORD *)(*(_QWORD *)&v134.CopyProtection.OEMCopyProtection[68] + 32LL),
      *(__int64 *)&v134.VisibleFromActiveBROffset.cy);
    v44 = D3DKMDT_VPPR_GET_OFFSET_ROTATION(*(_DWORD *)(*(_QWORD *)&v134.CopyProtection.OEMCopyProtection[100] + 20LL));
    v127 = 0;
    Rotation = D3DKMDT_VOT_UNINITIALIZED;
    v45 = v44;
    v46 = 0;
    VideoOutputTechnology = DmmGetVideoOutputTechnology(v7, v128.cx, &Rotation, 0LL);
    if ( VideoOutputTechnology >= 0 )
    {
      v46 = IsInternalVideoOutput(Rotation);
      v127 = v46;
    }
    else
    {
      v48 = VideoOutputTechnology;
      WdLogSingleEntry3(2LL, v7, v128.cx, VideoOutputTechnology);
      WdLogGlobalForLineNumber = 1793;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to get video output technology from adapter 0x%I64x, target 0x%I64x (status = 0x%I64x)",
        (__int64)v7,
        v128.cx,
        v48,
        0LL,
        0LL);
    }
    v130 = 0LL;
    *(_DWORD *)&v134.CopyProtection.OEMCopyProtection[76] = 0;
    v126 = 0;
    HIWORD(v128.cy) = 0;
    v141 = 0LL;
    v142 = 0;
    *(_DWORD *)&v134.CopyProtection.OEMCopyProtection[52] = 0;
    v49 = v38 & 0xFFFFFFFB | ((unsigned __int8)v38 | (unsigned __int8)(4 * v46)) & 4;
    v134.VisibleFromActiveTLOffset.cy = 0;
    DpiInfoFromDescriptor = MonitorGetDpiInfoFromDescriptor(
                              v7,
                              v128.cx,
                              (struct DISPLAY_PREFERRED_MODE_INFO *)&v141,
                              (unsigned int *)&v134.CopyProtection.OEMCopyProtection[52],
                              &v134.VisibleFromActiveTLOffset.cy,
                              &v126,
                              (bool *)&v128.cy + 2);
    if ( DpiInfoFromDescriptor < 0 )
    {
      v49 |= 8u;
      v52 = HIDWORD(v141);
      v51 = v141;
      *(_DWORD *)&v134.CopyProtection.OEMCopyProtection[204] = *(_DWORD *)(*(_QWORD *)&v134.CopyProtection.OEMCopyProtection[156]
                                                                         + 16LL);
      cx = v130.cx;
      *(_DWORD *)&v134.CopyProtection.OEMCopyProtection[208] = *(_DWORD *)(*(_QWORD *)&v134.CopyProtection.OEMCopyProtection[156]
                                                                         + 20LL);
      cy = v130.cy;
      goto LABEL_65;
    }
    if ( v126 )
    {
      v51 = v141;
      if ( (_DWORD)v141 )
      {
        v52 = HIDWORD(v141);
        if ( HIDWORD(v141) )
        {
          HIBYTE(v128.cy) = 1;
          goto LABEL_56;
        }
        v7 = *(char **)&v134.ContentTransformation.RotationSupport;
      }
    }
    v53 = DpiInfoFromDescriptor;
    WdLogSingleEntry3(2LL, v7, v128.cx, DpiInfoFromDescriptor);
    WdLogGlobalForLineNumber = 1833;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to get preferred mode from monitor EDID or DisplayID on adapter 0x%I64x, target 0x%I64x (status = 0x%I64x)",
      (__int64)v7,
      v128.cx,
      v53,
      0LL,
      0LL);
    v52 = HIDWORD(v141);
    v51 = v141;
LABEL_56:
    cx = *(_DWORD *)&v134.CopyProtection.OEMCopyProtection[52];
    v55 = v134.VisibleFromActiveTLOffset.cy;
    v131.cx = *(_DWORD *)&v134.CopyProtection.OEMCopyProtection[52];
    v130.cx = *(_DWORD *)&v134.CopyProtection.OEMCopyProtection[52];
    v132 = v134.VisibleFromActiveTLOffset.cy;
    v130.cy = v134.VisibleFromActiveTLOffset.cy;
    if ( ((v45 - 2) & 0xFFFFFFFD) == 0 )
    {
      v55 = *(_DWORD *)&v134.CopyProtection.OEMCopyProtection[52];
      v132 = *(_DWORD *)&v134.CopyProtection.OEMCopyProtection[52];
      v130.cy = *(_DWORD *)&v134.CopyProtection.OEMCopyProtection[52];
      cx = v134.VisibleFromActiveTLOffset.cy;
      v131.cx = v134.VisibleFromActiveTLOffset.cy;
      v130.cx = v134.VisibleFromActiveTLOffset.cy;
    }
    if ( !cx || !v55 )
    {
      cy = 0;
      cx = 0;
      v130.cy = 0;
      v130.cx = 0;
LABEL_65:
      v131.cx = cx;
      v132 = cy;
      goto LABEL_66;
    }
    if ( (int)(cx * v55) <= 16000 && !v46 )
    {
      *(_DWORD *)&v134.CopyProtection.OEMCopyProtection[76] = 1;
      v132 = 0;
      v130.cy = 0;
      v49 |= 0x40u;
      v131.cx = 0;
      v130.cx = 0;
LABEL_67:
      v57 = *(DXGADAPTER **)&v134.ContentTransformation.RotationSupport;
      v58 = *(_DWORD *)(*(_QWORD *)&v134.ContentTransformation.RotationSupport + 444LL) >> 5;
      LOBYTE(v58) = (*(_DWORD *)(*(_QWORD *)&v134.ContentTransformation.RotationSupport + 444LL) & 0x20) != 0;
      v133 = v58;
      goto LABEL_69;
    }
LABEL_66:
    if ( !cx )
      goto LABEL_67;
    v57 = *(DXGADAPTER **)&v134.ContentTransformation.RotationSupport;
LABEL_69:
    *(_QWORD *)&v134.VidPnTargetColorCoeffDynamicRanges.FirstChannel = 0LL;
    *(_DWORD *)&v134.CopyProtection.OEMCopyProtection[44] = v51;
    *(_DWORD *)&v134.CopyProtection.OEMCopyProtection[48] = v52;
    v59 = v52;
    memset(&v140, 0, sizeof(v140));
    v126 = 0;
    PreferredMonitorSourceModeOnTarget = DmmGetPreferredMonitorSourceModeOnTarget(v57, v128.cx, &v140);
    if ( PreferredMonitorSourceModeOnTarget < 0 )
    {
      v63 = PreferredMonitorSourceModeOnTarget;
      WdLogSingleEntry3(
        2LL,
        *(_QWORD *)&v134.ContentTransformation.RotationSupport,
        v128.cx,
        PreferredMonitorSourceModeOnTarget);
      WdLogGlobalForLineNumber = 1889;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to get preferred monitor source mode from adapter 0x%I64x, target 0x%I64x (status = 0x%I64x)",
        *(__int64 *)&v134.ContentTransformation.RotationSupport,
        v128.cx,
        v63,
        0LL,
        0LL);
      SecondChannel = v134.VidPnTargetColorCoeffDynamicRanges.SecondChannel;
      FirstChannel = v134.VidPnTargetColorCoeffDynamicRanges.FirstChannel;
    }
    else
    {
      FirstChannel = v140.VideoSignalInfo.ActiveSize.cx;
      SecondChannel = v140.VideoSignalInfo.ActiveSize.cy;
      v134.VidPnTargetColorCoeffDynamicRanges.FirstChannel = v140.VideoSignalInfo.ActiveSize.cx;
      v134.VidPnTargetColorCoeffDynamicRanges.SecondChannel = v140.VideoSignalInfo.ActiveSize.cy;
      v126 = 1;
    }
    if ( ((v45 - 2) & 0xFFFFFFFD) == 0
      && (*(_DWORD *)&v134.CopyProtection.OEMCopyProtection[44] = v52,
          v52 = v51,
          *(_DWORD *)&v134.CopyProtection.OEMCopyProtection[48] = v51,
          v51 = v59,
          v45 == 2)
      || v45 == 4 )
    {
      v134.VidPnTargetColorCoeffDynamicRanges.FirstChannel = SecondChannel;
      v134.VidPnTargetColorCoeffDynamicRanges.SecondChannel = FirstChannel;
    }
    v64 = *(DpiInternal **)&v134.CopyProtection.OEMCopyProtection[12];
    *(_QWORD *)&v134.VidPnSourceId = 0LL;
    CurrentContentResolution = DpiInternal::GetCurrentSourceResolution(
                                 *(DpiInternal **)&v134.CopyProtection.OEMCopyProtection[12],
                                 *(struct D3DKMDT_HVIDPN__ *const *)&v134.CopyProtection.OEMCopyProtection[84],
                                 *(const struct _DXGDMM_VIDPN_INTERFACE **)&v134.CopyProtection.OEMCopyProtection[100],
                                 &v134,
                                 v122);
    if ( CurrentContentResolution < 0 )
    {
      if ( v134.CopyProtection.OEMCopyProtection[92] )
        (*(void (__fastcall **)(_QWORD, _QWORD))&v134.CopyProtection.OEMCopyProtection[108])(
          *(_QWORD *)&v134.CopyProtection.OEMCopyProtection[116],
          *(_QWORD *)&v134.CopyProtection.OEMCopyProtection[100]);
      v108 = v134.CopyProtection.OEMCopyProtection[4] == 0;
      goto LABEL_181;
    }
    *(_QWORD *)&v134.ContentTransformation.ScalingSupport = 0LL;
    BYTE1(v128.cy) = 0;
    CurrentContentResolution = DpiInternal::GetCurrentTargetResolution(
                                 v64,
                                 *(struct D3DKMDT_HVIDPN__ *const *)&v134.CopyProtection.OEMCopyProtection[84],
                                 *(const struct _DXGDMM_VIDPN_INTERFACE **)&v134.CopyProtection.OEMCopyProtection[100],
                                 (const struct _D3DKMDT_VIDPN_PRESENT_PATH *)&v134.ContentTransformation.ScalingSupport,
                                 (struct _D3DKMDT_2DREGION *)((char *)&v128.cy + 1),
                                 (unsigned __int8 *)v125);
    if ( CurrentContentResolution < 0 )
    {
      if ( v134.CopyProtection.OEMCopyProtection[92] )
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))&v134.CopyProtection.OEMCopyProtection[108])(
          *(_QWORD *)&v134.CopyProtection.OEMCopyProtection[116],
          *(_QWORD *)&v134.CopyProtection.OEMCopyProtection[100],
          0LL);
      v108 = v134.CopyProtection.OEMCopyProtection[4] == 0;
LABEL_181:
      if ( v108 )
        return (unsigned int)CurrentContentResolution;
      v31 = (__int64)v64;
      goto LABEL_23;
    }
    if ( ((v45 - 2) & 0xFFFFFFFD) != 0 )
    {
      Rotation = v134.ContentTransformation.Rotation;
    }
    else
    {
      Rotation = (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)v134.ContentTransformation.ScalingSupport;
      v134.ContentTransformation.ScalingSupport = (D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT)v134.ContentTransformation.Rotation;
    }
    if ( *(_DWORD *)(*(_QWORD *)&v134.ContentTransformation.RotationSupport + 440LL) == 4 )
    {
      v131 = 0LL;
      PhysicalDisplaySizeOverride = GetPhysicalDisplaySizeOverride(&v131);
      v66 = v130;
      if ( PhysicalDisplaySizeOverride >= 0 )
        v66 = v131;
      v130 = v66;
      v67 = v66.cx;
      v132 = v66.cy;
    }
    else
    {
      v67 = v131.cx;
    }
    VidPnSourceId = v134.VidPnSourceId;
    if ( (v49 & 1) != 0 && v134.VisibleFromActiveBROffset.cx <= 1 && v51 && v52 )
    {
      VidPnTargetId = v134.VidPnTargetId;
      if ( BYTE1(v128.cy) )
        VidPnTargetId = v134.VidPnTargetId >> 1;
      if ( v134.VidPnSourceId >= 2 * v51 || (v70 = 0, VidPnTargetId >= 2 * v52) )
        v70 = 2;
      v49 = v49 & 0xFFFFFFFD | (v49 | v70) & 2;
      if ( BYTE1(v128.cy) )
        VidPnTargetId *= 2;
    }
    else
    {
      VidPnTargetId = v134.VidPnTargetId;
    }
    memset(v143, 0, sizeof(v143));
    v71 = *(_QWORD *)&v134.CopyProtection.OEMCopyProtection[100];
    DWORD1(v143[5]) = *(_DWORD *)&v134.CopyProtection.OEMCopyProtection[56];
    v72 = D3DKMDT_VPPR_GET_CONTENT_ROTATION_PART((enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION)*(_DWORD *)(*(_QWORD *)&v134.CopyProtection.OEMCopyProtection[100] + 20LL));
    if ( v72 == 2 || v72 == 4 )
      v73 = 128;
    else
      v73 = 0;
    v38 = v73 | v49 & 0xFFFFFF7F;
    *((_DWORD *)&v134.GammaRamp.Type + 1) = v38;
    v74 = *(_DWORD *)(*(_QWORD *)&v134.CopyProtection.OEMCopyProtection[132] + 8LL)
        - **(_DWORD **)&v134.CopyProtection.OEMCopyProtection[132];
    LODWORD(v143[2]) = v74;
    v75 = *(_DWORD *)(*(_QWORD *)&v134.CopyProtection.OEMCopyProtection[132] + 12LL)
        - *(_DWORD *)(*(_QWORD *)&v134.CopyProtection.OEMCopyProtection[132] + 4LL);
    DWORD1(v143[2]) = v75;
    if ( ((v72 - 2) & 0xFFFFFFFD) == 0 )
      *(_QWORD *)&v143[2] = __PAIR64__(v74, v75);
    switch ( *(_DWORD *)(v71 + 12) )
    {
      case 1:
      case 2:
        goto LABEL_112;
      case 3:
        ScalingSupport = v134.ContentTransformation.ScalingSupport;
        v79 = Rotation;
        v76 = *(_DWORD *)&v134.ContentTransformation.ScalingSupport
            * (v134.CopyProtection.APSTriggerBits - v134.Content)
            / VidPnSourceId;
        v83 = Rotation * (*(_DWORD *)v134.CopyProtection.OEMCopyProtection - v134.CopyProtection.CopyProtectionType);
        break;
      case 4:
        v79 = Rotation;
        ScalingSupport = v134.ContentTransformation.ScalingSupport;
        if ( VidPnTargetId * *(_DWORD *)&v134.ContentTransformation.ScalingSupport <= VidPnSourceId * Rotation )
        {
          v82 = (unsigned int)v134.ContentTransformation.ScalingSupport;
          v81 = VidPnTargetId * *(_DWORD *)&v134.ContentTransformation.ScalingSupport / VidPnSourceId;
        }
        else
        {
          v81 = Rotation;
          v82 = VidPnSourceId * Rotation / VidPnTargetId;
        }
        v76 = v82 * (v134.CopyProtection.APSTriggerBits - v134.Content) / VidPnSourceId;
        v83 = v81 * (*(_DWORD *)v134.CopyProtection.OEMCopyProtection - v134.CopyProtection.CopyProtectionType);
        break;
      case 5:
        goto LABEL_111;
      default:
        if ( *(_DWORD *)(v71 + 12) != 255 )
        {
          WdLogSingleEntry1(1LL);
          v124 = *(int *)(v71 + 12);
          WdLogGlobalForLineNumber = 1986;
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"Invalid scaling %I64d", v124, 0LL, 0LL, 0LL, 0LL);
LABEL_111:
          v38 |= 0x100u;
          *((_DWORD *)&v134.GammaRamp.Type + 1) = v38;
        }
LABEL_112:
        v76 = v134.CopyProtection.APSTriggerBits - v134.Content;
        v77 = *(_DWORD *)v134.CopyProtection.OEMCopyProtection - v134.CopyProtection.CopyProtectionType;
        ScalingSupport = v134.ContentTransformation.ScalingSupport;
        v79 = Rotation;
        goto LABEL_113;
    }
    v77 = v83 / VidPnTargetId;
LABEL_113:
    DWORD2(v143[1]) = v67 * v76 / *(_DWORD *)&ScalingSupport;
    v80 = (struct tagSIZE)(v132 * v77 % v79);
    HIDWORD(v143[1]) = v132 * v77 / v79;
    LOBYTE(v80.cx) = (v38 & 2) != 0 || !v126;
    v84 = 0;
    *(_QWORD *)&v134.VidPnSourceId = 0LL;
    if ( (_BYTE)v133 || *(_DWORD *)&v134.CopyProtection.OEMCopyProtection[76] || !BYTE2(v128.cy) )
      goto LABEL_133;
    cy_high = v126;
    if ( LOBYTE(v80.cx) )
      cy_high = HIBYTE(v128.cy);
    if ( !cy_high )
    {
LABEL_133:
      v88 = *(DpiInternal **)&v134.ContentTransformation.RotationSupport;
      v87 = v127;
      LODWORD(v143[4]) = 0;
    }
    else
    {
      v86 = *(_QWORD *)&v134.VidPnTargetColorCoeffDynamicRanges.FirstChannel;
      v87 = v127;
      v88 = *(DpiInternal **)&v134.ContentTransformation.RotationSupport;
      if ( LOBYTE(v80.cx) )
        v86 = *(_QWORD *)&v134.CopyProtection.OEMCopyProtection[44];
      *(_QWORD *)&v134.VidPnSourceId = v86;
      v84 = 1;
      v89 = 16
          * DetermineViewDistance(
              *(void *const *)&v134.ContentTransformation.RotationSupport,
              &v130,
              v127,
              (const struct tagSIZE *)&v134,
              (unsigned int *)&v143[4]);
      v90 = v38 & 0xFFFFFFEF;
      v38 = v38 & 0xFFFFFFEF | v89;
      *((_DWORD *)&v134.GammaRamp.Type + 1) = v90 | v89;
      if ( !LODWORD(v143[4]) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 2057;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"CurrentDpiInfo.ViewDistTenthsOfInch != 0",
          2057LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
    }
    v91 = v128.cy;
    v92 = 0;
    v131.cx = 0;
    v93 = 0;
    if ( !LOBYTE(v128.cy) || v134.ImportanceOrdinal == D3DKMDT_VPPI_UNINITIALIZED )
    {
      if ( v87 && (int)DpiReadPnpRegistryValue(*((_QWORD *)v88 + 27), L"PreferredScaleFactor", &v131, 4LL, 2) >= 0 )
      {
        v92 = v131.cx;
        v80 = (struct tagSIZE)1LL;
      }
      else
      {
        v92 = 0;
        v131.cx = 0;
        v80 = 0LL;
      }
      v38 = v38 & 0xFFFFEFFF | (v80.cx << 12);
      *((_DWORD *)&v134.GammaRamp.Type + 1) = v38;
      if ( !v80.cx )
      {
        PreferredScaleFactorForMonitor = DpiInternal::GetPreferredScaleFactorForMonitor(
                                           v88,
                                           (void *const)v128.cx,
                                           (v38 >> 5) & 1,
                                           (int)&v131,
                                           (unsigned int *)v123);
        v92 = v131.cx;
        v95 = v38 & 0xFFFFF7FF;
        v38 = v38 & 0xFFFFF7FF | (PreferredScaleFactorForMonitor << 11);
        *((_DWORD *)&v134.GammaRamp.Type + 1) = v95 | (PreferredScaleFactorForMonitor << 11);
      }
      v91 = v128.cy;
      if ( v92 )
        v93 = 1;
    }
    v96 = v127;
    if ( (_BYTE)v133 && v127 && !v92 )
    {
      DpiInternal::HeuristicallyPickScaleFactorsForInternalEdidlessBdd(
        *(DpiInternal **)&v143[2],
        v80,
        (__int64)v137,
        (const struct _DPI_SCALE_FACTOR_COLLECTION *)v143);
      LODWORD(v123) = 0;
      DpiInternal::FillOverridesAndAdjustedScaleFactor(
        (DpiInternal *)(unsigned int)v134.ImportanceOrdinal,
        0,
        (int *)v137,
        (const struct _DPI_SCALE_FACTOR_COLLECTION *)v143,
        (struct _DPI_INFORMATION *)v123);
      v38 |= 0x400u;
      *((_DWORD *)&v134.GammaRamp.Type + 1) = v38;
    }
    else
    {
      if ( v93 && v84 && DWORD1(v143[2]) != v134.VidPnTargetId && DWORD1(v143[2]) && v134.VidPnTargetId )
        v92 = DWORD1(v143[2]) * v92 / v134.VidPnTargetId;
      LODWORD(v123) = v134.ImportanceOrdinal;
      FillDpiInfo(
        (const struct tagSIZE *)&v143[1] + 1,
        (struct tagSIZE *)&v143[2],
        v137,
        (DpiInternal *)LODWORD(v143[4]),
        (DpiInternal *)v123,
        v92,
        v91,
        (struct _DPI_INFORMATION *)v143);
    }
    if ( HIDWORD(v143[5]) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2119;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"CurrentDpiInfo.FlagsUnion.AllFlags == 0",
        2119LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    HIDWORD(v143[5]) = v38;
    if ( v96
      || (v38 & 4) == 0
      && (DpiInternal::AvgXY(*((DpiInternal **)&v143[3] + 1), v97),
          v99 = DpiInternal::AvgXY(*(DpiInternal **)&v134.CopyProtection.OEMCopyProtection[228], v98),
          v99 <= v100) )
    {
      *(_OWORD *)&v134.CopyProtection.OEMCopyProtection[172] = v143[0];
      *(_OWORD *)&v134.GammaRamp.DataSize = v143[1];
      *(_OWORD *)&v134.CopyProtection.OEMCopyProtection[204] = v143[2];
      v136 = v143[4];
      *(_OWORD *)&v134.CopyProtection.OEMCopyProtection[252] = v143[5];
      v38 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v143[5], 12));
      *(_OWORD *)&v134.CopyProtection.OEMCopyProtection[220] = v143[3];
    }
    memset(v144, 0, sizeof(v144));
    v101 = v128.cx;
    v104 = WdLogNewEntry5_WdTrace(v103, v102);
    v7 = *(char **)&v134.ContentTransformation.RotationSupport;
    *(_QWORD *)(v104 + 24) = v101;
    *(_QWORD *)(v104 + 32) = v7;
    WdLogGlobalForLineNumber = 5201;
    if ( !v7 || (_DWORD)v101 == -1 )
    {
      v105 = -1073741811;
      goto LABEL_170;
    }
    MONITOR_MGR::AcquireMonitorShared(v139, (__int64)v7, v101, 1u);
    if ( !v139[0] )
    {
      v105 = -1073741632;
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 5214;
      CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v139);
LABEL_170:
      WdLogSingleEntry3(2LL, v7, v128.cx, v105);
      WdLogGlobalForLineNumber = 2144;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"MonitorGetMonitorDeviceInterfaceName failed for adapter: 0x%I64x, target: 0x%I64x, with status: 0x%I64x",
        (__int64)v7,
        v128.cx,
        v105,
        0LL,
        0LL);
      v144[0] = 0;
      goto LABEL_171;
    }
    v105 = RtlStringCchCopyUnicodeString(
             (char *)v144,
             128LL,
             (const struct _UNICODE_STRING *)(*(_QWORD *)(v139[0] + 200LL) + 48LL));
    if ( v105 >= 0 )
      v144[1] = 92;
    CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v139);
    if ( v105 < 0 )
      goto LABEL_170;
    ScaleOverrideTestHook(
      (DpiInternal *)v144,
      (const unsigned __int16 *)&v134.CopyProtection.OEMCopyProtection[60],
      v106);
LABEL_171:
    LODWORD(v9) = *(_DWORD *)&v134.CopyProtection.OEMCopyProtection[148];
    TraceLogDpiInfo(
      (struct _DPI_INFORMATION *)v143,
      v144,
      (const struct _LUID *)(v7 + 412),
      *(unsigned int *)&v134.CopyProtection.OEMCopyProtection[148],
      v92);
    LogScaleFactor(*(struct _LUID *)(v7 + 412), v9, v134.ImportanceOrdinal, (struct _DPI_INFORMATION *)v143);
    if ( v134.CopyProtection.OEMCopyProtection[92] )
      (*(void (__fastcall **)(_QWORD, _QWORD))&v134.CopyProtection.OEMCopyProtection[108])(
        *(_QWORD *)&v134.CopyProtection.OEMCopyProtection[116],
        *(_QWORD *)&v134.CopyProtection.OEMCopyProtection[100]);
    v39 = *(_QWORD *)&v134.VidPnTargetColorCoeffDynamicRanges.ThirdChannel + 1LL;
    *(_QWORD *)&v134.VidPnTargetColorCoeffDynamicRanges.ThirdChannel = v39;
    if ( v39 >= *(_QWORD *)&v134.CopyProtection.OEMCopyProtection[140] )
    {
      v35 = *(_DWORD *)&v134.CopyProtection.OEMCopyProtection[60];
      v107 = *(__m128i *)&v134.GammaRamp.DataSize;
      v25 = *(_QWORD *)&v134.CopyProtection.OEMCopyProtection[12];
      goto LABEL_188;
    }
  }
  v109 = *(_QWORD *)&v134.VidPnTargetColorCoeffDynamicRanges.ThirdChannel;
  WdLogSingleEntry3(2LL, *(_QWORD *)&v134.VidPnTargetColorCoeffDynamicRanges.ThirdChannel, (unsigned int)v9, v40);
  WdLogGlobalForLineNumber = 1753;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Failed to enumerate target of %I64d'th path originating from source 0x%I64x (status = 0x%I64x)",
    v109,
    (unsigned int)v9,
    v28,
    0LL,
    0LL);
LABEL_185:
  if ( !v134.CopyProtection.OEMCopyProtection[4] )
    return (unsigned int)v28;
  v29 = *(_QWORD *)&v134.CopyProtection.OEMCopyProtection[12];
LABEL_18:
  (*(void (__fastcall **)(_QWORD, __int64))&v134.CopyProtection.OEMCopyProtection[20])(
    *(_QWORD *)&v134.CopyProtection.OEMCopyProtection[28],
    v29);
  return (unsigned int)v28;
}
