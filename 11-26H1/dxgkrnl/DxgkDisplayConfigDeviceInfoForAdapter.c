/*
 * XREFs of DxgkDisplayConfigDeviceInfoForAdapter @ 0x140435B30
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1402C9210 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAG$$A6AXPEAG@_E$1?FreePoolWithTag@?$pool_helpers@PEAG$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x14003CCB8 (--1-$unique_storage@U-$resource_policy@PEAG$$A6AXPEAG@_E$1-FreePoolWithTag@-$pool_helpers@PEAG$0.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x14003D024 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_DEVICE_OBJECT@@$$A6AXPEAX@Z$1?DereferenceObject@details@widxg@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x14004A500 (--1-$unique_storage@U-$resource_policy@PEAU_DEVICE_OBJECT@@$$A6AXPEAX@Z$1-DereferenceObject@deta.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAG$$A6AXPEAG@_E$1?FreePoolWithTag@?$pool_helpers@PEAG$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x140055408 (-reset@-$unique_storage@U-$resource_policy@PEAG$$A6AXPEAG@_E$1-FreePoolWithTag@-$pool_helpers@PE.c)
 *     Feature_DolbyVisionAndUpdatedHdrUx__private_IsEnabledDeviceUsageNoInline @ 0x140056424 (Feature_DolbyVisionAndUpdatedHdrUx__private_IsEnabledDeviceUsageNoInline.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x14005B6A4 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     ?RtlStringCbLengthW@@YAJPEBG_KPEA_K@Z @ 0x14005DFB8 (-RtlStringCbLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     DpiGetAdapterMdmSupport @ 0x1400629C4 (DpiGetAdapterMdmSupport.c)
 *     Feature_ExternalBrightness__private_IsEnabledDeviceUsageNoInline @ 0x1400673B8 (Feature_ExternalBrightness__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_HdrBrightnessPolicy__private_IsEnabledDeviceUsageNoInline @ 0x1400674F4 (Feature_HdrBrightnessPolicy__private_IsEnabledDeviceUsageNoInline.c)
 *     ?IsCurrentProcessAdmin@@YAEXZ @ 0x14006C8C0 (-IsCurrentProcessAdmin@@YAEXZ.c)
 *     Feature_DisplayDitheringSupport__private_IsEnabledDeviceUsageNoInline @ 0x140076F14 (Feature_DisplayDitheringSupport__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_ScalarMultiplierForBrightness__private_IsEnabledDeviceUsageNoInline @ 0x140076FC4 (Feature_ScalarMultiplierForBrightness__private_IsEnabledDeviceUsageNoInline.c)
 *     ?GetVirtualMonitorInfo@DXGADAPTER@@QEAAJIPEAU_DXGK_IDD_VIRTUAL_MONITOR_INFO@@@Z @ 0x140191220 (-GetVirtualMonitorInfo@DXGADAPTER@@QEAAJIPEAU_DXGK_IDD_VIRTUAL_MONITOR_INFO@@@Z.c)
 *     ?MonitorSetAppOverride@@YAJPEAUHDXGMONITOR__@@U_GUID@@1I_K_NPEBU_UNICODE_STRING@@@Z @ 0x140194F34 (-MonitorSetAppOverride@@YAJPEAUHDXGMONITOR__@@U_GUID@@1I_K_NPEBU_UNICODE_STRING@@@Z.c)
 *     ?DodGetRenderAdapter@ADAPTER_DISPLAY@@QEAAJIPEAU_LUID@@@Z @ 0x1401A30D8 (-DodGetRenderAdapter@ADAPTER_DISPLAY@@QEAAJIPEAU_LUID@@@Z.c)
 *     TriggerExternalBrightnessPolicyChangedWnf @ 0x1401CF978 (TriggerExternalBrightnessPolicyChangedWnf.c)
 *     TriggerHdrSdrCompensationPolicyChangedWnf @ 0x1401CFA40 (TriggerHdrSdrCompensationPolicyChangedWnf.c)
 *     TriggerSDRWhiteLevelChangedWnf @ 0x1401D0690 (TriggerSDRWhiteLevelChangedWnf.c)
 *     DxgkNotifyDisplayChange @ 0x1402051B0 (DxgkNotifyDisplayChange.c)
 *     ?MonitorDisableMonitorVirtualModeSupport@@YAJPEAXIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14026E3C8 (-MonitorDisableMonitorVirtualModeSupport@@YAJPEAXIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?MonitorEnableBoostRefreshRateEnabledByDefault@@YAJPEAXI_N@Z @ 0x14026E560 (-MonitorEnableBoostRefreshRateEnabledByDefault@@YAJPEAXI_N@Z.c)
 *     ?MonitorEnableDisableHdr@@YAJPEAUHDXGMONITOR__@@_N@Z @ 0x14026E63C (-MonitorEnableDisableHdr@@YAJPEAUHDXGMONITOR__@@_N@Z.c)
 *     ?MonitorEnableDisableWcg@@YAJPEAUHDXGMONITOR__@@_N@Z @ 0x14026EAA0 (-MonitorEnableDisableWcg@@YAJPEAUHDXGMONITOR__@@_N@Z.c)
 *     ?MonitorGetColorPipelineState2@@YAJPEAUHDXGMONITOR__@@PEAU_DISPLAYCONFIG_COLOR_PIPELINE_STATE_2@@@Z @ 0x14026EB54 (-MonitorGetColorPipelineState2@@YAJPEAUHDXGMONITOR__@@PEAU_DISPLAYCONFIG_COLOR_PIPELINE_STATE_2@.c)
 *     ?MonitorGetColorPipelineState@@YAJPEAUHDXGMONITOR__@@PEAU_DISPLAYCONFIG_COLOR_PIPELINE_STATE@@@Z @ 0x14026ED14 (-MonitorGetColorPipelineState@@YAJPEAUHDXGMONITOR__@@PEAU_DISPLAYCONFIG_COLOR_PIPELINE_STATE@@@Z.c)
 *     ?MonitorGetExternalBrightnessPolicy@@YAJPEAUHDXGMONITOR__@@PEA_N1PEAW4_DISPLAYCONFIG_HDR_BRIGHTNESS_MODE@@PEAW4_DISPLAYCONFIG_EXTERNAL_BRIGHTNESS_OEM_ENABLEMENT@@@Z @ 0x14026EF3C (-MonitorGetExternalBrightnessPolicy@@YAJPEAUHDXGMONITOR__@@PEA_N1PEAW4_DISPLAYCONFIG_HDR_BRIGHTN.c)
 *     ?MonitorGetHdrBrightnessPolicy@@YAJPEAUHDXGMONITOR__@@PEAW4_DISPLAYCONFIG_HDR_BRIGHTNESS_MODE@@@Z @ 0x14026F014 (-MonitorGetHdrBrightnessPolicy@@YAJPEAUHDXGMONITOR__@@PEAW4_DISPLAYCONFIG_HDR_BRIGHTNESS_MODE@@@.c)
 *     ?MonitorGetHdrFlavor@@YAJPEAUHDXGMONITOR__@@PEAW4_DISPLAYCONFIG_HDR_FLAVOR@@1@Z @ 0x14026F0B0 (-MonitorGetHdrFlavor@@YAJPEAUHDXGMONITOR__@@PEAW4_DISPLAYCONFIG_HDR_FLAVOR@@1@Z.c)
 *     ?MonitorSetHdrBrightnessPolicy@@YAJPEAUHDXGMONITOR__@@W4_DISPLAYCONFIG_HDR_BRIGHTNESS_MODE@@@Z @ 0x14026FB48 (-MonitorSetHdrBrightnessPolicy@@YAJPEAUHDXGMONITOR__@@W4_DISPLAYCONFIG_HDR_BRIGHTNESS_MODE@@@Z.c)
 *     ?MonitorSetHdrFlavor@@YAJPEAUHDXGMONITOR__@@W4_DISPLAYCONFIG_HDR_FLAVOR@@@Z @ 0x14026FC0C (-MonitorSetHdrFlavor@@YAJPEAUHDXGMONITOR__@@W4_DISPLAYCONFIG_HDR_FLAVOR@@@Z.c)
 *     ?MonitorSetSDRWhiteLevel@@YAJPEAUHDXGMONITOR__@@K@Z @ 0x14026FE6C (-MonitorSetSDRWhiteLevel@@YAJPEAUHDXGMONITOR__@@K@Z.c)
 *     CheckGivenTargetIsPartOfCloneGroup @ 0x1402AC654 (CheckGivenTargetIsPartOfCloneGroup.c)
 *     IsCurrentModeAdvancedColor @ 0x1402AC768 (IsCurrentModeAdvancedColor.c)
 *     ?DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z @ 0x1402AC92C (-DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z.c)
 *     ?MonitorIsMonitorVirtualModeDisabled@@YAJPEAXIPEAE@Z @ 0x1402CA15C (-MonitorIsMonitorVirtualModeDisabled@@YAJPEAXIPEAE@Z.c)
 *     ?MonitorGetMonitorHandle@@YAJPEAXIE0PEAPEAUHDXGMONITOR__@@@Z @ 0x1402CA36C (-MonitorGetMonitorHandle@@YAJPEAXIE0PEAPEAUHDXGMONITOR__@@@Z.c)
 *     ?MonitorReleaseMonitorHandle@@YAJPEAXPEAUHDXGMONITOR__@@0@Z @ 0x1402CC114 (-MonitorReleaseMonitorHandle@@YAJPEAXPEAUHDXGMONITOR__@@0@Z.c)
 *     ?DmmIsHdrAllowedOnTarget@@YA_NPEAVDXGADAPTER@@I@Z @ 0x1402DAD90 (-DmmIsHdrAllowedOnTarget@@YA_NPEAVDXGADAPTER@@I@Z.c)
 *     ?ConvertDmmToDisplayConfigColorEncoding@@YA?AW4_DISPLAYCONFIG_COLOR_ENCODING@@T_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z @ 0x140340270 (-ConvertDmmToDisplayConfigColorEncoding@@YA-AW4_DISPLAYCONFIG_COLOR_ENCODING@@T_D3DKMDT_WIRE_FOR.c)
 *     ?GetColorDepthFromPickedWireFormat@@YAIT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z @ 0x1403402BC (-GetColorDepthFromPickedWireFormat@@YAIT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z.c)
 *     ?MonitorSetDefaultAdvancedColorParams@@YAJPEAUHDXGMONITOR__@@@Z @ 0x140361CE4 (-MonitorSetDefaultAdvancedColorParams@@YAJPEAUHDXGMONITOR__@@@Z.c)
 *     ?MonitorIsMonitorAndDriverWCGCapable@@YAJPEAUHDXGMONITOR__@@PEA_NPEAW4MonitorAndLinkWCGIncapableReason@@@Z @ 0x140362930 (-MonitorIsMonitorAndDriverWCGCapable@@YAJPEAUHDXGMONITOR__@@PEA_NPEAW4MonitorAndLinkWCGIncapable.c)
 *     ?MonitorIsMonitorAndLinkHDRCapable@@YAJPEAUHDXGMONITOR__@@PEATMONITOR_AND_LINK_HDR_CAPS@@PEAW4MonitorAndLinkHDRIncapableReason@@@Z @ 0x140362EE0 (-MonitorIsMonitorAndLinkHDRCapable@@YAJPEAUHDXGMONITOR__@@PEATMONITOR_AND_LINK_HDR_CAPS@@PEAW4Mo.c)
 *     ?DisplayConfigFillTargetDeviceInfo@@YAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@AEBVDXGADAPTER_REFERENCE@@@Z @ 0x1403B26F4 (-DisplayConfigFillTargetDeviceInfo@@YAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@AEBVDXGADAPTER_REFE.c)
 *     ?MonitorIsWcgEnabled@@YAJPEAUHDXGMONITOR__@@PEA_N@Z @ 0x1403D81E4 (-MonitorIsWcgEnabled@@YAJPEAUHDXGMONITOR__@@PEA_N@Z.c)
 *     ?MonitorIsHdrEnabled@@YAJPEAUHDXGMONITOR__@@PEA_N@Z @ 0x1403D8E4C (-MonitorIsHdrEnabled@@YAJPEAUHDXGMONITOR__@@PEA_N@Z.c)
 *     ?DisplayConfigGetTargetBaseType@@YAJPEAUDISPLAYCONFIG_TARGET_BASE_TYPE@@AEBVDXGADAPTER_REFERENCE@@@Z @ 0x1403F6560 (-DisplayConfigGetTargetBaseType@@YAJPEAUDISPLAYCONFIG_TARGET_BASE_TYPE@@AEBVDXGADAPTER_REFERENCE.c)
 *     ?MonitorIsBoostRefreshRateEnabledByDefault@@YAJPEAXIPEA_N@Z @ 0x1403F6F4C (-MonitorIsBoostRefreshRateEnabledByDefault@@YAJPEAXIPEA_N@Z.c)
 *     ?MonitorGetDitheringCaps@@YAJPEAUHDXGMONITOR__@@PEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z @ 0x1403FC780 (-MonitorGetDitheringCaps@@YAJPEAUHDXGMONITOR__@@PEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z.c)
 *     ?MonitorGetPseudoSpecializedState@@YAJPEAUHDXGMONITOR__@@PEA_N11@Z @ 0x1403FFA10 (-MonitorGetPseudoSpecializedState@@YAJPEAUHDXGMONITOR__@@PEA_N11@Z.c)
 *     ?MonitorGetSDRWhiteLevel@@YAJPEAUHDXGMONITOR__@@PEAK@Z @ 0x140400710 (-MonitorGetSDRWhiteLevel@@YAJPEAUHDXGMONITOR__@@PEAK@Z.c)
 *     ?MonitorSetExternalBrightnessPolicy@@YAJPEAUHDXGMONITOR__@@_N1@Z @ 0x140411FB0 (-MonitorSetExternalBrightnessPolicy@@YAJPEAUHDXGMONITOR__@@_N1@Z.c)
 *     ?MonitorSetAdvancedColorParams@@YAJPEAUHDXGMONITOR__@@PEAI111KKK@Z @ 0x1404150BC (-MonitorSetAdvancedColorParams@@YAJPEAUHDXGMONITOR__@@PEAI111KKK@Z.c)
 */

__int64 __fastcall DxgkDisplayConfigDeviceInfoForAdapter(
        __int64 a1,
        const struct DXGADAPTER_REFERENCE *a2,
        unsigned int *a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4)
{
  char v7; // si
  int v8; // r12d
  __int64 v9; // rdx
  __int64 v10; // rcx
  bool v11; // zf
  __int64 v12; // rcx
  bool v13; // zf
  unsigned int v14; // edx
  __int64 v15; // rsi
  unsigned int v16; // edx
  ADAPTER_DISPLAY **v17; // rcx
  __int64 v18; // rcx
  int TargetBaseType; // eax
  struct _DEVICE_OBJECT *v21; // rcx
  __int64 v22; // rcx
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // rax
  struct _DEVICE_OBJECT *v24; // rbx
  NTSTATUS DeviceInterfaces; // eax
  __int64 v26; // rcx
  bool v27; // zf
  int v28; // ecx
  int v29; // ecx
  int v30; // ecx
  int v31; // ecx
  int v32; // ecx
  __int64 v33; // rdx
  ADAPTER_DISPLAY **v34; // rcx
  int MonitorHandle; // eax
  __int64 v36; // rbx
  struct HDXGMONITOR__ *v37; // r13
  int PseudoSpecializedState; // eax
  const wchar_t *v39; // r9
  __int64 v40; // r8
  __int64 v41; // r15
  ADAPTER_DISPLAY **v42; // rcx
  int v43; // eax
  __int64 v44; // rbx
  const wchar_t *v45; // r9
  struct HDXGMONITOR__ *v46; // r12
  struct HDXGMONITOR__ *v47; // rdx
  __int64 v48; // rdx
  ADAPTER_DISPLAY **v49; // rcx
  struct _UNICODE_STRING *v50; // r13
  __int64 v51; // rcx
  ADAPTER_DISPLAY **v52; // rcx
  int v53; // eax
  __int64 v54; // rbx
  struct HDXGMONITOR__ *v55; // rdi
  __int64 v56; // rdx
  ADAPTER_DISPLAY **v57; // rcx
  int v58; // eax
  int ColorPipelineState; // eax
  __int64 v60; // rdx
  ADAPTER_DISPLAY **v61; // rcx
  int v62; // eax
  int ColorPipelineState2; // eax
  ADAPTER_DISPLAY **v64; // rcx
  int v65; // eax
  int ExternalBrightnessPolicy; // eax
  struct _UNICODE_STRING *v67; // rdi
  ADAPTER_DISPLAY **v68; // r10
  __int64 v69; // rdx
  DXGADAPTER *v70; // rcx
  __int64 v71; // rcx
  int v72; // ecx
  int v73; // edx
  int v74; // ecx
  int v75; // edx
  ADAPTER_DISPLAY **v76; // rcx
  int v77; // eax
  int v78; // eax
  void *v79; // r8
  ADAPTER_DISPLAY **v80; // rcx
  unsigned int v81; // ebx
  ADAPTER_DISPLAY **v82; // rcx
  __int64 v83; // r13
  ADAPTER_DISPLAY **v84; // rcx
  int v85; // eax
  bool v86; // zf
  int IsMonitorAndLinkHDRCapable; // eax
  __int64 v88; // rbx
  const wchar_t *v89; // r9
  int IsMonitorAndDriverWCGCapable; // eax
  ADAPTER_DISPLAY **v91; // rcx
  int v92; // eax
  int v93; // eax
  int v94; // ebx
  char v95; // dl
  int v96; // eax
  BOOL v97; // ecx
  bool v98; // zf
  int v99; // eax
  int v100; // eax
  int v101; // eax
  int SDRWhiteLevel; // eax
  int HdrBrightnessPolicy; // eax
  unsigned int v104; // edx
  int v105; // eax
  DXGADAPTER *v106; // rcx
  struct _LUID *v107; // rdx
  __int64 v108; // r8
  int HdrFlavor; // eax
  int v110; // eax
  int DitheringCaps; // eax
  int v112; // eax
  int IsWcgEnabled; // eax
  int IsHdrEnabled; // eax
  char v115; // bl
  char v116; // al
  int v117; // r9d
  char v118; // r15
  int v119; // edx
  char v120; // r13
  int v121; // eax
  unsigned int v122; // eax
  unsigned int v123; // ecx
  unsigned int v124; // eax
  unsigned int v125; // edx
  bool IsHdrAllowedOnTarget; // al
  int v127; // ecx
  unsigned int v128; // edx
  int v129; // eax
  int v130; // edx
  unsigned int ColorDepthFromPickedWireFormat; // eax
  unsigned int Value; // ecx
  __int64 v133; // rcx
  __int64 v134; // rdx
  ADAPTER_DISPLAY **v135; // rcx
  int v136; // eax
  __int64 v137; // rcx
  __int64 v138; // rdx
  __int64 v139; // r8
  struct HDXGMONITOR__ **v140; // rax
  struct _GUID *p_DestinationString; // r8
  unsigned int v142; // r9d
  struct _GUID *v143; // rdx
  struct _GUID v144; // xmm0
  unsigned int v145; // r9d
  __int64 v146; // rax
  __int64 v147; // rcx
  unsigned int v148; // edx
  __int64 v149; // rcx
  int IsBoostRefreshRateEnabledByDefault; // eax
  char v151; // al
  unsigned int v152; // edx
  ADAPTER_DISPLAY **v153; // rcx
  int SourceConnectedToTargetInClientVidPn; // eax
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  struct HDXGMONITOR__ **v156; // [rsp+20h] [rbp-89h]
  __int64 v157; // [rsp+20h] [rbp-89h]
  __int64 v158; // [rsp+20h] [rbp-89h]
  __int64 v159; // [rsp+20h] [rbp-89h]
  struct HDXGMONITOR__ **v160; // [rsp+20h] [rbp-89h]
  __int64 v161; // [rsp+28h] [rbp-81h]
  __int64 v162; // [rsp+28h] [rbp-81h]
  __int64 v163; // [rsp+28h] [rbp-81h]
  bool v164; // [rsp+28h] [rbp-81h]
  struct _UNICODE_STRING *v165; // [rsp+30h] [rbp-79h]
  const struct _UNICODE_STRING *v166; // [rsp+30h] [rbp-79h]
  __int64 v167; // [rsp+38h] [rbp-71h]
  bool v168; // [rsp+50h] [rbp-59h] BYREF
  union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v169; // [rsp+51h] [rbp-58h] BYREF
  int v170; // [rsp+58h] [rbp-51h] BYREF
  __int64 v171; // [rsp+60h] [rbp-49h]
  char v172; // [rsp+68h] [rbp-41h]
  int v173; // [rsp+70h] [rbp-39h] BYREF
  union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v174; // [rsp+74h] [rbp-35h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+80h] [rbp-29h] BYREF
  unsigned int v176; // [rsp+90h] [rbp-19h]
  enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE v177[3]; // [rsp+94h] [rbp-15h] BYREF
  __int128 v178; // [rsp+A0h] [rbp-9h] BYREF
  __int128 v179; // [rsp+B0h] [rbp+7h]
  struct _GUID v180; // [rsp+C0h] [rbp+17h] BYREF
  char v181; // [rsp+110h] [rbp+67h]
  PZZWSTR SymbolicLinkList; // [rsp+120h] [rbp+77h] BYREF

  v181 = a1;
  v170 = -1;
  v171 = 0LL;
  v7 = a1;
  v8 = 2;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v172 = 1;
    v170 = 2184;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    v172 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v170, 2184);
  if ( !a3 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5233;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"io_pRequestPacket != NULL", 5233LL, 0LL, 0LL, 0LL, 0LL);
LABEL_145:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v170);
    if ( v172 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v71, (__int64)&EventProfilerExit);
    }
    return 3221225485LL;
  }
  v10 = *a3;
  if ( (unsigned int)v10 <= 0x64 )
  {
    if ( (_DWORD)v10 != 100 )
    {
      if ( (unsigned int)v10 <= 0xA )
      {
        if ( (_DWORD)v10 == 10 )
          goto LABEL_59;
        if ( (_DWORD)v10 == 2 )
        {
          if ( !v7 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 5291;
            DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"i_bGetDeviceInfo", 5291LL, 0LL, 0LL, 0LL, 0LL);
          }
          TargetBaseType = DisplayConfigFillTargetDeviceInfo((struct DISPLAYCONFIG_TARGET_DEVICE_NAME *)a3, a2);
LABEL_51:
          LODWORD(v15) = TargetBaseType;
          goto LABEL_361;
        }
        if ( (_DWORD)v10 != 4 )
        {
          if ( (_DWORD)v10 == 6 )
          {
            if ( !v7 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 5301;
              DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"i_bGetDeviceInfo", 5301LL, 0LL, 0LL, 0LL, 0LL);
            }
            TargetBaseType = DisplayConfigGetTargetBaseType((struct DISPLAYCONFIG_TARGET_BASE_TYPE *)a3, a2);
          }
          else
          {
            if ( (_DWORD)v10 != 7 && (_DWORD)v10 != 8 )
            {
              v11 = (_DWORD)v10 == 9;
              goto LABEL_58;
            }
            if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)a2 + 3160LL) + 290LL) )
            {
              WdLogSingleEntry3(
                3LL,
                *(_QWORD *)a2,
                *(int *)(*(_QWORD *)a2 + 416LL),
                *(unsigned int *)(*(_QWORD *)a2 + 412LL));
              WdLogGlobalForLineNumber = 5320;
              goto LABEL_19;
            }
            if ( (_DWORD)v10 == 7 )
            {
              LOBYTE(SymbolicLinkList) = 0;
              if ( !v7 )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 5331;
                DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"i_bGetDeviceInfo", 5331LL, 0LL, 0LL, 0LL, 0LL);
              }
              v14 = a3[4];
              a3[5] = 0;
              LODWORD(v15) = MonitorIsMonitorVirtualModeDisabled(
                               *(_QWORD **)a2,
                               v14,
                               (unsigned __int8 *)&SymbolicLinkList);
              if ( (int)v15 >= 0 )
                a3[5] = ((_BYTE)SymbolicLinkList != 0) | a3[5] & 0xFFFFFFFE;
              goto LABEL_361;
            }
            if ( v7 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 5348;
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"(!i_bGetDeviceInfo)&& (io_pRequestPacket->type == DISPLAYCONFIG_DEVICE_INFO_SET_SUPPORT_VIRTUAL_RESOLUTION)",
                5348LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            v16 = a3[4];
            v17 = *(ADAPTER_DISPLAY ***)a2;
            LOBYTE(SymbolicLinkList) = 0;
            if ( (int)CheckGivenTargetIsPartOfCloneGroup(v17, v16, &SymbolicLinkList) >= 0 && (_BYTE)SymbolicLinkList )
            {
              WdLogSingleEntry3(3LL, *(int *)(*(_QWORD *)a2 + 416LL), *(unsigned int *)(*(_QWORD *)a2 + 412LL), a3[4]);
              WdLogGlobalForLineNumber = 5361;
              DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v170);
              if ( v172 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
                McTemplateK0q_EtwWriteTransfer(v18, (__int64)&EventProfilerExit);
              return 3221225647LL;
            }
            TargetBaseType = MonitorDisableMonitorVirtualModeSupport(*(_QWORD *)a2, a3[4], a3[5] & 1, a4);
          }
          goto LABEL_51;
        }
        v21 = *(struct _DEVICE_OBJECT **)(*(_QWORD *)a2 + 216LL);
        if ( !v21 )
        {
          WdLogSingleEntry1(2LL);
          v156 = *(struct HDXGMONITOR__ ***)a2;
          WdLogGlobalForLineNumber = 5251;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Adapter 0x%I64x had no FDO",
            (__int64)v156,
            0LL,
            0LL,
            0LL,
            0LL);
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v170);
          if ( v172 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v22, (__int64)&EventProfilerExit);
          return 3221226021LL;
        }
        DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(v21);
        SymbolicLinkList = 0LL;
        *(_QWORD *)&DestinationString.Length = DeviceAttachmentBaseRef;
        v24 = DeviceAttachmentBaseRef;
        _reset___unique_storage_U__resource_policy_PEAG__A6AXPEAG__E_1_FreePoolWithTag___pool_helpers_PEAG_0A__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAGPEAG_0A___T_details_wil___details_wil__QEAAXPEAG_Z(
          (__int64 *)&SymbolicLinkList,
          0LL);
        DeviceInterfaces = IoGetDeviceInterfaces(&GUID_DEVINTERFACE_DISPLAY_ADAPTER, v24, 0, &SymbolicLinkList);
        LODWORD(v15) = DeviceInterfaces;
        if ( DeviceInterfaces >= 0 )
        {
          wcsncpy_s((wchar_t *)a3 + 10, 0x80uLL, SymbolicLinkList, 0xFFFFFFFFFFFFFFFFuLL);
          *((_WORD *)a3 + 11) = 92;
          __1__unique_storage_U__resource_policy_PEAG__A6AXPEAG__E_1_FreePoolWithTag___pool_helpers_PEAG_0A__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAGPEAG_0A___T_details_wil___details_wil__QEAA_XZ((void **)&SymbolicLinkList);
          wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>((DxgkCompositionObject **)&DestinationString);
LABEL_361:
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v170);
          v86 = v172 == 0;
LABEL_362:
          if ( !v86 )
          {
            v27 = (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0;
LABEL_364:
            if ( !v27 )
              McTemplateK0q_EtwWriteTransfer(v26, (__int64)&EventProfilerExit);
            return (unsigned int)v15;
          }
          return (unsigned int)v15;
        }
        WdLogSingleEntry2(3LL, v24, DeviceInterfaces);
        WdLogGlobalForLineNumber = 5267;
        __1__unique_storage_U__resource_policy_PEAG__A6AXPEAG__E_1_FreePoolWithTag___pool_helpers_PEAG_0A__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAGPEAG_0A___T_details_wil___details_wil__QEAA_XZ((void **)&SymbolicLinkList);
        wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>((DxgkCompositionObject **)&DestinationString);
LABEL_45:
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v170);
        if ( v172 )
        {
          v27 = (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0;
          goto LABEL_364;
        }
        return (unsigned int)v15;
      }
      v28 = v10 - 11;
      if ( !v28 )
        goto LABEL_59;
      v29 = v28 - 1;
      if ( v29 )
      {
        v30 = v29 - 1;
        if ( v30 )
        {
          v31 = v30 - 2;
          if ( !v31 )
            goto LABEL_59;
          v32 = v31 - 1;
          if ( !v32 )
            goto LABEL_59;
          v11 = v32 == 1;
LABEL_58:
          if ( v11 )
            goto LABEL_59;
LABEL_61:
          LODWORD(v15) = -1073741811;
          goto LABEL_361;
        }
        goto LABEL_323;
      }
      v33 = a3[4];
      v34 = *(ADAPTER_DISPLAY ***)a2;
      SymbolicLinkList = 0LL;
      MonitorHandle = MonitorGetMonitorHandle(
                        v34,
                        v33,
                        0,
                        DxgkDisplayConfigDeviceInfo,
                        (struct HDXGMONITOR__ **)&SymbolicLinkList);
      LODWORD(v15) = MonitorHandle;
      if ( MonitorHandle < 0 )
      {
        v36 = MonitorHandle;
        WdLogSingleEntry4(
          2LL,
          *(int *)(*(_QWORD *)a2 + 416LL),
          *(unsigned int *)(*(_QWORD *)a2 + 412LL),
          a3[4],
          MonitorHandle);
        WdLogGlobalForLineNumber = 6327;
LABEL_64:
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"MonitorGetMonitorHandle() failed on adapter:0x%I64x%08I64x target:0x%I64x (Status = 0x%I64x).",
          *(int *)(*(_QWORD *)a2 + 416LL),
          *(unsigned int *)(*(_QWORD *)a2 + 412LL),
          a3[4],
          v36,
          0LL);
        goto LABEL_45;
      }
      v37 = (struct HDXGMONITOR__ *)SymbolicLinkList;
      if ( !SymbolicLinkList )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 6331;
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"MonitorHandle != NULL", 6331LL, 0LL, 0LL, 0LL, 0LL);
      }
      LOBYTE(SymbolicLinkList) = 0;
      BYTE2(v169.Value) = 0;
      v168 = 0;
      PseudoSpecializedState = MonitorGetPseudoSpecializedState(
                                 v37,
                                 (bool *)&v169.Value + 2,
                                 &v168,
                                 (bool *)&SymbolicLinkList);
      v15 = PseudoSpecializedState;
      if ( PseudoSpecializedState >= 0 )
      {
        v40 = (BYTE2(v169.Value) != 0 ? 2 : 0) | (v168 ? 4 : 0) | ((_BYTE)SymbolicLinkList != 0) | a3[5] & 0xFFFFFFF8;
        a3[5] = v40;
        goto LABEL_340;
      }
      WdLogSingleEntry1(2LL);
      v39 = L"Failed to call MonitorGetPseudoSpecializedState with status 0x%I64x";
      WdLogGlobalForLineNumber = 6340;
      goto LABEL_69;
    }
LABEL_137:
    v68 = *(ADAPTER_DISPLAY ***)a2;
    if ( (*(_DWORD *)(*(_QWORD *)a2 + 444LL) & 0x100) == 0 )
    {
      WdLogSingleEntry3(3LL, *(_QWORD *)a2, *((int *)v68 + 104), *((unsigned int *)v68 + 103));
      WdLogGlobalForLineNumber = 5477;
      goto LABEL_19;
    }
    if ( (_DWORD)v10 == -10 )
    {
      if ( (int)ADAPTER_DISPLAY::DodGetRenderAdapter(v68[395], a3[4], (struct _LUID *)(a3 + 5)) < 0 )
      {
        WdLogSingleEntry3(3LL, *(_QWORD *)a2, *(int *)(*(_QWORD *)a2 + 416LL), *(unsigned int *)(*(_QWORD *)a2 + 412LL));
        WdLogGlobalForLineNumber = 5492;
        goto LABEL_145;
      }
    }
    else
    {
      v69 = a3[4];
      v70 = *(DXGADAPTER **)a2;
      *(_QWORD *)&v179 = 0LL;
      v178 = 0LL;
      if ( (int)DXGADAPTER::GetVirtualMonitorInfo(v70, v69, (struct _DXGK_IDD_VIRTUAL_MONITOR_INFO *)&v178) < 0 )
      {
        WdLogSingleEntry3(3LL, *(_QWORD *)a2, *(int *)(*(_QWORD *)a2 + 416LL), *(unsigned int *)(*(_QWORD *)a2 + 412LL));
        WdLogGlobalForLineNumber = 5508;
        goto LABEL_145;
      }
      a3[5] = DWORD1(v178);
    }
LABEL_360:
    LODWORD(v15) = 0;
    goto LABEL_361;
  }
  if ( (unsigned int)v10 <= 0xFFFFFFDB )
  {
    if ( (_DWORD)v10 == -37 )
    {
      if ( !(unsigned int)Feature_ExternalBrightness__private_IsEnabledDeviceUsageNoInline() )
        goto LABEL_19;
      if ( !v7 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 6371;
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"i_bGetDeviceInfo", 6371LL, 0LL, 0LL, 0LL, 0LL);
      }
      v64 = *(ADAPTER_DISPLAY ***)a2;
      v176 = a3[4];
      v50 = (struct _UNICODE_STRING *)v176;
      SymbolicLinkList = 0LL;
      v65 = MonitorGetMonitorHandle(
              v64,
              v176,
              0,
              DxgkDisplayConfigDeviceInfo,
              (struct HDXGMONITOR__ **)&SymbolicLinkList);
      LODWORD(v15) = v65;
      if ( v65 >= 0 )
      {
        v37 = (struct HDXGMONITOR__ *)SymbolicLinkList;
        if ( !SymbolicLinkList )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 6397;
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"MonitorHandle != NULL", 6397LL, 0LL, 0LL, 0LL, 0LL);
        }
        LOBYTE(SymbolicLinkList) = 0;
        v168 = 0;
        ExternalBrightnessPolicy = MonitorGetExternalBrightnessPolicy(
                                     v37,
                                     (bool *)&SymbolicLinkList,
                                     &v168,
                                     (enum _DISPLAYCONFIG_HDR_BRIGHTNESS_MODE *)(a3 + 8),
                                     (enum _DISPLAYCONFIG_EXTERNAL_BRIGHTNESS_OEM_ENABLEMENT *)(a3 + 7));
        v15 = ExternalBrightnessPolicy;
        if ( ExternalBrightnessPolicy >= 0 )
        {
          a3[5] = (_BYTE)SymbolicLinkList != 0;
          a3[6] = v168;
          a3[9] = (*(_DWORD *)(*(_QWORD *)a2 + 2488LL) >> 4) & 1;
          a3[10] = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 216LL) + 64LL) + 3128LL) != 0LL;
          goto LABEL_340;
        }
        v67 = (struct _UNICODE_STRING *)v176;
        WdLogSingleEntry4(
          2LL,
          *(int *)(*(_QWORD *)a2 + 416LL),
          *(unsigned int *)(*(_QWORD *)a2 + 412LL),
          v176,
          ExternalBrightnessPolicy);
        v45 = L"MonitorGetExternalBrightnessPolicy() failed on adapter:0x%I64x%08I64x target:0x%I64x (Status = 0x%I64x).";
        v167 = v15;
        v165 = v67;
        WdLogGlobalForLineNumber = 6412;
LABEL_83:
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)v45,
          *(int *)(*(_QWORD *)a2 + 416LL),
          *(unsigned int *)(*(_QWORD *)a2 + 412LL),
          (__int64)v165,
          v167,
          0LL);
        goto LABEL_361;
      }
      v54 = v65;
      WdLogSingleEntry4(
        2LL,
        *(int *)(*(_QWORD *)a2 + 416LL),
        *(unsigned int *)(*(_QWORD *)a2 + 412LL),
        (unsigned int)v50,
        v65);
      WdLogGlobalForLineNumber = 6393;
      goto LABEL_103;
    }
    if ( (_DWORD)v10 == -46 )
    {
      if ( !(unsigned int)Feature_ScalarMultiplierForBrightness__private_IsEnabledDeviceUsageNoInline() )
        goto LABEL_61;
      v60 = a3[4];
      v61 = *(ADAPTER_DISPLAY ***)a2;
      SymbolicLinkList = 0LL;
      v62 = MonitorGetMonitorHandle(
              v61,
              v60,
              0,
              DxgkDisplayConfigDeviceInfo,
              (struct HDXGMONITOR__ **)&SymbolicLinkList);
      LODWORD(v15) = v62;
      if ( v62 < 0 )
      {
        v36 = v62;
        WdLogSingleEntry4(2LL, *(int *)(*(_QWORD *)a2 + 416LL), *(unsigned int *)(*(_QWORD *)a2 + 412LL), a3[4], v62);
        WdLogGlobalForLineNumber = 6581;
        goto LABEL_64;
      }
      v37 = (struct HDXGMONITOR__ *)SymbolicLinkList;
      if ( !SymbolicLinkList )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 6586;
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"MonitorHandle != NULL", 6586LL, 0LL, 0LL, 0LL, 0LL);
      }
      ColorPipelineState2 = MonitorGetColorPipelineState2(v37, (struct _DISPLAYCONFIG_COLOR_PIPELINE_STATE_2 *)a3);
      v15 = ColorPipelineState2;
      if ( ColorPipelineState2 >= 0 )
        goto LABEL_340;
      WdLogSingleEntry1(2LL);
      v39 = L"Failed to call MonitorGetColorPipelineState2 with status 0x%I64x";
      WdLogGlobalForLineNumber = 6593;
      goto LABEL_69;
    }
    if ( (unsigned int)(v10 + 45) > 2 )
    {
      if ( (_DWORD)v10 == -42 )
      {
        v56 = a3[4];
        v57 = *(ADAPTER_DISPLAY ***)a2;
        SymbolicLinkList = 0LL;
        v58 = MonitorGetMonitorHandle(
                v57,
                v56,
                0,
                DxgkDisplayConfigDeviceInfo,
                (struct HDXGMONITOR__ **)&SymbolicLinkList);
        LODWORD(v15) = v58;
        if ( v58 < 0 )
        {
          v36 = v58;
          WdLogSingleEntry4(2LL, *(int *)(*(_QWORD *)a2 + 416LL), *(unsigned int *)(*(_QWORD *)a2 + 412LL), a3[4], v58);
          WdLogGlobalForLineNumber = 6612;
          goto LABEL_64;
        }
        v37 = (struct HDXGMONITOR__ *)SymbolicLinkList;
        if ( !SymbolicLinkList )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 6616;
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"MonitorHandle != NULL", 6616LL, 0LL, 0LL, 0LL, 0LL);
        }
        ColorPipelineState = MonitorGetColorPipelineState(v37, (struct _DISPLAYCONFIG_COLOR_PIPELINE_STATE *)a3);
        v15 = ColorPipelineState;
        if ( ColorPipelineState >= 0 )
          goto LABEL_340;
        WdLogSingleEntry1(2LL);
        v39 = L"Failed to call MonitorGetColorPipelineState with status 0x%I64x";
        WdLogGlobalForLineNumber = 6623;
LABEL_69:
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v39, v15, 0LL, 0LL, 0LL, 0LL);
        goto LABEL_340;
      }
      if ( (_DWORD)v10 != -41 )
      {
        if ( (_DWORD)v10 == -40 )
        {
          if ( !(unsigned int)Feature_HdrBrightnessPolicy__private_IsEnabledDeviceUsageNoInline() )
            goto LABEL_19;
          v48 = a3[4];
          v49 = *(ADAPTER_DISPLAY ***)a2;
          SymbolicLinkList = 0LL;
          MonitorGetMonitorHandle(v49, v48, 0, DxgkDisplayConfigDeviceInfo, (struct HDXGMONITOR__ **)&SymbolicLinkList);
          v46 = (struct HDXGMONITOR__ *)SymbolicLinkList;
          if ( !SymbolicLinkList )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 6506;
            DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"MonitorHandle != NULL", 6506LL, 0LL, 0LL, 0LL, 0LL);
          }
          LODWORD(v15) = MonitorSetHdrBrightnessPolicy((__int64)v46, a3[5]);
          if ( (int)v15 >= 0 )
            TriggerHdrSdrCompensationPolicyChangedWnf();
        }
        else
        {
          if ( (_DWORD)v10 != -38 )
            goto LABEL_61;
          if ( !(unsigned int)Feature_ExternalBrightness__private_IsEnabledDeviceUsageNoInline() )
          {
LABEL_19:
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v170);
            if ( v172 )
            {
              v13 = (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0;
              goto LABEL_153;
            }
            return 3221225659LL;
          }
          v41 = a3[4];
          v42 = *(ADAPTER_DISPLAY ***)a2;
          SymbolicLinkList = 0LL;
          v43 = MonitorGetMonitorHandle(
                  v42,
                  v41,
                  0,
                  DxgkDisplayConfigDeviceInfo,
                  (struct HDXGMONITOR__ **)&SymbolicLinkList);
          LODWORD(v15) = v43;
          if ( v43 < 0 )
          {
            v44 = v43;
            WdLogSingleEntry4(
              2LL,
              *(int *)(*(_QWORD *)a2 + 416LL),
              *(unsigned int *)(*(_QWORD *)a2 + 412LL),
              (unsigned int)v41,
              v43);
            WdLogGlobalForLineNumber = 6463;
LABEL_82:
            v45 = L"MonitorGetMonitorHandle() failed on adapter:0x%I64x%08I64x target:0x%I64x (Status = 0x%I64x).";
            v167 = v44;
            v165 = (struct _UNICODE_STRING *)v41;
            goto LABEL_83;
          }
          v46 = (struct HDXGMONITOR__ *)SymbolicLinkList;
          if ( !SymbolicLinkList )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 6467;
            DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"MonitorHandle != NULL", 6467LL, 0LL, 0LL, 0LL, 0LL);
          }
          LODWORD(v15) = MonitorSetExternalBrightnessPolicy(v46, a3[6] != 0, a3[5] != 0);
          if ( (int)v15 >= 0 )
            TriggerExternalBrightnessPolicyChangedWnf();
        }
        v47 = v46;
LABEL_322:
        MonitorReleaseMonitorHandle(*(_QWORD **)a2, v47, (void *)v40);
        goto LABEL_361;
      }
      if ( v7 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 6524;
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!i_bGetDeviceInfo", 6524LL, 0LL, 0LL, 0LL, 0LL);
      }
      v50 = (struct _UNICODE_STRING *)a3[4];
      if ( !a3[5] )
      {
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v170);
        if ( v172 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v51, (__int64)&EventProfilerExit);
        return 255LL;
      }
      v52 = *(ADAPTER_DISPLAY ***)a2;
      SymbolicLinkList = 0LL;
      v53 = MonitorGetMonitorHandle(
              v52,
              (unsigned int)v50,
              0,
              DxgkDisplayConfigDeviceInfo,
              (struct HDXGMONITOR__ **)&SymbolicLinkList);
      LODWORD(v15) = v53;
      if ( v53 >= 0 )
      {
        v55 = (struct HDXGMONITOR__ *)SymbolicLinkList;
        if ( !SymbolicLinkList )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 6552;
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"MonitorHandle != NULL", 6552LL, 0LL, 0LL, 0LL, 0LL);
        }
        LODWORD(v15) = MonitorSetDefaultAdvancedColorParams(v55);
        v47 = v55;
        goto LABEL_322;
      }
      v54 = v53;
      WdLogSingleEntry4(2LL, *(int *)(*(_QWORD *)a2 + 416LL), *(unsigned int *)(*(_QWORD *)a2 + 412LL), v50, v53);
      WdLogGlobalForLineNumber = 6548;
LABEL_103:
      v45 = L"MonitorGetMonitorHandle() failed on adapter:0x%I64x%08I64x target:0x%I64x (Status = 0x%I64x).";
      v167 = v54;
      v165 = v50;
      goto LABEL_83;
    }
LABEL_59:
    if ( ((unsigned int)Feature_DolbyVisionAndUpdatedHdrUx__private_IsEnabledDeviceUsageNoInline() || *a3 + 44 > 1)
      && ((unsigned int)Feature_DisplayDitheringSupport__private_IsEnabledDeviceUsageNoInline() || *a3 != -45) )
    {
      v82 = *(ADAPTER_DISPLAY ***)a2;
      v176 = a3[4];
      v81 = v176;
      LOBYTE(SymbolicLinkList) = 0;
      v83 = v176;
      if ( (unsigned int)CheckGivenTargetIsPartOfCloneGroup(v82, v176, &SymbolicLinkList) == -1073741275 )
      {
        WdLogSingleEntry4(
          3LL,
          *(int *)(*(_QWORD *)a2 + 416LL),
          *(unsigned int *)(*(_QWORD *)a2 + 412LL),
          v81,
          -1073741275LL);
        WdLogGlobalForLineNumber = 5681;
        LOBYTE(SymbolicLinkList) = 0;
      }
      v84 = *(ADAPTER_DISPLAY ***)a2;
      *(_QWORD *)&DestinationString.Length = 0LL;
      v85 = MonitorGetMonitorHandle(
              v84,
              v81,
              0,
              DxgkDisplayConfigDeviceInfo,
              (struct HDXGMONITOR__ **)&DestinationString);
      v15 = v85;
      if ( v85 < 0 )
      {
        WdLogSingleEntry4(2LL, *(int *)(*(_QWORD *)a2 + 416LL), *(unsigned int *)(*(_QWORD *)a2 + 412LL), v83, v85);
        v162 = *(unsigned int *)(*(_QWORD *)a2 + 412LL);
        v158 = *(int *)(*(_QWORD *)a2 + 416LL);
        WdLogGlobalForLineNumber = 5702;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"MonitorGetMonitorHandle() failed on adapter:0x%I64x%08I64x target:0x%I64x (Status = 0x%I64x).",
          v158,
          v162,
          v83,
          v15,
          0LL);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v170);
        v86 = v172 == 0;
        goto LABEL_362;
      }
      v15 = *(_QWORD *)&DestinationString.Length;
      if ( !*(_QWORD *)&DestinationString.Length )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 5706;
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"MonitorHandle != NULL", 5706LL, 0LL, 0LL, 0LL, 0LL);
      }
      v173 = 0;
      IsMonitorAndLinkHDRCapable = MonitorIsMonitorAndLinkHDRCapable(
                                     (struct HDXGMONITOR__ *)v15,
                                     (union MONITOR_AND_LINK_HDR_CAPS *)&v173,
                                     0LL);
      LODWORD(v15) = IsMonitorAndLinkHDRCapable;
      if ( IsMonitorAndLinkHDRCapable < 0 )
      {
        v88 = IsMonitorAndLinkHDRCapable;
        WdLogSingleEntry4(
          2LL,
          *(int *)(*(_QWORD *)a2 + 416LL),
          *(unsigned int *)(*(_QWORD *)a2 + 412LL),
          v83,
          IsMonitorAndLinkHDRCapable);
        v89 = L"MonitorIsMonitorAndLinkHDRCapable() failed on adapter:0x%I64x%08I64x target:0x%I64x (Status = 0x%I64x).";
        WdLogGlobalForLineNumber = 5716;
LABEL_172:
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)v89,
          *(int *)(*(_QWORD *)a2 + 416LL),
          *(unsigned int *)(*(_QWORD *)a2 + 412LL),
          v83,
          v88,
          0LL);
LABEL_321:
        v47 = *(struct HDXGMONITOR__ **)&DestinationString.Length;
        goto LABEL_322;
      }
      HIBYTE(v169.Value) = 0;
      IsMonitorAndDriverWCGCapable = MonitorIsMonitorAndDriverWCGCapable(
                                       *(struct HDXGMONITOR__ **)&DestinationString.Length,
                                       (bool *)&v169.Value + 3,
                                       0LL);
      v91 = *(ADAPTER_DISPLAY ***)a2;
      LODWORD(v15) = IsMonitorAndDriverWCGCapable;
      if ( IsMonitorAndDriverWCGCapable < 0 )
      {
        v88 = IsMonitorAndDriverWCGCapable;
        WdLogSingleEntry4(2LL, *((int *)v91 + 104), *((unsigned int *)v91 + 103), v83, IsMonitorAndDriverWCGCapable);
        v89 = L"MonitorIsMonitorAndDriverWCGCapable() failed on adapter:0x%I64x%08I64x target:0x%I64x (Status = 0x%I64x).";
        WdLogGlobalForLineNumber = 5728;
        goto LABEL_172;
      }
      v174.Value = 0;
      v177[0] = D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G22_P709;
      *(_WORD *)&v169.0 = 0;
      v92 = IsCurrentModeAdvancedColor((int *)v91, v83, &v174, v177, (char *)&v169, (bool *)&v169.0 + 1);
      v40 = 0LL;
      LODWORD(v15) = v92;
      if ( v92 < 0 )
      {
        v88 = v92;
        WdLogSingleEntry4(2LL, *(int *)(*(_QWORD *)a2 + 416LL), *(unsigned int *)(*(_QWORD *)a2 + 412LL), v83, v92);
        v89 = L"IsCurrentModeAdvancedColor() failed on adapter:0x%I64x%08I64x target:0x%I64x (Status = 0x%I64x).";
        WdLogGlobalForLineNumber = 5748;
        goto LABEL_172;
      }
      if ( (_BYTE)SymbolicLinkList && *(_WORD *)&v169.0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 5758;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"!bCurrentModeHdr && !bCurrentModeWcg",
          5758LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v40 = 0LL;
      }
      v93 = *a3;
      if ( *a3 != 9 && v93 != 15 )
      {
        switch ( v93 )
        {
          case 10:
            if ( v181 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 5856;
              DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!i_bGetDeviceInfo", 5856LL, 0LL, 0LL, 0LL, 0LL);
              v40 = 0LL;
            }
            v94 = v173 & 1;
            if ( (v173 & 1) == 0 && !HIBYTE(v169.Value) || (_BYTE)SymbolicLinkList )
              break;
            v95 = a3[5] & 1;
            if ( (v173 & 1) != 0 )
              v96 = MonitorEnableDisableHdr(*(struct HDXGMONITOR__ **)&DestinationString.Length, v95);
            else
              v96 = MonitorEnableDisableWcg(*(struct HDXGMONITOR__ **)&DestinationString.Length, v95);
            LODWORD(v15) = v96;
            if ( v96 < 0 )
            {
              v88 = v96;
              WdLogSingleEntry4(
                2LL,
                *(int *)(*(_QWORD *)a2 + 416LL),
                *(unsigned int *)(*(_QWORD *)a2 + 412LL),
                v83,
                v96);
              v89 = L"MonitorEnableDisableAdvancedColor() failed on adapter:0x%I64x%08I64x target:0x%I64x (Status = 0x%I64x).";
              WdLogGlobalForLineNumber = 5891;
              goto LABEL_172;
            }
            if ( v96 != 255 )
              goto LABEL_321;
            v97 = *(_BYTE *)&v169.0 || !v94 && *((_BYTE *)&v169.0 + 1);
            v98 = (a3[5] & 1) == v97;
LABEL_219:
            if ( !v98 )
              LODWORD(v15) = 0;
            goto LABEL_321;
          case 16:
            if ( v181 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 5913;
              DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!i_bGetDeviceInfo", 5913LL, 0LL, 0LL, 0LL, 0LL);
              v40 = 0LL;
            }
            if ( (v173 & 1) == 0 || (_BYTE)SymbolicLinkList )
              break;
            v99 = MonitorEnableDisableHdr(*(struct HDXGMONITOR__ **)&DestinationString.Length, a3[5] & 1);
            LODWORD(v15) = v99;
            if ( v99 < 0 )
            {
              v88 = v99;
              WdLogSingleEntry4(
                2LL,
                *(int *)(*(_QWORD *)a2 + 416LL),
                *(unsigned int *)(*(_QWORD *)a2 + 412LL),
                v83,
                v99);
              v89 = L"MonitorEnableDisableHdr() failed on adapter:0x%I64x%08I64x target:0x%I64x (Status = 0x%I64x).";
              WdLogGlobalForLineNumber = 5941;
              goto LABEL_172;
            }
            if ( v99 != 255 )
              goto LABEL_321;
            v98 = (a3[5] & 1) == v169.0;
            goto LABEL_219;
          case 17:
            if ( v181 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 5963;
              DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!i_bGetDeviceInfo", 5963LL, 0LL, 0LL, 0LL, 0LL);
              v40 = 0LL;
            }
            if ( !HIBYTE(v169.Value) || (_BYTE)SymbolicLinkList )
              break;
            v100 = MonitorEnableDisableWcg(*(struct HDXGMONITOR__ **)&DestinationString.Length, a3[5] & 1);
            LODWORD(v15) = v100;
            if ( v100 < 0 )
            {
              v88 = v100;
              WdLogSingleEntry4(
                2LL,
                *(int *)(*(_QWORD *)a2 + 416LL),
                *(unsigned int *)(*(_QWORD *)a2 + 412LL),
                v83,
                v100);
              v89 = L"MonitorEnableDisableWcg() failed on adapter:0x%I64x%08I64x target:0x%I64x (Status = 0x%I64x).";
              WdLogGlobalForLineNumber = 5991;
              goto LABEL_172;
            }
            if ( v100 != 255 )
              goto LABEL_321;
            v98 = (a3[5] & 1) == *((_BYTE *)&v169.0 + 1);
            goto LABEL_219;
          case 11:
            if ( !v181 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 6013;
              DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"i_bGetDeviceInfo", 6013LL, 0LL, 0LL, 0LL, 0LL);
            }
            v101 = 1000;
            LODWORD(SymbolicLinkList) = 1000;
            if ( !*(_BYTE *)&v169.0 || (v173 & 1) == 0 )
              goto LABEL_272;
            SDRWhiteLevel = MonitorGetSDRWhiteLevel(
                              *(struct HDXGMONITOR__ **)&DestinationString.Length,
                              (unsigned int *)&SymbolicLinkList);
            LODWORD(v15) = SDRWhiteLevel;
            if ( SDRWhiteLevel < 0 )
            {
              WdLogSingleEntry4(
                3LL,
                *(int *)(*(_QWORD *)a2 + 416LL),
                *(unsigned int *)(*(_QWORD *)a2 + 412LL),
                v83,
                SDRWhiteLevel);
              v101 = 3000;
              WdLogGlobalForLineNumber = 6031;
LABEL_272:
              a3[5] = v101;
              goto LABEL_321;
            }
LABEL_228:
            v101 = (int)SymbolicLinkList;
            goto LABEL_272;
          case -18:
            if ( v181 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 6042;
              DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!i_bGetDeviceInfo", 6042LL, 0LL, 0LL, 0LL, 0LL);
            }
            if ( !(unsigned int)Feature_HdrBrightnessPolicy__private_IsEnabledDeviceUsageNoInline() )
              goto LABEL_236;
            LODWORD(SymbolicLinkList) = 0;
            HdrBrightnessPolicy = MonitorGetHdrBrightnessPolicy(
                                    *(struct HDXGMONITOR__ **)&DestinationString.Length,
                                    (enum _DISPLAYCONFIG_HDR_BRIGHTNESS_MODE *)&SymbolicLinkList);
            LODWORD(v15) = HdrBrightnessPolicy;
            if ( HdrBrightnessPolicy < 0 )
            {
              v88 = HdrBrightnessPolicy;
              WdLogSingleEntry4(
                2LL,
                *(int *)(*(_QWORD *)a2 + 416LL),
                *(unsigned int *)(*(_QWORD *)a2 + 412LL),
                v83,
                HdrBrightnessPolicy);
              v89 = L"MonitorGetHdrBrightnessPolicy() failed on adapter:0x%I64x%08I64x target:0x%I64x (Status = 0x%I64x).";
              WdLogGlobalForLineNumber = 6058;
              goto LABEL_172;
            }
            if ( (_DWORD)SymbolicLinkList )
            {
LABEL_236:
              v104 = a3[5];
              if ( v104 - 1000 > 0x1388 )
              {
                LODWORD(v15) = -1073741811;
              }
              else if ( *(_BYTE *)&v169.0 && (v173 & 1) != 0 )
              {
                v105 = MonitorSetSDRWhiteLevel(*(struct HDXGMONITOR__ **)&DestinationString.Length, v104);
                v15 = v105;
                if ( v105 >= 0 )
                {
                  if ( v105 )
                  {
                    if ( v105 == 255 )
                      LODWORD(v15) = 0;
                  }
                  else if ( *((_BYTE *)a3 + 24) )
                  {
                    TriggerSDRWhiteLevelChangedWnf();
                    v106 = *(DXGADAPTER **)a2;
                    SymbolicLinkList = 0LL;
                    v178 = 0LL;
                    LODWORD(v178) = 13;
                    v179 = 0LL;
                    DXGADAPTER::IsAdapterSessionized(v106, v107, 0LL, (unsigned __int64 *)&SymbolicLinkList);
                    SMgrGdiCallout(&v178, SymbolicLinkList, v108, 0LL, 0LL, 0LL);
                  }
                }
                else
                {
                  WdLogSingleEntry4(
                    2LL,
                    *(int *)(*(_QWORD *)a2 + 416LL),
                    *(unsigned int *)(*(_QWORD *)a2 + 412LL),
                    v83,
                    v105);
                  v163 = *(unsigned int *)(*(_QWORD *)a2 + 412LL);
                  v159 = *(int *)(*(_QWORD *)a2 + 416LL);
                  WdLogGlobalForLineNumber = 6093;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    0x40000,
                    -1,
                    (__int64)L"MonitorSetSDRWhiteLevel() failed on adapter:0x%I64x%08I64x target:0x%I64x (Status = 0x%I64x).",
                    v159,
                    v163,
                    v83,
                    v15,
                    0LL);
                }
              }
              else
              {
                LODWORD(v15) = -1073741637;
              }
              if ( *((_BYTE *)a3 + 24) )
                DxgkNotifyDisplayChange(0);
              goto LABEL_321;
            }
            break;
          default:
            if ( (unsigned int)Feature_DolbyVisionAndUpdatedHdrUx__private_IsEnabledDeviceUsageNoInline() && *a3 == -44 )
            {
              if ( !v181 )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 6149;
                DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"i_bGetDeviceInfo", 6149LL, 0LL, 0LL, 0LL, 0LL);
              }
              if ( (v173 & 1) != 0 && !(_BYTE)SymbolicLinkList )
              {
                HdrFlavor = MonitorGetHdrFlavor(
                              *(struct HDXGMONITOR__ **)&DestinationString.Length,
                              (enum _DISPLAYCONFIG_HDR_FLAVOR *)(a3 + 5),
                              (enum _DISPLAYCONFIG_HDR_FLAVOR *)(a3 + 6));
                LODWORD(v15) = HdrFlavor;
                if ( HdrFlavor < 0 )
                {
                  WdLogSingleEntry4(
                    3LL,
                    *(int *)(*(_QWORD *)a2 + 416LL),
                    *(unsigned int *)(*(_QWORD *)a2 + 412LL),
                    v83,
                    HdrFlavor);
                  WdLogGlobalForLineNumber = 6169;
                }
                goto LABEL_321;
              }
              break;
            }
            if ( !(unsigned int)Feature_DolbyVisionAndUpdatedHdrUx__private_IsEnabledDeviceUsageNoInline() || *a3 != -43 )
            {
              if ( (unsigned int)Feature_DisplayDitheringSupport__private_IsEnabledDeviceUsageNoInline() )
              {
                if ( *a3 != -45 )
                  goto LABEL_321;
                DitheringCaps = MonitorGetDitheringCaps(*(struct HDXGMONITOR__ **)&DestinationString.Length, &v174);
                v15 = DitheringCaps;
                if ( DitheringCaps >= 0 )
                {
                  v40 = v174.Value >> 2;
                  v101 = v174.Value ^ (v174.Value ^ (v174.Value >> 2)) & 0xFC0000 ^ (v40 ^ v174.Value ^ (v174.Value ^ (v174.Value >> 2)) & 0xFC0000) & 0x3F000 ^ ((unsigned __int16)v40 ^ *(_WORD *)&v174.0 ^ ((unsigned __int16)v40 ^ *(_WORD *)&v174.0) & 0xF000) & 0xFC0;
                  goto LABEL_272;
                }
                WdLogSingleEntry1(2LL);
                WdLogGlobalForLineNumber = 6206;
              }
              else
              {
                if ( *a3 != -45 )
                  goto LABEL_321;
                LODWORD(SymbolicLinkList) = v174;
                v112 = MonitorGetDitheringCaps(
                         *(struct HDXGMONITOR__ **)&DestinationString.Length,
                         (union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE *)&SymbolicLinkList);
                v15 = v112;
                if ( v112 >= 0 )
                  goto LABEL_228;
                WdLogSingleEntry1(2LL);
                WdLogGlobalForLineNumber = 6227;
              }
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"MonitorGetDitheringCaps() failed 0x%I64x)",
                v15,
                0LL,
                0LL,
                0LL,
                0LL);
              a3[5] = 0;
              LODWORD(v15) = -1073741823;
              goto LABEL_321;
            }
            if ( v181 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 6177;
              DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!i_bGetDeviceInfo", 6177LL, 0LL, 0LL, 0LL, 0LL);
            }
            if ( (v173 & 1) != 0 && !(_BYTE)SymbolicLinkList )
            {
              v110 = MonitorSetHdrFlavor(*(__int64 *)&DestinationString.Length, a3[5]);
              LODWORD(v15) = v110;
              if ( v110 >= 0 )
                goto LABEL_321;
              v88 = v110;
              WdLogSingleEntry4(
                2LL,
                *(int *)(*(_QWORD *)a2 + 416LL),
                *(unsigned int *)(*(_QWORD *)a2 + 412LL),
                v83,
                v110);
              v89 = L"MonitorSetHdrFlavor() failed on adapter:0x%I64x%08I64x target:0x%I64x (Status = 0x%I64x).";
              WdLogGlobalForLineNumber = 6196;
              goto LABEL_172;
            }
            break;
        }
        LODWORD(v15) = -1073741637;
        goto LABEL_321;
      }
      if ( !v181 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 5767;
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"i_bGetDeviceInfo", 5767LL, 0LL, 0LL, 0LL, 0LL);
      }
      v168 = 0;
      IsWcgEnabled = MonitorIsWcgEnabled(*(struct HDXGMONITOR__ **)&DestinationString.Length, &v168);
      LODWORD(v15) = IsWcgEnabled;
      if ( IsWcgEnabled < 0 )
      {
        v88 = IsWcgEnabled;
        WdLogSingleEntry4(
          2LL,
          *(int *)(*(_QWORD *)a2 + 416LL),
          *(unsigned int *)(*(_QWORD *)a2 + 412LL),
          v83,
          IsWcgEnabled);
        WdLogGlobalForLineNumber = 5778;
LABEL_280:
        v89 = L"MonitorGetIsAutoColorManagementSupported() failed on adapter:0x%I64x%08I64x target:0x%I64x (Status = 0x%I64x).";
        goto LABEL_172;
      }
      BYTE2(v169.Value) = 0;
      IsHdrEnabled = MonitorIsHdrEnabled(*(struct HDXGMONITOR__ **)&DestinationString.Length, (bool *)&v169.Value + 2);
      LODWORD(v15) = IsHdrEnabled;
      if ( IsHdrEnabled < 0 )
      {
        v88 = IsHdrEnabled;
        WdLogSingleEntry4(
          2LL,
          *(int *)(*(_QWORD *)a2 + 416LL),
          *(unsigned int *)(*(_QWORD *)a2 + 412LL),
          v83,
          IsHdrEnabled);
        WdLogGlobalForLineNumber = 5792;
        goto LABEL_280;
      }
      v115 = v173;
      if ( v168 && !BYTE2(v169.Value) )
      {
        v116 = *((_BYTE *)&v169.0 + 1);
      }
      else
      {
        v116 = *((_BYTE *)&v169.0 + 1);
        if ( !*((_BYTE *)&v169.0 + 1) && (!HIBYTE(v169.Value) || (v173 & 1) != 0) )
        {
          v40 = 0LL;
          v117 = 0;
          goto LABEL_291;
        }
      }
      v40 = 1LL;
      v117 = 1;
LABEL_291:
      if ( *a3 != 15 )
      {
        if ( *a3 == 9 )
        {
          if ( (v173 & 1) == 0 && !HIBYTE(v169.Value) || (v130 = 1, (_BYTE)SymbolicLinkList) )
            v130 = 0;
          if ( !*(_BYTE *)&v169.0 && !v116 )
            v8 = 0;
          a3[5] = (4 * v40) | v8 & 0xFFFFFFFB | v130 & 0xFFFFFFF9 | a3[5] & 0xFFFFFFF8;
          ColorDepthFromPickedWireFormat = GetColorDepthFromPickedWireFormat(v174);
          Value = v174.Value;
          a3[7] = ColorDepthFromPickedWireFormat;
          a3[6] = ConvertDmmToDisplayConfigColorEncoding(Value);
          a3[5] = (8 * !DmmIsHdrAllowedOnTarget(*(struct DXGADAPTER **)a2, v83)) | a3[5] & 0xFFFFFFF7;
        }
        goto LABEL_321;
      }
      if ( (v173 & 1) != 0 || HIBYTE(v169.Value) )
      {
        v118 = (char)SymbolicLinkList;
        if ( !(_BYTE)SymbolicLinkList )
        {
          v119 = 1;
          goto LABEL_298;
        }
      }
      else
      {
        v118 = (char)SymbolicLinkList;
      }
      v119 = 0;
LABEL_298:
      v120 = (char)v169.0;
      if ( *(_BYTE *)&v169.0 || (v11 = v116 == 0, v121 = 0, !v11) )
        v121 = 2;
      a3[5] = (4 * v117) | v121 & 0xFFFFFFFB | v119 & 0xFFFFFFF9 | a3[5] & 0xFFFFFFF8;
      v122 = GetColorDepthFromPickedWireFormat(v174);
      v123 = v174.Value;
      a3[7] = v122;
      v124 = ConvertDmmToDisplayConfigColorEncoding(v123);
      v125 = v176;
      a3[6] = v124;
      IsHdrAllowedOnTarget = DmmIsHdrAllowedOnTarget(*(struct DXGADAPTER **)a2, v125);
      if ( (v115 & 1) == 0 || v118 )
        v127 = 0;
      else
        v127 = 16;
      v128 = (v168 ? 0x80 : 0) | v127 & 0xFFFFFF7F | (BYTE2(v169.Value) != 0 ? 0x20 : 0) | (8 * !IsHdrAllowedOnTarget) & 0x4F | a3[5] & 0x47;
      if ( !HIBYTE(v169.Value) || v118 )
        v129 = 0;
      else
        v129 = 64;
      a3[5] = v129 | v128 & 0xFFFFFFBF;
      if ( !v120 )
        v8 = *((_BYTE *)&v169.0 + 1) != 0;
      a3[8] = v8;
      goto LABEL_321;
    }
    goto LABEL_61;
  }
  if ( (_DWORD)v10 == -33 )
  {
    DpiGetAdapterMdmSupport(*(_QWORD *)(*(_QWORD *)a2 + 216LL), a3 + 5);
    goto LABEL_360;
  }
  if ( (unsigned int)(v10 + 27) > 1 )
  {
    if ( (_DWORD)v10 == -23 )
    {
LABEL_323:
      if ( !IsCurrentProcessAdmin() )
      {
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v170);
        if ( v172 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v133, (__int64)&EventProfilerExit);
        return 3221225506LL;
      }
      v134 = a3[4];
      v135 = *(ADAPTER_DISPLAY ***)a2;
      SymbolicLinkList = 0LL;
      v136 = MonitorGetMonitorHandle(
               v135,
               v134,
               0,
               DxgkDisplayConfigDeviceInfo,
               (struct HDXGMONITOR__ **)&SymbolicLinkList);
      v15 = v136;
      if ( v136 < 0 )
      {
        WdLogSingleEntry4(2LL, *(int *)(*(_QWORD *)a2 + 416LL), *(unsigned int *)(*(_QWORD *)a2 + 412LL), a3[4], v136);
        v137 = a3[4];
        v138 = *(unsigned int *)(*(_QWORD *)a2 + 412LL);
        v139 = *(int *)(*(_QWORD *)a2 + 416LL);
        WdLogGlobalForLineNumber = 6261;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"MonitorGetMonitorHandle() failed on adapter:0x%I64x%08I64x target:0x%I64x (Status = 0x%I64x).",
          v139,
          v138,
          v137,
          v15,
          0LL);
        goto LABEL_45;
      }
      v37 = (struct HDXGMONITOR__ *)SymbolicLinkList;
      if ( !SymbolicLinkList )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 6265;
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"MonitorHandle != NULL", 6265LL, 0LL, 0LL, 0LL, 0LL);
      }
      if ( *a3 == -23 )
      {
        v140 = (struct HDXGMONITOR__ **)*((_QWORD *)a3 + 5);
        p_DestinationString = (struct _GUID *)&DestinationString;
        v142 = a3[9];
        v143 = &v180;
        v166 = 0LL;
        DestinationString = 0LL;
        v144 = *(struct _GUID *)(a3 + 5);
        v164 = 0;
        v160 = v140;
      }
      else
      {
        if ( *a3 != 13 )
          goto LABEL_340;
        SymbolicLinkList = 0LL;
        if ( (int)RtlStringCbLengthW((const unsigned __int16 *)a3 + 28, 0x100uLL, (unsigned __int64 *)&SymbolicLinkList) < 0
          || !SymbolicLinkList )
        {
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 6288;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"DISPLAYCONFIG_DEVICE_INFO_SET_MONITOR_SPECIALIZATION was called with an invalid app name string.",
            6288LL,
            0LL,
            0LL,
            0LL,
            0LL);
          LODWORD(v15) = -1073741811;
          goto LABEL_340;
        }
        DestinationString = 0LL;
        RtlInitUnicodeString(&DestinationString, (PCWSTR)a3 + 28);
        v145 = a3[5];
        v144 = *(struct _GUID *)(a3 + 10);
        v166 = &DestinationString;
        p_DestinationString = &v180;
        v164 = 1;
        v143 = (struct _GUID *)&v178;
        v178 = *(_OWORD *)(a3 + 6);
        v160 = 0LL;
        v142 = v145 & 1;
      }
      v180 = v144;
      LODWORD(v15) = MonitorSetAppOverride(v37, v143, p_DestinationString, v142, (unsigned __int64)v160, v164, v166);
LABEL_340:
      v47 = v37;
      goto LABEL_322;
    }
    if ( (_DWORD)v10 != -18 )
    {
      if ( (_DWORD)v10 != -16 )
      {
        if ( (_DWORD)v10 == -12 )
        {
          a3[5] = 0;
          v72 = (*(_DWORD *)(*(_QWORD *)a2 + 2488LL) >> 2) & 1;
          a3[5] = v72;
          v73 = v72 | (*(_DWORD *)(*(_QWORD *)a2 + 2488LL) >> 2) & 2;
          a3[5] = v73;
          v74 = v73 | (*(_DWORD *)(*(_QWORD *)a2 + 2488LL) >> 2) & 4;
          a3[5] = v74;
          v75 = v74 | (32 * (*(_DWORD *)(*(_QWORD *)a2 + 2488LL) & 1));
          a3[5] = v75;
          a3[5] = v75 | (8 * (*(_DWORD *)(*(_QWORD *)a2 + 2488LL) & 2));
          goto LABEL_360;
        }
        if ( (_DWORD)v10 != -10 )
          goto LABEL_61;
        goto LABEL_137;
      }
      v76 = *(ADAPTER_DISPLAY ***)a2;
      v41 = a3[4];
      if ( *(int *)(*(_QWORD *)a2 + 2776LL) < 9216 )
      {
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v170);
        if ( v172 )
        {
          v13 = (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0;
LABEL_153:
          if ( !v13 )
            McTemplateK0q_EtwWriteTransfer(v12, (__int64)&EventProfilerExit);
        }
        return 3221225659LL;
      }
      SymbolicLinkList = 0LL;
      v77 = MonitorGetMonitorHandle(
              v76,
              (unsigned int)v41,
              1,
              DxgkDisplayConfigDeviceInfoForAdapter,
              (struct HDXGMONITOR__ **)&SymbolicLinkList);
      LODWORD(v15) = v77;
      if ( v77 >= 0 )
      {
        v37 = (struct HDXGMONITOR__ *)SymbolicLinkList;
        v78 = MonitorSetAdvancedColorParams(
                (struct HDXGMONITOR__ *)SymbolicLinkList,
                a3 + 5,
                a3 + 7,
                a3 + 9,
                a3 + 11,
                a3[13],
                a3[14],
                a3[15]);
        v80 = *(ADAPTER_DISPLAY ***)a2;
        v15 = v78;
        if ( v78 >= 0 )
        {
          MonitorReleaseMonitorHandle(v80, v37, v79);
          if ( (_DWORD)v15 != 255 )
            LODWORD(v15) = 255;
          goto LABEL_361;
        }
        WdLogSingleEntry4(2LL, *((int *)v80 + 104), *((unsigned int *)v80 + 103), v41, v78);
        v161 = *(unsigned int *)(*(_QWORD *)a2 + 412LL);
        v157 = *(int *)(*(_QWORD *)a2 + 416LL);
        WdLogGlobalForLineNumber = 5604;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"MonitorSetAdvancedColorParams() failed on adapter:0x%I64x%08I64x target:0x%I64x (Status = 0x%I64x).",
          v157,
          v161,
          v41,
          v15,
          0LL);
        goto LABEL_340;
      }
      v44 = v77;
      WdLogSingleEntry4(2LL, *(int *)(*(_QWORD *)a2 + 416LL), *(unsigned int *)(*(_QWORD *)a2 + 412LL), v41, v77);
      WdLogGlobalForLineNumber = 5578;
      goto LABEL_82;
    }
    goto LABEL_59;
  }
  if ( a3[1] >= 0x18 )
  {
    v148 = a3[4];
    v11 = (_DWORD)v10 == -26;
    v149 = *(_QWORD *)a2;
    if ( v11 )
    {
      LOBYTE(SymbolicLinkList) = 0;
      IsBoostRefreshRateEnabledByDefault = MonitorIsBoostRefreshRateEnabledByDefault(
                                             v149,
                                             v148,
                                             (bool *)&SymbolicLinkList);
      LODWORD(v15) = IsBoostRefreshRateEnabledByDefault;
      if ( IsBoostRefreshRateEnabledByDefault == -1073741632 )
      {
        LODWORD(v15) = 0;
        v151 = 0;
      }
      else
      {
        if ( IsBoostRefreshRateEnabledByDefault < 0 )
          goto LABEL_361;
        v151 = (char)SymbolicLinkList;
      }
      *((_BYTE *)a3 + 20) = v151;
      goto LABEL_361;
    }
    LODWORD(v15) = MonitorEnableBoostRefreshRateEnabledByDefault(v149, v148, *((_BYTE *)a3 + 20) != 0);
    if ( (_DWORD)v15 != -1073741802 )
      goto LABEL_361;
    v152 = a3[4];
    v153 = *(ADAPTER_DISPLAY ***)a2;
    LODWORD(SymbolicLinkList) = 0;
    SourceConnectedToTargetInClientVidPn = DmmGetSourceConnectedToTargetInClientVidPn(
                                             v153,
                                             v152,
                                             (unsigned int *)&SymbolicLinkList);
    LODWORD(v15) = SourceConnectedToTargetInClientVidPn;
    if ( SourceConnectedToTargetInClientVidPn != -1071774884 && SourceConnectedToTargetInClientVidPn != -1071774912 )
    {
      if ( SourceConnectedToTargetInClientVidPn >= 0 )
      {
        DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(
                            *(ADAPTER_DISPLAY **)(*(_QWORD *)a2 + 3160LL),
                            (unsigned int)SymbolicLinkList);
        if ( *((_BYTE *)a3 + 20) || *((_DWORD *)DisplayModeInfo + 18) >= 2u )
          LODWORD(v15) = -1073741802;
      }
      goto LABEL_361;
    }
    goto LABEL_360;
  }
  v146 = WdLogNewEntry5_WdTrace(v10, v9);
  *(_QWORD *)(v146 + 24) = a3[1];
  *(_QWORD *)(v146 + 32) = -1073741789LL;
  WdLogGlobalForLineNumber = 5382;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v170);
  if ( v172 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v147, (__int64)&EventProfilerExit);
  return 3221225507LL;
}
