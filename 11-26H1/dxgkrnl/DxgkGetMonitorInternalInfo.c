/*
 * XREFs of DxgkGetMonitorInternalInfo @ 0x140437F40
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14002E850 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z @ 0x140035638 (-AcquireMonitorShared@MONITOR_MGR@@SA-AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x14003C96C (--1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     Feature_DolbyVisionAndUpdatedHdrUx__private_IsEnabledDeviceUsageNoInline @ 0x140056424 (Feature_DolbyVisionAndUpdatedHdrUx__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_AddDisplayHDR12CertificationTier__private_IsEnabledDeviceUsageNoInline @ 0x140076EBC (Feature_AddDisplayHDR12CertificationTier__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?MonitorGetDisplayHdrSupportLevel@@YAJPEAUHDXGMONITOR__@@PEAW4_DISPLAYCONFIG_HDR_CERTIFICATIONS@@PEAW4_DISPLAYCONFIG_HDR_CERTIFICATIONS2@@@Z @ 0x14026EE98 (-MonitorGetDisplayHdrSupportLevel@@YAJPEAUHDXGMONITOR__@@PEAW4_DISPLAYCONFIG_HDR_CERTIFICATIONS@.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1402C2560 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?MonitorGetMonitorHandle@@YAJPEAXIE0PEAPEAUHDXGMONITOR__@@@Z @ 0x1402CA36C (-MonitorGetMonitorHandle@@YAJPEAXIE0PEAPEAUHDXGMONITOR__@@@Z.c)
 *     ?MonitorReleaseMonitorHandle@@YAJPEAXPEAUHDXGMONITOR__@@0@Z @ 0x1402CC114 (-MonitorReleaseMonitorHandle@@YAJPEAXPEAUHDXGMONITOR__@@0@Z.c)
 *     DxgkConvertLegacyQDCAdapterAndIdToActual @ 0x14031F6F0 (DxgkConvertLegacyQDCAdapterAndIdToActual.c)
 *     ?MonitorGetCCDMonitorID@@YAJPEAUHDXGMONITOR__@@KPEAG@Z @ 0x14034688C (-MonitorGetCCDMonitorID@@YAJPEAUHDXGMONITOR__@@KPEAG@Z.c)
 *     ?_GetPreferredMonitorSourceMode@MonitorModes@DxgMonitor@@QEBAJPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x14034A290 (-_GetPreferredMonitorSourceMode@MonitorModes@DxgMonitor@@QEBAJPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@.c)
 *     ?MonitorIsMonitorAndLinkHDRCapable@@YAJPEAUHDXGMONITOR__@@PEATMONITOR_AND_LINK_HDR_CAPS@@PEAW4MonitorAndLinkHDRIncapableReason@@@Z @ 0x140362EE0 (-MonitorIsMonitorAndLinkHDRCapable@@YAJPEAUHDXGMONITOR__@@PEATMONITOR_AND_LINK_HDR_CAPS@@PEAW4Mo.c)
 *     ?MonitorGetMonitorOrientationsFromMonitor@@YAJPEAUHDXGMONITOR__@@PEAK1@Z @ 0x14039588C (-MonitorGetMonitorOrientationsFromMonitor@@YAJPEAUHDXGMONITOR__@@PEAK1@Z.c)
 *     ?MonitorGetLinkInfoFromMonitor@@YAJPEAUHDXGMONITOR__@@AEAU_DXGK_MONITORLINKINFO@@@Z @ 0x1403C0138 (-MonitorGetLinkInfoFromMonitor@@YAJPEAUHDXGMONITOR__@@AEAU_DXGK_MONITORLINKINFO@@@Z.c)
 *     ?MonitorGetNativeFlags@@YAJPEAUHDXGMONITOR__@@PEAE11@Z @ 0x1403C8F88 (-MonitorGetNativeFlags@@YAJPEAUHDXGMONITOR__@@PEAE11@Z.c)
 *     ?MonitorGetAdvancedColorParams@@YAJPEAUHDXGMONITOR__@@PEAUDISPLAY_COLORIMETRY_FLAGS_INTERNAL_IN@@PEAUDISPLAY_COLORIMETRY_INTERNAL@@PEAUDISPLAY_COLORIMETRY_FLAGS_INTERNAL_OUT@@@Z @ 0x1403D3F84 (-MonitorGetAdvancedColorParams@@YAJPEAUHDXGMONITOR__@@PEAUDISPLAY_COLORIMETRY_FLAGS_INTERNAL_IN@.c)
 *     ?MonitorGetDpiInfoFromDescriptor@@YAJPEAXIPEAUDISPLAY_PREFERRED_MODE_INFO@@PEAI2PEA_N3@Z @ 0x1403F1494 (-MonitorGetDpiInfoFromDescriptor@@YAJPEAXIPEAUDISPLAY_PREFERRED_MODE_INFO@@PEAI2PEA_N3@Z.c)
 *     ?MonitorGetDisplayIDFromMonitor@@YAJPEAUHDXGMONITOR__@@IPEAIPEAE@Z @ 0x1403FF8A0 (-MonitorGetDisplayIDFromMonitor@@YAJPEAUHDXGMONITOR__@@IPEAIPEAE@Z.c)
 *     ?MonitorGetPseudoSpecializedState@@YAJPEAUHDXGMONITOR__@@PEA_N11@Z @ 0x1403FFA10 (-MonitorGetPseudoSpecializedState@@YAJPEAUHDXGMONITOR__@@PEA_N11@Z.c)
 *     ?MonitorIsMonitorEdidless@@YAJPEAUHDXGMONITOR__@@AEAE@Z @ 0x1404105A8 (-MonitorIsMonitorEdidless@@YAJPEAUHDXGMONITOR__@@AEAE@Z.c)
 */

__int64 __fastcall DxgkGetMonitorInternalInfo(__int64 a1, unsigned int a2, __int64 a3, unsigned int *a4, __int64 a5)
{
  __int64 v6; // r12
  unsigned int v7; // edi
  int v8; // eax
  __int64 v9; // r15
  __int64 v10; // r14
  __int64 v11; // rcx
  DXGGLOBAL *Global; // rax
  DWORD LowPart; // ebx
  struct DXGADAPTER *v15; // rax
  DXGADAPTER *v16; // rsi
  __int64 HighPart; // rdi
  __int64 v18; // rdi
  __int64 v19; // rcx
  int v20; // eax
  unsigned int v21; // r14d
  __int64 v22; // rcx
  int MonitorHandle; // eax
  void *v24; // r8
  __int64 v25; // r14
  struct HDXGMONITOR__ *v26; // r12
  int CCDMonitorID; // eax
  __int64 v28; // rsi
  __int64 v29; // r15
  __int64 v30; // rbx
  int AdvancedColorParams; // eax
  __int64 v32; // rsi
  __int64 v33; // r15
  __int64 v34; // rbx
  __int64 v35; // r14
  bool v36; // zf
  int v37; // edx
  unsigned int v38; // edx
  int v39; // edx
  int IsMonitorAndLinkHDRCapable; // eax
  int IsEnabledDeviceUsageNoInline; // eax
  enum _DISPLAYCONFIG_HDR_CERTIFICATIONS *v42; // rdx
  int DisplayIDFromMonitor; // eax
  __int64 v44; // rdx
  bool v45; // cf
  int v46; // eax
  UINT cy; // eax
  int PreferredMonitorSourceMode; // ebx
  int v49; // eax
  int LinkInfoFromMonitor; // eax
  unsigned int v51; // ecx
  unsigned int *v52; // rdi
  _DWORD *v53; // rbx
  char v54; // cl
  unsigned int v55; // eax
  __int64 v56; // rcx
  bool v57; // [rsp+50h] [rbp-B0h] BYREF
  bool v58[3]; // [rsp+51h] [rbp-AFh] BYREF
  bool v59[4]; // [rsp+54h] [rbp-ACh] BYREF
  struct _LUID v60; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v61; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v62; // [rsp+64h] [rbp-9Ch] BYREF
  __int64 v63; // [rsp+68h] [rbp-98h] BYREF
  int v64; // [rsp+70h] [rbp-90h] BYREF
  __int64 v65; // [rsp+78h] [rbp-88h]
  char v66; // [rsp+80h] [rbp-80h]
  struct HDXGMONITOR__ *v67; // [rsp+88h] [rbp-78h] BYREF
  __int64 v68; // [rsp+90h] [rbp-70h]
  unsigned int *v69; // [rsp+98h] [rbp-68h]
  struct _DXGK_MONITORLINKINFO v70; // [rsp+A0h] [rbp-60h] BYREF
  _D3DKMDT_MONITOR_SOURCE_MODE v71; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v72; // [rsp+120h] [rbp+20h] BYREF
  int v73; // [rsp+128h] [rbp+28h]
  _BYTE v74[144]; // [rsp+130h] [rbp+30h] BYREF

  v6 = a2;
  v7 = a1;
  v69 = a4;
  v61 = a2;
  v63 = a1;
  v68 = a5;
  v64 = -1;
  v65 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v66 = 1;
    v64 = 2186;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    v66 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v64, 2186);
  v60 = 0LL;
  v62 = 0;
  v67 = 0LL;
  v8 = DxgkConvertLegacyQDCAdapterAndIdToActual((struct _LUID *)&v63, v6, &v60, &v62);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = SHIDWORD(v63);
    WdLogSingleEntry4(2LL, SHIDWORD(v63), v7, v6, v8);
    WdLogGlobalForLineNumber = 8029;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to get adapter LUID from LUID (0x%I64x%08I64x), target ID 0x%I64x (Status = 0x%I64x).",
      v10,
      v7,
      v6,
      v9,
      0LL);
LABEL_7:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v64);
    if ( v66 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v11, (__int64)&EventProfilerExit);
    }
    return (unsigned int)v9;
  }
  Global = DXGGLOBAL::GetGlobal();
  LowPart = v60.LowPart;
  v15 = DXGGLOBAL::ReferenceAdapterByLuid(Global, v60, (unsigned __int64 *)&v70);
  *(_QWORD *)&v70.UsageHints.0 = v15;
  v16 = v15;
  if ( !v15 )
  {
    HighPart = v60.HighPart;
    WdLogSingleEntry4(2LL, v60.HighPart, LowPart, -1073741811LL, 0LL);
    WdLogGlobalForLineNumber = 8045;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to reference adapter by LUID (0x%I64x%08I64x) in DxgkGetMonitorInternalInfo function, returning 0x%I64x.",
      HighPart,
      LowPart,
      -1073741811LL,
      0LL,
      0LL);
    goto LABEL_15;
  }
  if ( !*((_QWORD *)v15 + 395) )
  {
    DXGADAPTER::ReleaseReference(v15);
    v18 = v60.HighPart;
    WdLogSingleEntry4(2LL, v60.HighPart, LowPart, -1073741811LL, 1LL);
    WdLogGlobalForLineNumber = 8055;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Caller specified adapter 0x%I64x%08I64x is not a display adapter, returning 0x%I64x",
      v18,
      LowPart,
      -1073741811LL,
      1LL,
      0LL);
LABEL_15:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v64);
    if ( v66 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v19, (__int64)&EventProfilerExit);
    return 3221225485LL;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v74, v15, 0LL);
  DXGADAPTER::ReleaseReference(v16);
  v20 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v74, 0LL);
  v21 = v20;
  if ( v20 < 0 )
  {
    WdLogSingleEntry3(3LL, v60.HighPart, LowPart, v20);
    WdLogGlobalForLineNumber = 8073;
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v74);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v64);
    if ( v66 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v22, (__int64)&EventProfilerExit);
    return v21;
  }
  MonitorHandle = MonitorGetMonitorHandle(v16, v62, 0, DxgkGetMonitorInternalInfo, &v67);
  v9 = MonitorHandle;
  if ( MonitorHandle < 0 )
  {
    v25 = SHIDWORD(v63);
    WdLogSingleEntry5(2LL, SHIDWORD(v63), v7, v6, MonitorHandle, 0LL);
    WdLogGlobalForLineNumber = 8094;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to get connected monitor from adapter 0x%I64x%08I64x target 0x%I64x (Status = 0x%I64x).",
      v25,
      v7,
      v6,
      v9,
      0LL);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v74);
    goto LABEL_7;
  }
  v26 = v67;
  if ( !v67 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 8098;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"MonitorHandle != NULL", 8098LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( a3 )
  {
    CCDMonitorID = MonitorGetCCDMonitorID(v26, 0x104u, (unsigned __int16 *)(a3 + 20));
    if ( CCDMonitorID < 0 )
    {
      v28 = v61;
      v29 = SHIDWORD(v63);
      v30 = CCDMonitorID;
      WdLogSingleEntry4(2LL, SHIDWORD(v63), v7, v61, CCDMonitorID);
      WdLogGlobalForLineNumber = 8112;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to get monitor CCD name from adapter 0x%I64x%08I64x target 0x%I64x (Status = 0x%I64x).",
        v29,
        v7,
        v28,
        v30,
        0LL);
    }
    *(_WORD *)v59 = 0;
    v60.LowPart = 0;
    LOWORD(v60.HighPart) = 0;
    BYTE2(v60.HighPart) = 0;
    memset(&v71, 0, 48);
    AdvancedColorParams = MonitorGetAdvancedColorParams(
                            v26,
                            (struct DISPLAY_COLORIMETRY_FLAGS_INTERNAL_IN *)v59,
                            (struct DISPLAY_COLORIMETRY_INTERNAL *)&v71,
                            (struct DISPLAY_COLORIMETRY_FLAGS_INTERNAL_OUT *)&v60);
    if ( AdvancedColorParams >= 0 )
    {
      v36 = LOBYTE(v60.LowPart) == 0;
      v37 = *(_DWORD *)(a3 + 588);
      *(_DWORD *)(a3 + 540) = v71.Id;
      *(_DWORD *)(a3 + 544) = *(&v71.Id + 1);
      *(_DWORD *)(a3 + 548) = v71.VideoSignalInfo.VideoStandard;
      *(D3DKMDT_2DREGION *)(a3 + 552) = v71.VideoSignalInfo.TotalSize;
      *(D3DKMDT_2DREGION *)(a3 + 560) = v71.VideoSignalInfo.ActiveSize;
      *(D3DDDI_RATIONAL *)(a3 + 568) = v71.VideoSignalInfo.VSyncFreq;
      *(D3DDDI_RATIONAL *)(a3 + 576) = v71.VideoSignalInfo.HSyncFreq;
      v38 = (LOBYTE(v60.HighPart) != 0 ? 2 : 0) | (BYTE1(v60.LowPart) != 0 ? 0x400 : 0) | !v36 | v37 & 0xFFFFFBFC;
      *(_DWORD *)(a3 + 588) = v38 ^ ((unsigned __int16)v38 ^ (unsigned __int16)(BYTE1(v60.HighPart) << 9)) & 0x200;
      if ( (unsigned int)Feature_DolbyVisionAndUpdatedHdrUx__private_IsEnabledDeviceUsageNoInline() )
        *(_DWORD *)(a3 + 588) ^= ((unsigned __int16)*(_DWORD *)(a3 + 588) ^ (unsigned __int16)(BYTE2(v60.HighPart) << 12)) & 0x1000;
      v39 = *(_DWORD *)(a3 + 584);
      *(_DWORD *)v59 = 0;
      *(_DWORD *)(a3 + 584) = (HIBYTE(v60.LowPart) != 0 ? 4 : 0) | (BYTE2(v60.LowPart) != 0 ? 2 : 0) | v39 & 0xFFFFFFF9;
      IsMonitorAndLinkHDRCapable = MonitorIsMonitorAndLinkHDRCapable(v26, (union MONITOR_AND_LINK_HDR_CAPS *)v59, 0LL);
      if ( IsMonitorAndLinkHDRCapable >= 0 )
      {
        *(_DWORD *)(a3 + 588) = *(_DWORD *)(a3 + 588) & 0xFFFFFFBB | (2 * (v59[0] & 2 | (8 * (v59[0] & 4))));
LABEL_39:
        IsEnabledDeviceUsageNoInline = Feature_AddDisplayHDR12CertificationTier__private_IsEnabledDeviceUsageNoInline();
        v42 = (enum _DISPLAYCONFIG_HDR_CERTIFICATIONS *)(a3 + 936);
        if ( IsEnabledDeviceUsageNoInline )
        {
          if ( (int)MonitorGetDisplayHdrSupportLevel(v26, v42, (enum _DISPLAYCONFIG_HDR_CERTIFICATIONS2 *)(a3 + 940)) >= 0 )
            goto LABEL_45;
          *(_DWORD *)(a3 + 940) = 0;
        }
        else if ( (int)MonitorGetDisplayHdrSupportLevel(v26, v42, 0LL) >= 0 )
        {
          goto LABEL_45;
        }
        *(_DWORD *)(a3 + 936) = 0;
LABEL_45:
        v57 = 0;
        v58[0] = 0;
        v59[0] = 0;
        if ( (int)MonitorGetNativeFlags(v26, (unsigned __int8 *)&v57, (unsigned __int8 *)v58, (unsigned __int8 *)v59) >= 0 )
          *(_DWORD *)(a3 + 588) = (v57 ? 8 : 0) | *(_DWORD *)(a3 + 588) & 0xFFFFFFF7;
        v57 = 1;
        if ( (int)MonitorIsMonitorEdidless(v26, &v57) >= 0 )
          *(_DWORD *)(a3 + 588) = (!v57 ? 0x10 : 0) | *(_DWORD *)(a3 + 588) & 0xFFFFFFEF;
        LODWORD(v67) = 0;
        DisplayIDFromMonitor = MonitorGetDisplayIDFromMonitor(v26, 0, (unsigned int *)&v67, 0LL);
        v16 = *(DXGADAPTER **)&v70.UsageHints.0;
        v44 = v62;
        *(_DWORD *)(a3 + 924) = 0;
        v45 = DisplayIDFromMonitor != -1071841279;
        v57 = 0;
        v46 = *(_DWORD *)(a3 + 588);
        v59[0] = 0;
        *(_DWORD *)(a3 + 588) = v46 & 0xFFFFFFDF | (v45 ? 0x20 : 0);
        v72 = 0LL;
        v73 = 0;
        *(_DWORD *)(a3 + 928) = 0;
        if ( (int)MonitorGetDpiInfoFromDescriptor(
                    (__int64)v16,
                    v44,
                    (struct DISPLAY_PREFERRED_MODE_INFO *)&v72,
                    (unsigned int *)(a3 + 924),
                    (unsigned int *)(a3 + 928),
                    &v57,
                    v59) >= 0
          && v57 )
        {
          *(_DWORD *)(a3 + 916) = v72;
          cy = HIDWORD(v72);
        }
        else
        {
          memset(&v71, 0, sizeof(v71));
          if ( v26 )
          {
            MONITOR_MGR::AcquireMonitorShared(&v70, (__int64)v26);
            if ( *(_QWORD *)&v70.UsageHints.0 )
            {
              PreferredMonitorSourceMode = DxgMonitor::MonitorModes::_GetPreferredMonitorSourceMode(
                                             *(DxgMonitor::MonitorModes **)(*(_QWORD *)&v70.UsageHints.0 + 232LL),
                                             &v71);
            }
            else
            {
              PreferredMonitorSourceMode = -1073741275;
              WdLogSingleEntry1(2LL);
              WdLogGlobalForLineNumber = 3171;
            }
            CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)&v70);
          }
          else
          {
            PreferredMonitorSourceMode = -1073741811;
          }
          if ( PreferredMonitorSourceMode < 0 )
          {
            *(_QWORD *)(a3 + 916) = 0LL;
LABEL_62:
            v59[0] = 0;
            v57 = 0;
            v58[0] = 0;
            MonitorGetPseudoSpecializedState(v26, &v57, v58, v59);
            if ( !v57 || (v49 = 128, !v58[0]) )
              v49 = 0;
            *(_DWORD *)(a3 + 588) = (v49 | *(_DWORD *)(a3 + 588) & 0xFFFFFF7F) ^ ((unsigned __int16)(v49 | *(_WORD *)(a3 + 588) & 0xFF7F) ^ (v59[0] << 8)) & 0x100;
            *(_QWORD *)&v70.UsageHints.0 = 0LL;
            v70.DitheringSupport.Value = 0;
            LinkInfoFromMonitor = MonitorGetLinkInfoFromMonitor(v26, &v70);
            v51 = *(_DWORD *)(a3 + 588) & 0xFFFFF7FF;
            if ( LinkInfoFromMonitor >= 0 )
            {
              *(_DWORD *)(a3 + 588) = v51 | *(_WORD *)&v70.Capabilities.0 & 0x800;
            }
            else
            {
              *(_DWORD *)(a3 + 588) = v51;
              WdLogSingleEntry4(3LL, SHIDWORD(v63), v7, v61, LinkInfoFromMonitor);
              WdLogGlobalForLineNumber = 8259;
            }
            v52 = v69;
            goto LABEL_68;
          }
          *(_DWORD *)(a3 + 916) = v71.VideoSignalInfo.ActiveSize.cx;
          cy = v71.VideoSignalInfo.ActiveSize.cy;
        }
        *(_DWORD *)(a3 + 920) = cy;
        goto LABEL_62;
      }
      v32 = v61;
      v33 = SHIDWORD(v63);
      v34 = IsMonitorAndLinkHDRCapable;
      v35 = v7;
      WdLogSingleEntry4(2LL, SHIDWORD(v63), v7, v61, IsMonitorAndLinkHDRCapable);
      WdLogGlobalForLineNumber = 8167;
    }
    else
    {
      v32 = v61;
      v33 = SHIDWORD(v63);
      v34 = AdvancedColorParams;
      v35 = v7;
      WdLogSingleEntry4(2LL, SHIDWORD(v63), v7, v61, AdvancedColorParams);
      WdLogGlobalForLineNumber = 8131;
    }
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to get monitor HDR caps for adapter 0x%I64x%08I64x target 0x%I64x (Status = 0x%I64x).",
      v33,
      v35,
      v32,
      v34,
      0LL);
    goto LABEL_39;
  }
  v52 = v69;
  if ( v69 )
  {
LABEL_68:
    v53 = (_DWORD *)v68;
    goto LABEL_69;
  }
  v53 = (_DWORD *)v68;
  if ( v68 )
  {
LABEL_69:
    v62 = 0;
    v61 = 0;
    MonitorGetMonitorOrientationsFromMonitor(v26, &v62, &v61);
    v54 = v62;
    v55 = v61;
    if ( v52 && v53 )
    {
      *v52 = v62;
      *v53 = v55;
    }
    if ( a3 )
      *(_DWORD *)(a3 + 932) = (((_BYTE)v55 - v54) & 3) + 1;
  }
  if ( (int)MonitorReleaseMonitorHandle(v16, v26, v24) < 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 8296;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NT_SUCCESS(Status2)", 8296LL, 0LL, 0LL, 0LL, 0LL);
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v74);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v64);
  if ( v66 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v56, (__int64)&EventProfilerExit);
  return 0LL;
}
