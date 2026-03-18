/*
 * XREFs of DxgkIddHandleSetDisplayConfig @ 0x1401C7910
 * Callers:
 *     DxgkHandleIndirectEscape @ 0x140250AE0 (DxgkHandleIndirectEscape.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x140017020 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x140017080 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x140017DC0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?SetDisplayConfigDone@DXGSESSIONDATA@@QEAAXK@Z @ 0x140018210 (-SetDisplayConfigDone@DXGSESSIONDATA@@QEAAXK@Z.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x140018480 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?reset@?$auto_rc@V?$rc_buffer@U?$AlpcRequest@$06@DispBroker@@@@@@QEAAXPEAV?$rc_buffer@U?$AlpcRequest@$06@DispBroker@@@@@Z @ 0x14002DBF4 (-reset@-$auto_rc@V-$rc_buffer@U-$AlpcRequest@$06@DispBroker@@@@@@QEAAXPEAV-$rc_buffer@U-$AlpcReq.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14002E850 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x140033570 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x14003BC9C (-ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x14004F144 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     ?Detach@CPROCESSATTACHHELPER@@QEAAXXZ @ 0x1400589B4 (-Detach@CPROCESSATTACHHELPER@@QEAAXXZ.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x140059690 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z @ 0x1400597EC (-DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x14005B6A4 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     Feature_DcuNoBugCheckOnNoAdapter__private_IsEnabledDeviceUsageNoInline @ 0x14006798C (Feature_DcuNoBugCheckOnNoAdapter__private_IsEnabledDeviceUsageNoInline.c)
 *     DXGKCALLONEXIT__lambda_89c28751b319d20abeaa919f1ef3608e___ @ 0x140075C84 (DXGKCALLONEXIT__lambda_89c28751b319d20abeaa919f1ef3608e___.c)
 *     InitDisplayBrokerMessage_DispBroker::AlpcRequest_7___lambda_2b0a0ae50116c8aa91dc0eedbc3a4823__&DxgkSampleDisplayState_ @ 0x140075CAC (InitDisplayBrokerMessage_DispBroker--AlpcRequest_7___lambda_2b0a0ae50116c8aa91dc0eedbc3a4823__-D.c)
 *     _DXGKCALLONEXIT__lambda_89c28751b319d20abeaa919f1ef3608e____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x140075F24 (_DXGKCALLONEXIT__lambda_89c28751b319d20abeaa919f1ef3608e____--_2_--DXGKCALLONEXIT--_DXGKCALLONEX.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?CacheIddDisplayConfigRequest@DXGSESSIONDATA@@QEAAKAEAV?$auto_rc@V?$rc_buffer@U?$AlpcRequest@$06@DispBroker@@@@@@@Z @ 0x14019054C (-CacheIddDisplayConfigRequest@DXGSESSIONDATA@@QEAAKAEAV-$auto_rc@V-$rc_buffer@U-$AlpcRequest@$06.c)
 *     DpiFdoWaitConnectionChangeComplete @ 0x140192278 (DpiFdoWaitConnectionChangeComplete.c)
 *     _lambda_13e7d7c24174763590f6bf26896d2285_::operator() @ 0x1401C66AC (_lambda_13e7d7c24174763590f6bf26896d2285_--operator().c)
 *     ?AddMapping@REMOTEMONITORMAPPING@@QEAAJPEAUPATH_IDENTIFIER_HOST@1@PEAUPATH_IDENTIFIER_GUEST@1@@Z @ 0x1401FD604 (-AddMapping@REMOTEMONITORMAPPING@@QEAAJPEAUPATH_IDENTIFIER_HOST@1@PEAUPATH_IDENTIFIER_GUEST@1@@Z.c)
 *     ?Clear@REMOTEMONITORMAPPING@@QEAAXPEAU_LUID@@@Z @ 0x1401FD830 (-Clear@REMOTEMONITORMAPPING@@QEAAXPEAU_LUID@@@Z.c)
 *     ?MonitorEnableDisableHdr@@YAJPEAUHDXGMONITOR__@@_N@Z @ 0x14026E63C (-MonitorEnableDisableHdr@@YAJPEAUHDXGMONITOR__@@_N@Z.c)
 *     ?MonitorEnableDisableWcg@@YAJPEAUHDXGMONITOR__@@_N@Z @ 0x14026EAA0 (-MonitorEnableDisableWcg@@YAJPEAUHDXGMONITOR__@@_N@Z.c)
 *     ?MonitorSetDriverColorimetryOverride@@YAJPEAXIAEBU_DXGK_COLORIMETRY@@@Z @ 0x14026FA38 (-MonitorSetDriverColorimetryOverride@@YAJPEAXIAEBU_DXGK_COLORIMETRY@@@Z.c)
 *     ?MonitorSetLastWireformat@@YAJPEAXIT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z @ 0x14026FD14 (-MonitorSetLastWireformat@@YAJPEAXIT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z.c)
 *     ?MonitorSetPhysicalSizeOverride@@YAJPEAXIII@Z @ 0x14026FDA0 (-MonitorSetPhysicalSizeOverride@@YAJPEAXIII@Z.c)
 *     ?MonitorSetSDRWhiteLevelOverride@@YAJPEAXIK@Z @ 0x14026FF60 (-MonitorSetSDRWhiteLevelOverride@@YAJPEAXIK@Z.c)
 *     ?MonitorSetScaleFactorOverride@@YAJPEAXII@Z @ 0x1402700C0 (-MonitorSetScaleFactorOverride@@YAJPEAXII@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402C6C90 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?MonitorGetMonitorHandle@@YAJPEAXIE0PEAPEAUHDXGMONITOR__@@@Z @ 0x1402CA36C (-MonitorGetMonitorHandle@@YAJPEAXIE0PEAPEAUHDXGMONITOR__@@@Z.c)
 *     ?MonitorReleaseMonitorHandle@@YAJPEAXPEAUHDXGMONITOR__@@0@Z @ 0x1402CC114 (-MonitorReleaseMonitorHandle@@YAJPEAXPEAUHDXGMONITOR__@@0@Z.c)
 *     ?ReferenceSessionCSRSSProcess@DXGSESSIONMGR@@QEAAJKPEAPEAU_KPROCESS@@@Z @ 0x14033698C (-ReferenceSessionCSRSSProcess@DXGSESSIONMGR@@QEAAJKPEAPEAU_KPROCESS@@@Z.c)
 *     ?MonitorIsMonitorAndDriverWCGCapable@@YAJPEAUHDXGMONITOR__@@PEA_NPEAW4MonitorAndLinkWCGIncapableReason@@@Z @ 0x140362930 (-MonitorIsMonitorAndDriverWCGCapable@@YAJPEAUHDXGMONITOR__@@PEA_NPEAW4MonitorAndLinkWCGIncapable.c)
 *     ?MonitorIsMonitorAndLinkHDRCapable@@YAJPEAUHDXGMONITOR__@@PEATMONITOR_AND_LINK_HDR_CAPS@@PEAW4MonitorAndLinkHDRIncapableReason@@@Z @ 0x140362EE0 (-MonitorIsMonitorAndLinkHDRCapable@@YAJPEAUHDXGMONITOR__@@PEATMONITOR_AND_LINK_HDR_CAPS@@PEAW4Mo.c)
 *     DxgkWaitForPnPTransitionDone @ 0x14038BDD4 (DxgkWaitForPnPTransitionDone.c)
 *     ?AssignByHandle@DXGADAPTER_REFERENCE@@QEAA_NI@Z @ 0x1403C420C (-AssignByHandle@DXGADAPTER_REFERENCE@@QEAA_NI@Z.c)
 *     ?DxgkSendDisplayBrokerMessage@@YAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@0PEA_K1PEAT_LARGE_INTEGER@@@Z @ 0x1403F7EF0 (-DxgkSendDisplayBrokerMessage@@YAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@0PEA_K1PEAT_.c)
 */

__int64 __fastcall DxgkIddHandleSetDisplayConfig(
        unsigned int a1,
        unsigned int a2,
        unsigned int *a3,
        unsigned int a4,
        _DWORD *a5,
        _DWORD *a6,
        int *a7)
{
  unsigned int v7; // r12d
  unsigned __int64 v10; // rbx
  const wchar_t *v11; // r9
  __int64 v12; // rcx
  unsigned int v13; // edx
  struct _LUID *v14; // rdx
  int v15; // r8d
  int v16; // esi
  struct _LUID v17; // rcx
  const wchar_t *v18; // r9
  int v19; // r9d
  void *v20; // rbx
  __int64 v21; // r15
  int v22; // eax
  struct DXGADAPTER *v23; // rdx
  unsigned int *v24; // r8
  unsigned int v25; // ebx
  int v26; // eax
  struct DXGGLOBAL *Global; // rax
  unsigned int *v28; // r15
  __int64 v29; // rbx
  unsigned int *v30; // r12
  int v31; // eax
  int v32; // eax
  unsigned int v33; // ecx
  DXGK_STANDARD_COLORIMETRY_FLAGS v34; // eax
  int v35; // eax
  unsigned int v36; // edx
  int MonitorHandle; // eax
  void *v38; // r8
  unsigned int v39; // eax
  int IsMonitorAndLinkHDRCapable; // eax
  int v41; // r12d
  int IsMonitorAndDriverWCGCapable; // eax
  int v43; // r12d
  unsigned int v44; // r12d
  int v45; // eax
  int v46; // eax
  __int64 v47; // r12
  struct DXGGLOBAL *v48; // rax
  int v49; // eax
  __int64 v50; // rcx
  __int64 CurrentProcess; // rax
  struct DXGGLOBAL *v52; // rax
  int v53; // eax
  __int64 v54; // rbx
  const wchar_t *v55; // r9
  unsigned __int64 v56; // rbx
  const wchar_t *v57; // r9
  __int64 v58; // rbx
  DXGGLOBAL *v59; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  __int64 v61; // rcx
  __int64 v62; // r15
  ReferenceCounted *v63; // rax
  ReferenceCounted *v64; // rbx
  int v65; // eax
  int v66; // r15d
  int v67; // eax
  int v68; // eax
  int v69; // ebx
  __int64 v71; // [rsp+20h] [rbp-E0h]
  __int64 v72; // [rsp+20h] [rbp-E0h]
  __int64 v73; // [rsp+20h] [rbp-E0h]
  __int64 v74; // [rsp+20h] [rbp-E0h]
  __int64 v75; // [rsp+20h] [rbp-E0h]
  __int64 v76; // [rsp+20h] [rbp-E0h]
  __int64 v77; // [rsp+20h] [rbp-E0h]
  __int64 v78; // [rsp+28h] [rbp-D8h]
  __int64 v79; // [rsp+28h] [rbp-D8h]
  __int64 v80; // [rsp+28h] [rbp-D8h]
  __int64 v81; // [rsp+28h] [rbp-D8h]
  __int64 v82; // [rsp+28h] [rbp-D8h]
  __int64 v83; // [rsp+28h] [rbp-D8h]
  __int64 v84; // [rsp+30h] [rbp-D0h]
  __int64 v85; // [rsp+30h] [rbp-D0h]
  __int64 v86; // [rsp+30h] [rbp-D0h]
  __int64 v87; // [rsp+30h] [rbp-D0h]
  struct _LUID *v88[2]; // [rsp+50h] [rbp-B0h] BYREF
  char v89; // [rsp+60h] [rbp-A0h] BYREF
  bool v90; // [rsp+61h] [rbp-9Fh] BYREF
  ReferenceCounted *v91; // [rsp+68h] [rbp-98h] BYREF
  char v92; // [rsp+70h] [rbp-90h] BYREF
  unsigned int *v93; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v94; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v95[24]; // [rsp+88h] [rbp-78h] BYREF
  int v96; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v97; // [rsp+A4h] [rbp-5Ch] BYREF
  unsigned int v98; // [rsp+A8h] [rbp-58h] BYREF
  DXGSESSIONDATA *v99; // [rsp+B0h] [rbp-50h] BYREF
  struct HDXGMONITOR__ *v100; // [rsp+B8h] [rbp-48h] BYREF
  int v101; // [rsp+C0h] [rbp-40h] BYREF
  int v102; // [rsp+C4h] [rbp-3Ch] BYREF
  int v103; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v104[48]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v105; // [rsp+100h] [rbp+0h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v106[2]; // [rsp+108h] [rbp+8h] BYREF
  PVOID Object; // [rsp+118h] [rbp+18h] BYREF
  unsigned __int64 CurrentProcessSessionId; // [rsp+120h] [rbp+20h] BYREF
  union _LARGE_INTEGER v109; // [rsp+128h] [rbp+28h] BYREF
  unsigned __int64 v110; // [rsp+130h] [rbp+30h] BYREF
  __int64 v111; // [rsp+138h] [rbp+38h] BYREF
  unsigned int v112; // [rsp+140h] [rbp+40h]
  __int64 v113; // [rsp+148h] [rbp+48h] BYREF
  unsigned int v114; // [rsp+150h] [rbp+50h]
  int v115; // [rsp+154h] [rbp+54h]
  _DXGK_COLORIMETRY v116; // [rsp+158h] [rbp+58h] BYREF
  _QWORD v117[2]; // [rsp+190h] [rbp+90h] BYREF
  __int64 *v118[4]; // [rsp+1A0h] [rbp+A0h] BYREF
  _QWORD v119[6]; // [rsp+1C0h] [rbp+C0h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+1F0h] [rbp+F0h] BYREF
  char v121; // [rsp+220h] [rbp+120h]
  _BYTE v122[144]; // [rsp+230h] [rbp+130h] BYREF
  _BYTE v123[88]; // [rsp+2C0h] [rbp+1C0h] BYREF

  v7 = 0;
  v105 = 0LL;
  v10 = a2;
  v98 = a1;
  v99 = 0LL;
  CurrentProcessSessionId = (unsigned int)PsGetCurrentProcessSessionId();
  v119[1] = &v105;
  v119[2] = &CurrentProcessSessionId;
  v119[3] = &v99;
  v119[4] = &v98;
  v119[0] = a7;
  DXGKCALLONEXIT__lambda_89c28751b319d20abeaa919f1ef3608e_((__int64)v104, (__int64)v119);
  *a7 = -1073741823;
  if ( (unsigned int)v10 < 4 )
  {
    WdLogSingleEntry2(2LL, (unsigned int)v10, -1073741789LL);
    v11 = L"Input buffer size (0x%I64x) was too small for DXGK_IDD_SET_DISPLAY_CONFIGURATION, returning 0x%I64x.";
    WdLogGlobalForLineNumber = 768;
LABEL_3:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v11, v10, -1073741789LL, 0LL, 0LL, 0LL);
LABEL_4:
    *a7 = -1073741789;
    return DXGKCALLONEXIT__lambda_89c28751b319d20abeaa919f1ef3608e____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT((__int64)v104);
  }
  v93 = a3;
  v12 = *a3;
  if ( (unsigned int)v12 >= 0x10 )
  {
    WdLogSingleEntry2(2LL, (unsigned int)v12, -1073741811LL);
    v71 = *v93;
    WdLogGlobalForLineNumber = 781;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"IddSetDisplayConfig has too many paths (0x%I64x), returning 0x%I64x.",
      v71,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    *a7 = -1073741811;
    return DXGKCALLONEXIT__lambda_89c28751b319d20abeaa919f1ef3608e____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT((__int64)v104);
  }
  if ( v10 < 132 * v12 + 4 )
  {
    WdLogSingleEntry3(2LL, v10, *a3, -1073741789LL);
    v78 = *v93;
    WdLogGlobalForLineNumber = 795;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Input buffer (size = 0x%I64x) was too small for 0x%I64x paths of DXGK_IDD_PATH_CONFIG, returning 0x%I64x.",
      v10,
      v78,
      -1073741789LL,
      0LL,
      0LL);
    goto LABEL_4;
  }
  if ( a4 < 8 )
  {
    WdLogSingleEntry2(2LL, v10, -1073741789LL);
    v11 = L"Output buffer size (0x%I64x) was too small for DXGK_IDD_SET_DISPLAY_CONFIGURATION_OUTPUT, returning 0x%I64x.";
    WdLogGlobalForLineNumber = 807;
    goto LABEL_3;
  }
  v13 = v98;
  *a5 = 0;
  *a6 = 8;
  v88[0] = 0LL;
  DXGADAPTER_REFERENCE::AssignByHandle((struct DXGADAPTER **)v88, v13);
  if ( !v88[0] )
  {
    if ( (unsigned int)Feature_DcuNoBugCheckOnNoAdapter__private_IsEnabledDeviceUsageNoInline() )
    {
      WdLogSingleEntry2(3LL, v98, -1071775725LL);
      WdLogGlobalForLineNumber = 827;
      v69 = -1071775725;
    }
    else
    {
      v69 = -1073741811;
      WdLogSingleEntry2(3LL, v98, -1073741811LL);
      WdLogGlobalForLineNumber = 834;
    }
    *a7 = v69;
    goto LABEL_147;
  }
  v105 = *(_QWORD *)&v88[0][51].HighPart;
  v94 = 0LL;
  DXGADAPTER::IsAdapterSessionized((DXGADAPTER *)v88[0], v14, 0LL, &v94);
  v16 = v15 + 1;
  CurrentProcessSessionId = v94;
  DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
    (DXGADAPTERSTOPRESETLOCKSHARED *)v95,
    (struct DXGADAPTER *)v88[0],
    v15 + 1);
  if ( v88[0][25].LowPart != v16 || BYTE1(v88[0][382].LowPart) )
  {
    WdLogSingleEntry2(3LL, v88[0], -1071775725LL);
    WdLogGlobalForLineNumber = 853;
    goto LABEL_26;
  }
  v17 = v88[0][395];
  if ( !*(_QWORD *)&v17 || (v88[0][55].HighPart & 0x100) == 0 )
  {
    WdLogSingleEntry2(2LL, v88[0], -1073741811LL);
    v18 = L"Caller specified adapter (0x%I64x) is not a indirect display adapter, returning 0x%I64x.";
    WdLogGlobalForLineNumber = 862;
    goto LABEL_18;
  }
  if ( *v93 > *(_DWORD *)(*(_QWORD *)&v17 + 96LL) )
  {
    WdLogSingleEntry2((unsigned int)(v16 + 1), v88[0], -1073741811LL);
    v18 = L"Caller specified PathCount exceeds the number of VidPn sourrce on adapter (0x%I64x), returning 0x%I64x.";
    WdLogGlobalForLineNumber = 871;
LABEL_18:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v18, (__int64)v88[0], -1073741811LL, 0LL, 0LL, 0LL);
    *a7 = -1073741811;
    goto LABEL_19;
  }
  v97 = 0;
  if ( !DXGADAPTER::IsAdapterSessionized((DXGADAPTER *)v88[0], v88[0], &v97, 0LL) )
  {
    WdLogSingleEntry2((unsigned int)(v19 + 2), v88[0], -1073741811LL);
    v18 = L"Caller specified adapter (0x%I64x) is not a sessionized adapter, returning 0x%I64x.";
    WdLogGlobalForLineNumber = 886;
    goto LABEL_18;
  }
  v20 = (void *)v88[0][27];
  ObfReferenceObject(v20);
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v95);
  v21 = v97;
  v22 = DxgkWaitForPnPTransitionDone(0LL, 0LL, v97, 2LL);
  *a7 = v22;
  if ( v22 < 0 )
  {
    ObfDereferenceObject(v20);
    WdLogSingleEntry2(2LL, (unsigned int)v21, *a7);
    v79 = *a7;
    WdLogGlobalForLineNumber = 921;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to wait for all pending PnP transition to be done in session 0x%I64x (ntStatus = 0x%I64x).",
      v21,
      v79,
      0LL,
      0LL,
      0LL);
    goto LABEL_19;
  }
  *a7 = DpiFdoWaitConnectionChangeComplete((__int64)v20);
  ObfDereferenceObject(v20);
  if ( *a7 < 0 )
  {
    WdLogSingleEntry3(2LL, v88[0], *a7, -1071775725LL);
    v80 = *a7;
    WdLogGlobalForLineNumber = 943;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to wait for all pending connection changes to be completed on adapter 0x%I64x with ntStatus 0x%I64"
                "x, returning 0x%I64x.",
      (__int64)v88[0],
      v80,
      -1071775725LL,
      0LL,
      0LL);
LABEL_26:
    *a7 = -1071775725;
    goto LABEL_19;
  }
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v95);
  v23 = (struct DXGADAPTER *)v88[0];
  if ( v88[0][25].LowPart != v16 || BYTE1(v88[0][382].LowPart) )
  {
    WdLogSingleEntry2(3LL, v88[0], -1071775725LL);
    WdLogGlobalForLineNumber = 960;
    goto LABEL_26;
  }
  v24 = v93;
  v118[0] = (__int64 *)v88;
  v25 = 0;
  v96 = 0;
  v118[1] = (__int64 *)&v96;
  v89 = 0;
  v118[2] = (__int64 *)&v89;
  if ( *v93 )
  {
    do
    {
      v26 = lambda_13e7d7c24174763590f6bf26896d2285_::operator()(v118, v25, (int *)&v24[33 * v25 + 1]);
      *a7 = v26;
      if ( v26 < 0 )
        goto LABEL_19;
      v24 = v93;
      v25 += v16;
    }
    while ( v25 < *v93 );
    if ( v96 )
    {
      if ( v96 != *v93 )
      {
        *a7 = -1073741811;
        WdLogSingleEntry2(2LL, v88[0], -1073741811LL);
        v81 = *a7;
        WdLogGlobalForLineNumber = 1058;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Some but not all paths contained a mode in DXGK_IDD_SET_DISPLAY_CONFIGURATION on adapter 0x%I64x, returning 0x%I64x.",
          (__int64)v88[0],
          v81,
          0LL,
          0LL,
          0LL);
        goto LABEL_19;
      }
      if ( !v89 )
      {
        *a7 = -1073741811;
        WdLogSingleEntry2(2LL, v88[0], -1073741811LL);
        v82 = *a7;
        WdLogGlobalForLineNumber = 1067;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Did not find primary path from DXGK_IDD_SET_DISPLAY_CONFIGURATION on adapter 0x%I64x, returning 0x%I64x.",
          (__int64)v88[0],
          v82,
          0LL,
          0LL,
          0LL);
        goto LABEL_19;
      }
      Global = DXGGLOBAL::GetGlobal();
      REMOTEMONITORMAPPING::Clear((struct DXGGLOBAL *)((char *)Global + 305272), 0LL);
    }
    v23 = (struct DXGADAPTER *)v88[0];
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v122, v23, 0LL);
  if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v122, 0LL) < 0 )
  {
    WdLogSingleEntry2(3LL, SHIDWORD(v105), (unsigned int)v105);
    WdLogGlobalForLineNumber = 1081;
    goto LABEL_41;
  }
  LODWORD(v91) = 0;
  if ( !*v93 )
  {
LABEL_102:
    COREADAPTERACCESS::Release((COREADAPTERACCESS *)v122);
    if ( !v96 )
      goto LABEL_41;
    v121 = 0;
    CurrentProcess = PsGetCurrentProcess(v50);
    if ( (unsigned int)PsGetProcessSessionId(CurrentProcess) != (_DWORD)v21 )
    {
      Object = 0LL;
      v52 = DXGGLOBAL::GetGlobal();
      v53 = DXGSESSIONMGR::ReferenceSessionCSRSSProcess(
              *((DXGSESSIONMGR **)v52 + 123),
              v21,
              (struct _KPROCESS **)&Object);
      *a7 = v53;
      if ( v53 < 0 )
      {
        v54 = (unsigned int)v21;
        WdLogSingleEntry2(2LL, (unsigned int)v21, v53);
        v55 = L"Failed to get CSRSS process from session 0x%I64x, (Status = 0x%I64x).";
        WdLogGlobalForLineNumber = 1341;
        goto LABEL_106;
      }
      CPROCESSATTACHHELPER::Attach(&ApcState, (PRKPROCESS)Object);
      ObfDereferenceObject(Object);
    }
    v59 = DXGGLOBAL::GetGlobal();
    SessionData = DXGGLOBAL::GetSessionData(v59);
    v99 = SessionData;
    if ( *((_BYTE *)SessionData + 18992) && *((_BYTE *)SessionData + 18496) )
    {
      if ( !KeReadStateEvent(*(PRKEVENT *)(*(_QWORD *)&v88[0][395] + 672LL)) )
      {
        LOBYTE(v61) = 1;
        if ( (unsigned __int8)WdIsDebuggerPresent(v61) )
        {
          DbgPrintEx(0x65u, 0, "Breaking in to allow debug of missing GDOs when PnP transition is done.");
          __debugbreak();
        }
        v94 = 0LL;
        DxgkLogCodePointPacketForSession(114, (unsigned int)v21, 0, 0, 0, 0LL);
      }
      if ( !KeReadStateEvent(*(PRKEVENT *)(*(_QWORD *)&v88[0][395] + 672LL)) )
      {
        v94 = 0LL;
        DxgkLogCodePointPacketForSession(114, (unsigned int)v21, 0, 0, 0, 0LL);
      }
      memset(v123, 0, sizeof(v123));
      v62 = 216LL * *v93;
      v63 = (ReferenceCounted *)operator new[](v62 + 112, 0x4B677844u, 256LL);
      v64 = v63;
      if ( v63 )
      {
        v91 = v63;
        *(_QWORD *)v63 = &rc_buffer<DispBroker::AlpcRequest<7>>::`vftable';
        *((_DWORD *)v63 + 2) = 1;
        *(_QWORD *)v63 = &rc_buffer<DispBroker::AlpcRequest<7>>::`vftable';
        v92 = 0;
        LOBYTE(v106[0]) = 0;
        CDisplayScenarioContextScope::ContextScopeConstructor(v106, 0LL, 0x47u, 0);
        v117[0] = &v93;
        v117[1] = &v92;
        v65 = InitDisplayBrokerMessage_DispBroker::AlpcRequest_7___lambda_2b0a0ae50116c8aa91dc0eedbc3a4823___DxgkSampleDisplayState_(
                (_WORD *)v64 + 8,
                v106[1],
                (__int64)v117,
                v62);
        *a7 = v65;
        if ( v65 >= 0 )
        {
          v66 = DXGSESSIONDATA::CacheIddDisplayConfigRequest((__int64)v99, &v91);
          DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v95);
          v110 = 88LL;
          v109.QuadPart = (-(__int64)(g_bSkuSupportMultipleUsers != 0) & 0xFFFFFFFF8EC04D00uLL) - 100000000;
          *a7 = DxgkSendDisplayBrokerMessage(
                  0x120000u,
                  (struct _PORT_MESSAGE *)((char *)v64 + 16),
                  0LL,
                  (struct _PORT_MESSAGE *)v123,
                  &v110,
                  0LL,
                  &v109);
          DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v95);
          if ( v88[0][25].LowPart != 1 || BYTE1(v88[0][382].LowPart) )
          {
            WdLogSingleEntry2(3LL, v88[0], -1071775725LL);
            WdLogGlobalForLineNumber = 1645;
            *a7 = -1071775725;
          }
          else
          {
            v67 = *a7;
            if ( *a7 == -1073741772 )
            {
              WdLogSingleEntry1(3LL);
              WdLogGlobalForLineNumber = 1658;
              *a7 = 0;
            }
            else if ( v67 == 192 )
            {
              *a7 = -1073741749;
              WdLogSingleEntry2(3LL, *(unsigned int *)v99, -1073741749LL);
              WdLogGlobalForLineNumber = 1666;
            }
            else if ( v67 >= 0 )
            {
              v68 = *(_DWORD *)&v123[80];
              if ( *(int *)&v123[80] >= 0 )
              {
                DXGSESSIONDATA::SetDisplayConfigDone(v99, v66);
                v68 = *(_DWORD *)&v123[80];
              }
              *a7 = v68;
            }
            else
            {
              WdLogSingleEntry2(2LL, *(unsigned int *)v99, *a7);
              v83 = *a7;
              v77 = *(unsigned int *)v99;
              WdLogGlobalForLineNumber = 1672;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"Failed to send Display broker message in session 0x%I64x, status 0x%I64x",
                v77,
                v83,
                0LL,
                0LL,
                0LL);
            }
          }
        }
        else
        {
          WdLogSingleEntry1(2LL);
          v76 = *a7;
          WdLogGlobalForLineNumber = 1599;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed to initialize display broker message, (Status = 0x%I64x).",
            v76,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        CDisplayScenarioContextScope::~CDisplayScenarioContextScope(v106);
        auto_rc<rc_buffer<DispBroker::AlpcRequest<7>>>::reset(&v91, 0LL);
      }
      else
      {
        WdLogSingleEntry0(6LL);
        WdLogGlobalForLineNumber = 1433;
        DxgkLogInternalTriageEvent(
          0LL,
          262145,
          -1,
          (__int64)L"Cannot allocate buffer to hold the SetDisplayConfig ALPC message",
          1433LL,
          0LL,
          0LL,
          0LL,
          0LL);
        *a7 = -1073741801;
      }
      goto LABEL_107;
    }
    *a7 = -1071775725;
    v54 = v97;
    WdLogSingleEntry2(2LL, v97, -1071775725LL);
    v55 = L"Sending SetDisplayConfig ALPC message from display broker disabled session 0x%I64x, returning 0x%I64x.";
    WdLogGlobalForLineNumber = 1363;
LABEL_106:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v55, v54, *a7, 0LL, 0LL, 0LL);
LABEL_107:
    CPROCESSATTACHHELPER::Detach(&ApcState);
    goto LABEL_41;
  }
  while ( 1 )
  {
    v28 = v93;
    v29 = 33LL * v7;
    v94 = v7;
    v30 = &v93[v29 + 4];
    if ( (v93[v29 + 1] & 2) != 0 )
    {
      v31 = MonitorSetScaleFactorOverride(v88[0], *v30, v93[v29 + 14]);
      *a7 = v31;
      if ( v31 < 0 )
      {
        v56 = v94;
        WdLogSingleEntry3(2LL, *v30, v94, v31);
        v57 = L"Failed to set monitor DPI override on target 0x%I64x on path 0x%I64x, (Status = 0x%I64x).";
        WdLogGlobalForLineNumber = 1101;
LABEL_109:
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v57, *v30, v56, *a7, 0LL, 0LL);
        goto LABEL_41;
      }
    }
    if ( (v28[v29 + 1] & 4) != 0 )
    {
      v32 = MonitorSetPhysicalSizeOverride(v88[0], *v30, v28[v29 + 15], v28[v29 + 16]);
      *a7 = v32;
      if ( v32 < 0 )
      {
        v56 = v94;
        WdLogSingleEntry3(2LL, *v30, v94, v32);
        v57 = L"Failed to set monitor size override on target 0x%I64x on path 0x%I64x, (Status = 0x%I64x).";
        WdLogGlobalForLineNumber = 1117;
        goto LABEL_109;
      }
    }
    if ( (v28[v29 + 1] & 8) != 0 )
    {
      v33 = v28[v29 + 29];
      v116.RedPoint = *(D3DKMDT_2DOFFSET *)&v28[v29 + 17];
      v116.GreenPoint = *(D3DKMDT_2DOFFSET *)&v28[v29 + 19];
      v116.BluePoint = *(D3DKMDT_2DOFFSET *)&v28[v29 + 21];
      v116.WhitePoint = *(D3DKMDT_2DOFFSET *)&v28[v29 + 23];
      v116.MinLuminance = v28[v29 + 25];
      v116.MaxLuminance = v28[v29 + 26];
      v116.MaxFullFrameLuminance = v28[v29 + 27];
      v116.FormatBitDepths.Value = v28[v29 + 28];
      v34.Value = (v33 & 1) != 0;
      v116.StandardColorimetryFlags = v34;
      if ( (v33 & 2) != 0 )
      {
        v34.Value |= 2u;
        v116.StandardColorimetryFlags = v34;
      }
      if ( (v33 & 4) != 0 )
        v116.StandardColorimetryFlags.Value = v34.Value | 4;
      v30 = &v28[v29 + 4];
      v35 = MonitorSetDriverColorimetryOverride(v88[0], *v30, &v116);
      *a7 = v35;
      if ( v35 < 0 )
      {
        v58 = (unsigned int)v91;
        WdLogSingleEntry3(2LL, *v30, (unsigned int)v91, v35);
        v86 = *a7;
        v74 = *v30;
        WdLogGlobalForLineNumber = 1157;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to set monitor colorimetry override on target 0x%I64x on path 0x%I64x, (Status = 0x%I64x).",
          v74,
          v58,
          v86,
          0LL,
          0LL);
        goto LABEL_41;
      }
      *a7 = MonitorSetLastWireformat(v88[0], *v30, (union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE)v28[v29 + 28]);
    }
    if ( (v28[v29 + 1] & 1) == 0 )
    {
      v44 = (unsigned int)v91;
      goto LABEL_91;
    }
    v36 = *v30;
    v100 = 0LL;
    MonitorHandle = MonitorGetMonitorHandle(v88[0], v36, 0, DxgkIddHandleSetDisplayConfig, &v100);
    *a7 = MonitorHandle;
    if ( MonitorHandle < 0 )
    {
      v44 = (unsigned int)v91;
      goto LABEL_88;
    }
    v39 = v28[v29 + 13];
    if ( v39 == 3 )
    {
      v102 = 0;
      v101 = 0;
      IsMonitorAndLinkHDRCapable = MonitorIsMonitorAndLinkHDRCapable(
                                     v100,
                                     (union MONITOR_AND_LINK_HDR_CAPS *)&v102,
                                     (enum MonitorAndLinkHDRIncapableReason *)&v101);
      v41 = v101;
      *a7 = IsMonitorAndLinkHDRCapable;
      if ( v41 )
      {
        if ( (v102 & 1) != 0 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 1180;
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!MonitorAndLinkCaps.HDR10", 1180LL, 0LL, 0LL, 0LL, 0LL);
        }
        *a7 = -1073741637;
        if ( (v41 & 2) != 0 )
          *a5 |= 1u;
        if ( (v41 & 4) != 0 )
          *a5 |= 2u;
        if ( (v41 & 8) != 0 )
          *a5 |= 8u;
        if ( (v41 & 0x10) != 0 )
          *a5 |= 0x10u;
        if ( (v41 & 0x20) != 0 )
          *a5 |= 0x20u;
LABEL_80:
        v44 = (unsigned int)v91;
        a5[1] = (_DWORD)v91;
        goto LABEL_82;
      }
    }
    else if ( v39 == 2 )
    {
      v90 = 0;
      v103 = 0;
      IsMonitorAndDriverWCGCapable = MonitorIsMonitorAndDriverWCGCapable(
                                       v100,
                                       &v90,
                                       (enum MonitorAndLinkWCGIncapableReason *)&v103);
      v43 = v103;
      *a7 = IsMonitorAndDriverWCGCapable;
      if ( v43 )
      {
        if ( v90 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 1218;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"!MonitorAndDriverWCGCapable",
            1218LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        *a7 = -1073741637;
        if ( (v43 & 2) != 0 )
          *a5 |= 4u;
        if ( (v43 & 4) != 0 )
          *a5 |= 0x40u;
        if ( (v43 & 8) != 0 )
          *a5 |= 0x80u;
        goto LABEL_80;
      }
    }
    v44 = (unsigned int)v91;
LABEL_82:
    if ( *a7 >= 0 )
    {
      v45 = MonitorEnableDisableHdr(v100, v28[v29 + 13] == 3);
      *a7 = v45;
      if ( v45 >= 0 )
        *a7 = MonitorEnableDisableWcg(v100, v28[v29 + 13] == 2);
    }
    if ( (int)MonitorReleaseMonitorHandle(v88[0], v100, v38) < 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1251;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NT_SUCCESS(TempStatus)", 1251LL, 0LL, 0LL, 0LL, 0LL);
    }
LABEL_88:
    if ( *a7 < 0 )
    {
      WdLogSingleEntry3(2LL, v28[v29 + 4], v44, *a7);
      v84 = *a7;
      v72 = v28[v29 + 4];
      WdLogGlobalForLineNumber = 1259;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to set monitor color mode on target 0x%I64x on path 0x%I64x, (Status = 0x%I64x).",
        v72,
        v44,
        v84,
        0LL,
        0LL);
      goto LABEL_41;
    }
LABEL_91:
    if ( (v28[v29 + 1] & 0x10) != 0 )
    {
      v46 = MonitorSetSDRWhiteLevelOverride(v88[0], v28[v29 + 4], v28[v29 + 30]);
      *a7 = v46;
      if ( v46 < 0 )
        break;
    }
    if ( v96 == *v93 && (v28[v29 + 31] || v28[v29 + 32] || v28[v29 + 33]) )
    {
      v47 = (unsigned int)v91;
      v113 = *(_QWORD *)&v28[v29 + 2];
      v114 = v28[v29 + 4];
      v111 = *(_QWORD *)&v28[v29 + 31];
      v112 = v28[v29 + 33];
      v115 = (int)v91;
      v48 = DXGGLOBAL::GetGlobal();
      v49 = REMOTEMONITORMAPPING::AddMapping(
              (struct DXGGLOBAL *)((char *)v48 + 305272),
              (struct REMOTEMONITORMAPPING::PATH_IDENTIFIER_HOST *)&v111,
              (struct REMOTEMONITORMAPPING::PATH_IDENTIFIER_GUEST *)&v113);
      *a7 = v49;
      if ( v49 < 0 )
      {
        WdLogSingleEntry3(2LL, v28[v29 + 4], (unsigned int)v47, v49);
        v85 = *a7;
        v73 = v28[v29 + 4];
        WdLogGlobalForLineNumber = 1310;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to set monitor mapping override on target 0x%I64x on path 0x%I64x, (Status = 0x%I64x).",
          v73,
          v47,
          v85,
          0LL,
          0LL);
        goto LABEL_41;
      }
    }
    else
    {
      LODWORD(v47) = (_DWORD)v91;
    }
    v7 = v47 + 1;
    LODWORD(v91) = v7;
    if ( v7 >= *v93 )
    {
      LODWORD(v21) = v97;
      goto LABEL_102;
    }
  }
  WdLogSingleEntry3(2LL, v28[v29 + 4], v44, v46);
  v87 = *a7;
  v75 = v28[v29 + 4];
  WdLogGlobalForLineNumber = 1275;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Failed to set monitor SDR white level override on target 0x%I64x on path 0x%I64x, (Status = 0x%I64x).",
    v75,
    v44,
    v87,
    0LL,
    0LL);
LABEL_41:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v122);
LABEL_19:
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v95);
LABEL_147:
  DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v88, 0LL);
  return DXGKCALLONEXIT__lambda_89c28751b319d20abeaa919f1ef3608e____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT((__int64)v104);
}
