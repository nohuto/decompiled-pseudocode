/*
 * XREFs of ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x14000E320
 * Callers:
 *     ?WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x14000BB9C (-WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAII@Z @ 0x14004AB54 (-ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAII@Z.c)
 *     ?Acquire@DXGPRESENTMUTEX@@QEAAXXZ @ 0x1400633FC (-Acquire@DXGPRESENTMUTEX@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGADAPTERLISTLOCK@@QEAAXXZ @ 0x14007BD9C (-AcquireExclusive@DXGADAPTERLISTLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGADAPTERLISTLOCK@@QEAAXXZ @ 0x14007BDD0 (-AcquireShared@DXGADAPTERLISTLOCK@@QEAAXXZ.c)
 *     ?GetHostHandle@DXGKEYEDMUTEX@@QEAAII@Z @ 0x14018B1F4 (-GetHostHandle@DXGKEYEDMUTEX@@QEAAII@Z.c)
 *     ?GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z @ 0x140193010 (-GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z.c)
 *     ?Destroy@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1401A2A70 (-Destroy@ADAPTER_DISPLAY@@QEAAXXZ.c)
 *     ?Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1401A4780 (-Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?Stop@ADAPTER_DISPLAY@@QEAAXE@Z @ 0x1401A4E2C (-Stop@ADAPTER_DISPLAY@@QEAAXE@Z.c)
 *     ?Stop@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1401A9B50 (-Stop@ADAPTER_RENDER@@QEAAXEE@Z.c)
 *     DxgkSetIndirectDisplayHostProcess @ 0x1401AA7D4 (DxgkSetIndirectDisplayHostProcess.c)
 *     ?DrtTestSignalEventCb@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z @ 0x1401D52B0 (-DrtTestSignalEventCb@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z.c)
 *     ?DelayDestroyAdapterWork@DXGGLOBAL@@SAXPEAX@Z @ 0x1401DCBB0 (-DelayDestroyAdapterWork@DXGGLOBAL@@SAXPEAX@Z.c)
 *     ?ReleaseAdapterOrdinal@DXGGLOBAL@@QEAAXK@Z @ 0x1401DF9E8 (-ReleaseAdapterOrdinal@DXGGLOBAL@@QEAAXK@Z.c)
 *     ?InitializeForUserModeSubmission@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUEFORUSERMODESUBMISSION@@@Z @ 0x1401E2F50 (-InitializeForUserModeSubmission@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUEFORUSERMODESUBMISSION.c)
 *     ?DxgkWslProcessCleanup@@YAXPEAU_EPROCESS@@@Z @ 0x1401F5A30 (-DxgkWslProcessCleanup@@YAXPEAU_EPROCESS@@@Z.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z @ 0x1401FE008 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z.c)
 *     ?FreeHostHandle@DXGKEYEDMUTEX@@QEAAXI@Z @ 0x1401FE298 (-FreeHostHandle@DXGKEYEDMUTEX@@QEAAXI@Z.c)
 *     ?FreeHostHandle@DXGSYNCOBJECT@@QEAAXI@Z @ 0x1401FE314 (-FreeHostHandle@DXGSYNCOBJECT@@QEAAXI@Z.c)
 *     ?SetHostHandle@DXGKEYEDMUTEX@@QEAAJII@Z @ 0x1401FE66C (-SetHostHandle@DXGKEYEDMUTEX@@QEAAJII@Z.c)
 *     ?SetHostHandle@DXGSYNCOBJECT@@QEAAJII@Z @ 0x1401FE770 (-SetHostHandle@DXGSYNCOBJECT@@QEAAJII@Z.c)
 *     ?Update@MonitoredFenceHelper@@QEAAJPEAVDXGDEVICE@@_K1@Z @ 0x14020B198 (-Update@MonitoredFenceHelper@@QEAAJPEAVDXGDEVICE@@_K1@Z.c)
 *     ?NotifyChannelPostStarted@DXGVMBUSCHANNEL@@QEAAXXZ @ 0x140213018 (-NotifyChannelPostStarted@DXGVMBUSCHANNEL@@QEAAXXZ.c)
 *     ?ResetVirtualFunction@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_RESETVIRTUALFUNCTION@@@Z @ 0x140215B4C (-ResetVirtualFunction@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_RESETVIRTUALFUNC.c)
 *     ?VmBusCreateProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140224650 (-VmBusCreateProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z @ 0x1402ACDEC (-DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z.c)
 *     ?CreatePeriodicFrameNotification@DXGSYNCOBJECT@@QEAAJPEAVDXGADAPTER@@00_KI@Z @ 0x1402BDF10 (-CreatePeriodicFrameNotification@DXGSYNCOBJECT@@QEAAJPEAVDXGADAPTER@@00_KI@Z.c)
 *     ?DmmCheckMonitorPowerState@@YAJPEAXI@Z @ 0x1402C49D8 (-DmmCheckMonitorPowerState@@YAJPEAXI@Z.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1402CA65C (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     ?ReportState@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1402E65EC (-ReportState@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1402E7F14 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?DmmGetNextVideoPresentTarget@@YAJQEAXIPEAI@Z @ 0x1403407AC (-DmmGetNextVideoPresentTarget@@YAJQEAXIPEAI@Z.c)
 *     ?DmmIsTargetForceable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1403409F4 (-DmmIsTargetForceable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 *     ?Initialize@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z @ 0x14034F800 (-Initialize@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z.c)
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@_NPEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@PEAU_D3DDDI_NATIVEFENCEINFO@@PEAE@Z @ 0x1403511A0 (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 *     ?InitializeAdapterObject@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@PEAVDXGDEVICE@@PEAVDXGPAGINGQUEUE@@PEAEI_N4@Z @ 0x140351D48 (-InitializeAdapterObject@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@PEAVDXGDEVICE@@PEAVDXGPAG.c)
 *     DxgkAcquireHandleDataCB @ 0x140361780 (DxgkAcquireHandleDataCB.c)
 *     ?RemoveAllocationFromList@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@H@Z @ 0x140373234 (-RemoveAllocationFromList@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@H@Z.c)
 *     ??1DXGADAPTERSYNCOBJECT@@QEAA@XZ @ 0x14037B2A8 (--1DXGADAPTERSYNCOBJECT@@QEAA@XZ.c)
 *     ?QueueSerializedWorkItem@CSERIALIZEDWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z @ 0x14037C1C0 (-QueueSerializedWorkItem@CSERIALIZEDWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z.c)
 *     ?CreateKeyedMutex@DXGGLOBAL@@QEAAJ_KU_D3DKMT_CREATEKEYEDMUTEX2_FLAGS@@IPEAPEAVDXGKEYEDMUTEX@@@Z @ 0x1403DBCBC (-CreateKeyedMutex@DXGGLOBAL@@QEAAJ_KU_D3DKMT_CREATEKEYEDMUTEX2_FLAGS@@IPEAPEAVDXGKEYEDMUTEX@@@Z.c)
 *     ?DxgkpDriverKnownEscape@@YAJPEAVDXGPROCESS@@PEAVDXGADAPTER@@PEAXIPEAE@Z @ 0x1403E92C0 (-DxgkpDriverKnownEscape@@YAJPEAVDXGPROCESS@@PEAVDXGADAPTER@@PEAXIPEAE@Z.c)
 *     ?AcquireOpmI2CSync@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1403EAB00 (-AcquireOpmI2CSync@ADAPTER_DISPLAY@@QEAAXXZ.c)
 *     ?DestroyKeyedMutex@DXGGLOBAL@@QEAAXPEAVDXGKEYEDMUTEX@@@Z @ 0x140403218 (-DestroyKeyedMutex@DXGGLOBAL@@QEAAXPEAVDXGKEYEDMUTEX@@@Z.c)
 *     ?SerializedQueueWorker@CSERIALIZEDWORKQUEUE@@SAXPEAX0PEAU_IO_WORKITEM@@@Z @ 0x14040E3F0 (-SerializedQueueWorker@CSERIALIZEDWORKQUEUE@@SAXPEAX0PEAU_IO_WORKITEM@@@Z.c)
 *     ?Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x140416A0C (-Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14042EA78 (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS.c)
 *     ?ValidateDestroyAllocation@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEBIIPEAPEAVDXGALLOCATION@@PEAPEAVDXGRESOURCE@@@Z @ 0x140432540 (-ValidateDestroyAllocation@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEBIIPEAPEAVDXGALLOCATION@@PEAPEA.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x14000E53C (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 */

void __fastcall DXGFASTMUTEX::Acquire(DXGFASTMUTEX *this)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  int v11; // edx
  int v12; // ecx
  int v13; // r8d

  KeEnterCriticalRegion();
  if ( *((struct _KTHREAD **)this + 3) == KeGetCurrentThread() )
  {
    if ( *((int *)this + 8) <= 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 504;
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v12,
            v11,
            v13,
            0,
            2,
            -1,
            (__int64)L"m_OwnerAcquireCount > 0",
            504LL,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
    ++*((_DWORD *)this + 8);
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)this + 8, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v4 = *((unsigned int *)this + 9);
        if ( (_DWORD)v4 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v2, "g", v3, v4);
      }
      _InterlockedIncrement64((volatile signed __int64 *)this + 2);
      ExAcquirePushLockExclusiveEx((char *)this + 8, 0LL);
    }
    if ( *((_QWORD *)this + 3) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 530;
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v6,
            v5,
            v7,
            0,
            2,
            -1,
            (__int64)L"NULL == m_OwningThread",
            530LL,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
    if ( *((_DWORD *)this + 8) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 531;
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v9,
            v8,
            v10,
            0,
            2,
            -1,
            (__int64)L"0 == m_OwnerAcquireCount",
            531LL,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
    *((_QWORD *)this + 3) = KeGetCurrentThread();
    *((_DWORD *)this + 8) = 1;
  }
}
