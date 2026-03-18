/*
 * XREFs of ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x14033D68C
 * Callers:
 *     ?WnfScreenOnCallback@@YAJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPEBU_WNF_TYPE_ID@@PEAX@Z @ 0x140061050 (-WnfScreenOnCallback@@YAJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPEBU_WNF_TYPE_ID@@PEAX.c)
 *     DXGGLOBAL::IterateAdaptersWithCallback__lambda_4d219c55c1944bedc25da37a83fa6654___ @ 0x140076440 (DXGGLOBAL--IterateAdaptersWithCallback__lambda_4d219c55c1944bedc25da37a83fa6654___.c)
 *     DXGGLOBAL::IterateAdaptersWithCallback__lambda_9212365dda97cb37a6803fd149b753fd___ @ 0x140076464 (DXGGLOBAL--IterateAdaptersWithCallback__lambda_9212365dda97cb37a6803fd149b753fd___.c)
 *     DXGGLOBAL::IterateAdaptersWithCallback__lambda_eeea5582e93711493668b9eafd12873f___ @ 0x140076488 (DXGGLOBAL--IterateAdaptersWithCallback__lambda_eeea5582e93711493668b9eafd12873f___.c)
 *     DXGGLOBAL::IterateAdaptersWithCallback__lambda_ef85c4d3ba2b9aeb28478c22401d75d8___ @ 0x1400764B0 (DXGGLOBAL--IterateAdaptersWithCallback__lambda_ef85c4d3ba2b9aeb28478c22401d75d8___.c)
 *     ?DxgkpProcessBddFallbackRequest@@YAJXZ @ 0x140190C38 (-DxgkpProcessBddFallbackRequest@@YAJXZ.c)
 *     ?GetDiagnosticsBuffer@@YAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@IH@Z @ 0x140191B04 (-GetDiagnosticsBuffer@@YAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@IH@Z.c)
 *     ?DxgkpStopRenderAndSessionDisplayAdapters@@YAJAEAW4_DXGK_DIAG_BDD_FALLBACK_STAGE@@@Z @ 0x140198854 (-DxgkpStopRenderAndSessionDisplayAdapters@@YAJAEAW4_DXGK_DIAG_BDD_FALLBACK_STAGE@@@Z.c)
 *     ?Stop@DXGADAPTER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@EE@Z @ 0x14019FF84 (-Stop@DXGADAPTER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@EE@Z.c)
 *     DxgkStartPnPStop @ 0x1401AA86C (DxgkStartPnPStop.c)
 *     ?DxgkCheckAndUpdatePairingForNewAdapter@@YAXPEAVDXGADAPTER@@PEAE@Z @ 0x1401B4454 (-DxgkCheckAndUpdatePairingForNewAdapter@@YAXPEAVDXGADAPTER@@PEAE@Z.c)
 *     ?ConnectSessionDisplayBroker@DXGSESSIONDATA@@QEAAJXZ @ 0x1401C7154 (-ConnectSessionDisplayBroker@DXGSESSIONDATA@@QEAAJXZ.c)
 *     ?Initialize@DISPLAYSTATECHECKER@@QEAAJW4_D3DKMT_BLACK_SCREEN_DETECTION_TRIGGER@@HPEBDU_GUID@@@Z @ 0x1401CB05C (-Initialize@DISPLAYSTATECHECKER@@QEAAJW4_D3DKMT_BLACK_SCREEN_DETECTION_TRIGGER@@HPEBDU_GUID@@@Z.c)
 *     ?ForceGpupTdr@@YAJPEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z @ 0x1401D5688 (-ForceGpupTdr@@YAJPEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z.c)
 *     ?EnableDriverDiagnosticsTelemetryProviderImpl@@YAXKK_K@Z @ 0x1401D80C4 (-EnableDriverDiagnosticsTelemetryProviderImpl@@YAXKK_K@Z.c)
 *     ?NodeUsageTelemetryThread@DXGGLOBAL@@CAXPEAX@Z @ 0x1401DF020 (-NodeUsageTelemetryThread@DXGGLOBAL@@CAXPEAX@Z.c)
 *     ?CreateVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x14021FFEC (-CreateVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?DestroyVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAXXZ @ 0x14022045C (-DestroyVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAXXZ.c)
 *     ?_ConstructExtendSecondPath@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x14026CA8C (-_ConstructExtendSecondPath@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 *     ?_ConstructExternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x14026CB5C (-_ConstructExternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ.c)
 *     ?_ConstructFromFirmwareRecommendedVidPn@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x14026CC18 (-_ConstructFromFirmwareRecommendedVidPn@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ.c)
 *     DxgkDisplayConfigDeviceInfoNoAdapter @ 0x1402C9AB8 (DxgkDisplayConfigDeviceInfoNoAdapter.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1402E7F14 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?CollectAllPaths@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJXZ @ 0x14031E72C (-CollectAllPaths@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJXZ.c)
 *     ?_Query@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@QEAAJXZ @ 0x14033811C (-_Query@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@QEAAJXZ.c)
 *     ??RCCD_BTL_CLONE_GROUP_RESOLVER@@QEAAJXZ @ 0x1403397F8 (--RCCD_BTL_CLONE_GROUP_RESOLVER@@QEAAJXZ.c)
 *     DxgkGetDisplayConfigBufferSizes @ 0x14033B500 (DxgkGetDisplayConfigBufferSizes.c)
 *     DxgkQueryVidPnExclusiveOwnership @ 0x14033BBA0 (DxgkQueryVidPnExclusiveOwnership.c)
 *     ?FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ @ 0x14033C0A8 (-FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ?CollectActivePaths@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJ_N@Z @ 0x14033D450 (-CollectActivePaths@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJ_N@Z.c)
 *     ??RCCD_BTL_CONNECTIVITY_COLLECTOR@@QEAAJXZ @ 0x14033D528 (--RCCD_BTL_CONNECTIVITY_COLLECTOR@@QEAAJXZ.c)
 *     ?DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z @ 0x140369894 (-DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403ABFD4 (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 *     DxgkCompleteTopologyTransition @ 0x1403AD850 (DxgkCompleteTopologyTransition.c)
 *     ?DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403ADC38 (-DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISP.c)
 *     DxgkInternalDeviceIoctl @ 0x1403C72C0 (DxgkInternalDeviceIoctl.c)
 *     ?EnableDxgkrnlTelemetryProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1403FC880 (-EnableDxgkrnlTelemetryProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     DxgkPreSessionDisconnected @ 0x140408F30 (DxgkPreSessionDisconnected.c)
 *     DxgkProcessLockScreen @ 0x14040A9E0 (DxgkProcessLockScreen.c)
 *     DxgkTrimProcessCommitment @ 0x14040B170 (DxgkTrimProcessCommitment.c)
 *     ?EnableDisplayTelemetryProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x14041A9F0 (-EnableDisplayTelemetryProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     ?DxgkpFindDefaultRenderAdapterForSession@@YAJAEAU_LUID@@AEAVDXGADAPTER_REFERENCE@@PEAKAEAE@Z @ 0x14042C8BC (-DxgkpFindDefaultRenderAdapterForSession@@YAJAEAU_LUID@@AEAVDXGADAPTER_REFERENCE@@PEAKAEAE@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?CanEnumerateAdapter@DXGSESSIONDATA@@QEBA_NPEAVDXGADAPTER@@@Z @ 0x14004B590 (-CanEnumerateAdapter@DXGSESSIONDATA@@QEBA_NPEAVDXGADAPTER@@@Z.c)
 *     ?SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z @ 0x140058AF8 (-SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z.c)
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x14005ECAC (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGAUTOADAPTERLISTLOCK@@QEAA@AEAVDXGADAPTERLISTLOCK@@@Z @ 0x14007B94C (--0DXGAUTOADAPTERLISTLOCK@@QEAA@AEAVDXGADAPTERLISTLOCK@@@Z.c)
 *     ??1DXGAUTOADAPTERLISTLOCK@@QEAA@XZ @ 0x14007BBE4 (--1DXGAUTOADAPTERLISTLOCK@@QEAA@XZ.c)
 *     ?AcquireShared@DXGAUTOADAPTERLISTLOCK@@QEAAXXZ @ 0x14007BE04 (-AcquireShared@DXGAUTOADAPTERLISTLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402A6920 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402C6C90 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkpCanEnumerateAdapter@@YA_NPEAVDXGSESSIONDATA@@PEAVDXGADAPTER@@@Z @ 0x1403B54E0 (-DxgkpCanEnumerateAdapter@@YA_NPEAVDXGSESSIONDATA@@PEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DXGGLOBAL::IterateAdaptersWithCallback(
        __int64 a1,
        __int64 (__fastcall *a2)(_QWORD *, __int64),
        __int64 a3,
        int a4)
{
  unsigned int v6; // esi
  unsigned int v7; // r14d
  __int64 v8; // rcx
  __int64 v9; // rcx
  DXGGLOBAL *Global; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  struct DXGSESSIONDATA *SessionData; // r12
  _QWORD *v15; // rcx
  _QWORD *v16; // r13
  _QWORD *v17; // rax
  bool v18; // zf
  _QWORD *v19; // rbp
  signed __int64 v20; // rax
  signed __int64 v21; // rcx
  signed __int64 v22; // rtt
  __int64 v23; // rbx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct DXGPROCESS *v26; // r14
  struct DXGPROCESS *v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  char CanEnumerateAdapter; // al
  struct DXGPROCESS *v32; // rax
  __int64 v33; // rax
  struct DXGTHREAD *Current; // rax
  struct _ETHREAD *CurrentThread; // rdi
  KSPIN_LOCK *v36; // rax
  _QWORD *v37; // [rsp+50h] [rbp-68h]
  DXGADAPTERLISTLOCK *v38[11]; // [rsp+60h] [rbp-58h] BYREF
  __int64 v39; // [rsp+C0h] [rbp+8h] BYREF
  __int64 (__fastcall *v40)(_QWORD *, __int64); // [rsp+C8h] [rbp+10h]
  __int64 v41; // [rsp+D0h] [rbp+18h]
  unsigned int v42; // [rsp+D8h] [rbp+20h]

  v41 = a3;
  v40 = a2;
  DXGAUTOADAPTERLISTLOCK::DXGAUTOADAPTERLISTLOCK((DXGAUTOADAPTERLISTLOCK *)v38, (struct DXGADAPTERLISTLOCK *)(a1 + 680));
  v6 = 0;
  v7 = 0;
  v42 = 0;
  if ( (PEPROCESS)PsGetCurrentProcess(v8) == PsInitialSystemProcess )
  {
    SessionData = 0LL;
  }
  else
  {
    Global = DXGGLOBAL::GetGlobal();
    SessionData = DXGGLOBAL::GetSessionData(Global, v11, v12, v13);
  }
  if ( a4 != 5
    || (LODWORD(v39) = 0, (v32 = DXGPROCESS::GetCurrent(v9)) != 0LL)
    && (v33 = *((_QWORD *)v32 + 11)) != 0
    && ((*(void (__fastcall **)(_QWORD, _QWORD, __int64 *))(v33 + 240))(0LL, 0LL, &v39), (_DWORD)v39) )
  {
    DXGAUTOADAPTERLISTLOCK::AcquireShared(v38);
    v15 = (_QWORD *)(a1 + 808);
    v16 = *(_QWORD **)(a1 + 808);
    v37 = (_QWORD *)(a1 + 808);
LABEL_5:
    while ( 2 )
    {
      v17 = 0LL;
      if ( v16 != v15 )
        v17 = v16;
      if ( v17 && !v7 )
      {
        v18 = v16 == v15;
        v19 = v16;
        v16 = (_QWORD *)*v16;
        if ( v18 )
          v19 = 0LL;
        _m_prefetchw(v19 + 3);
        v20 = v19[3];
        do
        {
          v15 = v37;
          if ( !v20 )
            goto LABEL_5;
          v21 = v20 + 1;
          v22 = v20;
          v20 = _InterlockedCompareExchange64(v19 + 3, v20 + 1, v20);
        }
        while ( v22 != v20 );
        if ( a4 != 4 )
        {
          if ( a4 == 5 )
          {
            if ( !DXGADAPTER::IsFullWDDMAdapter((DXGADAPTER *)v19) && (v19[396] || *(_QWORD *)((char *)v19 + 4876)) )
              goto LABEL_33;
            CanEnumerateAdapter = DxgkpCanEnumerateAdapter(SessionData, (struct DXGADAPTER *)v19);
          }
          else
          {
            if ( a4 == 1 )
            {
              if ( !v19[395] )
                goto LABEL_33;
            }
            else if ( a4 == 2 && !v19[396] || a4 == 3 && v19[395] )
            {
              goto LABEL_33;
            }
            if ( !SessionData )
              goto LABEL_32;
            CanEnumerateAdapter = DXGSESSIONDATA::CanEnumerateAdapter(SessionData, (struct DXGADAPTER *)v19);
          }
          if ( !CanEnumerateAdapter )
            goto LABEL_33;
LABEL_32:
          v7 = v40(v19, v41);
          v42 = v7;
          goto LABEL_33;
        }
        if ( v19[396]
          && (!v19[395] || SessionData && !DXGSESSIONDATA::CanEnumerateAdapter(SessionData, (struct DXGADAPTER *)v19)) )
        {
          goto LABEL_33;
        }
        v23 = *(_QWORD *)((char *)v19 + 4876);
        v39 = 0LL;
        CurrentProcess = PsGetCurrentProcess(v21);
        ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
        v26 = (struct DXGPROCESS *)ProcessDxgProcess;
        if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 408) & 0x80) == 0 )
        {
LABEL_18:
          v27 = v26;
          if ( !v26 )
            goto LABEL_45;
          goto LABEL_19;
        }
        Current = DXGTHREAD::GetCurrent();
        if ( Current )
        {
          v27 = (struct DXGPROCESS *)*((_QWORD *)Current + 3);
          if ( !v27 )
            goto LABEL_18;
        }
        else
        {
          CurrentThread = KeGetCurrentThread();
          v36 = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
          v27 = DXGGLOBAL::SearchDxgThreadList(v36, CurrentThread);
          if ( !v27 )
          {
            WdLogSingleEntry0(2LL);
            WdLogGlobalForLineNumber = 3080;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Failed to find DXGPROCESS",
              3080LL,
              0LL,
              0LL,
              0LL,
              0LL);
            goto LABEL_18;
          }
        }
LABEL_19:
        v28 = *((_QWORD *)v27 + 11);
        if ( v28 )
        {
          (*(void (__fastcall **)(_QWORD, __int64 *, _QWORD))(v28 + 240))(0LL, &v39, 0LL);
          v29 = v39;
          goto LABEL_21;
        }
LABEL_45:
        v29 = 0LL;
        v39 = 0LL;
LABEL_21:
        if ( v29 != v23 )
        {
          v7 = v42;
LABEL_33:
          DXGADAPTER::ReleaseReference((DXGADAPTER *)v19);
          v15 = v37;
          continue;
        }
        goto LABEL_32;
      }
      break;
    }
    v6 = v7;
  }
  DXGAUTOADAPTERLISTLOCK::~DXGAUTOADAPTERLISTLOCK((DXGAUTOADAPTERLISTLOCK *)v38);
  return v6;
}
