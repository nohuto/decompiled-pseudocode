/*
 * XREFs of ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x14000A800
 * Callers:
 *     ?Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z @ 0x140005E2C (-Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z.c)
 *     ?Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z @ 0x140006830 (-Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z.c)
 *     ?EnqueueWorker@FxSystemWorkItem@@AEAAEP6AXPEAX@Z0E@Z @ 0x140007938 (-EnqueueWorker@FxSystemWorkItem@@AEAAEP6AXPEAX@Z0E@Z.c)
 *     imp_WdfRequestMarkCancelableEx @ 0x1400093E0 (imp_WdfRequestMarkCancelableEx.c)
 *     ?RequestCancelable@FxIoQueue@@QEAAJPEAVFxRequest@@EP6AXPEAUWDFREQUEST__@@@ZE@Z @ 0x14000A2A0 (-RequestCancelable@FxIoQueue@@QEAAJPEAVFxRequest@@EP6AXPEAUWDFREQUEST__@@@ZE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14000A7C0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     imp_WdfCollectionGetCount @ 0x14000AB80 (imp_WdfCollectionGetCount.c)
 *     ?DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z @ 0x14000BD20 (-DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z.c)
 *     ?DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z @ 0x14000D2C0 (-DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z.c)
 *     imp_WdfDeviceWdmDispatchIrpToIoQueue @ 0x14000EBE0 (imp_WdfDeviceWdmDispatchIrpToIoQueue.c)
 *     ?GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z @ 0x140011D60 (-GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z.c)
 *     ?Submit@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z @ 0x140029BA0 (-Submit@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z.c)
 *     imp_WdfRequestSend @ 0x140029C80 (imp_WdfRequestSend.c)
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x14002A290 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     ?Release@FxRequest@@UEAAKPEAXJPEBD@Z @ 0x14002DF70 (-Release@FxRequest@@UEAAKPEAXJPEBD@Z.c)
 *     imp_WdfCollectionRemove @ 0x14002E750 (imp_WdfCollectionRemove.c)
 *     ?ResubmitRepeater@FxUsbPipeContinuousReader@@QEAAKPEAUFxUsbPipeRepeatReader@@PEAJ@Z @ 0x14002EA78 (-ResubmitRepeater@FxUsbPipeContinuousReader@@QEAAKPEAUFxUsbPipeRepeatReader@@PEAJ@Z.c)
 *     ?EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z @ 0x14002F7F0 (-EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z.c)
 *     ?ForwardRequest@FxIoQueue@@QEAAJPEAV1@PEAVFxRequest@@@Z @ 0x14002FF74 (-ForwardRequest@FxIoQueue@@QEAAJPEAV1@PEAVFxRequest@@@Z.c)
 *     ?ForwardRequestWorker@FxIoQueue@@QEAAJPEAVFxRequest@@PEAV1@@Z @ 0x140030910 (-ForwardRequestWorker@FxIoQueue@@QEAAJPEAVFxRequest@@PEAV1@@Z.c)
 *     imp_WdfRequestForwardToIoQueue @ 0x140032D80 (imp_WdfRequestForwardToIoQueue.c)
 *     ?QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1400336A0 (-QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1400339D0 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1400353F0 (-DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x140036010 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     ?PostProcessSendAndForget@FxRequest@@QEAAXXZ @ 0x140037FB0 (-PostProcessSendAndForget@FxRequest@@QEAAXXZ.c)
 *     ?_QueryAllData@FxWmiIrpHandler@@CAJPEAV1@PEAU_IRP@@PEAVFxWmiProvider@@PEAVFxWmiInstance@@@Z @ 0x14003E040 (-_QueryAllData@FxWmiIrpHandler@@CAJPEAV1@PEAU_IRP@@PEAVFxWmiProvider@@PEAVFxWmiInstance@@@Z.c)
 *     ?ResumeProcessingForPower@FxPkgIo@@QEAAJXZ @ 0x1400436CC (-ResumeProcessingForPower@FxPkgIo@@QEAAJXZ.c)
 *     ?StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z @ 0x140045920 (-StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z.c)
 *     ?RequestCompletionRoutine@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z @ 0x140047D00 (-RequestCompletionRoutine@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z.c)
 *     ?_RequestCompletionRoutine@FxIoTarget@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1400481E0 (-_RequestCompletionRoutine@FxIoTarget@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x140048B50 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?OnClose@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x140049910 (-OnClose@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?OnCleanup@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x14004A0A0 (-OnCleanup@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?FlushAllQueuesByFileObject@FxPkgIo@@QEAAJPEAU_FILE_OBJECT@@@Z @ 0x14004A538 (-FlushAllQueuesByFileObject@FxPkgIo@@QEAAJPEAU_FILE_OBJECT@@@Z.c)
 *     ?_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@PEAPEAV1@@Z @ 0x14004AAC0 (-_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@.c)
 *     imp_WdfDeviceGetFileObject @ 0x14004B200 (imp_WdfDeviceGetFileObject.c)
 *     imp_WdfRequestGetFileObject @ 0x14004B5F0 (imp_WdfRequestGetFileObject.c)
 *     ?_DestroyFileObject@FxFileObject@@SAXPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@@Z @ 0x14004BA64 (-_DestroyFileObject@FxFileObject@@SAXPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@@Z.c)
 *     ?QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x14004DD20 (-QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 *     ?QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x14004E7B8 (-QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 *     ?_IrpCancelForDriver@FxIoQueue@@KAXPEAVFxIrpQueue@@PEAU_IRP@@PEAU_IO_CSQ_IRP_CONTEXT@@E@Z @ 0x14004F180 (-_IrpCancelForDriver@FxIoQueue@@KAXPEAVFxIrpQueue@@PEAU_IRP@@PEAU_IO_CSQ_IRP_CONTEXT@@E@Z.c)
 *     ?DispatchInternalEvents@FxIoQueue@@QEAAXE@Z @ 0x14004F320 (-DispatchInternalEvents@FxIoQueue@@QEAAXE@Z.c)
 *     ?QueueDriverCreatedRequest@FxIoQueue@@QEAAJPEAVFxRequest@@E@Z @ 0x14004F760 (-QueueDriverCreatedRequest@FxIoQueue@@QEAAJPEAVFxRequest@@E@Z.c)
 *     ?GetDeviceControlOutputMemoryObject@FxRequest@@QEAAJPEAPEAVIFxMemory@@PEAPEAXPEA_K@Z @ 0x140050D70 (-GetDeviceControlOutputMemoryObject@FxRequest@@QEAAJPEAPEAVIFxMemory@@PEAPEAXPEA_K@Z.c)
 *     ?GetMemoryObject@FxRequest@@QEAAJPEAPEAVIFxMemory@@PEAPEAXPEA_K@Z @ 0x140051500 (-GetMemoryObject@FxRequest@@QEAAJPEAPEAVIFxMemory@@PEAPEAXPEA_K@Z.c)
 *     imp_WdfRequestUnmarkCancelable @ 0x1400539E0 (imp_WdfRequestUnmarkCancelable.c)
 *     ?RequestCompletedCallback@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x140057060 (-RequestCompletedCallback@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     ?Dispatch@FxWmiIrpHandler@@UEAAJPEAU_IRP@@@Z @ 0x1400587F0 (-Dispatch@FxWmiIrpHandler@@UEAAJPEAU_IRP@@@Z.c)
 *     imp_WdfTimerStart @ 0x140059FC0 (imp_WdfTimerStart.c)
 *     ?WorkItemHandler@FxWorkItem@@AEAAXXZ @ 0x14005A4B0 (-WorkItemHandler@FxWorkItem@@AEAAXXZ.c)
 *     ?Enqueue@FxWorkItem@@QEAAXXZ @ 0x14005AE7C (-Enqueue@FxWorkItem@@QEAAXXZ.c)
 *     ?WorkItemHandler@FxSystemWorkItem@@AEAAXXZ @ 0x14005CE88 (-WorkItemHandler@FxSystemWorkItem@@AEAAXXZ.c)
 *     imp_WdfCollectionGetItem @ 0x14005E1B0 (imp_WdfCollectionGetItem.c)
 *     imp_WdfCollectionAdd @ 0x14005E390 (imp_WdfCollectionAdd.c)
 *     imp_WdfCollectionGetFirstItem @ 0x14005F680 (imp_WdfCollectionGetFirstItem.c)
 *     ?DeferredDispatchRequestsFromWorkerThread@FxIoQueue@@QEAAXXZ @ 0x14006223C (-DeferredDispatchRequestsFromWorkerThread@FxIoQueue@@QEAAXXZ.c)
 *     ?Unlock@FxCallbackSpinLock@@UEAAXE@Z @ 0x140062550 (-Unlock@FxCallbackSpinLock@@UEAAXE@Z.c)
 *     ?Unlock@FxCallbackMutexLock@@UEAAXE@Z @ 0x1400625B0 (-Unlock@FxCallbackMutexLock@@UEAAXE@Z.c)
 *     ?ProcessPowerEvents@FxIoQueue@@AEAAEPEAE@Z @ 0x140062DF4 (-ProcessPowerEvents@FxIoQueue@@AEAAEPEAE@Z.c)
 *     imp_WdfCollectionRemoveItem @ 0x140065760 (imp_WdfCollectionRemoveItem.c)
 *     ?Dispose@FxWorkItem@@UEAAEXZ @ 0x1400667A0 (-Dispose@FxWorkItem@@UEAAEXZ.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x14000642C (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_qqq @ 0x140039C38 (WPP_IFR_SF_qqq.c)
 *     WPP_IFR_SF_q @ 0x1400488BC (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_ @ 0x14004B128 (WPP_IFR_SF_.c)
 *     ?GetThreadTableEntry@FxVerifierLock@@SAPEAUFxVerifierThreadTableEntry@@PEAU_KTHREAD@@PEAV1@E@Z @ 0x140074A44 (-GetThreadTableEntry@FxVerifierLock@@SAPEAUFxVerifierThreadTableEntry@@PEAU_KTHREAD@@PEAV1@E@Z.c)
 *     ?ReleaseOrReplaceThreadTableEntry@FxVerifierLock@@SAXPEAU_KTHREAD@@PEAV1@@Z @ 0x14007A0E0 (-ReleaseOrReplaceThreadTableEntry@FxVerifierLock@@SAXPEAU_KTHREAD@@PEAV1@@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140083568 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxVerifierLock::Unlock(FxVerifierLock *this, KIRQL PreviousIrql, unsigned __int8 a3)
{
  struct _KTHREAD *_a1; // rbp
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  KIRQL v7; // r13
  FxVerifierThreadTableEntry *ThreadTableEntry; // rax
  FxVerifierThreadTableEntry *_a2; // r14
  FxVerifierLock *PerThreadPassiveLockList; // rcx
  FxVerifierLock *i; // rdi
  unsigned __int16 v12; // r9
  FxVerifierLock *j; // rdi
  _LARGE_INTEGER sleepTime; // [rsp+70h] [rbp+8h] BYREF

  _a1 = KeGetCurrentThread();
  m_Globals = this->m_Globals;
  if ( _a1 != this->m_OwningThread )
  {
    WPP_IFR_SF_qqq(m_Globals, 2u, 0x12u, 0xBu, WPP_FxVerifierLock_cpp_Traceguids, _a1, this, this->m_ParentObject);
    FxVerifierDbgBreakPoint(m_Globals);
    return;
  }
  v7 = KeAcquireSpinLockRaiseToDpc(&m_Globals->ThreadTableLock.m_Lock);
  ThreadTableEntry = FxVerifierLock::GetThreadTableEntry(this->m_OwningThread, this, 1u);
  _a2 = ThreadTableEntry;
  if ( !ThreadTableEntry )
  {
    WPP_IFR_SF_q(m_Globals, 2u, 0x12u, 0xCu, WPP_FxVerifierLock_cpp_Traceguids, _a1);
    goto LABEL_5;
  }
  if ( this->m_UseMutex )
  {
    PerThreadPassiveLockList = ThreadTableEntry->PerThreadPassiveLockList;
    if ( !PerThreadPassiveLockList )
    {
      WPP_IFR_SF_(m_Globals, 2u, 0x12u, 0xDu, WPP_FxVerifierLock_cpp_Traceguids);
      WPP_IFR_SF_qq(m_Globals, 2u, 0x12u, 0xEu, WPP_FxVerifierLock_cpp_Traceguids, this, _a2);
      FxVerifierDbgBreakPoint(m_Globals);
      this->m_OwningThread = 0LL;
      KeReleaseSpinLock(&m_Globals->ThreadTableLock.m_Lock, v7);
      goto LABEL_12;
    }
    if ( PerThreadPassiveLockList == this )
    {
      ThreadTableEntry->PerThreadPassiveLockList = this->m_OwnedLink;
LABEL_25:
      this->m_OwnedLink = 0LL;
      FxVerifierLock::ReleaseOrReplaceThreadTableEntry(_a1, this);
      goto LABEL_5;
    }
    for ( i = PerThreadPassiveLockList->m_OwnedLink; i; i = i->m_OwnedLink )
    {
      if ( i == this )
        goto LABEL_20;
      PerThreadPassiveLockList = i;
    }
    v12 = 17;
    goto LABEL_32;
  }
  PerThreadPassiveLockList = ThreadTableEntry->PerThreadDispatchLockList;
  if ( PerThreadPassiveLockList )
  {
    if ( PerThreadPassiveLockList == this )
    {
      ThreadTableEntry->PerThreadDispatchLockList = this->m_OwnedLink;
      goto LABEL_25;
    }
    for ( j = PerThreadPassiveLockList->m_OwnedLink; j; j = j->m_OwnedLink )
    {
      if ( j == this )
      {
LABEL_20:
        PerThreadPassiveLockList->m_OwnedLink = this->m_OwnedLink;
        this->m_OwnedLink = 0LL;
        FxVerifierLock::ReleaseOrReplaceThreadTableEntry(_a1, this);
        goto LABEL_5;
      }
      PerThreadPassiveLockList = j;
    }
    v12 = 18;
LABEL_32:
    WPP_IFR_SF_qqq(
      m_Globals,
      2u,
      0x12u,
      v12,
      WPP_FxVerifierLock_cpp_Traceguids,
      this,
      ThreadTableEntry,
      this->m_OwningThread);
    FxVerifierDbgBreakPoint(m_Globals);
LABEL_5:
    this->m_OwningThread = 0LL;
    KeReleaseSpinLock(&m_Globals->ThreadTableLock.m_Lock, v7);
    if ( !this->m_UseMutex )
      goto LABEL_6;
LABEL_12:
    ExReleaseFastMutexUnsafe(&this->m_Mutex.m_Lock);
    KeLeaveCriticalRegion();
    return;
  }
  WPP_IFR_SF_(m_Globals, 2u, 0x12u, 0xFu, WPP_FxVerifierLock_cpp_Traceguids);
  WPP_IFR_SF_qq(m_Globals, 2u, 0x12u, 0x10u, WPP_FxVerifierLock_cpp_Traceguids, this, _a2);
  FxVerifierDbgBreakPoint(m_Globals);
  this->m_OwningThread = 0LL;
  KeReleaseSpinLock(&m_Globals->ThreadTableLock.m_Lock, v7);
LABEL_6:
  KeReleaseSpinLock(&this->m_Lock.m_Lock, PreviousIrql);
  if ( !KeGetCurrentIrql() )
  {
    sleepTime.QuadPart = 0LL;
    KeDelayExecutionThread(0, 1u, &sleepTime);
  }
}
