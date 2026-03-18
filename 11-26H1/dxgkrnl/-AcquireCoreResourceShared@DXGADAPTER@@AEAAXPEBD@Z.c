/*
 * XREFs of ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z @ 0x140293040
 * Callers:
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z @ 0x1400171A4 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14002E580 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14002E850 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEBD@Z @ 0x14002ED30 (-AcquireShared@COREACCESS@@QEAAXPEBD@Z.c)
 *     ?DxgkpCddSyncGPUAccess@@YAJPEAVDXGPROCESS@@IH@Z @ 0x14028B734 (-DxgkpCddSyncGPUAccess@@YAJPEAVDXGPROCESS@@IH@Z.c)
 *     ?DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@HPEBD@Z @ 0x14028C280 (-DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@HPEBD@Z.c)
 *     DxgkUnlock2 @ 0x14028E410 (DxgkUnlock2.c)
 *     DxgkLock2 @ 0x14028F1F0 (DxgkLock2.c)
 *     DxgkWaitForVerticalBlankEventInternal @ 0x1402902F0 (DxgkWaitForVerticalBlankEventInternal.c)
 *     ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x140294050 (-DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z.c)
 *     ?DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEBD@Z @ 0x140298100 (-DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEBD@Z.c)
 *     ?DxgkCddWaitForVerticalBlankEvent@@YAJQEAXIIPEAPEAU_KEVENT@@PEBD@Z @ 0x14029F3D0 (-DxgkCddWaitForVerticalBlankEvent@@YAJQEAXIIPEAPEAU_KEVENT@@PEBD@Z.c)
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x14029FF9C (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 *     DxgkModifyVSyncWaiterInternal @ 0x1402A1E80 (DxgkModifyVSyncWaiterInternal.c)
 *     ?RunForAdapter@?$OutputDuplThunks@PEBU_DXGKARG_SETPOINTERPOSITION@@@@SAJPEAVDXGADAPTER@@_NIPEBU_DXGKARG_SETPOINTERPOSITION@@P8OUTPUTDUPL_MGR@@EAAX2@Z@Z @ 0x1402A2CE8 (-RunForAdapter@-$OutputDuplThunks@PEBU_DXGKARG_SETPOINTERPOSITION@@@@SAJPEAVDXGADAPTER@@_NIPEBU_.c)
 *     DxgkGetScanLine @ 0x1402A3580 (DxgkGetScanLine.c)
 *     ?RunForAdapter@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJPEAVDXGADAPTER@@_NIPEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@P6AJPEAVOUTPUTDUPL_MGR@@2@Z@Z @ 0x1402A3E84 (-RunForAdapter@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJPEAVDXGADA.c)
 *     DxgkLock @ 0x1402B9040 (DxgkLock.c)
 *     DxgkQueryVideoMemoryInfo @ 0x1402C0A40 (DxgkQueryVideoMemoryInfo.c)
 *     DxgkDispMgrSourceOperation @ 0x1402C1FD0 (DxgkDispMgrSourceOperation.c)
 *     DxgkGetPresentHistoryInternal @ 0x1402C4DC0 (DxgkGetPresentHistoryInternal.c)
 *     ?SetPointerPositionForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEAVSESSION_VIEW@@PEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z @ 0x1402C7ED4 (-SetPointerPositionForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEAVSESSION_VIEW@@PEBU_DXGKARG_SETPO.c)
 *     ?CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1402E7344 (-CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1402E7F14 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z @ 0x1402E91E4 (-DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z.c)
 *     DxgkPresentMultiPlaneOverlay3 @ 0x1402EBEC0 (DxgkPresentMultiPlaneOverlay3.c)
 *     DxgkSubmitCommandToHwQueueInternal @ 0x1402F8648 (DxgkSubmitCommandToHwQueueInternal.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@USIGNAL_SYNC_OBJ_FLAGS@@@Z @ 0x140302D00 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 *     ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N4444@Z @ 0x1403074C0 (-WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N4444@Z.c)
 *     ?AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x14030D2C4 (-AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     ?SubmitWaitForSyncObjectsFromGpu@@YAJIPEBIPEB_KIPEAVDXGPROCESS@@_N3@Z @ 0x1403158CC (-SubmitWaitForSyncObjectsFromGpu@@YAJIPEBIPEB_KIPEAVDXGPROCESS@@_N3@Z.c)
 *     DxgkPresent @ 0x140323BB0 (DxgkPresent.c)
 *     ?SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTER@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAX_N@Z @ 0x140331FD4 (-SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCES.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEBD@Z @ 0x140333368 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ?DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x14035948C (-DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU.c)
 *     ?DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEAIPEA_K@Z @ 0x14035BAD8 (-DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEAIPEA_K@Z.c)
 *     ?SignalFence@DXGSYNCOBJECT@@QEAAJ_KIW4SIGNAL_FENCE_HANDLE_TYPE@@@Z @ 0x14036D2A8 (-SignalFence@DXGSYNCOBJECT@@QEAAJ_KIW4SIGNAL_FENCE_HANDLE_TYPE@@@Z.c)
 *     DxgkImmediateSignalSynchronizationObjectByReference @ 0x14036D744 (DxgkImmediateSignalSynchronizationObjectByReference.c)
 *     ?AdapterObjectSignalFence@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@_KIW4SIGNAL_FENCE_HANDLE_TYPE@@@Z @ 0x14036DC38 (-AdapterObjectSignalFence@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@_KIW4SIGNAL_FENCE_HANDLE.c)
 *     DxgkGetPresentStats @ 0x140372490 (DxgkGetPresentStats.c)
 *     ?WaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAX@Z @ 0x140373CC0 (-WaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDX.c)
 *     DxgkOfferAllocations @ 0x140374E90 (DxgkOfferAllocations.c)
 *     ?DxgkpProcessVSyncPhaseThread@@YAXPEAX@Z @ 0x14037AFC0 (-DxgkpProcessVSyncPhaseThread@@YAXPEAX@Z.c)
 *     EnforceDriverModelScalingPolicy @ 0x14037F530 (EnforceDriverModelScalingPolicy.c)
 *     DxgkMapGpuVirtualAddress @ 0x14037FEC0 (DxgkMapGpuVirtualAddress.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?IsOwner@DXGFASTMUTEX@@QEBAEXZ @ 0x14000D800 (-IsOwner@DXGFASTMUTEX@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x14000FC20 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     DpiScheduleDelayedDevicePowerRequiredAtPassiveLevel @ 0x140011620 (DpiScheduleDelayedDevicePowerRequiredAtPassiveLevel.c)
 *     McTemplateK0pt_EtwWriteTransfer @ 0x140012744 (McTemplateK0pt_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14002C340 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     DpiRequestDevicePowerState @ 0x140032628 (DpiRequestDevicePowerState.c)
 *     McTemplateK0qqsz_EtwWriteTransfer @ 0x140062B60 (McTemplateK0qqsz_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?AddWakeUpCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@@Z @ 0x140293FAC (-AddWakeUpCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@@Z.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z @ 0x1402FAC00 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z.c)
 *     ?PrepareDripsBlockerProcessName@DripsBlockerTrackingHelper@@QEAAJPEBDPEAU_EPROCESS@@PEADIPEA_K@Z @ 0x1402FAE34 (-PrepareDripsBlockerProcessName@DripsBlockerTrackingHelper@@QEAAJPEBDPEAU_EPROCESS@@PEADIPEA_K@Z.c)
 *     ?ShouldIgnore@DripsBlockerTrackingHelper@@IEAA_NW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1402FB018 (-ShouldIgnore@DripsBlockerTrackingHelper@@IEAA_NW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?EtwProfilerTypeName@DripsBlockerTrackingHelper@@KAPEAGW4_DXGKETW_PROFILER_TYPE@@PEAI@Z @ 0x1402FB8CC (-EtwProfilerTypeName@DripsBlockerTrackingHelper@@KAPEAGW4_DXGKETW_PROFILER_TYPE@@PEAI@Z.c)
 *     ??1DXGDEADLOCK_TRACKER@@QEAA@XZ @ 0x1402FE630 (--1DXGDEADLOCK_TRACKER@@QEAA@XZ.c)
 *     ??0DXGDEADLOCK_TRACKER@@QEAA@PEAVDXGADAPTER@@_N@Z @ 0x1402FE6F4 (--0DXGDEADLOCK_TRACKER@@QEAA@PEAVDXGADAPTER@@_N@Z.c)
 *     ?AddD0LagTimeToLastActiveEntry@DripsBlockerTrackingHelper@@IEAAXXZ @ 0x14037EFF0 (-AddD0LagTimeToLastActiveEntry@DripsBlockerTrackingHelper@@IEAAXXZ.c)
 */

void __fastcall DXGADAPTER::AcquireCoreResourceShared(DXGADAPTER *this, const char *a2)
{
  struct DXGGLOBAL *Global; // rdi
  __int64 v5; // rcx
  __int64 CurrentProcess; // rax
  __int64 v7; // r12
  struct _EPROCESS *v8; // rsi
  bool v9; // di
  __int64 v10; // rcx
  __int64 v11; // rax
  int v12; // r15d
  ReferenceCounted *v13; // rsi
  bool v14; // zf
  __int64 v15; // rcx
  __int64 v16; // rcx
  char *v17; // rax
  int v18; // eax
  __int64 v19; // rdi
  DXGGLOBAL *v20; // rdi
  __int64 v21; // rcx
  struct _EPROCESS *v22; // rax
  DXGFASTMUTEX *v23; // rcx
  struct _KTHREAD **v24; // r13
  __int64 v25; // rcx
  DripsBlockerTrackingHelper *v26; // r13
  unsigned int v27; // edi
  struct DXGTHREAD *DxgThread; // rax
  __int64 v29; // rcx
  DripsBlockerTrackingHelper *v30; // rcx
  SIZE_T v31; // rdi
  unsigned int i; // esi
  __int64 v33; // r15
  __int64 j; // rdi
  unsigned int v35; // r12d
  char v36; // al
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  int v39; // eax
  __int64 v40; // r15
  __int64 v41; // rcx
  LARGE_INTEGER *v42; // rsi
  __int64 HighPart; // rcx
  const wchar_t *v44; // rax
  __int64 v45; // rdx
  __int64 v46; // r8
  struct _KTHREAD **v47; // rdi
  unsigned int k; // edi
  __int64 v49; // rsi
  unsigned int m; // edx
  _BYTE *v51; // r8
  SIZE_T v52; // rax
  unsigned int v53; // [rsp+50h] [rbp-B0h] BYREF
  SIZE_T Length; // [rsp+58h] [rbp-A8h] BYREF
  int v55; // [rsp+60h] [rbp-A0h]
  struct _KTHREAD **v56; // [rsp+68h] [rbp-98h] BYREF
  __int64 v57; // [rsp+70h] [rbp-90h]
  char v58; // [rsp+78h] [rbp-88h]
  _BYTE v59[400]; // [rsp+80h] [rbp-80h] BYREF
  __int128 Source2; // [rsp+210h] [rbp+110h] BYREF
  __int128 v61; // [rsp+220h] [rbp+120h]
  char v62; // [rsp+230h] [rbp+130h]

  if ( ExIsResourceAcquiredSharedLite(*((PERESOURCE *)this + 21)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4057;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"!ExIsResourceAcquiredSharedLite(m_pCoreResource)",
      4057LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  KeEnterCriticalRegion();
  Global = DXGGLOBAL::GetGlobal();
  CurrentProcess = PsGetCurrentProcess(v5);
  v7 = *((_QWORD *)this + 29);
  v8 = (struct _EPROCESS *)CurrentProcess;
  if ( v7 )
  {
    if ( CurrentProcess )
    {
      if ( *((_DWORD *)Global + 526) && *((_BYTE *)Global + 304360) )
      {
        v23 = (struct DXGGLOBAL *)((char *)Global + 2112);
        LOBYTE(v57) = 0;
        v56 = (struct _KTHREAD **)((char *)Global + 2112);
        if ( Global == (struct DXGGLOBAL *)-2112LL )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 628;
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pMutex != NULL", 628LL, 0LL, 0LL, 0LL, 0LL);
          v23 = (DXGFASTMUTEX *)v56;
        }
        if ( DXGFASTMUTEX::IsOwner(v23) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 635;
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!m_pMutex->IsOwner()", 635LL, 0LL, 0LL, 0LL, 0LL);
        }
        v24 = v56;
        KeEnterCriticalRegion();
        if ( v24[3] == KeGetCurrentThread() )
        {
          if ( *((int *)v24 + 8) <= 0 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 504;
            DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 504LL, 0LL, 0LL, 0LL, 0LL);
          }
          ++*((_DWORD *)v24 + 8);
        }
        else
        {
          if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v24 + 1, 0LL) )
          {
            if ( bTracingEnabled && *((_DWORD *)v24 + 9) != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
              McTemplateK0q_EtwWriteTransfer(v25, (__int64)"g");
            _InterlockedIncrement64((volatile signed __int64 *)v24 + 2);
            ExAcquirePushLockExclusiveEx(v24 + 1, 0LL);
          }
          if ( v24[3] )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 530;
            DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NULL == m_OwningThread", 530LL, 0LL, 0LL, 0LL, 0LL);
          }
          if ( *((_DWORD *)v24 + 8) )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 531;
            DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"0 == m_OwnerAcquireCount", 531LL, 0LL, 0LL, 0LL, 0LL);
          }
          v24[3] = KeGetCurrentThread();
          *((_DWORD *)v24 + 8) = 1;
        }
        v26 = (struct DXGGLOBAL *)((char *)Global + 2280);
        LOBYTE(v57) = 1;
        v27 = -1;
        v55 = -1;
        Length = 0LL;
        if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &Length) >= 0 )
        {
          DxgThread = (struct DXGTHREAD *)Length;
          if ( Length || (DxgThread = DxgkThreadObjectCreateDxgThread(1), (Length = (SIZE_T)DxgThread) != 0) )
          {
            v27 = *((_DWORD *)DxgThread + 14);
            v55 = v27;
          }
        }
        *((_BYTE *)v26 + 302129) = 0;
        DripsBlockerTrackingHelper::AddD0LagTimeToLastActiveEntry(v26);
        if ( *((_BYTE *)v26 + 302080) )
        {
          v53 = 0;
          if ( !(unsigned __int8)DripsBlockerTrackingHelper::ShouldIgnore(v29, v27) )
          {
            Length = 0LL;
            v62 = 0;
            Source2 = 0LL;
            v61 = 0LL;
            DripsBlockerTrackingHelper::PrepareDripsBlockerProcessName(v30, a2, v8, (char *)&Source2, 0x21u, &Length);
            v31 = Length;
            for ( i = 0; i < 0x40; ++i )
            {
              v33 = 4720LL * i;
              if ( *((_BYTE *)v26 + v33 + 104)
                && *(_QWORD *)((char *)v26 + v33) == v7
                && RtlCompareMemory((char *)v26 + v33 + 8, &Source2, v31) == v31 )
              {
                for ( j = 0LL; ; j = (unsigned int)(j + 1) )
                {
                  if ( (unsigned int)j >= *(_DWORD *)((char *)v26 + v33 + 44) )
                  {
                    v31 = Length;
                    goto LABEL_73;
                  }
                  if ( *(_DWORD *)((char *)v26 + 72 * j + v33 + 172) == v55 )
                    break;
                }
                v35 = i;
                goto LABEL_83;
              }
LABEL_73:
              ;
            }
            for ( k = 0; ; ++k )
            {
              if ( k >= 0x40 )
              {
                for ( m = 0; m < 0x40; ++m )
                {
                  v51 = (char *)v26 + 4720 * m;
                  if ( !v51[104] )
                  {
                    ++*((_DWORD *)v51 + 11);
                    v36 = v62;
                    v37 = Source2;
                    *(_QWORD *)v51 = v7;
                    v38 = v61;
                    v53 = m;
                    *(_OWORD *)(v51 + 8) = v37;
                    *(_OWORD *)(v51 + 24) = v38;
                    v51[40] = v36;
                    *((_DWORD *)v51 + 43) = v55;
                    v39 = 0;
                    v51[104] = 1;
                    *((_BYTE *)v26 + 302128) = 0;
                    goto LABEL_81;
                  }
                }
                v39 = -1073741275;
LABEL_81:
                j = 0LL;
                if ( v39 >= 0 )
                {
                  v35 = v53;
                  goto LABEL_83;
                }
                goto LABEL_90;
              }
              v49 = 4720LL * k;
              if ( *((_BYTE *)v26 + v49 + 104) )
              {
                if ( *(_QWORD *)((char *)v26 + v49) == v7 )
                {
                  v52 = RtlCompareMemory((char *)v26 + v49 + 8, &Source2, Length);
                  if ( v52 == Length )
                    break;
                }
              }
            }
            if ( *(_DWORD *)((char *)v26 + v49 + 44) >= 0x40u )
              goto LABEL_90;
            _mm_lfence();
            v35 = k;
            j = *(unsigned int *)((char *)v26 + v49 + 44);
            *(_DWORD *)((char *)v26 + v49 + 44) = j + 1;
            *(_DWORD *)((char *)v26 + 72 * j + v49 + 172) = v55;
LABEL_83:
            v40 = 4720LL * v35;
            v41 = v40 + 72 * (j + 2);
            ++*(_DWORD *)((char *)v26 + v41);
            v42 = (LARGE_INTEGER *)((char *)v26 + 72 * j + v40);
            ++v42[18].HighPart;
            v42[22].LowPart += *((_BYTE *)v26 + 302104) != 0;
            if ( *(_DWORD *)((char *)v26 + v41) == 1 )
            {
              if ( !LOBYTE(v42[14].LowPart) && !*((_BYTE *)v26 + 302104) )
              {
                v42[15] = KeQueryPerformanceCounter(0LL);
                LOBYTE(v42[14].LowPart) = 1;
              }
              if ( bTracingEnabled )
              {
                HighPart = (unsigned int)v42[21].HighPart;
                v53 = 0;
                v44 = (const wchar_t *)DripsBlockerTrackingHelper::EtwProfilerTypeName(HighPart, &v53);
                if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
                  McTemplateK0qqsz_EtwWriteTransfer(
                    (__int64)v26 + v40 + 8,
                    v45,
                    v46,
                    v35,
                    j,
                    (const char *)v26 + v40 + 8,
                    v44);
              }
            }
          }
        }
LABEL_90:
        if ( (_BYTE)v57 )
        {
          v47 = v56;
          LOBYTE(v57) = 0;
          if ( v56[3] != KeGetCurrentThread() )
          {
            WdLogSingleEntry5(0LL, 275LL, 4LL, v56, 0LL, 0LL);
            WdLogGlobalForLineNumber = 553;
          }
          if ( *((int *)v47 + 8) <= 0 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 556;
            DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 556LL, 0LL, 0LL, 0LL, 0LL);
          }
          v14 = (*((_DWORD *)v47 + 8))-- == 1;
          if ( v14 )
          {
            v47[3] = 0LL;
            ExReleasePushLockExclusiveEx(v47 + 1, 0LL);
          }
          KeLeaveCriticalRegion();
        }
      }
    }
    else
    {
      WdLogSingleEntry0(4LL);
      WdLogGlobalForLineNumber = 510;
    }
  }
  else
  {
    WdLogSingleEntry0(4LL);
    WdLogGlobalForLineNumber = 504;
  }
  v9 = 0;
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)this + 104, 0LL) )
  {
    if ( bTracingEnabled && *((_DWORD *)this + 32) != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0q_EtwWriteTransfer(v10, (__int64)"g");
    ExAcquirePushLockSharedEx((char *)this + 104, 0LL);
  }
  _InterlockedIncrement((volatile signed __int32 *)this + 30);
  if ( *((_DWORD *)this + 40) == 1 )
  {
    LODWORD(v56) = -1;
    v57 = 0LL;
    if ( (qword_1401664C0 & 2) != 0 )
    {
      v58 = 1;
      LODWORD(v56) = 8013;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v10, (__int64)&EventProfilerEnter);
    }
    else
    {
      v58 = 0;
    }
    DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v56, 8013);
    DXGPUSHLOCK::AcquireShared((DXGADAPTER *)((char *)this + 72));
    if ( *((_DWORD *)this + 50) == 1 )
    {
      v20 = DXGGLOBAL::GetGlobal();
      v22 = (struct _EPROCESS *)PsGetCurrentProcess(v21);
      DXGGLOBAL::AddWakeUpCoreDripsBlockerTracking(v20, *((_QWORD *)this + 29), v22);
      DpiRequestDevicePowerState(*((_QWORD *)this + 27), 1, 0);
    }
    _InterlockedDecrement((volatile signed __int32 *)this + 22);
    ExReleasePushLockSharedEx((char *)this + 72, 0LL);
    KeLeaveCriticalRegion();
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v56);
    if ( v58 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v16, (__int64)&EventProfilerExit);
    v9 = 1;
  }
  else
  {
    v11 = *((_QWORD *)this + 27);
    if ( v11 )
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v11 + 64) + 4232LL));
  }
  _InterlockedDecrement((volatile signed __int32 *)this + 30);
  ExReleasePushLockSharedEx((char *)this + 104, 0LL);
  KeLeaveCriticalRegion();
  if ( bTracingEnabled
    && (qword_1401664C0 & 0x1000000) != 0
    && (qword_1401664C0 & 0x2000) == 0
    && (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000000LL) != 0 )
  {
    McTemplateK0pt_EtwWriteTransfer((__int64)&DxgkControlGuid_Context, (__int64)&EventPreAcquireAdapterLock);
  }
  if ( !ExAcquireResourceSharedLite(*((PERESOURCE *)this + 21), 0) )
  {
    DXGDEADLOCK_TRACKER::DXGDEADLOCK_TRACKER((DXGDEADLOCK_TRACKER *)v59, this, v9);
    ExAcquireResourceSharedLite(*((PERESOURCE *)this + 21), 1u);
    DXGDEADLOCK_TRACKER::~DXGDEADLOCK_TRACKER((DXGDEADLOCK_TRACKER *)v59);
  }
  *((_DWORD *)this + 1241) = 0;
  v12 = -1;
  Length = 0LL;
  if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &Length) >= 0 )
  {
    v13 = (ReferenceCounted *)Length;
    if ( Length )
    {
LABEL_21:
      v12 = *((_DWORD *)v13 + 14);
      goto LABEL_22;
    }
    v17 = (char *)ExAllocateFromLookasideListEx(&g_DxgkThreadLookasideList);
    v13 = (ReferenceCounted *)v17;
    if ( v17 )
    {
      *((_QWORD *)v17 + 3) = 0LL;
      *(_QWORD *)v17 = &rc_buffer<DispBroker::AlpcRequest<7>>::`vftable';
      *((_DWORD *)v17 + 2) = 1;
      *(_QWORD *)v17 = &DXGTHREAD::`vftable';
      *((_QWORD *)v17 + 5) = &DXGTHREAD::m_LockOrderTrackerUpperBound;
      strcpy(v17 + 32, "DxgT");
      *((_QWORD *)v17 + 6) = 0LL;
      *((_DWORD *)v17 + 14) = -1;
      *((_QWORD *)v17 + 2) = KeGetCurrentThread();
      v18 = PsTlsSetValue(g_DxgkThreadTlsId, v17);
      v19 = v18;
      if ( v18 >= 0 )
      {
        ++dword_140168C48;
        ++dword_140168C40;
        goto LABEL_41;
      }
      ReferenceCounted::Release(v13);
      WdLogSingleEntry2(2LL, v13, v19);
      WdLogGlobalForLineNumber = 531;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to set thread PsTls for DXGTHREAD 0xI64x (Status = 0xI64x).",
        (__int64)v13,
        v19,
        0LL,
        0LL,
        0LL);
    }
    else
    {
      WdLogSingleEntry1(6LL);
      WdLogGlobalForLineNumber = 514;
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Failed to allocate DXGTHREAD for thread 0xI64x.",
        (__int64)KeGetCurrentThread(),
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v13 = 0LL;
LABEL_41:
    Length = (SIZE_T)v13;
    if ( !v13 )
      goto LABEL_22;
    goto LABEL_21;
  }
LABEL_22:
  v14 = bTracingEnabled == 0;
  *((_DWORD *)this + 1242) = v12;
  if ( !v14
    && (qword_1401664C0 & 0x1000000) != 0
    && (qword_1401664C0 & 0x2000) == 0
    && (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000000LL) != 0 )
  {
    McTemplateK0pt_EtwWriteTransfer((__int64)&DxgkControlGuid_Context, (__int64)&EventPostAcquireAdapterLock);
  }
  if ( *((_DWORD *)this + 50) == 1 )
  {
    v15 = *(_QWORD *)(*((_QWORD *)this + 27) + 64LL);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v15 + 4232), 0xFFFFFFFF) == 1 )
      DpiScheduleDelayedDevicePowerRequiredAtPassiveLevel(v15);
  }
}
