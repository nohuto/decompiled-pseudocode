/*
 * XREFs of ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1402CFF04
 * Callers:
 *     ADAPTER_DISPLAY_SetVidPnSourceVisibility @ 0x1400613A0 (ADAPTER_DISPLAY_SetVidPnSourceVisibility.c)
 *     ?PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1401A3F3C (-PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z @ 0x14025B780 (-DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z.c)
 *     ?UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x14025F128 (-UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_.c)
 *     ?SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJI_NPEBU_DXGK_DISPLAYMODE_INFO@@00@Z @ 0x1402CF610 (-SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJI_NPEBU_DXGK_DISPLAYMODE_INFO@@00@Z.c)
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1402D0A10 (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1402D4EF8 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x140359E70 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z @ 0x140360580 (-UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z.c)
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x14038275C (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 *     ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1403A928C (-DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z @ 0x1403AA578 (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z.c)
 *     ?SetVisibilityIfDeferred@BLTQUEUE@@QEAAXXZ @ 0x1403C2DE0 (-SetVisibilityIfDeferred@BLTQUEUE@@QEAAXXZ.c)
 *     ?DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z @ 0x1403EC47C (-DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z.c)
 * Callees:
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x14000D850 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x14003189C (-MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1400319C0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z @ 0x1400597EC (-DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z.c)
 *     ?SetSuspendSourceMask@CVidSchSuspendResume@@QEAAXI@Z @ 0x14005C6DC (-SetSuspendSourceMask@CVidSchSuspendResume@@QEAAXI@Z.c)
 *     ?IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ @ 0x14005CC84 (-IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsPointerVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x140064C20 (-IsPointerVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     DxgkDisplayMuxReportFirstFramePresented @ 0x14006522C (DxgkDisplayMuxReportFirstFramePresented.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z @ 0x1402ACDEC (-DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z.c)
 *     ?DdiSetPointerPosition@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1402CED44 (-DdiSetPointerPosition@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 *     ?ResumeSchedulerForVidPnSource@ADAPTER_RENDER@@QEAAXI@Z @ 0x1402D04F4 (-ResumeSchedulerForVidPnSource@ADAPTER_RENDER@@QEAAXI@Z.c)
 *     ?DdiSetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCEVISIBILITY@@@Z @ 0x1402D05CC (-DdiSetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCEVISIBILITY@@@Z.c)
 *     ?FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z @ 0x1402D08F8 (-FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x14030E4E4 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?DisableAllPlanesOnVidPnSourcesImmediate@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x14032FA70 (-DisableAllPlanesOnVidPnSourcesImmediate@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x140330244 (-DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::SetVidPnSourceVisibility(
        ADAPTER_DISPLAY *this,
        unsigned int a2,
        BOOLEAN a3,
        unsigned int a4,
        unsigned __int8 a5)
{
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rbx
  char v10; // r15
  char v11; // r12
  __int64 v12; // rcx
  char v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rdx
  unsigned int v16; // r15d
  ADAPTER_RENDER *v17; // r13
  DXGADAPTER *v18; // rcx
  int v19; // eax
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r14
  __int64 v23; // r8
  unsigned __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v27; // rax
  int v28; // eax
  const wchar_t *v29; // r9
  __int64 v30; // rcx
  __int64 v31; // r8
  unsigned int v32; // ebx
  char v34; // [rsp+51h] [rbp-40h]
  unsigned int v36[2]; // [rsp+58h] [rbp-39h] BYREF
  _DXGKARG_SETVIDPNSOURCEVISIBILITY v37; // [rsp+60h] [rbp-31h] BYREF
  unsigned int v38; // [rsp+68h] [rbp-29h]
  unsigned int v39; // [rsp+70h] [rbp-21h] BYREF
  ADAPTER_RENDER *v40; // [rsp+78h] [rbp-19h]
  struct _DXGKARG_SETPOINTERPOSITION v41; // [rsp+80h] [rbp-11h] BYREF

  v5 = *((_QWORD *)this + 16);
  v6 = a2;
  v7 = 4024LL * a2;
  v41 = 0LL;
  v37 = 0LL;
  v10 = *(_BYTE *)(v7 + v5 + 761);
  v34 = v10;
  *(_QWORD *)v36 = v7;
  if ( a2 >= *((_DWORD *)this + 24) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1846;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"VidPnSourceId < GetNumVidPnSources()",
      1846LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( a3 && !(unsigned __int8)ADAPTER_DISPLAY::IsVidPnSourceActive(this, v6) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1847;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"!Visible || IsVidPnSourceActive(VidPnSourceId)",
      1847LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v41.VidPnSourceId = v6;
  v37.VidPnSourceId = v6;
  v37.Visible = a3;
  v11 = 0;
  v38 = (unsigned __int8)v6 | (v10 != 0 ? 0x80000000 : 0) | (a3 != 0 ? 0x40000000 : 0);
  v41.Flags.Value = v41.Flags.Value & 0xFFFFFFFE | a3 & 1;
  v12 = *((_QWORD *)this + 2);
  if ( a5 )
  {
    if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v12) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1868;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"IsCoreResourceExclusiveOwner()",
        1868LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    goto LABEL_7;
  }
  if ( *(_DWORD *)(v12 + 420) == 32902 && *(int *)(v12 + 2776) < 4864 )
  {
LABEL_7:
    v13 = 0;
    goto LABEL_8;
  }
  if ( DXGADAPTER::IsLegacyDisplayStateSynchronization((DXGADAPTER *)v12) )
    v11 = v13;
LABEL_8:
  v14 = *((_QWORD *)this + 2);
  v15 = *(_QWORD *)(v14 + 3168);
  v16 = 0;
  v17 = (ADAPTER_RENDER *)(v15 & -(__int64)(v15 != 0));
  v39 = 0;
  v40 = v17;
  if ( v15 && v13 )
  {
    if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v14) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1896;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"IsCoreResourceExclusiveOwner()",
        1896LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v27 = *((_QWORD *)this + 2);
    if ( v11 )
    {
      ADAPTER_RENDER::FlushScheduler(*(_QWORD *)(v27 + 3168), 6LL, (unsigned int)v6);
    }
    else
    {
      ADAPTER_RENDER::FlushPresentReferencesAndDisableOverlays(*(ADAPTER_RENDER **)(v27 + 3168), 0, 1 << v6, 0, 1 << v6);
      CVidSchSuspendResume::SetSuspendSourceMask((CVidSchSuspendResume *)&v39, 1 << v6);
      v17 = v40;
      v16 = v39;
      v7 = *(_QWORD *)v36;
    }
  }
  if ( a3 )
  {
    v28 = ADAPTER_DISPLAY::DdiSetVidPnSourceVisibility(this, &v37);
    v22 = v28;
    if ( v28 >= 0 )
    {
      if ( ADAPTER_DISPLAY::IsPointerVisible(this, v6) )
      {
        v30 = *((_QWORD *)this + 16);
        v41.X = *(_DWORD *)(v7 + v30 + 768);
        v41.Y = *(_DWORD *)(v7 + v30 + 772);
        LODWORD(v22) = ADAPTER_DISPLAY::DdiSetPointerPosition(this, &v41);
        if ( (int)v22 < 0 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 1951;
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NT_SUCCESS(Status)", 1951LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
      if ( a4 == 0x2000 )
      {
        v36[0] = 0;
        v31 = 0LL;
        v32 = 1;
        while ( (int)DmmEnumClientVidPnPathTargetsFromSource(*((_QWORD **)this + 2), v6, v31, v36) >= 0 && v36[0] != -1 )
        {
          DxgkDisplayMuxReportFirstFramePresented(*(struct _LUID *)(*((_QWORD *)this + 2) + 412LL), v36[0]);
          v31 = v32++;
        }
      }
      goto LABEL_14;
    }
    WdLogSingleEntry3(2LL, v6, *((_QWORD *)this + 2), v28);
    v29 = L"Failed to enable scanning from primary on source 0x%I64x on adapter 0x%I64x (status = 0x%I64x)";
    WdLogGlobalForLineNumber = 1939;
  }
  else
  {
    v18 = (DXGADAPTER *)*((_QWORD *)this + 2);
    if ( *((_BYTE *)v18 + 3089) )
    {
      if ( DXGADAPTER::IsLegacyDisplayStateSynchronization(v18) )
        ADAPTER_DISPLAY::DisableMPOPlanes(this, v6, 0);
    }
    else
    {
      ADAPTER_DISPLAY::DisableAllPlanesOnVidPnSourcesImmediate(this, 1 << v6);
    }
    ADAPTER_DISPLAY::DdiSetPointerPosition(this, &v41);
    v19 = ADAPTER_DISPLAY::DdiSetVidPnSourceVisibility(this, &v37);
    v22 = v19;
    if ( v19 >= 0 )
    {
LABEL_14:
      LOBYTE(v21) = a3;
      LOBYTE(v20) = v34;
      DisplayScenarioJournalVidPnSourceVisibility(
        *(_QWORD *)(*((_QWORD *)this + 2) + 412LL),
        (unsigned int)v6,
        v20,
        v21,
        a4);
      goto LABEL_15;
    }
    WdLogSingleEntry3(2LL, v6, *((_QWORD *)this + 2), v19);
    v29 = L"Failed to disable scanning from primary on source 0x%I64x on adapter 0x%I64x (status = 0x%I64x)";
    WdLogGlobalForLineNumber = 2003;
  }
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v29, v6, *((_QWORD *)this + 2), v22, 0LL, 0LL);
  ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange((DXGADAPTER **)this, v6, 1);
LABEL_15:
  v23 = *((_QWORD *)this + 2);
  v24 = 0x200000000LL;
  if ( *(_QWORD *)(v23 + 4876) )
    v24 = *(unsigned int *)(v23 + 4884);
  DxgkLogCodePointPacketForSession(68, v24, v38, a4, v22, *(_QWORD *)(v23 + 412));
  v25 = *(_QWORD *)(*((_QWORD *)this + 2) + 3168LL);
  if ( v25 && v11 )
    ADAPTER_RENDER::FlushScheduler(v25, 7LL, (unsigned int)v6);
  if ( v16 )
    ADAPTER_RENDER::ResumeSchedulerForVidPnSource(v17, v16);
  return (unsigned int)v22;
}
