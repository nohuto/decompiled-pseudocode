/*
 * XREFs of DxgkQueryConnectionChanges @ 0x140015450
 * Callers:
 *     DpiFdoHandleDisplayDetectControl @ 0x140014BDC (DpiFdoHandleDisplayDetectControl.c)
 *     ?QueryConnectionChanges@@YAJPEAU_DEVICE_OBJECT@@U_LUID@@PEAU_GUID@@2@Z @ 0x14008EA20 (-QueryConnectionChanges@@YAJPEAU_DEVICE_OBJECT@@U_LUID@@PEAU_GUID@@2@Z.c)
 *     DpiDxgkDdiDisplayDetectControl @ 0x14031C134 (DpiDxgkDdiDisplayDetectControl.c)
 *     DpiIndicateConnectorChangeWorkItem @ 0x1403DB5F0 (DpiIndicateConnectorChangeWorkItem.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@3444@Z @ 0x140004030 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@U2@U2@U2@@-$_tlgWriteTemplate@$$A6.c)
 *     ?GetDisableQueryConnectionDdiStatus@DISPLAY_MUX_MGR@@QEAA_NU_LUID@@@Z @ 0x140016014 (-GetDisableQueryConnectionDdiStatus@DISPLAY_MUX_MGR@@QEAA_NU_LUID@@@Z.c)
 *     DpiDxgkDdiQueryConnectionChange @ 0x1400160A4 (DpiDxgkDdiQueryConnectionChange.c)
 *     DpiFdoGetChildDescriptor @ 0x1400174A8 (DpiFdoGetChildDescriptor.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1400321CC (DpiCheckForOutstandingD3Requests.c)
 *     ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x14003BC9C (-ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x14004F144 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     _tlgKeywordOn @ 0x140050B20 (_tlgKeywordOn.c)
 *     ?ReportMdmConnectionChange@DISPLAY_MUX_MGR@@QEAAXU_LUID@@IPEBU_DXGKARG_QUERYCONNECTIONCHANGE@@@Z @ 0x14008ED60 (-ReportMdmConnectionChange@DISPLAY_MUX_MGR@@QEAAXU_LUID@@IPEBU_DXGKARG_QUERYCONNECTIONCHANGE@@@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     DxgkInvalidateVidPnDisplayModeListCache @ 0x1401AA14C (DxgkInvalidateVidPnDisplayModeListCache.c)
 *     DpiFdoHandleTargetConnectionState @ 0x140243508 (DpiFdoHandleTargetConnectionState.c)
 *     ?DmmUpdateTargetLinkTrainingState@@YAJPEAXPEAU_DXGK_CONNECTION_CHANGE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x14025ED60 (-DmmUpdateTargetLinkTrainingState@@YAJPEAXPEAU_DXGK_CONNECTION_CHANGE@@PEAU_DXGK_DISPLAY_SCENARI.c)
 *     ?MonitorQuerySkippedRemovalState@@YAJPEAXIPEAE@Z @ 0x14026F798 (-MonitorQuerySkippedRemovalState@@YAJPEAXIPEAE@Z.c)
 *     ?MonitorRebuildMonitorModeListCache@@YAJPEAXIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14026F85C (-MonitorRebuildMonitorModeListCache@@YAJPEAXIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?DmmPowerOnOffTargetsFromSourceIfNecessary@@YAJQEAXEPEAU_DMM_SET_TIMING_RESULT@@@Z @ 0x1402D3F90 (-DmmPowerOnOffTargetsFromSourceIfNecessary@@YAJQEAXEPEAU_DMM_SET_TIMING_RESULT@@@Z.c)
 *     DxgkIsAdapterCoreSyncAcquired @ 0x14030BF64 (DxgkIsAdapterCoreSyncAcquired.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x14030CE44 (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x14030E12C (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiEnableD3Requests @ 0x14030EA10 (DpiEnableD3Requests.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x14031B9EC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     ?DmmProcessHPDFiltering@@YA?AW4_DMM_HPD_FILTER_RESULT@@PEAXPEAU_DXGK_CONNECTION_CHANGE@@AEAU_DMM_HPD_FILTER_INFO@@EPEAU_GUID@@@Z @ 0x1403D1C68 (-DmmProcessHPDFiltering@@YA-AW4_DMM_HPD_FILTER_RESULT@@PEAXPEAU_DXGK_CONNECTION_CHANGE@@AEAU_DMM.c)
 *     DxgkEndDisplayCalloutBatch @ 0x1403D8B60 (DxgkEndDisplayCalloutBatch.c)
 *     DxgkStartDisplayCalloutBatch @ 0x1403DB03C (DxgkStartDisplayCalloutBatch.c)
 *     ?DmmUpdateHPDFilteringTelemetry@@YAXPEAXAEAU_DMM_HPD_FILTER_INFO@@PEAU_GUID@@IE@Z @ 0x1403ECAF8 (-DmmUpdateHPDFilteringTelemetry@@YAXPEAXAEAU_DMM_HPD_FILTER_INFO@@PEAU_GUID@@IE@Z.c)
 *     DpiPdoHandleChildConnectionChange @ 0x140443F48 (DpiPdoHandleChildConnectionChange.c)
 */

__int64 __fastcall DxgkQueryConnectionChanges(__int64 a1, char a2, unsigned __int8 a3, char a4, char a5, char a6)
{
  __int64 v6; // rbx
  unsigned __int8 v8; // r13
  __int64 v10; // rdi
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r9
  struct _GUID *v14; // r14
  _QWORD *v15; // rdi
  _DWORD *v16; // rdx
  KSPIN_LOCK *v17; // r14
  int v18; // r12d
  int v19; // eax
  __int64 v20; // rcx
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v21; // r13
  unsigned int v22; // esi
  _DWORD *ChildDescriptor; // rax
  __int64 v24; // r9
  _DWORD *v25; // r15
  _BYTE *v26; // r14
  bool v27; // cl
  __int64 v28; // r9
  char v29; // si
  __int64 v30; // rdx
  __int64 v31; // r13
  __int64 result; // rax
  __int64 v33; // r8
  unsigned __int64 v34; // rdx
  unsigned int v35; // edx
  __int64 v36; // rcx
  __int64 v37; // r8
  int v38; // r9d
  __int64 v39; // r9
  struct _GUID *v40; // r12
  _QWORD *v41; // rsi
  _QWORD *v42; // r14
  unsigned int v43; // edx
  int v44; // ecx
  __int64 v45; // rax
  unsigned __int64 v46; // rdx
  int v47; // [rsp+20h] [rbp-E0h]
  int v48; // [rsp+28h] [rbp-D8h]
  int v49; // [rsp+30h] [rbp-D0h]
  int v50; // [rsp+38h] [rbp-C8h]
  unsigned __int8 v51; // [rsp+60h] [rbp-A0h] BYREF
  char v52; // [rsp+61h] [rbp-9Fh] BYREF
  char v53; // [rsp+62h] [rbp-9Eh]
  char v54; // [rsp+63h] [rbp-9Dh]
  unsigned __int8 v55[8]; // [rsp+68h] [rbp-98h] BYREF
  struct _GUID *v56; // [rsp+70h] [rbp-90h] BYREF
  int v57; // [rsp+78h] [rbp-88h] BYREF
  int v58; // [rsp+7Ch] [rbp-84h] BYREF
  int v59; // [rsp+80h] [rbp-80h] BYREF
  int v60; // [rsp+84h] [rbp-7Ch] BYREF
  __int64 v61; // [rsp+88h] [rbp-78h]
  __int64 v62; // [rsp+90h] [rbp-70h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v64[64]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v65; // [rsp+F0h] [rbp-10h]
  GUID ActivityId; // [rsp+100h] [rbp+0h] BYREF
  _OWORD v67[3]; // [rsp+110h] [rbp+10h] BYREF

  v6 = *(_QWORD *)(a1 + 64);
  v51 = a3;
  v61 = a1;
  v54 = 0;
  v53 = 0;
  v52 = 0;
  v8 = a3;
  v10 = a1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !v6 || *(_DWORD *)(v6 + 16) != 1953656900 || *(_DWORD *)(v6 + 20) != 2 )
  {
    WdLogSingleEntry1(2LL);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 19357;
    return result;
  }
  if ( DISPLAY_MUX_MGR::GetDisableQueryConnectionDdiStatus(qword_140169448, *(struct _LUID *)(v6 + 2696)) )
  {
    WdLogSingleEntry1(3LL);
    v34 = *(_QWORD *)(v6 + 5888);
    WdLogGlobalForLineNumber = 19366;
    memset(&v64[8], 0, 40);
    v65 = *(_QWORD *)(v6 + 2696);
    *(_QWORD *)v64 = 0x480000001ELL;
    *(_QWORD *)&v64[48] = 136LL;
    *(_QWORD *)&v64[56] = 0LL;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v64, v34);
    return 0LL;
  }
  if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v6 + 168)) )
  {
    KeEnterCriticalRegion();
    if ( *(_BYTE *)(v6 + 484) )
      DpiCheckForOutstandingD3Requests(v6);
    ExAcquireResourceSharedLite(*(PERESOURCE *)(v6 + 168), 1u);
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite((PERESOURCE)(v6 + 3440), 1u);
    v54 = 1;
  }
  v11 = *(_DWORD *)(v6 + 236);
  if ( v11 != 2 && v11 != 1 || *(_DWORD *)(v6 + 4120) == 1 || *(_DWORD *)(v6 + 284) != 1 )
  {
    KeSetEvent((PRKEVENT)(v6 + 3664), 0, 0);
    LODWORD(v10) = -1073741661;
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 19408;
    goto LABEL_64;
  }
  if ( (*(_BYTE *)(v6 + 4040) & 1) != 0 )
  {
    if ( !(unsigned __int8)DxgkIsAdapterCoreSyncAcquired(*(_QWORD *)(v6 + 4032), 2LL) )
    {
      LOBYTE(v12) = 1;
      LODWORD(v10) = DpiAcquireCoreSyncAccessSafe(v10, v12);
      if ( (int)v10 < 0 )
      {
        KeSetEvent((PRKEVENT)(v6 + 3664), 0, 0);
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 19433;
        goto LABEL_64;
      }
      v53 = 1;
    }
    DxgkStartDisplayCalloutBatch(*(_QWORD *)(v6 + 4032));
  }
  if ( a2 && (*(_BYTE *)(v6 + 4041) & 8) != 0 )
  {
    v55[0] = 0;
    ActivityId = 0LL;
    EtwActivityIdControl(3u, &ActivityId);
    DisplayScenarioContextEnsureAndAssociate(&ActivityId, 0x3Cu, 0, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT **)&v56, v55);
    v14 = v56;
    v15 = *(_QWORD **)(v6 + 3600);
    while ( v15 != (_QWORD *)(v6 + 3600) )
    {
      v16 = v15 - 4;
      v15 = (_QWORD *)*v15;
      if ( v16[4] == 1 )
      {
        v33 = *v16 == 1 ? (unsigned int)v16[1] : 4294967294LL;
        LOBYTE(v13) = 1;
        LOBYTE(v50) = 1;
        LOBYTE(v49) = a5;
        LOBYTE(v48) = v8;
        LOBYTE(v47) = a4;
        if ( (int)DpiPdoHandleChildConnectionChange(
                    *(_QWORD *)(v6 + 24),
                    (unsigned int)v16[6],
                    v33,
                    v13,
                    v47,
                    v48,
                    v49,
                    v50,
                    0LL,
                    &v52,
                    v14) < 0 )
        {
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 19495;
        }
      }
    }
    if ( v55[0] )
      DisplayScenarioContextDissociate((struct _DXGK_DISPLAY_SCENARIO_CONTEXT *const *)&v56);
  }
  v17 = (KSPIN_LOCK *)(v6 + 3656);
  do
  {
    do
    {
      while ( 1 )
      {
        memset(v64, 0, sizeof(v64));
        v64[61] = a5;
        v64[60] = v8;
        memset(v67, 0, sizeof(v67));
        v18 = 0;
        KeAcquireInStackQueuedSpinLock(v17, &LockHandle);
        *(_DWORD *)(v6 + 3652) = 2;
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        v19 = DpiDxgkDdiQueryConnectionChange(v6, *(_QWORD *)(v6 + 40), *(_QWORD *)(v6 + 48), v64);
        v10 = v19;
        if ( v19 < 0 )
        {
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 19524;
          goto LABEL_52;
        }
        if ( v19 == 255 )
          goto LABEL_52;
        v20 = *(_QWORD *)&v64[40];
        v55[0] = 0;
        ActivityId = 0LL;
        if ( !*(_QWORD *)&v64[40] )
          v20 = *(_QWORD *)&v64[48] - *(_QWORD *)ActivityId.Data4;
        if ( v20 )
          ActivityId = *(GUID *)&v64[40];
        else
          EtwActivityIdControl(3u, &ActivityId);
        DisplayScenarioContextEnsureAndAssociate(
          &ActivityId,
          0x3Cu,
          0,
          (struct _DXGK_DISPLAY_SCENARIO_CONTEXT **)&v56,
          v55);
        v21 = (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v56;
        if ( !v64[62] )
          break;
        DxgkInvalidateVidPnDisplayModeListCache(*(_QWORD *)(v6 + 4032));
        MonitorRebuildMonitorModeListCache(*(void **)(v6 + 4032), v35, v21);
        CDisplayScenarioContextScope::~CDisplayScenarioContextScope((CDisplayScenarioContextScope *)v55);
        v8 = v51;
      }
      v22 = *(_DWORD *)&v64[8] & 0xFFFFFF | (*(_DWORD *)&v64[56] << 24);
      if ( (HIBYTE(*(_DWORD *)&v64[8]) & 0xF) == 4
        || (HIBYTE(*(_DWORD *)&v64[8]) & 0xF) == 5
        || (HIBYTE(*(_DWORD *)&v64[8]) & 0xF) == 6 )
      {
        LODWORD(v10) = DpiFdoHandleTargetConnectionState(v6, &v52, v64);
        if ( (int)v10 < 0 )
        {
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 19572;
        }
        goto LABEL_49;
      }
      if ( (HIBYTE(*(_DWORD *)&v64[8]) & 0xF) != 8 && (HIBYTE(*(_DWORD *)&v64[8]) & 0xF) != 0xA )
      {
        if ( (HIBYTE(*(_DWORD *)&v64[8]) & 0xF) != 0xC && (HIBYTE(*(_DWORD *)&v64[8]) & 0xFu) - 13 >= 2 )
        {
          WdLogSingleEntry2(2LL, (*(_QWORD *)&v64[8] >> 24) & 0xFLL, v10);
          WdLogGlobalForLineNumber = 19726;
          LODWORD(v10) = -1073741811;
          goto LABEL_49;
        }
LABEL_101:
        LODWORD(v10) = DmmUpdateTargetLinkTrainingState(
                         *(void **)(v6 + 4032),
                         (struct _DXGK_CONNECTION_CHANGE *)v64,
                         v21,
                         v18 != 0);
        if ( (int)v10 < 0 )
        {
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 19717;
        }
        goto LABEL_49;
      }
      if ( *(_BYTE *)(v6 + 6393) )
        DISPLAY_MUX_MGR::ReportMdmConnectionChange(
          qword_140169448,
          *(struct _LUID *)(v6 + 2696),
          v22,
          (const struct _DXGKARG_QUERYCONNECTIONCHANGE *)v64);
      ChildDescriptor = (_DWORD *)DpiFdoGetChildDescriptor(v6, v22);
      v25 = ChildDescriptor;
      if ( !ChildDescriptor )
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 19599;
        goto LABEL_49;
      }
      if ( *ChildDescriptor == 1 )
      {
        LOBYTE(v24) = (*(_BYTE *)(v6 + 4041) & 0x10) != 0;
        v18 = DmmProcessHPDFiltering(*(_QWORD *)(v6 + 4032), v64, v67, v24, v21);
        if ( v18 == 1 )
          goto LABEL_46;
        LODWORD(v24) = *(_DWORD *)&v64[8];
      }
      v26 = 0LL;
      if ( (v24 & 0xF000000) == 0xA000000 && (v64[16] & 1) != 0 )
      {
        if ( (*(_DWORD *)(v6 + 4052) & 0x40) != 0 )
        {
          v26 = &v64[24];
        }
        else
        {
          if ( (unsigned int)dword_1401665B8 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1401665B8, 0x400000002000LL) )
          {
            v58 = *(_DWORD *)&v64[28];
            v39 = v38 & 0xFFFFFF;
            v59 = *(_DWORD *)&v64[24];
            v62 = *(_QWORD *)(v6 + 2696);
            v60 = v39;
            v57 = 1;
            *(_QWORD *)&ActivityId.Data1 = 16779264LL;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
              v36,
              (__int64)&unk_1401442CB,
              v37,
              v39,
              (__int64)&ActivityId,
              (__int64)&v57,
              (__int64)&v62,
              (__int64)&v60,
              (__int64)&v59,
              (__int64)&v58);
          }
          WdLogSingleEntry1(2LL);
          LODWORD(v24) = *(_DWORD *)&v64[8];
          WdLogGlobalForLineNumber = 19653;
        }
      }
      v27 = v64[60] || v18 == 3;
      v28 = v24 & 0xF000000;
      LOBYTE(v28) = (_DWORD)v28 == 167772160;
      LOBYTE(v50) = v64[63];
      LOBYTE(v49) = v64[61];
      LOBYTE(v48) = v27;
      LOBYTE(v47) = 0;
      LODWORD(v10) = DpiPdoHandleChildConnectionChange(
                       *(_QWORD *)(v6 + 24),
                       v22,
                       *(unsigned int *)&v64[12],
                       v28,
                       v47,
                       v48,
                       v49,
                       v50,
                       v26,
                       &v52,
                       v21);
      if ( (int)v10 < 0 )
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 19674;
      }
      v17 = (KSPIN_LOCK *)(v6 + 3656);
LABEL_46:
      if ( *v25 == 1 )
        DmmUpdateHPDFilteringTelemetry(
          *(void **)(v6 + 4032),
          (struct _DMM_HPD_FILTER_INFO *)v67,
          (struct _GUID *)v21,
          v22,
          (_DWORD)v10 == 0x40000000);
      if ( (v18 & 0xFFFFFFFD) != 0 && (v18 != 3 || (_DWORD)v10 == 0x40000000) )
        goto LABEL_101;
LABEL_49:
      if ( v55[0] )
        DisplayScenarioContextDissociate((struct _DXGK_DISPLAY_SCENARIO_CONTEXT *const *)&v56);
      if ( (int)v10 < 0 )
        break;
      v8 = v51;
    }
    while ( (_DWORD)v10 != 255 );
LABEL_52:
    v29 = 1;
    KeAcquireInStackQueuedSpinLock(v17, &LockHandle);
    if ( (*(_DWORD *)(v6 + 3652) & 1) == 0 )
    {
      v29 = 0;
      *(_DWORD *)(v6 + 3652) = 0;
      KeSetEvent((PRKEVENT)(v6 + 3664), 0, 0);
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    v8 = v51;
  }
  while ( v29 );
  if ( a6 )
  {
    v55[0] = 0;
    CDisplayScenarioContextScope::ContextScopeConstructor((CDisplayScenarioContextScope *)v55, 0LL, 0x44u, 0);
    v40 = v56;
    v41 = *(_QWORD **)(v6 + 3600);
    v31 = v61;
    while ( 1 )
    {
      v42 = v41;
      if ( v41 == (_QWORD *)(v6 + 3600) )
        break;
      v43 = *((_DWORD *)v41 - 2);
      v41 = (_QWORD *)*v41;
      v51 = 0;
      if ( MonitorQuerySkippedRemovalState(*(void **)(v6 + 4032), v43, &v51) >= 0 && v51 )
      {
        LOBYTE(v50) = 0;
        LOBYTE(v49) = 0;
        LOBYTE(v48) = 0;
        LOBYTE(v47) = 0;
        v44 = DpiPdoHandleChildConnectionChange(
                v31,
                *((unsigned int *)v42 - 2),
                4294967294LL,
                0LL,
                v47,
                v48,
                v49,
                v50,
                0LL,
                &v52,
                v40);
        if ( v44 < 0 )
        {
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 19808;
          break;
        }
        memset(&v64[8], 0, 40);
        *(_DWORD *)&v64[52] = *((_DWORD *)v42 - 2);
        v45 = *(_QWORD *)(v6 + 2696);
        *(_QWORD *)&v64[56] = (unsigned int)v44;
        v46 = *(_QWORD *)(v6 + 5888);
        v65 = v45;
        *(_QWORD *)v64 = 0x480000001ELL;
        *(_DWORD *)&v64[48] = 126;
        DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v64, v46);
      }
    }
    CDisplayScenarioContextScope::~CDisplayScenarioContextScope((CDisplayScenarioContextScope *)v55);
  }
  else
  {
    v31 = v61;
  }
  if ( v52 && (int)DmmPowerOnOffTargetsFromSourceIfNecessary(*(void *const *)(v6 + 4032), 1u, 0LL) < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 19844;
  }
  if ( (*(_BYTE *)(v6 + 4040) & 1) != 0 )
    DxgkEndDisplayCalloutBatch(*(_QWORD *)(v6 + 4032));
  if ( (int)v10 < 0 )
  {
    _InterlockedAnd((volatile signed __int32 *)(v6 + 3780), 0xFFFFFFFE);
    IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(v6 + 152), BusRelations);
  }
  if ( v53 )
  {
    LOBYTE(v30) = 1;
    DpiReleaseCoreSyncAccessSafe(v31, v30);
  }
LABEL_64:
  if ( v54 )
  {
    ExReleaseResourceLite((PERESOURCE)(v6 + 3440));
    KeLeaveCriticalRegion();
    if ( *(_BYTE *)(v6 + 484) )
      DpiEnableD3Requests(*(_QWORD *)(v6 + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(v6 + 168));
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v10;
}
