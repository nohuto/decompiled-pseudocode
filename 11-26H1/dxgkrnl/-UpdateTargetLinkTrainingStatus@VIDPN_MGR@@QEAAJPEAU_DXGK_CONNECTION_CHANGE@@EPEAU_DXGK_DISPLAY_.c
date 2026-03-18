/*
 * XREFs of ?UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x14025F128
 * Callers:
 *     ?DmmUpdateTargetLinkTrainingState@@YAJPEAXPEAU_DXGK_CONNECTION_CHANGE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x14025ED60 (-DmmUpdateTargetLinkTrainingState@@YAJPEAXPEAU_DXGK_CONNECTION_CHANGE@@PEAU_DXGK_DISPLAY_SCENARI.c)
 *     ?HandleLinkTrainingTimeout@VIDPN_MGR@@QEAAXIEPEAE0@Z @ 0x14025EE00 (-HandleLinkTrainingTimeout@VIDPN_MGR@@QEAAXIEPEAE0@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U2@U1@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@3434@Z @ 0x1400057A0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@U2@U1@U2@@-$_tlgWriteTemplate@$$A6.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x14003C89C (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x14003CFA8 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x14003D024 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ @ 0x14004253C (-AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x14004B460 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ?GetPathFromTarget@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z @ 0x14004FFE0 (-GetPathFromTarget@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z.c)
 *     _tlgKeywordOn @ 0x140050B20 (_tlgKeywordOn.c)
 *     ?DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z @ 0x1400597EC (-DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z.c)
 *     Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline @ 0x14005AA24 (Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x14005B6A4 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     ?SetVidPnPrimaryTarget@ADAPTER_DISPLAY@@QEAAXII@Z @ 0x14005BB04 (-SetVidPnPrimaryTarget@ADAPTER_DISPLAY@@QEAAXII@Z.c)
 *     Feature_SetTimingsDdiEtw__private_IsEnabledDeviceUsageNoInline @ 0x1400736EC (Feature_SetTimingsDdiEtw__private_IsEnabledDeviceUsageNoInline.c)
 *     ?SetUnplugHiding@DMMVIDEOPRESENTTARGET@@QEAAXE@Z @ 0x140194B24 (-SetUnplugHiding@DMMVIDEOPRESENTTARGET@@QEAAXE@Z.c)
 *     ?OnPathFailedOrInvalidate@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401A3BC0 (-OnPathFailedOrInvalidate@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402C6C90 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJI_NPEBU_DXGK_DISPLAYMODE_INFO@@00@Z @ 0x1402CF610 (-SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJI_NPEBU_DXGK_DISPLAYMODE_INFO@@00@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1402CFF04 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?SetDriverGammaRamp@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1402DB87C (-SetDriverGammaRamp@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x14030E4E4 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?UpdateTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEAAX_KW4_DXGK_CONNECTION_STATUS@@@Z @ 0x14036608C (-UpdateTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEAAX_KW4_DXGK_CONNECTION_STATUS@@@Z.c)
 *     ?GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z @ 0x1403B9750 (-GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z.c)
 *     ?GetTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEBA?AW4_DXGK_CONNECTION_STATUS@@PEA_K@Z @ 0x1403C3D6C (-GetTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEBA-AW4_DXGK_CONNECTION_STATUS@@PEA_K@Z.c)
 *     ?SetTargetActivated@DMMVIDEOPRESENTTARGET@@QEAAXEE@Z @ 0x1403FC6E0 (-SetTargetActivated@DMMVIDEOPRESENTTARGET@@QEAAXEE@Z.c)
 *     ?CancelLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXXZ @ 0x1404041E0 (-CancelLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXXZ.c)
 *     ?RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14042C10C (-RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_D.c)
 *     ?StartLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXE@Z @ 0x14042F6A0 (-StartLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXE@Z.c)
 */

__int64 __fastcall VIDPN_MGR::UpdateTargetLinkTrainingStatus(
        VIDPN_MGR *this,
        struct _DXGK_CONNECTION_CHANGE *a2,
        unsigned __int8 a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4,
        unsigned __int8 a5)
{
  unsigned __int8 v5; // di
  DMMVIDEOPRESENTTARGETSET **v7; // rbx
  struct DXGADAPTER *ContainingAdapter; // rax
  unsigned int v9; // esi
  struct DXGADAPTER *v10; // r15
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  DMMVIDEOPRESENTTARGET *v12; // r14
  __int64 result; // rax
  struct _LUID *v14; // rdx
  __int64 TargetLinkTrainingStatus; // r13
  int ConnectionChangeId; // ebx
  unsigned int v17; // edi
  __int64 v18; // r11
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // eax
  const struct DMMVIDPN *ClientCommittedVidPnRef; // rax
  int v24; // edx
  struct DMMVIDPNPRESENTPATH *PathFromTarget; // rax
  int v26; // r11d
  DMMVIDPNPRESENTPATH *v27; // rbx
  ULONGLONG v28; // rdx
  unsigned __int8 v29; // r8
  __int64 v30; // rax
  __int64 v31; // rdi
  int MostImportantVidPnPathTargetsFromSource; // eax
  __int64 v33; // rcx
  ADAPTER_DISPLAY *v34; // rbx
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  int v36; // eax
  unsigned __int8 v37; // dl
  unsigned __int8 v38; // r8
  ADAPTER_DISPLAY *v39; // rcx
  DXGGLOBAL *Global; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  void *v46; // rax
  int v47; // [rsp+58h] [rbp-21h] BYREF
  int v48; // [rsp+5Ch] [rbp-1Dh] BYREF
  ULONGLONG v49; // [rsp+60h] [rbp-19h] BYREF
  ULONGLONG v50; // [rsp+68h] [rbp-11h] BYREF
  __int64 v51; // [rsp+70h] [rbp-9h] BYREF
  struct DMMVIDPNTOPOLOGY *v52; // [rsp+78h] [rbp-1h] BYREF
  VIDPN_MGR *v53; // [rsp+D8h] [rbp+5Fh] BYREF
  unsigned __int64 v54; // [rsp+E0h] [rbp+67h] BYREF
  unsigned __int8 v55; // [rsp+E8h] [rbp+6Fh]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v56; // [rsp+F0h] [rbp+77h]

  v56 = a4;
  v55 = a3;
  v53 = this;
  v5 = a3;
  v7 = (DMMVIDEOPRESENTTARGETSET **)this;
  ContainingAdapter = VIDPN_MGR::GetContainingAdapter(this);
  v9 = HIBYTE(*((_DWORD *)a2 + 2)) & 0xF;
  v10 = ContainingAdapter;
  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById(v7[15], *((_DWORD *)a2 + 2) & 0xFFFFFF);
  v12 = TargetById;
  if ( !TargetById )
  {
    WdLogSingleEntry2(2LL, *((_DWORD *)a2 + 2) & 0xFFFFFFLL, -1073741811LL);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 4732;
    return result;
  }
  v49 = 0LL;
  TargetLinkTrainingStatus = (unsigned int)DMMVIDEOPRESENTTARGET::GetTargetLinkTrainingStatus(TargetById, &v49);
  if ( a5 )
  {
    if ( v9 != 8 )
    {
      v9 = 13;
      goto LABEL_24;
    }
    v9 = 12;
  }
  else if ( v5 )
  {
    ConnectionChangeId = a2->ConnectionChangeId;
    v17 = *((_DWORD *)a2 + 2) & 0xFFFFFF;
    v54 = 0LL;
    DXGADAPTER::IsAdapterSessionized(v10, v14, 0LL, &v54);
    DxgkLogCodePointPacketForSession(88, v54, v17, v9, ConnectionChangeId, v18);
    if ( (unsigned int)Feature_SetTimingsDdiEtw__private_IsEnabledDeviceUsageNoInline()
      && (unsigned int)dword_1401665B8 > 5
      && tlgKeywordOn((__int64)&dword_1401665B8, 0x4000LL) )
    {
      v50 = a2->ConnectionChangeId;
      v22 = *((_DWORD *)a2 + 2) & 0xFFFFFF;
      LODWORD(v54) = v9;
      v47 = v22;
      v51 = *(_QWORD *)((char *)v10 + 412);
      v48 = 1;
      v52 = (struct DMMVIDPNTOPOLOGY *)0x1000000;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        v19,
        (__int64)&unk_140145B05,
        v20,
        v21,
        (__int64)&v52,
        (__int64)&v48,
        (__int64)&v51,
        (__int64)&v47,
        (__int64)&v50,
        (__int64)&v54);
    }
    v5 = v55;
    v7 = (DMMVIDEOPRESENTTARGETSET **)v53;
  }
  if ( v49 <= a2->ConnectionChangeId )
  {
    if ( v49 == a2->ConnectionChangeId )
    {
      if ( v9 == (_DWORD)TargetLinkTrainingStatus )
        return 0LL;
      if ( (unsigned int)(TargetLinkTrainingStatus - 13) <= 1 )
      {
        if ( v9 == 12 )
        {
          WdLogSingleEntry1(7LL);
          WdLogGlobalForLineNumber = 4836;
          return 0LL;
        }
        if ( !v5 )
        {
          WdLogSingleEntry3(1LL, TargetLinkTrainingStatus, v10, *((_DWORD *)a2 + 2) & 0xFFFFFF);
          WdLogGlobalForLineNumber = 4849;
          return 0LL;
        }
        if ( (_DWORD)TargetLinkTrainingStatus != 13 )
        {
          WdLogSingleEntry2(1LL, v9, TargetLinkTrainingStatus);
          WdLogGlobalForLineNumber = 4875;
          return 0LL;
        }
      }
    }
LABEL_24:
    DMMVIDEOPRESENTTARGET::UpdateTargetLinkTrainingStatus(v12, a2->ConnectionChangeId, v9);
    if ( a5 )
    {
      DMMVIDEOPRESENTTARGET::SetUnplugHiding(v12, v9 == 12);
    }
    else if ( v9 == (_DWORD)TargetLinkTrainingStatus )
    {
      return 0LL;
    }
    ClientCommittedVidPnRef = VIDPN_MGR::AcquireLastClientCommittedVidPnRef((VIDPN_MGR *)v7);
    v54 = (unsigned __int64)ClientCommittedVidPnRef;
    if ( !ClientCommittedVidPnRef )
    {
LABEL_67:
      auto_rc<DMMVIDPN const>::reset((__int64 *)&v54, 0LL);
      return 0LL;
    }
    v24 = *((_DWORD *)a2 + 2);
    v52 = (const struct DMMVIDPN *)((char *)ClientCommittedVidPnRef + 96);
    PathFromTarget = DMMVIDPNTOPOLOGY::GetPathFromTarget(
                       (const struct DMMVIDPN *)((char *)ClientCommittedVidPnRef + 96),
                       v24 & 0xFFFFFF);
    v27 = PathFromTarget;
    if ( !PathFromTarget )
    {
      if ( a5 )
      {
        WdLogSingleEntry2(7LL, *(_QWORD *)&v26 & 0xFFFFFFLL, v10);
        if ( v9 == 12 )
        {
          WdLogGlobalForLineNumber = 4933;
          DMMVIDEOPRESENTTARGET::StartLinkTrainingTimer(v12, 1u);
        }
        else
        {
          v28 = a2->ConnectionChangeId;
          WdLogGlobalForLineNumber = 4946;
          DMMVIDEOPRESENTTARGET::UpdateTargetLinkTrainingStatus(v12, v28, 14LL);
        }
      }
      v29 = v9 == 12;
      goto LABEL_45;
    }
    v30 = *((_QWORD *)PathFromTarget + 11);
    LODWORD(v53) = 0;
    v31 = *(unsigned int *)(v30 + 24);
    MostImportantVidPnPathTargetsFromSource = GetMostImportantVidPnPathTargetsFromSource(
                                                v52,
                                                *(_DWORD *)(v30 + 24),
                                                (unsigned int *const)&v53);
    if ( (int)(MostImportantVidPnPathTargetsFromSource + 0x80000000) >= 0
      && MostImportantVidPnPathTargetsFromSource != -1071774919 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 4977;
    }
    v33 = *((_QWORD *)v10 + 396);
    LOBYTE(v53) = (*((_DWORD *)a2 + 2) & 0xFFFFFF) == (_DWORD)v53;
    if ( v33 )
      ADAPTER_RENDER::FlushScheduler(v33, 8LL, (unsigned int)v31);
    if ( v9 == 14 )
    {
      DMMVIDEOPRESENTTARGET::CancelLinkTrainingTimer(v12);
      if ( !*((_BYTE *)v12 + 418) )
      {
        v29 = 0;
LABEL_45:
        DMMVIDEOPRESENTTARGET::SetTargetActivated(v12, 0, v29);
        goto LABEL_67;
      }
      DMMVIDPNPRESENTPATH::SetDriverGammaRamp(v27, 0LL);
      if ( !(_BYTE)v53 )
        goto LABEL_67;
      ADAPTER_DISPLAY::SetVidPnPrimaryTarget(*((ADAPTER_DISPLAY **)v10 + 395), v31, *((_DWORD *)a2 + 2) & 0xFFFFFF);
      v34 = (ADAPTER_DISPLAY *)*((_QWORD *)v10 + 395);
      DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(v34, v31);
      v36 = ADAPTER_DISPLAY::SetVidPnSourceActive(v34, v31, 1, DisplayModeInfo, 0, v55 != 0);
      if ( v36 >= 0 )
        goto LABEL_67;
      WdLogSingleEntry3(2LL, v10, v31, v36);
      WdLogGlobalForLineNumber = 5041;
      v9 = 13;
    }
    else
    {
      if ( v9 != 13 )
      {
        v37 = *((_BYTE *)v12 + 418);
        v38 = 1;
        goto LABEL_50;
      }
      DMMVIDEOPRESENTTARGET::CancelLinkTrainingTimer(v12);
    }
    v37 = 0;
    v38 = 0;
LABEL_50:
    DMMVIDEOPRESENTTARGET::SetTargetActivated(v12, v37, v38);
    if ( (_DWORD)TargetLinkTrainingStatus == 14 )
    {
      v39 = (ADAPTER_DISPLAY *)*((_QWORD *)v10 + 395);
      if ( (_BYTE)v53 )
        ADAPTER_DISPLAY::SetVidPnSourceActive(v39, v31, 0, 0LL, 0, v55 != 0);
      else
        ADAPTER_DISPLAY::SetVidPnSourceVisibility(v39, v31, 0, 0x800u, v55);
    }
    if ( v9 == 13 || a5 )
    {
      WdLogSingleEntry3(7LL, *((_DWORD *)a2 + 2) & 0xFFFFFF, v10, a5);
      WdLogGlobalForLineNumber = 5130;
      if ( (unsigned int)Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline() )
      {
        ADAPTER_DISPLAY::OnPathFailedOrInvalidate(*((DXGADAPTER ***)v10 + 395), v56);
      }
      else
      {
        Global = DXGGLOBAL::GetGlobal();
        SessionData = DXGGLOBAL::GetSessionData(Global);
        if ( SessionData && *((_BYTE *)SessionData + 18499) )
        {
          LODWORD(v53) = PsGetCurrentProcessSessionId(v43, v42, v44, v45);
          v46 = v56;
          if ( !v56 )
            v46 = &GUID_NULL;
          if ( (int)ZwUpdateWnfStateData(&WNF_DXGK_PATH_FAILED_OR_INVALIDATED, v46, 16LL) < 0 )
          {
            WdLogSingleEntry1(2LL);
            WdLogGlobalForLineNumber = 5152;
          }
        }
        else
        {
          ADAPTER_DISPLAY::RequestAsyncDisplaySwitchCallout(*((ADAPTER_DISPLAY **)v10 + 395), 0LL, v56);
        }
      }
    }
    if ( v9 == 12 )
      DMMVIDEOPRESENTTARGET::StartLinkTrainingTimer(v12, 1u);
    goto LABEL_67;
  }
  WdLogSingleEntry0(3LL);
  WdLogGlobalForLineNumber = 4813;
  return 0LL;
}
