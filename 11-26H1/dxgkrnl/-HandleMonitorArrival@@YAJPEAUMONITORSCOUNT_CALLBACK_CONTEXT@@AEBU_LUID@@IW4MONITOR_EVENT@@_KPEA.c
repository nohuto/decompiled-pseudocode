/*
 * XREFs of ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403AC52C
 * Callers:
 *     ?DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@@Z @ 0x1403ABC4C (-DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14002E850 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x140047278 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x140054320 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?DetermineDefaultTopology@@YA?AW4MultiScreenDefaultShellTopology@@IE@Z @ 0x1401CD938 (-DetermineDefaultTopology@@YA-AW4MultiScreenDefaultShellTopology@@IE@Z.c)
 *     ?DxgkIsPortraitFirstTarget@@YAEU_LUID@@I@Z @ 0x1401CE470 (-DxgkIsPortraitFirstTarget@@YAEU_LUID@@I@Z.c)
 *     ?GetUnusedVidpnSourceId@@YAIPEAVCCD_TOPOLOGY@@AEBU_LUID@@@Z @ 0x1401CF184 (-GetUnusedVidpnSourceId@@YAIPEAVCCD_TOPOLOGY@@AEBU_LUID@@@Z.c)
 *     ?RegulateCloneGroupIdForNewPath@CCD_TOPOLOGY@@QEAAXI@Z @ 0x140268F9C (-RegulateCloneGroupIdForNewPath@CCD_TOPOLOGY@@QEAAXI@Z.c)
 *     ?RemovePathByTarget@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@I@Z @ 0x140269314 (-RemovePathByTarget@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@I@Z.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1402ABFFC (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1402AC2B8 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?Clear@CCD_TOPOLOGY@@QEAAXXZ @ 0x1402AC310 (-Clear@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1402C2560 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z @ 0x140319388 (-Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x14033D260 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x14033F4C8 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     DxgkQueryMonitorTypeLockHeld @ 0x140347990 (DxgkQueryMonitorTypeLockHeld.c)
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1403495F4 (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403ADC38 (-DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISP.c)
 *     ?CopyRenewScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1403AE090 (-CopyRenewScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 *     ?CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1403AE120 (-CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1403AE25C (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 *     ?GetLaptopSpecialCaseFlags@@YAIAEBVCCD_TOPOLOGY@@AEBU_LUID@@IW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@AEBUMONITORSCOUNT_CALLBACK_CONTEXT@@@Z @ 0x1403AEA14 (-GetLaptopSpecialCaseFlags@@YAIAEBVCCD_TOPOLOGY@@AEBU_LUID@@IW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1403DAF18 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ?IsValidCloneConfiguration@@YAEPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x14042500C (-IsValidCloneConfiguration@@YAEPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 */

__int64 __fastcall HandleMonitorArrival(
        __int64 a1,
        const struct _LUID *a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a6)
{
  __int64 v7; // rdi
  __int64 v9; // rbx
  __int64 result; // rax
  int v11; // eax
  LONG *p_HighPart; // r12
  __int64 v13; // r13
  __int64 v14; // rdi
  __int64 v15; // rbx
  struct CCD_BTL *v16; // rax
  int v17; // eax
  __int64 v18; // rdi
  unsigned int v19; // ebx
  int v20; // r13d
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v22; // rax
  DXGADAPTER *v23; // rdi
  int v24; // ebx
  __int64 v25; // rdi
  int v26; // ebx
  unsigned int v27; // edx
  unsigned int v28; // r13d
  __int64 v29; // rdi
  unsigned int i; // ebx
  unsigned __int16 v31; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  int v33; // eax
  __int64 v34; // r12
  int v35; // eax
  __int64 v36; // r12
  int v37; // eax
  __int64 v38; // rdi
  unsigned int v39; // r9d
  unsigned int v40; // r8d
  unsigned int v41; // edx
  char v42; // bl
  unsigned int v43; // ebx
  struct _LUID *v44; // rax
  char IsPortraitFirstTarget; // al
  char v46; // r12
  __int16 v47; // r13
  unsigned __int16 v48; // cx
  int v49; // eax
  __int64 v50; // rdi
  unsigned int j; // ebx
  __int64 v52; // rdi
  unsigned __int16 v53; // ax
  __int16 v54; // di
  unsigned __int16 v55; // di
  int v56; // eax
  __int64 v57; // r12
  unsigned int v58; // ebx
  char v59; // al
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v60; // rax
  __int64 v61; // rdx
  _OWORD *v62; // rcx
  __int128 v63; // xmm1
  __int128 v64; // xmm0
  __int128 v65; // xmm1
  __int128 v66; // xmm0
  __int128 v67; // xmm1
  __int128 v68; // xmm0
  __int128 v69; // xmm1
  __int128 v70; // xmm0
  __int128 v71; // xmm1
  __int64 v72; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v73; // rcx
  __int64 v74; // rdx
  _OWORD *v75; // rax
  __int128 v76; // xmm1
  __int128 v77; // xmm0
  __int128 v78; // xmm1
  __int128 v79; // xmm0
  __int128 v80; // xmm1
  __int128 v81; // xmm0
  __int128 v82; // xmm1
  __int128 v83; // xmm0
  __int128 v84; // xmm1
  __int64 v85; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v86; // rdi
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v87; // rax
  __int64 v88; // rcx
  int v89; // eax
  __int64 v90; // rdi
  int v91; // eax
  __int64 v92; // r12
  int v93; // eax
  __int64 v94; // rdi
  int v95; // eax
  __int64 v96; // r12
  struct CCD_BTL *v97; // rax
  int v98; // eax
  __int64 v99; // rsi
  __int64 v100; // rbx
  struct MONITORSCOUNT_CALLBACK_CONTEXT *v101; // [rsp+20h] [rbp-E0h]
  __int64 v102; // [rsp+28h] [rbp-D8h]
  __int64 v103; // [rsp+28h] [rbp-D8h]
  __int64 v104; // [rsp+28h] [rbp-D8h]
  __int64 HighPart; // [rsp+28h] [rbp-D8h]
  __int64 v106; // [rsp+28h] [rbp-D8h]
  __int64 LowPart; // [rsp+30h] [rbp-D0h]
  __int64 v108; // [rsp+30h] [rbp-D0h]
  __int64 v109; // [rsp+30h] [rbp-D0h]
  __int64 v110; // [rsp+30h] [rbp-D0h]
  __int64 v111; // [rsp+30h] [rbp-D0h]
  __int16 v112; // [rsp+50h] [rbp-B0h]
  char v114; // [rsp+58h] [rbp-A8h]
  char v115; // [rsp+59h] [rbp-A7h]
  char v116; // [rsp+5Ah] [rbp-A6h]
  _BYTE v117[9]; // [rsp+5Bh] [rbp-A5h] BYREF
  int LaptopSpecialCaseFlags; // [rsp+64h] [rbp-9Ch] BYREF
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v119; // [rsp+68h] [rbp-98h]
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY UnusedVidpnSourceId; // [rsp+6Ch] [rbp-94h] BYREF
  __int64 v121; // [rsp+70h] [rbp-90h] BYREF
  struct D3DKMT_GETPATHSMODALITY *v122; // [rsp+80h] [rbp-80h] BYREF
  __int128 v123; // [rsp+88h] [rbp-78h]
  __int64 v124; // [rsp+98h] [rbp-68h]
  __int16 v125; // [rsp+A0h] [rbp-60h]
  __int128 v126; // [rsp+A8h] [rbp-58h]
  __int64 v127; // [rsp+B8h] [rbp-48h]
  __int64 v128; // [rsp+C0h] [rbp-40h]
  char v129; // [rsp+C8h] [rbp-38h]
  int v130; // [rsp+CCh] [rbp-34h]
  int v131; // [rsp+D0h] [rbp-30h]
  __int64 v132; // [rsp+D4h] [rbp-2Ch]
  __int64 v133; // [rsp+E0h] [rbp-20h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v134; // [rsp+F0h] [rbp-10h]
  unsigned __int64 v135; // [rsp+F8h] [rbp-8h] BYREF
  _BYTE v136[304]; // [rsp+100h] [rbp+0h] BYREF
  struct D3DKMT_GETPATHSMODALITY *v137; // [rsp+230h] [rbp+130h] BYREF
  __int128 v138; // [rsp+238h] [rbp+138h]
  __int64 v139; // [rsp+248h] [rbp+148h]
  __int16 v140; // [rsp+250h] [rbp+150h]
  __int128 v141; // [rsp+258h] [rbp+158h]
  __int64 v142; // [rsp+268h] [rbp+168h]
  struct D3DKMT_GETPATHSMODALITY *v143; // [rsp+270h] [rbp+170h]
  char v144; // [rsp+278h] [rbp+178h]
  int v145; // [rsp+27Ch] [rbp+17Ch]
  int v146; // [rsp+280h] [rbp+180h]
  __int64 v147; // [rsp+284h] [rbp+184h]
  __int64 v148; // [rsp+290h] [rbp+190h]

  v7 = a4;
  v9 = a3;
  *(_DWORD *)&v117[5] = a4;
  v134 = a6;
  if ( a5 == 4 )
  {
    *(_BYTE *)(a1 + 26) = 0;
    return 0LL;
  }
  v11 = DisplayConfigHandleMonitorInvalidation(3uLL, (struct MONITORSCOUNT_CALLBACK_CONTEXT *)a1, a6);
  p_HighPart = &a2->HighPart;
  v13 = v7;
  v14 = v9;
  if ( v11 < 0 )
  {
    v15 = v11;
    WdLogSingleEntry5(2LL, v11, *p_HighPart, a2->LowPart, v14, v13);
    LowPart = a2->LowPart;
    v102 = *p_HighPart;
    WdLogGlobalForLineNumber = 3561;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Unable to invalidate path-persistence invariance. (NtStatus = 0x%I64x, i_AdapterLuid = 0x%I64x%08I64x, i_"
                "IncomingTargetId = 0x%I64x, i_MonitorEvent = 0x%I64x)",
      v15,
      v102,
      LowPart,
      v14,
      v13);
  }
  if ( !*(_BYTE *)(a1 + 24) )
  {
    v28 = v14;
    goto LABEL_140;
  }
  LODWORD(v122) = 0;
  v123 = 0LL;
  v124 = 0LL;
  v126 = 0LL;
  v125 = 0;
  v127 = 0LL;
  v128 = 0LL;
  v129 = 1;
  v130 = 0;
  v131 = 1;
  v132 = 0LL;
  v133 = 0LL;
  CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)&v122, 8LL);
  v16 = CCD_BTL::Global();
  v17 = CCD_TOPOLOGY::CopyRenewScope((CCD_TOPOLOGY *)&v122, (struct CCD_BTL *)((char *)v16 + 8));
  v18 = v17;
  if ( v17 < 0 )
  {
    WdLogSingleEntry5(2LL, v17, *p_HighPart, a2->LowPart, a3, v13);
    v108 = a2->LowPart;
    v103 = *p_HighPart;
    WdLogGlobalForLineNumber = 3586;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Unable to get copy of most recent topology. (NtStatus = 0x%I64x, i_AdapterLuid = 0x%I64x%08I64x, i_Incomi"
                "ngTargetId = 0x%I64x, i_MonitorEvent = 0x%I64x)",
      v18,
      v103,
      v108,
      a3,
      v13);
    DxgkLogCodePointPacket(0x3Eu, 0, v18, 0, (__int64)*a2);
    *(_BYTE *)(a1 + 26) = 1;
    *(_BYTE *)(a1 + 31) = 1;
LABEL_9:
    CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v122);
    return 0LL;
  }
  v19 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 474);
  if ( v19 > 1 )
  {
    WdLogSingleEntry0(3LL);
    v101 = (struct MONITORSCOUNT_CALLBACK_CONTEXT *)*a2;
    WdLogGlobalForLineNumber = 3614;
    DxgkLogCodePointPacket(0x52u, v19, 1u, 0, (__int64)v101);
    *(_BYTE *)(a1 + 26) = 1;
    *(_BYTE *)(a1 + 31) = 1;
    goto LABEL_9;
  }
  if ( !v128 || !*(_WORD *)(v128 + 20) )
  {
    DxgkLogCodePointPacket(0x3Eu, 1u, 0, 0, (__int64)*a2);
    *(_BYTE *)(a1 + 26) = 1;
    goto LABEL_9;
  }
  LaptopSpecialCaseFlags = 0;
  v119 = D3DKMDT_VOT_HD15;
  v20 = 0;
  UnusedVidpnSourceId = D3DKMDT_VOT_HD15;
  v115 = 0;
  *(_DWORD *)v117 = 256;
  v114 = 1;
  v116 = 0;
  v112 = 0;
  v117[4] = 0;
  LODWORD(v121) = 0;
  Global = DXGGLOBAL::GetGlobal();
  v22 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a2, &v135);
  v23 = v22;
  if ( !v22 )
  {
    v24 = -1073741811;
LABEL_19:
    v25 = *(int *)&v117[5];
    WdLogSingleEntry5(2LL, v24, *p_HighPart, a2->LowPart, a3, *(int *)&v117[5]);
    v109 = a2->LowPart;
    v104 = *p_HighPart;
    WdLogGlobalForLineNumber = 3663;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Unable to query monitor type - assumed DMM_VMT_UNINITIALIZED. (_NtStatus = 0x%I64x, i_AdapterLuid = 0x%I6"
                "4x%08I64x, i_IncomingTargetId = 0x%I64x, i_MonitorEvent = 0x%I64x)",
      v24,
      v104,
      v109,
      a3,
      v25);
    v20 = 0;
    v119 = D3DKMDT_VOT_UNINITIALIZED;
    v115 = 0;
    v114 = 0;
    v116 = 0;
    v112 = 0;
    goto LABEL_20;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v137, v22, 0LL);
  v24 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)&v137, 0LL);
  DXGADAPTER::ReleaseReference(v23);
  if ( v24 >= 0 )
  {
    v24 = DxgkQueryMonitorTypeLockHeld(
            v23,
            a3,
            (enum _DMM_VIDPN_MONITOR_TYPE *)&LaptopSpecialCaseFlags,
            &UnusedVidpnSourceId,
            &v121,
            v117,
            &v117[1],
            &v117[2],
            &v117[3],
            &v117[4]);
    v20 = LaptopSpecialCaseFlags;
    v119 = UnusedVidpnSourceId;
    v115 = v117[0];
    v116 = v117[2];
    v114 = v117[1];
    v112 = *(_WORD *)&v117[3];
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)&v137);
  if ( v24 < 0 )
    goto LABEL_19;
LABEL_20:
  LaptopSpecialCaseFlags = GetLaptopSpecialCaseFlags(
                             (const struct CCD_TOPOLOGY *)&v122,
                             a2,
                             a3,
                             v119,
                             (const struct MONITORSCOUNT_CALLBACK_CONTEXT *)a1);
  v26 = LaptopSpecialCaseFlags;
  if ( LaptopSpecialCaseFlags )
  {
    if ( LaptopSpecialCaseFlags == 1 )
    {
      *(_BYTE *)(a1 + 27) = 1;
    }
    else if ( LaptopSpecialCaseFlags == 8 )
    {
      *(_BYTE *)(a1 + 28) = 1;
    }
    else
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 3695;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"Invalid laptop special case flags!",
        3695LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
  LODWORD(v137) = 0;
  v138 = 0LL;
  v139 = 0LL;
  v141 = 0LL;
  v140 = 0;
  v142 = 0LL;
  v143 = 0LL;
  v144 = 1;
  v145 = 0;
  v146 = 1;
  v147 = 0LL;
  v148 = 0LL;
  CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)&v137, 8LL);
  if ( v26 && v20 == 1 )
    v27 = v26 | 0x86;
  else
    v27 = 143;
  v28 = a3;
  LODWORD(v29) = CCD_TOPOLOGY::RetrievePersisted((CCD_TOPOLOGY *)&v137, v27, 0LL);
  if ( (int)v29 >= 0 )
  {
    if ( (_DWORD)v121 == 15 )
    {
      for ( i = 0; ; ++i )
      {
        v31 = v143 ? *((_WORD *)v143 + 10) : 0;
        if ( i >= v31 )
          break;
        PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)&v137, i);
        if ( *((_DWORD *)PathDescriptor + 7) == a3
          && *((_DWORD *)PathDescriptor + 4) == a2->LowPart
          && *((_DWORD *)PathDescriptor + 5) == *p_HighPart )
        {
          goto LABEL_42;
        }
      }
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 3745;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Miracast monitor was not active in CCD database so adding as new monitor",
        3745LL,
        0LL,
        0LL,
        0LL,
        0LL);
      LODWORD(v29) = -1073741823;
    }
LABEL_42:
    if ( IsValidCloneConfiguration(v143) )
    {
      if ( (int)v29 >= 0 )
      {
        v33 = CCD_TOPOLOGY::Persist(&v137, 0LL);
        v29 = v33;
        if ( v33 < 0 )
        {
          v34 = *(int *)&v117[5];
          WdLogSingleEntry5(2LL, v33, a2->HighPart, a2->LowPart, a3, *(int *)&v117[5]);
          v110 = a2->LowPart;
          HighPart = a2->HighPart;
          WdLogGlobalForLineNumber = 3773;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Unable to persist most recent topology. (NtStatus = 0x%I64x, i_AdapterLuid = 0x%I64x%08I64x, i_Inco"
                      "mingTargetId = 0x%I64x, i_MonitorEvent = 0x%I64x)",
            v29,
            HighPart,
            v110,
            a3,
            v34);
          DxgkLogCodePointPacket(0x3Eu, 2u, v29, 0, (__int64)*a2);
          v28 = a3;
        }
        *(_DWORD *)(a1 + 32) |= 0x40u;
      }
    }
    else
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 3755;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"The persisted topology requires cross-adapter clone support however it does not support Virtual Mode. T"
                  "herefore the new monitor will be added in extend mode.",
        3755LL,
        0LL,
        0LL,
        0LL,
        0LL);
      LODWORD(v29) = -1073741823;
    }
  }
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v137);
  if ( (int)v29 < 0 )
  {
    if ( (_DWORD)v29 == -1073741266 )
    {
      *(_BYTE *)(a1 + 26) = 1;
      *(_BYTE *)(a1 + 31) = 1;
      goto LABEL_137;
    }
    WdLogSingleEntry5(4LL, (int)v29, a2->HighPart, a2->LowPart, a3, *(int *)&v117[5]);
    WdLogGlobalForLineNumber = 3803;
    if ( v134 )
      *((_BYTE *)v134 + 45) = 1;
    *(_BYTE *)(a1 + 26) = 1;
    *(_BYTE *)(a1 + 31) = 1;
    CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)&v137, 8u, 0);
    v35 = CCD_TOPOLOGY::CopyInheritScope((CCD_TOPOLOGY *)&v137, (const struct CCD_TOPOLOGY *)&v122);
    v36 = v35;
    if ( v35 < 0 )
    {
      WdLogSingleEntry2(2LL, v35, &v122);
      WdLogGlobalForLineNumber = 3824;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Unable to create copy of io_pNewTopologySet - will keep current topology. (NtStatus = 0x%I64x, io_pNewT"
                  "opologySet = 0x%I64x)",
        v36,
        (__int64)&v122,
        0LL,
        0LL,
        0LL);
      v37 = CCD_TOPOLOGY::Persist(&v122, 0LL);
      v38 = v37;
      if ( v37 < 0 )
      {
        WdLogSingleEntry2(2LL, v37, &v122);
        WdLogGlobalForLineNumber = 3834;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Unable to persist current topology - default topology will be created later. (NtStatus = 0x%I64x, io_"
                    "pNewTopologySet = 0x%I64x)",
          v38,
          (__int64)&v122,
          0LL,
          0LL,
          0LL);
      }
      v39 = v38;
      v40 = v36;
      v41 = 3;
      goto LABEL_57;
    }
    CCD_TOPOLOGY::RemovePathByTarget((CCD_TOPOLOGY *)&v122, a2, a3);
    if ( !v128 || !*(_WORD *)(v128 + 20) )
    {
      v97 = CCD_BTL::Global();
      CCD_TOPOLOGY::Clear((struct CCD_BTL *)((char *)v97 + 8));
      goto LABEL_134;
    }
    v42 = v112;
    v46 = 0;
    if ( !(_BYTE)v112 && !v114 )
    {
      if ( v115
        || (v43 = *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)&v122, 0) + 7),
            v44 = (struct _LUID *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)&v122, 0),
            IsPortraitFirstTarget = DxgkIsPortraitFirstTarget(v44[2], v43),
            v42 = 0,
            IsPortraitFirstTarget) )
      {
        v46 = 1;
      }
    }
    v47 = DetermineDefaultTopology(LaptopSpecialCaseFlags, v46);
    if ( v47 == 3 )
    {
      if ( v42 && *((_BYTE *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)&v122, 0) + 129)
        || a2->LowPart == *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)&v122, 0) + 4)
        && a2->HighPart == *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)&v122, 0) + 5) )
      {
        if ( !v42 )
        {
          UnusedVidpnSourceId = *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)&v122, 0) + 6);
          goto LABEL_94;
        }
      }
      else
      {
        v47 = 4;
      }
    }
    else if ( (unsigned __int16)(v47 - 4) > 1u )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 3903;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"(defaultTopology == MultiScreenDefaultShellTopology::Cloned) || (defaultTopology == MultiScreenDefaultS"
                  "hellTopology::Conjoined) || (defaultTopology == MultiScreenDefaultShellTopology::Disjoint)",
        3903LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    UnusedVidpnSourceId = (unsigned int)GetUnusedVidpnSourceId((struct CCD_TOPOLOGY *)&v122, a2);
    if ( UnusedVidpnSourceId == D3DKMDT_VOT_INDIRECT_WIRED )
    {
      if ( v128 )
        v48 = *(_WORD *)(v128 + 20);
      else
        v48 = 0;
      WdLogSingleEntry2(4LL, v48, 16LL);
      WdLogGlobalForLineNumber = 3953;
      v49 = CCD_TOPOLOGY::Persist(&v137, 0LL);
      v50 = v49;
      if ( v49 < 0 )
      {
        WdLogSingleEntry2(2LL, v49, &v137);
        WdLogGlobalForLineNumber = 3963;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Unable to persist current topology - default topology will be created later. (NtStatus = 0x%I64x, &Or"
                    "iginalTopologySet = 0x%I64x)",
          v50,
          (__int64)&v137,
          0LL,
          0LL,
          0LL);
      }
      v39 = 0;
      v40 = v50;
      v41 = 4;
      goto LABEL_57;
    }
    if ( v47 == 3 )
    {
      if ( !v42 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 3980;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"IncomingTargetSupportsVirtualTopologies",
          3980LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      for ( j = 0; ; ++j )
      {
        v52 = v128;
        v53 = v128 ? *(_WORD *)(v128 + 20) : 0;
        if ( j >= v53 )
          break;
        if ( !*((_BYTE *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)&v122, j) + 129) )
        {
          v47 = 4;
          goto LABEL_94;
        }
      }
LABEL_95:
      if ( v52 )
        v54 = *(_WORD *)(v52 + 20);
      else
        v54 = 0;
      v55 = v54 + 1;
      if ( (unsigned __int16)CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)&v122, v55) >= v55 )
      {
        v58 = v55 - 1;
        if ( !(_BYTE)v112 )
        {
          v59 = LaptopSpecialCaseFlags;
          if ( LaptopSpecialCaseFlags )
          {
            if ( v55 != 2 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 4043;
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"NumPathsToReserve == 2",
                4043LL,
                0LL,
                0LL,
                0LL,
                0LL);
              v59 = LaptopSpecialCaseFlags;
            }
            if ( v46 )
              v58 = !IsInternalVideoOutput(v119);
            else
              v58 = ((unsigned __int8)~v59 >> 3) & 1;
            if ( *((_QWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)&v122, 0) + 31) )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 4075;
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"io_pNewTopologySet->GetPathDescriptor(0)->pDevMode == NULL",
                4075LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            v60 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)&v122, 0);
            v61 = 2LL;
            v62 = v136;
            do
            {
              v63 = *((_OWORD *)v60 + 1);
              *v62 = *(_OWORD *)v60;
              v64 = *((_OWORD *)v60 + 2);
              v62[1] = v63;
              v65 = *((_OWORD *)v60 + 3);
              v62[2] = v64;
              v66 = *((_OWORD *)v60 + 4);
              v62[3] = v65;
              v67 = *((_OWORD *)v60 + 5);
              v62[4] = v66;
              v68 = *((_OWORD *)v60 + 6);
              v62[5] = v67;
              v69 = *((_OWORD *)v60 + 7);
              v60 = (const struct D3DKMT_PATHMODALITY_DESCRIPTOR *)((char *)v60 + 128);
              v62[6] = v68;
              v62 += 8;
              *(v62 - 1) = v69;
              --v61;
            }
            while ( v61 );
            v70 = *(_OWORD *)v60;
            v71 = *((_OWORD *)v60 + 1);
            v72 = *((_QWORD *)v60 + 4);
            *v62 = v70;
            v62[1] = v71;
            *((_QWORD *)v62 + 4) = v72;
            v73 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)&v122, 1u);
            v74 = 2LL;
            v75 = v136;
            do
            {
              v76 = v75[1];
              *(_OWORD *)v73 = *v75;
              v77 = v75[2];
              *((_OWORD *)v73 + 1) = v76;
              v78 = v75[3];
              *((_OWORD *)v73 + 2) = v77;
              v79 = v75[4];
              *((_OWORD *)v73 + 3) = v78;
              v80 = v75[5];
              *((_OWORD *)v73 + 4) = v79;
              v81 = v75[6];
              *((_OWORD *)v73 + 5) = v80;
              v82 = v75[7];
              v75 += 8;
              *((_OWORD *)v73 + 6) = v81;
              v73 = (const struct D3DKMT_PATHMODALITY_DESCRIPTOR *)((char *)v73 + 128);
              *((_OWORD *)v73 - 1) = v82;
              --v74;
            }
            while ( v74 );
            v83 = *v75;
            v84 = v75[1];
            v85 = *((_QWORD *)v75 + 4);
            *(_OWORD *)v73 = v83;
            *((_OWORD *)v73 + 1) = v84;
            *((_QWORD *)v73 + 4) = v85;
            *(_QWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)&v122, 1 - v58) = 0xCF00000000000LL;
          }
        }
        v86 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)&v122, v58);
        *((struct _LUID *)v86 + 2) = *a2;
        *((_DWORD *)v86 + 6) = UnusedVidpnSourceId;
        *((_DWORD *)v86 + 7) = a3;
        *((_DWORD *)v86 + 22) = v119;
        *((_DWORD *)v86 + 23) = v121;
        *((_BYTE *)v86 + 129) = (HIBYTE(v112) != 0 ? 4 : 0) | ((_BYTE)v112 != 0 ? 2 : 0) | (v116 != 0);
        *(_QWORD *)v86 = 0x8F00000000000LL;
        ++*(_WORD *)(v128 + 20);
        if ( v47 == 3 )
        {
          if ( !v128 || *(_WORD *)(v128 + 20) != 2 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 4117;
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"io_pNewTopologySet->GetPathsCount() == 2",
              4117LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          v87 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)&v122, v58 == 0);
          v88 = *((_QWORD *)v87 + 19);
          *(_QWORD *)v86 |= 0x20000uLL;
          *((_QWORD *)v86 + 19) = v88;
          *((_DWORD *)v86 + 46) = *((_DWORD *)v87 + 46);
          *(_QWORD *)v86 |= 0x4000000000000uLL;
        }
        else
        {
          CCD_TOPOLOGY::RegulateCloneGroupIdForNewPath((CCD_TOPOLOGY *)&v122, v58);
        }
        v130 = 1;
        v131 = 4;
        v89 = CCD_TOPOLOGY::Functionalize((CCD_TOPOLOGY *)&v122, 0, 0);
        v90 = v89;
        if ( v89 >= 0 )
        {
          v93 = CCD_TOPOLOGY::Persist(&v122, 1LL);
          v94 = v93;
          if ( v93 == -1073741266 )
          {
            v39 = 0;
            v40 = -1073741266;
            v41 = 7;
          }
          else
          {
            if ( v93 >= 0 )
            {
              *(_BYTE *)(a1 + 31) = 0;
              goto LABEL_134;
            }
            WdLogSingleEntry2(2LL, v93, v128);
            WdLogGlobalForLineNumber = 4196;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Unable to persist the newly created topology for newly added monitor - will keep current topology"
                        ". (NtStatus = 0x%I64x, io_pNewTopologySet->GetPathsModality() = 0x%I64x)",
              v94,
              v128,
              0LL,
              0LL,
              0LL);
            v95 = CCD_TOPOLOGY::Persist(&v137, 0LL);
            v96 = v95;
            if ( v95 < 0 )
            {
              WdLogSingleEntry2(2LL, v95, &v137);
              WdLogGlobalForLineNumber = 4206;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"Unable to persist current topology - default topology will be created later. (NtStatus = 0x%I64"
                          "x, &OriginalTopologySet = 0x%I64x)",
                v96,
                (__int64)&v137,
                0LL,
                0LL,
                0LL);
            }
            v39 = v96;
            v40 = v94;
            v41 = 8;
          }
        }
        else
        {
          WdLogSingleEntry2(2LL, v89, v128);
          WdLogGlobalForLineNumber = 4140;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Unable to functionalize topology with newly added monitor - will keep current topology. (NtStatus ="
                      " 0x%I64x, io_pNewTopologySet->GetPathsModality() = 0x%I64x)",
            v90,
            v128,
            0LL,
            0LL,
            0LL);
          v91 = CCD_TOPOLOGY::Persist(&v137, 0LL);
          v92 = v91;
          if ( v91 < 0 )
          {
            WdLogSingleEntry2(2LL, v91, &v137);
            WdLogGlobalForLineNumber = 4150;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Unable to persist current topology - default topology will be created later. (NtStatus = 0x%I64x,"
                        " &OriginalTopologySet = 0x%I64x)",
              v92,
              (__int64)&v137,
              0LL,
              0LL,
              0LL);
          }
          v39 = v92;
          v40 = v90;
          v41 = 6;
        }
      }
      else
      {
        WdLogSingleEntry1(6LL);
        WdLogGlobalForLineNumber = 4009;
        DxgkLogInternalTriageEvent(
          0LL,
          262145,
          -1,
          (__int64)L"Unable to allocate 0x%I64x paths for newly added monitor topology - will keep current topology. (NumP"
                    "athsToReserve = 0x%I64u)",
          v55,
          0LL,
          0LL,
          0LL,
          0LL);
        v56 = CCD_TOPOLOGY::Persist(&v137, 0LL);
        v57 = v56;
        if ( v56 < 0 )
        {
          WdLogSingleEntry2(2LL, v56, &v137);
          WdLogGlobalForLineNumber = 4019;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Unable to persist current topology - default topology will be created later. (NtStatus = 0x%I64x, &"
                      "OriginalTopologySet = 0x%I64x)",
            v57,
            (__int64)&v137,
            0LL,
            0LL,
            0LL);
        }
        v40 = v55;
        v39 = v57;
        v41 = 5;
      }
LABEL_57:
      DxgkLogCodePointPacket(0x3Eu, v41, v40, v39, (__int64)*a2);
LABEL_134:
      CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v137);
      goto LABEL_135;
    }
LABEL_94:
    v52 = v128;
    goto LABEL_95;
  }
  WdLogSingleEntry5(4LL, a2->HighPart, a2->LowPart, a3, *(int *)&v117[5], a5);
  WdLogGlobalForLineNumber = 3794;
LABEL_135:
  v28 = a3;
LABEL_137:
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v122);
LABEL_140:
  v98 = DisplayConfigHandleMonitorInvalidation(1uLL, (struct MONITORSCOUNT_CALLBACK_CONTEXT *)a1, v134);
  v99 = v98;
  if ( v98 < 0 )
  {
    v100 = *(int *)&v117[5];
    WdLogSingleEntry5(2LL, v98, a2->HighPart, a2->LowPart, a3, *(int *)&v117[5]);
    v111 = a2->LowPart;
    v106 = a2->HighPart;
    WdLogGlobalForLineNumber = 4262;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Unable to invalidate path-persistence/emergency-monitors invariance.(NtStatus = 0x%I64x, i_AdapterLuid = "
                "0x%I64x%08I64x, i_IncomingTargetId = 0x%I64x, i_MonitorEvent = 0x%I64x)",
      v99,
      v106,
      v111,
      a3,
      v100);
    v28 = a3;
    LODWORD(v99) = 0;
  }
  WdLogSingleEntry5(4LL, a2->HighPart, a2->LowPart, v28, *(int *)&v117[5], a5);
  result = (unsigned int)v99;
  WdLogGlobalForLineNumber = 4272;
  return result;
}
