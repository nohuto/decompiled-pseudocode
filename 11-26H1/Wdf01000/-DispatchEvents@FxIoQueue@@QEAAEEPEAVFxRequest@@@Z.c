/*
 * XREFs of ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1400339D0
 * Callers:
 *     ?DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z @ 0x14000BD20 (-DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z.c)
 *     ?DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z @ 0x14000D2C0 (-DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z.c)
 *     imp_WdfDeviceWdmDispatchIrpToIoQueue @ 0x14000EBE0 (imp_WdfDeviceWdmDispatchIrpToIoQueue.c)
 *     ?Release@FxRequest@@UEAAKPEAXJPEBD@Z @ 0x14002DF70 (-Release@FxRequest@@UEAAKPEAXJPEBD@Z.c)
 *     ?EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z @ 0x14002F7F0 (-EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z.c)
 *     ?ForwardRequest@FxIoQueue@@QEAAJPEAV1@PEAVFxRequest@@@Z @ 0x14002FF74 (-ForwardRequest@FxIoQueue@@QEAAJPEAV1@PEAVFxRequest@@@Z.c)
 *     ?ForwardRequestWorker@FxIoQueue@@QEAAJPEAVFxRequest@@PEAV1@@Z @ 0x140030910 (-ForwardRequestWorker@FxIoQueue@@QEAAJPEAVFxRequest@@PEAV1@@Z.c)
 *     imp_WdfRequestForwardToIoQueue @ 0x140032D80 (imp_WdfRequestForwardToIoQueue.c)
 *     ?QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1400336A0 (-QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x140036010 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     ?PostProcessSendAndForget@FxRequest@@QEAAXXZ @ 0x140037FB0 (-PostProcessSendAndForget@FxRequest@@QEAAXXZ.c)
 *     ?ResumeProcessingForPower@FxPkgIo@@QEAAJXZ @ 0x1400436CC (-ResumeProcessingForPower@FxPkgIo@@QEAAJXZ.c)
 *     ?StopProcessingForPower@FxIoQueue@@QEAAXW4FxIoStopProcessingForPowerAction@@@Z @ 0x140045B54 (-StopProcessingForPower@FxIoQueue@@QEAAXW4FxIoStopProcessingForPowerAction@@@Z.c)
 *     ?StartPowerTransitionOff@FxIoQueue@@QEAAXXZ @ 0x140045E24 (-StartPowerTransitionOff@FxIoQueue@@QEAAXXZ.c)
 *     ?FlushAllQueuesByFileObject@FxPkgIo@@QEAAJPEAU_FILE_OBJECT@@@Z @ 0x14004A538 (-FlushAllQueuesByFileObject@FxPkgIo@@QEAAJPEAU_FILE_OBJECT@@@Z.c)
 *     ?QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x14004DD20 (-QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 *     ?Dispose@FxIoQueue@@UEAAEXZ @ 0x14004E540 (-Dispose@FxIoQueue@@UEAAEXZ.c)
 *     ?QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x14004E7B8 (-QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 *     ?DispatchInternalEvents@FxIoQueue@@QEAAXE@Z @ 0x14004F320 (-DispatchInternalEvents@FxIoQueue@@QEAAXE@Z.c)
 *     ?QueueDriverCreatedRequest@FxIoQueue@@QEAAJPEAVFxRequest@@E@Z @ 0x14004F760 (-QueueDriverCreatedRequest@FxIoQueue@@QEAAJPEAVFxRequest@@E@Z.c)
 *     ?Requeue@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x14004FE20 (-Requeue@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?RequestCompletedCallback@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x140057060 (-RequestCompletedCallback@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     ?QueueStart@FxIoQueue@@QEAAXXZ @ 0x1400611DC (-QueueStart@FxIoQueue@@QEAAXXZ.c)
 *     ?DeferredDispatchRequestsFromWorkerThread@FxIoQueue@@QEAAXXZ @ 0x14006223C (-DeferredDispatchRequestsFromWorkerThread@FxIoQueue@@QEAAXXZ.c)
 *     ?DeferredDispatchRequestsFromDpc@FxIoQueue@@QEAAXXZ @ 0x1400714AC (-DeferredDispatchRequestsFromDpc@FxIoQueue@@QEAAXXZ.c)
 *     ?ReadyNotify@FxIoQueue@@QEAAJP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x140073A94 (-ReadyNotify@FxIoQueue@@QEAAJP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 * Callees:
 *     ?ProcessCancelledRequestsOnQueue@FxIoQueue@@AEAAEPEAE@Z @ 0x140005618 (-ProcessCancelledRequestsOnQueue@FxIoQueue@@AEAAEPEAE@Z.c)
 *     WPP_IFR_SF_qcq @ 0x140005A8C (WPP_IFR_SF_qcq.c)
 *     WPP_IFR_SF_qq @ 0x14000642C (WPP_IFR_SF_qq.c)
 *     ?EnqueueWorker@FxSystemWorkItem@@AEAAEP6AXPEAX@Z0E@Z @ 0x140007938 (-EnqueueWorker@FxSystemWorkItem@@AEAAEP6AXPEAX@Z0E@Z.c)
 *     ?Invoke@FxIoQueueIoState@@QEAAXPEAUWDFQUEUE__@@PEAX@Z @ 0x1400088E0 (-Invoke@FxIoQueueIoState@@QEAAXPEAUWDFQUEUE__@@PEAX@Z.c)
 *     ?IsVerificationEnabled@_FX_DRIVER_GLOBALS@@QEAAEKKW4FxVerifierDownlevelOption@@@Z @ 0x140008960 (-IsVerificationEnabled@_FX_DRIVER_GLOBALS@@QEAAEKKW4FxVerifierDownlevelOption@@@Z.c)
 *     ?ProcessCancelledRequests@FxIoQueue@@AEAAEPEAE@Z @ 0x140008A18 (-ProcessCancelledRequests@FxIoQueue@@AEAAEPEAE@Z.c)
 *     ?ProcessPurgeComplete@FxIoQueue@@AEAAXPEAE@Z @ 0x140008BA8 (-ProcessPurgeComplete@FxIoQueue@@AEAAXPEAE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14000A7C0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x14000A800 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x14000AD10 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14000AD58 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1400205B8 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?InsertNewRequest@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z @ 0x140031030 (-InsertNewRequest@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z.c)
 *     ?InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z @ 0x1400312A0 (-InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z.c)
 *     ?SetTransitionFromEmpty@FxIoQueue@@AEAAXXZ @ 0x140031FD0 (-SetTransitionFromEmpty@FxIoQueue@@AEAAXXZ.c)
 *     WPP_IFR_SF_qqLL @ 0x1400328C0 (WPP_IFR_SF_qqLL.c)
 *     ?DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1400353F0 (-DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     WPP_IFR_SF_q @ 0x1400488BC (WPP_IFR_SF_q.c)
 *     ?CompleteWithInformation@FxRequest@@QEAAJJ_K@Z @ 0x14004F374 (-CompleteWithInformation@FxRequest@@QEAAJJ_K@Z.c)
 *     ?ReleaseAndRestore@FxIoContext@@UEAAXPEAVFxRequestBase@@@Z @ 0x1400573E0 (-ReleaseAndRestore@FxIoContext@@UEAAXPEAVFxRequestBase@@@Z.c)
 *     WPP_IFR_SF_qL @ 0x140059D40 (WPP_IFR_SF_qL.c)
 *     ?StoreAndReferenceMemory@FxRequestContext@@UEAAXPEAUFxRequestBuffer@@@Z @ 0x14005C350 (-StoreAndReferenceMemory@FxRequestContext@@UEAAXPEAUFxRequestBuffer@@@Z.c)
 *     ?CopyParameters@FxIoContext@@UEAAXPEAVFxRequestBase@@@Z @ 0x140061CB0 (-CopyParameters@FxIoContext@@UEAAXPEAVFxRequestBase@@@Z.c)
 *     ?ProcessPowerEvents@FxIoQueue@@AEAAEPEAE@Z @ 0x140062DF4 (-ProcessPowerEvents@FxIoQueue@@AEAAEPEAE@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140083568 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_ql @ 0x1400868F4 (WPP_IFR_SF_ql.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 *     ?Vf_VerifyInsertIrpQueue@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIrpQueue@@@Z @ 0x1400DDE70 (-Vf_VerifyInsertIrpQueue@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIrpQueue@@@Z.c)
 */

unsigned __int8 __fastcall FxIoQueue::DispatchEvents(
        FxIoQueue *this,
        unsigned __int8 PreviousIrql,
        FxRequest *NewRequest,
        unsigned __int16 a4)
{
  FxRequest *v4; // rsi
  _FX_DRIVER_GLOBALS *m_Globals; // r15
  FxIoQueue *v6; // rbx
  FxCallbackLock *m_CallbackLockPtr; // rcx
  unsigned int v8; // r13d
  _LIST_ENTRY *p_m_CanceledOnQueueList; // r14
  _LIST_ENTRY *p_m_Cancelled; // rcx
  int v11; // edi
  int m_PowerState; // edx
  unsigned int _a2; // edx
  _WDF_IO_QUEUE_DISPATCH_TYPE m_Type; // eax
  FxRequest *v15; // rdi
  const void *v17; // rcx
  _FX_DRIVER_GLOBALS *v18; // rdx
  FxIrpQueue *p_m_Queue; // rdi
  unsigned __int8 v20; // r15
  int inserted; // r14d
  unsigned int v22; // edx
  _IRP *m_Irp; // rdx
  $87BF65E0DFCCE0C1CCAAC6538D1C71CB *v24; // rcx
  _LIST_ENTRY *v25; // rax
  FxRequest_vtbl *v26; // r9
  FxRequest **v27; // rax
  FxIoQueueIoState m_ReadyNotify; // xmm0
  char v29; // al
  char *v30; // rdi
  _FX_DRIVER_GLOBALS *v31; // r14
  void *m_ReadyNotifyContext; // r12
  unsigned __int8 v33; // r8
  void (__fastcall *Method)(WDFQUEUE__ *, void *); // r15
  FxCallbackLock *m_CallbackLock; // r14
  unsigned __int64 v36; // rdi
  const void *id; // rdx
  unsigned __int8 v38; // r8
  FxSystemWorkItem *m_SystemWorkItem; // rdi
  _FX_DRIVER_GLOBALS *v40; // r15
  KIRQL v41; // r14
  unsigned __int8 v42; // r8
  unsigned __int8 v43; // r8
  FxVerifierLock *v44; // rcx
  _FX_DRIVER_GLOBALS *v45; // rdx
  FxRequest_vtbl *v46; // rdi
  unsigned int v47; // edx
  _IRP *v48; // rdx
  $87BF65E0DFCCE0C1CCAAC6538D1C71CB *v49; // rcx
  _LIST_ENTRY *v50; // rax
  FxIrpQueue *Flink; // rcx
  bool v52; // zf
  FxRequestCompletionCallback *p_m_RequestCount; // rax
  FxRequestCompletionCallback *v54; // rdx
  __int64 v55; // rcx
  void (__fastcall *m_Completion)(WDFREQUEST__ *, WDFIOTARGET__ *, _WDF_REQUEST_COMPLETION_PARAMS *, void *); // rcx
  void (__fastcall *v57)(WDFREQUEST__ *, WDFIOTARGET__ *, _WDF_REQUEST_COMPLETION_PARAMS *, void *); // rdi
  __int64 v58; // rax
  void (__fastcall *v59)(FxRequest *, __int64, __int64, const char *); // rax
  _FX_DRIVER_GLOBALS *v60; // rdx
  FxRequest_vtbl *v61; // r14
  unsigned __int8 v62; // r12
  int v63; // r15d
  unsigned int v64; // edx
  _IRP *v65; // rdx
  $87BF65E0DFCCE0C1CCAAC6538D1C71CB *v66; // rcx
  _LIST_ENTRY *v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rsi
  KIRQL v70; // al
  char v71; // cl
  KIRQL v72; // r12
  __int64 v73; // rax
  __int64 v74; // r15
  __int64 j; // rdx
  const FxPowerIdleTargetState *v76; // r8
  int v77; // r14d
  FxTagTracker *v78; // rcx
  _LIST_ENTRY *p_m_OwnerListEntry2; // rax
  _LIST_ENTRY *v80; // rdx
  __int64 v81; // rdi
  __int64 v82; // r14
  _FX_DRIVER_GLOBALS *v83; // r15
  KIRQL v84; // al
  KIRQL v85; // r12
  __int64 v86; // rax
  unsigned int v87; // r13d
  __int64 v88; // r15
  __int64 i; // rdx
  const FxPowerIdleTargetState *v90; // r8
  unsigned int PowerIdleState; // r14d
  __int64 v92; // rcx
  const void *v93; // rdx
  char v94; // al
  void (__fastcall *v95)(FxRequestContext *__hidden, struct FxRequestBuffer *); // rax
  FxTagTracker *v96; // rcx
  _FX_DRIVER_GLOBALS *v97; // rdx
  FxRequest_vtbl *v98; // rdi
  unsigned __int8 v99; // r15
  int v100; // r14d
  unsigned int v101; // edx
  _IRP *v102; // rdx
  $87BF65E0DFCCE0C1CCAAC6538D1C71CB *v103; // rcx
  _LIST_ENTRY *v104; // rax
  int v105; // edi
  _FX_DRIVER_GLOBALS *v106; // rdx
  unsigned int v107; // edx
  _LIST_ENTRY *v108; // rax
  unsigned int v109; // r14d
  __int64 v110; // rcx
  const void *v111; // rdx
  char v112; // al
  void (__fastcall *v113)(FxRequestContext *__hidden, struct FxRequestBuffer *); // rax
  FxIoQueueIoState m_IdleComplete; // xmm0
  char m_ObjectFlags; // al
  void *m_IdleCompleteContext; // r15
  _FX_DRIVER_GLOBALS *v117; // r14
  unsigned __int8 v118; // r8
  WDFQUEUE__ *v119; // rdi
  unsigned __int8 v120; // r8
  const void *v121; // rcx
  FxSystemWorkItem *v122; // rcx
  FxVerifierLock *v123; // rcx
  FxVerifierLock *v124; // rcx
  FxTagTracker *v125; // rcx
  unsigned __int8 v126; // dl
  FxVerifierLock *v127; // rcx
  FxVerifierLock *v128; // rcx
  FxTagTracker *v129; // rcx
  FxTagTracker *v130; // rcx
  FxVerifierLock *v131; // rcx
  FxTagTracker *Blink; // rcx
  FxTagTracker *v133; // rcx
  FxVerifierLock *v134; // rcx
  FxVerifierLock *v135; // rcx
  FxVerifierLock *v136; // rcx
  unsigned __int8 v137; // r8
  FxRequest_vtbl *v138; // r9
  FxRequest **v139; // rax
  FxRequest_vtbl *v140; // rax
  bool v141; // sf
  unsigned __int8 v142; // r8
  unsigned __int8 v143; // r8
  FxRequest_vtbl *v144; // r9
  FxRequest **v145; // rax
  FxRequest_vtbl *v146; // rax
  FxRequest_vtbl *v147; // r9
  FxRequest **v148; // rax
  FxRequest_vtbl *v149; // rax
  unsigned __int8 v150; // r8
  struct _KTHREAD *CurrentThread; // rax
  const void *v152; // rcx
  const void *v153; // rax
  __int64 v154; // rax
  const void *v155; // rdx
  unsigned int v156; // edx
  FxVerifierDownlevelOption v157; // r9d
  _FX_DRIVER_GLOBALS *v158; // rcx
  const void *v159; // rcx
  const void *v160; // rdx
  const _GUID *traceGuid; // [rsp+28h] [rbp-39h]
  unsigned int _a1; // [rsp+30h] [rbp-31h]
  _FX_DRIVER_GLOBALS *v163; // [rsp+60h] [rbp-1h]
  FxIoQueueIoState v164; // [rsp+68h] [rbp+7h] BYREF
  FxIoQueue *v165; // [rsp+C8h] [rbp+67h] BYREF
  unsigned __int8 v166; // [rsp+D0h] [rbp+6Fh] BYREF
  FxRequest *Request; // [rsp+D8h] [rbp+77h] BYREF
  unsigned __int8 v168; // [rsp+E0h] [rbp+7Fh] BYREF

  Request = NewRequest;
  v166 = PreviousIrql;
  v165 = this;
  v4 = NewRequest;
  m_Globals = this->m_Globals;
  v6 = this;
  v163 = m_Globals;
  if ( this->m_Deleted )
  {
    if ( SLOBYTE(this->m_ObjectFlags) < 0
      && (v128 = *(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
    {
      FxVerifierLock::Unlock(v128, v166, (unsigned __int8)NewRequest);
      return 0;
    }
    else
    {
      KeReleaseSpinLock(&v6->m_NPLock.m_Lock, v166);
      return 0;
    }
  }
  if ( v166 && this->m_PassiveLevel )
  {
    id = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      id = 0LL;
    WPP_IFR_SF_qcq(
      this->m_Globals,
      (unsigned __int8)id,
      (unsigned int)NewRequest,
      a4,
      traceGuid,
      KeGetCurrentThread(),
      v166,
      id);
    if ( !v6->m_WorkItemQueued )
    {
      m_SystemWorkItem = v6->m_SystemWorkItem;
      v6->m_WorkItemQueued = 1;
      LOBYTE(v165) = 0;
      v40 = m_SystemWorkItem->m_Globals;
      if ( SLOBYTE(m_SystemWorkItem->m_ObjectFlags) < 0
        && (v134 = *(FxVerifierLock **)&m_SystemWorkItem[-1].m_WorkItemRunningCount) != 0LL )
      {
        FxVerifierLock::Lock(v134, (unsigned __int8 *)&v165, v38);
        v41 = (unsigned __int8)v165;
      }
      else
      {
        v41 = KeAcquireSpinLockRaiseToDpc(&m_SystemWorkItem->m_NPLock.m_Lock);
      }
      if ( m_SystemWorkItem->m_Enqueued )
      {
        WPP_IFR_SF_qq(
          v40,
          2u,
          0x12u,
          0xEu,
          WPP_FxSystemWorkitem_cpp_Traceguids,
          m_SystemWorkItem,
          m_SystemWorkItem->m_WorkItem.m_WorkItem);
        FxVerifierDbgBreakPoint(v40);
        if ( SLOBYTE(m_SystemWorkItem->m_ObjectFlags) < 0 )
        {
          v136 = *(FxVerifierLock **)&m_SystemWorkItem[-1].m_WorkItemRunningCount;
          if ( v136 )
          {
            FxVerifierLock::Unlock(v136, v41, v120);
            v6->m_WorkItemQueued = 0;
            goto LABEL_80;
          }
        }
        KeReleaseSpinLock(&m_SystemWorkItem->m_NPLock.m_Lock, v41);
      }
      else
      {
        if ( !m_SystemWorkItem->m_RunningDown )
        {
          KeClearEvent(&m_SystemWorkItem->m_WorkItemCompleted.m_Event.m_Event);
          m_SystemWorkItem->m_CallbackArg = v6;
          m_SystemWorkItem->m_Callback = FxIoQueue::_DeferredDispatchThreadThunk;
          m_SystemWorkItem->m_Enqueued = 1;
          _InterlockedIncrement(&m_SystemWorkItem->m_OutStandingWorkItem);
          if ( SLOBYTE(m_SystemWorkItem->m_ObjectFlags) < 0
            && (v135 = *(FxVerifierLock **)&m_SystemWorkItem[-1].m_WorkItemRunningCount) != 0LL )
          {
            FxVerifierLock::Unlock(v135, v41, v42);
          }
          else
          {
            KeReleaseSpinLock(&m_SystemWorkItem->m_NPLock.m_Lock, v41);
          }
          IoQueueWorkItem(
            m_SystemWorkItem->m_WorkItem.m_WorkItem,
            FxSystemWorkItem::_WorkItemThunk,
            DelayedWorkQueue,
            m_SystemWorkItem);
          goto LABEL_80;
        }
        WPP_IFR_SF_q(v40, 2u, 0x12u, 0xFu, WPP_FxSystemWorkitem_cpp_Traceguids, m_SystemWorkItem);
        FxVerifierDbgBreakPoint(v40);
        FxNonPagedObject::Unlock(m_SystemWorkItem, v41, v150);
      }
      v6->m_WorkItemQueued = 0;
    }
LABEL_80:
    v43 = v166;
    v6->m_RequeueDeferredDispatcher = 1;
    FxIoQueue::InsertNewRequest(v6, &Request, v43);
    if ( SLOBYTE(v6->m_ObjectFlags) >= 0 )
      goto LABEL_33;
    goto LABEL_81;
  }
  m_CallbackLockPtr = this->m_CallbackLockPtr;
  if ( m_CallbackLockPtr && m_CallbackLockPtr->IsOwner(m_CallbackLockPtr) )
  {
    v121 = (const void *)((unsigned __int64)v6 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v6->m_ObjectSize )
      v121 = 0LL;
    WPP_IFR_SF_q(v6->m_Globals, 3u, 0xDu, 0x2Eu, WPP_FxIoQueue_cpp_Traceguids, v121);
    if ( v6->m_PassiveLevel )
    {
      if ( !v6->m_WorkItemQueued )
      {
        v122 = v6->m_SystemWorkItem;
        v6->m_WorkItemQueued = 1;
        if ( !FxSystemWorkItem::EnqueueWorker(v122, FxIoQueue::_DeferredDispatchThreadThunk, v6, 1u) )
          v6->m_WorkItemQueued = 0;
      }
    }
    else if ( !v6->m_DpcQueued )
    {
      v6->m_DpcQueued = 1;
      KeInsertQueueDpc(&v6->m_Dpc, 0LL, 0LL);
    }
    goto LABEL_80;
  }
  ++v6->m_Dispatching;
  v8 = 0;
  if ( m_Globals->FxVerboseOn )
  {
    CurrentThread = KeGetCurrentThread();
    v152 = (const void *)((unsigned __int64)v6 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v6->m_ObjectSize )
      v152 = 0LL;
    WPP_IFR_SF_qq(m_Globals, 5u, 0xDu, 0x2Fu, WPP_FxIoQueue_cpp_Traceguids, CurrentThread, v152);
  }
LABEL_6:
  while ( 2 )
  {
    p_m_CanceledOnQueueList = &v6->m_CanceledOnQueueList;
LABEL_7:
    p_m_Cancelled = &v6->m_Cancelled;
    do
    {
      v11 = (v4 != 0LL) + v6->m_Queue.m_RequestCount + v6->m_DriverIoCount;
      if ( p_m_Cancelled->Flink != p_m_Cancelled )
      {
        if ( (int)FxIoQueue::InsertNewRequest(v6, &Request, v166) < 0 || FxIoQueue::ProcessCancelledRequests(v6, &v166) )
          goto LABEL_305;
        v4 = Request;
      }
      if ( p_m_CanceledOnQueueList->Flink != p_m_CanceledOnQueueList )
      {
        if ( (int)FxIoQueue::InsertNewRequest(v6, &Request, v166) < 0
          || FxIoQueue::ProcessCancelledRequestsOnQueue(v6, &v166) )
        {
          goto LABEL_305;
        }
        v4 = Request;
      }
      if ( v6->m_IdleComplete.Method && v6->m_Dispatching == 1 && !v6->m_DriverIoCount )
      {
        if ( v4 )
        {
          FxIoQueue::InsertNewRequestLocked(v6, &Request, v166);
          v4 = Request;
        }
        m_IdleComplete = v6->m_IdleComplete;
        m_ObjectFlags = v6->m_ObjectFlags;
        m_IdleCompleteContext = v6->m_IdleCompleteContext;
        v117 = v6->m_Globals;
        v6->m_CancelDispatchedRequests = 0;
        v6->m_IdleComplete.Method = 0LL;
        v6->m_IdleCompleteContext = 0LL;
        v164 = m_IdleComplete;
        if ( m_ObjectFlags < 0 && (v131 = *(FxVerifierLock **)&v6[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
          FxVerifierLock::Unlock(v131, v166, (unsigned __int8)NewRequest);
        else
          KeReleaseSpinLock(&v6->m_NPLock.m_Lock, v166);
        v119 = (WDFQUEUE__ *)((unsigned __int64)v6 ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( v117->FxVerboseOn )
        {
          v153 = (const void *)((unsigned __int64)v6 ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !v6->m_ObjectSize )
            v153 = 0LL;
          WPP_IFR_SF_q(v117, 5u, 0xDu, 0x51u, WPP_FxIoQueue_cpp_Traceguids, v153);
        }
        if ( v164.Method )
        {
          if ( !v6->m_ObjectSize )
            v119 = 0LL;
          FxIoQueueIoState::Invoke(&v164, v119, m_IdleCompleteContext);
        }
        FxNonPagedObject::Lock(v6, &v166, v118);
        m_Globals = v163;
        goto LABEL_6;
      }
      if ( v6->m_PurgeComplete.Method && !v11 && v6->m_Dispatching == 1 )
      {
        FxIoQueue::InsertNewRequest(v6, &Request, v166);
        v6->m_CancelDispatchedRequests = 0;
        FxIoQueue::ProcessPurgeComplete(v6, &v166);
        v4 = Request;
        goto LABEL_7;
      }
      if ( v6->m_IsDevicePowerPolicyOwner
        && v6->m_PowerManaged
        && v6->m_PowerReferenced
        && !v11
        && v6->m_Dispatching == 1 )
      {
        v81 = *(_QWORD *)(*(_QWORD *)&v6->m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized + 888LL);
        v82 = *(_QWORD *)(v81 + 624);
        v83 = *(_FX_DRIVER_GLOBALS **)(v82 + 16);
        v84 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v81 + 16));
        v52 = *(_DWORD *)(v81 + 24) == 0;
        v85 = v84;
        v168 = v84;
        if ( v52 )
        {
          v154 = *(_QWORD *)(v82 + 96);
          v155 = (const void *)(v154 ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !*(_WORD *)(v154 + 10) )
            v155 = 0LL;
          WPP_IFR_SF_qq(
            v83,
            2u,
            0xCu,
            0xFu,
            WPP_PowerIdleStateMachine_cpp_Traceguids,
            v155,
            *(const void **)(v154 + 144));
          if ( _FX_DRIVER_GLOBALS::IsVerificationEnabled(v83, v156, 0xBu, v157) )
            FxVerifierDbgBreakPoint(v158);
        }
        v86 = *(unsigned __int8 *)(v81 + 225);
        v87 = --*(_DWORD *)(v81 + 24);
        v88 = *(_QWORD *)(v81 + 624);
        *(_DWORD *)(v81 + 4 * v86 + 232) = 256;
        *(_BYTE *)(v81 + 225) = (*(_BYTE *)(v81 + 225) + 1) & 7;
        for ( i = 0LL;
              (unsigned int)i < FxPowerIdleMachine::m_StateTable[*(int *)(v81 + 228) - 1].TargetStatesCount;
              i = (unsigned int)(i + 1) )
        {
          v90 = &FxPowerIdleMachine::m_StateTable[*(int *)(v81 + 228) - 1].TargetStates[i];
          if ( v90->PowerIdleEvent == PowerIdleEventIoDecrement )
          {
            PowerIdleState = v90->PowerIdleState;
            if ( PowerIdleState != 35 )
            {
              do
              {
                v92 = *(_QWORD *)(v88 + 96);
                v93 = (const void *)(v92 ^ 0xFFFFFFFFFFFFFFF8uLL);
                if ( !*(_WORD *)(v92 + 10) )
                  v93 = 0LL;
                WPP_IFR_SF_qqLL(
                  *(_FX_DRIVER_GLOBALS **)(v88 + 16),
                  4u,
                  0x15u,
                  0x11u,
                  WPP_PowerIdleStateMachine_cpp_Traceguids,
                  v93,
                  *(const void **)(v92 + 144),
                  PowerIdleState,
                  *(_DWORD *)(v81 + 228));
                *(_DWORD *)(v81 + 4LL * *(unsigned __int8 *)(v81 + 226) + 264) = PowerIdleState;
                v94 = *(_BYTE *)(v81 + 226) + 1;
                *(_DWORD *)(v81 + 228) = PowerIdleState;
                *(_BYTE *)(v81 + 226) = v94 & 7;
                v95 = funcs_140011152[3 * (int)PowerIdleState];
                if ( !v95 )
                  break;
                PowerIdleState = ((__int64 (__fastcall *)(__int64))v95)(v81);
              }
              while ( PowerIdleState != 35 );
              v6 = v165;
              v85 = v168;
            }
            break;
          }
        }
        KeReleaseSpinLock((PKSPIN_LOCK)(v81 + 16), v85);
        v96 = *(FxTagTracker **)(v81 + 32);
        if ( v96 )
          FxTagTracker::UpdateTagHistory(v96, 0LL, 0, 0LL, TagRelease, v87);
        m_Globals = v163;
        v6->m_PowerReferenced = 0;
        v8 = 0;
        goto LABEL_6;
      }
      m_PowerState = v6->m_PowerState;
      if ( m_PowerState != 1 && m_PowerState != 2 )
      {
        if ( m_Globals->FxVerboseOn )
        {
          v159 = (const void *)((unsigned __int64)v6 ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !v6->m_ObjectSize )
            v159 = 0LL;
          WPP_IFR_SF_ql(m_Globals, 5u, 0xDu, 0x30u, WPP_FxIoQueue_cpp_Traceguids, v159, m_PowerState);
        }
        if ( (int)FxIoQueue::InsertNewRequest(v6, &Request, v166) < 0 )
        {
LABEL_305:
          v4 = Request;
        }
        else
        {
          if ( !FxIoQueue::ProcessPowerEvents(v6, &v166) )
            goto $Done_11;
          v4 = Request;
        }
        goto LABEL_7;
      }
      if ( v6->m_Disposing && !v11 && v6->m_Dispatching == 1 )
      {
        v126 = v166;
        v6->m_Deleted = 1;
        FxNonPagedObject::Unlock(v6, v126, (unsigned __int8)NewRequest);
        KeSetEvent(&v6->m_FinishDisposing.m_Event, 0, 0);
        return 1;
      }
      if ( v6->m_PowerState == FxIoQueuePowerOff )
      {
        if ( !v4 )
          goto $Done_11;
        v106 = v4->m_Globals;
        p_m_Queue = &v6->m_Queue;
        v20 = v166;
        v168 = v166;
        if ( v106->FxVerifierOn )
        {
          inserted = FxRequest::Vf_VerifyInsertIrpQueue(v4, v106, &v6->m_Queue);
          if ( inserted < 0 )
            goto LABEL_265;
        }
        v107 = _InterlockedIncrement(&v4->m_Refcnt);
        if ( SLOBYTE(v4->m_ObjectFlags) < 0 )
        {
          Blink = (FxTagTracker *)v4[-1].m_OwnerListEntry2.Blink;
          if ( Blink )
            FxTagTracker::UpdateTagHistory(
              Blink,
              (void *)0x75657551,
              1900,
              "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp",
              TagAddRef,
              v107);
        }
        m_Irp = v4->m_Irp.m_Irp;
        v24 = &v4->120;
        v4->m_IrpQueue = p_m_Queue;
        if ( v4 == (FxRequest *)-120LL )
        {
          m_Irp->Tail.Overlay.DriverContext[3] = p_m_Queue;
        }
        else
        {
          m_Irp->Tail.Overlay.DriverContext[3] = v24;
          v4->m_CsqContext.Irp = m_Irp;
          v4->m_CsqContext.Csq = (_IO_CSQ *)p_m_Queue;
          v24->m_CsqContext.Type = 1;
        }
        v108 = v6->m_Queue.m_Queue.Blink;
        NewRequest = (FxRequest *)(&m_Irp->Tail.CompletionKey + 6);
        if ( (FxIrpQueue *)v108->Flink != p_m_Queue )
          goto LABEL_242;
        m_Irp->Tail.Overlay.ListEntry.Blink = v108;
        NewRequest->__vftable = (FxRequest_vtbl *)p_m_Queue;
        v108->Flink = (_LIST_ENTRY *)NewRequest;
        v6->m_Queue.m_Queue.Blink = (_LIST_ENTRY *)NewRequest;
        ++v6->m_Queue.m_RequestCount;
        m_Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
        _InterlockedExchange64(
          (volatile __int64 *)&m_Irp->CancelRoutine,
          (__int64)FxIrpQueue::_WdmCancelRoutineInternal);
        if ( !m_Irp->Cancel )
        {
LABEL_167:
          inserted = 0;
          goto LABEL_51;
        }
LABEL_45:
        if ( !_InterlockedExchange64((volatile __int64 *)&m_Irp->CancelRoutine, 0LL) )
          goto LABEL_167;
        v26 = NewRequest->__vftable;
        if ( (FxRequest *)NewRequest->~FxObject != NewRequest )
          goto LABEL_242;
        v27 = (FxRequest **)m_Irp->Tail.Overlay.ListEntry.Blink;
        if ( *v27 != NewRequest )
          goto LABEL_242;
        *v27 = (FxRequest *)v26;
        v26->~FxObject = (void (__fastcall *)(FxObject *))v27;
        *(_QWORD *)&NewRequest->m_Type = NewRequest;
        NewRequest->__vftable = (FxRequest_vtbl *)NewRequest;
        --p_m_Queue->m_RequestCount;
        if ( v24 )
          v24->m_CsqContext.Irp = 0LL;
        m_Irp->Tail.Overlay.DriverContext[3] = 0LL;
        v4->m_IrpQueue = 0LL;
        inserted = -1073741536;
        v4->Release(v4, (void *)1969583441, 1916, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
LABEL_51:
        if ( inserted >= 0 )
        {
          v4->m_IoQueue = v6;
          if ( v6->m_Queue.m_RequestCount == 1 )
            goto LABEL_53;
          goto LABEL_269;
        }
LABEL_265:
        FxNonPagedObject::Unlock(v6, v20, (unsigned __int8)NewRequest);
        FxRequest::CompleteWithInformation(v4, inserted, 0LL);
        v4->Release(v4, (void *)1886220099, 2636, "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
        FxNonPagedObject::Lock(v6, &v168, v143);
        m_Globals = v163;
        v4 = 0LL;
        Request = 0LL;
        goto LABEL_6;
      }
      _a2 = v6->m_QueueState;
      if ( (_a2 & 2) == 0 )
      {
        v17 = (const void *)((unsigned __int64)v6 ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !v6->m_ObjectSize )
          v17 = 0LL;
        WPP_IFR_SF_qL(m_Globals, 3u, 0xDu, 0x31u, WPP_FxIoQueue_cpp_Traceguids, v17, _a2);
        if ( !v4 )
          goto $Done_11;
        v18 = v4->m_Globals;
        p_m_Queue = &v6->m_Queue;
        v20 = v166;
        v168 = v166;
        if ( v18->FxVerifierOn )
        {
          inserted = FxRequest::Vf_VerifyInsertIrpQueue(v4, v18, &v6->m_Queue);
          if ( inserted < 0 )
            goto LABEL_265;
        }
        v22 = _InterlockedIncrement(&v4->m_Refcnt);
        if ( SLOBYTE(v4->m_ObjectFlags) < 0 )
        {
          v133 = (FxTagTracker *)v4[-1].m_OwnerListEntry2.Blink;
          if ( v133 )
            FxTagTracker::UpdateTagHistory(
              v133,
              (void *)0x75657551,
              1900,
              "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp",
              TagAddRef,
              v22);
        }
        m_Irp = v4->m_Irp.m_Irp;
        v24 = &v4->120;
        v4->m_IrpQueue = p_m_Queue;
        if ( v4 == (FxRequest *)-120LL )
        {
          m_Irp->Tail.Overlay.DriverContext[3] = p_m_Queue;
        }
        else
        {
          m_Irp->Tail.Overlay.DriverContext[3] = v24;
          v4->m_CsqContext.Irp = m_Irp;
          v4->m_CsqContext.Csq = (_IO_CSQ *)p_m_Queue;
          v24->m_CsqContext.Type = 1;
        }
        v25 = v6->m_Queue.m_Queue.Blink;
        NewRequest = (FxRequest *)(&m_Irp->Tail.CompletionKey + 6);
        if ( (FxIrpQueue *)v25->Flink == p_m_Queue )
        {
          m_Irp->Tail.Overlay.ListEntry.Blink = v25;
          NewRequest->__vftable = (FxRequest_vtbl *)p_m_Queue;
          v25->Flink = (_LIST_ENTRY *)NewRequest;
          v6->m_Queue.m_Queue.Blink = (_LIST_ENTRY *)NewRequest;
          ++v6->m_Queue.m_RequestCount;
          m_Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
          _InterlockedExchange64(
            (volatile __int64 *)&m_Irp->CancelRoutine,
            (__int64)FxIrpQueue::_WdmCancelRoutineInternal);
          if ( !m_Irp->Cancel )
            goto LABEL_167;
          goto LABEL_45;
        }
        goto LABEL_242;
      }
      m_Type = v6->m_Type;
      if ( m_Type != WdfIoQueueDispatchManual )
      {
        if ( m_Type == WdfIoQueueDispatchSequential && v6->m_DriverIoCount > 0 )
        {
          if ( !v4 )
            goto $Done_11;
          v45 = v4->m_Globals;
          v46 = (FxRequest_vtbl *)&v6->m_Queue;
          v20 = v166;
          v168 = v166;
          if ( v45->FxVerifierOn )
          {
            inserted = FxRequest::Vf_VerifyInsertIrpQueue(v4, v45, &v6->m_Queue);
            if ( inserted < 0 )
              goto LABEL_265;
          }
          v47 = _InterlockedIncrement(&v4->m_Refcnt);
          if ( SLOBYTE(v4->m_ObjectFlags) < 0 )
          {
            v130 = (FxTagTracker *)v4[-1].m_OwnerListEntry2.Blink;
            if ( v130 )
              FxTagTracker::UpdateTagHistory(
                v130,
                (void *)0x75657551,
                1900,
                "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp",
                TagAddRef,
                v47);
          }
          v48 = v4->m_Irp.m_Irp;
          v49 = &v4->120;
          v4->m_IrpQueue = (FxIrpQueue *)v46;
          if ( v4 == (FxRequest *)-120LL )
          {
            v48->Tail.Overlay.DriverContext[3] = v46;
          }
          else
          {
            v48->Tail.Overlay.DriverContext[3] = v49;
            v4->m_CsqContext.Irp = v48;
            v4->m_CsqContext.Csq = (_IO_CSQ *)v46;
            v49->m_CsqContext.Type = 1;
          }
          v50 = v6->m_Queue.m_Queue.Blink;
          NewRequest = (FxRequest *)(&v48->Tail.CompletionKey + 6);
          if ( (FxRequest_vtbl *)v50->Flink == v46 )
          {
            v48->Tail.Overlay.ListEntry.Blink = v50;
            NewRequest->__vftable = v46;
            v50->Flink = (_LIST_ENTRY *)NewRequest;
            v6->m_Queue.m_Queue.Blink = (_LIST_ENTRY *)NewRequest;
            ++v6->m_Queue.m_RequestCount;
            v48->Tail.Overlay.CurrentStackLocation->Control |= 1u;
            _InterlockedExchange64(
              (volatile __int64 *)&v48->CancelRoutine,
              (__int64)FxIrpQueue::_WdmCancelRoutineInternal);
            if ( v48->Cancel && _InterlockedExchange64((volatile __int64 *)&v48->CancelRoutine, 0LL) )
            {
              v147 = NewRequest->__vftable;
              if ( (FxRequest *)NewRequest->~FxObject != NewRequest )
                goto LABEL_242;
              v148 = (FxRequest **)v48->Tail.Overlay.ListEntry.Blink;
              if ( *v148 != NewRequest )
                goto LABEL_242;
              *v148 = (FxRequest *)v147;
              v147->~FxObject = (void (__fastcall *)(FxObject *))v148;
              v48->Tail.Overlay.ListEntry.Blink = &v48->Tail.Overlay.ListEntry;
              NewRequest->__vftable = (FxRequest_vtbl *)NewRequest;
              --v6->m_Queue.m_RequestCount;
              if ( v4 != (FxRequest *)-120LL )
                v4->m_CsqContext.Irp = 0LL;
              v48->Tail.Overlay.DriverContext[3] = 0LL;
              v149 = v4->__vftable;
              v4->m_IrpQueue = 0LL;
              inserted = -1073741536;
              v149->Release(v4, (void *)1969583441, 1916, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
            }
            else
            {
              inserted = 0;
            }
            if ( inserted >= 0 )
            {
              v4->m_IoQueue = v6;
              if ( v6->m_Queue.m_RequestCount == 1 )
                goto LABEL_53;
LABEL_269:
              if ( !v6->m_ForceTransitionFromEmptyWhenAddingNewRequest )
                goto $Done_11;
LABEL_53:
              FxIoQueue::SetTransitionFromEmpty(v6);
              goto $Done_11;
            }
            goto LABEL_265;
          }
LABEL_242:
          __fastfail(3u);
        }
        if ( v6->m_Type != WdfIoQueueDispatchParallel || v6->m_DriverIoCount < v6->m_MaxParallelQueuePresentedRequests )
        {
          if ( v6->m_Queue.m_RequestCount > 0 )
          {
            Flink = (FxIrpQueue *)v6->m_Queue.m_Queue.Flink;
            v52 = Flink == &v6->m_Queue;
            p_m_RequestCount = (FxRequestCompletionCallback *)&Flink[-5].m_RequestCount;
            while ( 1 )
            {
              if ( v52 )
                p_m_RequestCount = 0LL;
              if ( !p_m_RequestCount )
                goto LABEL_31;
              v54 = p_m_RequestCount + 21;
              v55 = _InterlockedExchange64((volatile __int64 *)&p_m_RequestCount[13], 0LL);
              NewRequest = (FxRequest *)p_m_RequestCount[21].m_Completion;
              if ( v55 )
                break;
              p_m_RequestCount = &NewRequest[-1].m_CompletionRoutine;
              v52 = NewRequest == (FxRequest *)&v6->m_Queue;
            }
            if ( *(FxRequestCompletionCallback **)&NewRequest->m_Type != v54 )
              goto LABEL_242;
            m_Completion = p_m_RequestCount[22].m_Completion;
            if ( *(FxRequestCompletionCallback **)m_Completion != v54 )
              goto LABEL_242;
            *(_QWORD *)m_Completion = NewRequest;
            *(_QWORD *)&NewRequest->m_Type = m_Completion;
            p_m_RequestCount[22].m_Completion = (void (__fastcall *)(WDFREQUEST__ *, WDFIOTARGET__ *, _WDF_REQUEST_COMPLETION_PARAMS *, void *))&p_m_RequestCount[21];
            v54->m_Completion = (void (__fastcall *)(WDFREQUEST__ *, WDFIOTARGET__ *, _WDF_REQUEST_COMPLETION_PARAMS *, void *))v54;
            --v6->m_Queue.m_RequestCount;
            v57 = p_m_RequestCount[18].m_Completion;
            if ( *(_DWORD *)v57 == 1 )
              *((_QWORD *)v57 + 1) = 0LL;
            p_m_RequestCount[18].m_Completion = 0LL;
            v58 = *((_QWORD *)v57 - 15);
            v15 = (FxRequest *)((char *)v57 - 120);
            v59 = *(void (__fastcall **)(FxRequest *, __int64, __int64, const char *))(v58 + 16);
            v15->m_IrpQueue = 0LL;
            v59(v15, 1969583441LL, 2062LL, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
            if ( v15 )
            {
              if ( v4 )
              {
                v60 = v4->m_Globals;
                v61 = (FxRequest_vtbl *)&v6->m_Queue;
                v62 = v166;
                v168 = v166;
                if ( v60->FxVerifierOn )
                {
                  v63 = FxRequest::Vf_VerifyInsertIrpQueue(v4, v60, &v6->m_Queue);
                  if ( v63 < 0 )
                    goto LABEL_263;
                }
                v64 = _InterlockedIncrement(&v4->m_Refcnt);
                if ( SLOBYTE(v4->m_ObjectFlags) < 0 )
                {
                  v129 = (FxTagTracker *)v4[-1].m_OwnerListEntry2.Blink;
                  if ( v129 )
                    FxTagTracker::UpdateTagHistory(
                      v129,
                      (void *)0x75657551,
                      1900,
                      "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp",
                      TagAddRef,
                      v64);
                }
                v65 = v4->m_Irp.m_Irp;
                v66 = &v4->120;
                v4->m_IrpQueue = (FxIrpQueue *)v61;
                if ( v4 == (FxRequest *)-120LL )
                {
                  v65->Tail.Overlay.DriverContext[3] = v61;
                }
                else
                {
                  v65->Tail.Overlay.DriverContext[3] = v66;
                  v4->m_CsqContext.Irp = v65;
                  v4->m_CsqContext.Csq = (_IO_CSQ *)v61;
                  v66->m_CsqContext.Type = 1;
                }
                v67 = v6->m_Queue.m_Queue.Blink;
                NewRequest = (FxRequest *)(&v65->Tail.CompletionKey + 6);
                if ( (FxRequest_vtbl *)v67->Flink != v61 )
                  goto LABEL_242;
                v65->Tail.Overlay.ListEntry.Blink = v67;
                NewRequest->__vftable = v61;
                v67->Flink = (_LIST_ENTRY *)NewRequest;
                v6->m_Queue.m_Queue.Blink = (_LIST_ENTRY *)NewRequest;
                ++v6->m_Queue.m_RequestCount;
                v65->Tail.Overlay.CurrentStackLocation->Control |= 1u;
                _InterlockedExchange64(
                  (volatile __int64 *)&v65->CancelRoutine,
                  (__int64)FxIrpQueue::_WdmCancelRoutineInternal);
                if ( v65->Cancel && _InterlockedExchange64((volatile __int64 *)&v65->CancelRoutine, 0LL) )
                {
                  v144 = NewRequest->__vftable;
                  if ( (FxRequest *)NewRequest->~FxObject != NewRequest )
                    goto LABEL_242;
                  v145 = (FxRequest **)v65->Tail.Overlay.ListEntry.Blink;
                  if ( *v145 != NewRequest )
                    goto LABEL_242;
                  *v145 = (FxRequest *)v144;
                  v144->~FxObject = (void (__fastcall *)(FxObject *))v145;
                  v65->Tail.Overlay.ListEntry.Blink = &v65->Tail.Overlay.ListEntry;
                  NewRequest->__vftable = (FxRequest_vtbl *)NewRequest;
                  --v6->m_Queue.m_RequestCount;
                  if ( v4 != (FxRequest *)-120LL )
                    v4->m_CsqContext.Irp = 0LL;
                  v65->Tail.Overlay.DriverContext[3] = 0LL;
                  v146 = v4->__vftable;
                  v4->m_IrpQueue = 0LL;
                  v63 = -1073741536;
                  v146->Release(v4, (void *)1969583441, 1916, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
                }
                else
                {
                  v63 = 0;
                }
                if ( v63 < 0 )
                {
LABEL_263:
                  FxNonPagedObject::Unlock(v6, v62, (unsigned __int8)NewRequest);
                  FxRequest::CompleteWithInformation(v4, v63, 0LL);
                  v4->Release(
                    v4,
                    (void *)1886220099,
                    2636,
                    "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
                  FxNonPagedObject::Lock(v6, &v168, v142);
                }
                else
                {
                  v4->m_IoQueue = v6;
                  if ( v6->m_Queue.m_RequestCount == 1 || v6->m_ForceTransitionFromEmptyWhenAddingNewRequest )
                    FxIoQueue::SetTransitionFromEmpty(v6);
                }
LABEL_130:
                Request = 0LL;
                v4 = 0LL;
              }
              ++v6->m_DriverIoCount;
              p_m_OwnerListEntry2 = &v15->m_OwnerListEntry2;
              v80 = v6->m_DriverOwned.Blink;
              if ( v80->Flink == &v6->m_DriverOwned )
              {
                p_m_OwnerListEntry2->Flink = &v6->m_DriverOwned;
                v15->m_OwnerListEntry2.Blink = v80;
                v80->Flink = p_m_OwnerListEntry2;
                v6->m_DriverOwned.Blink = p_m_OwnerListEntry2;
                if ( SLOBYTE(v6->m_ObjectFlags) < 0
                  && (v124 = *(FxVerifierLock **)&v6[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
                {
                  FxVerifierLock::Unlock(v124, v166, (unsigned __int8)NewRequest);
                }
                else
                {
                  KeReleaseSpinLock(&v6->m_NPLock.m_Lock, v166);
                }
                FxIoQueue::DispatchRequestToDriver(v6, v15);
                if ( SLOBYTE(v6->m_ObjectFlags) < 0 )
                {
                  v123 = *(FxVerifierLock **)&v6[-1].m_PowerIdle.m_DbgFlagIsInitialized;
                  if ( v123 )
                    goto LABEL_209;
                }
                goto LABEL_68;
              }
              goto LABEL_242;
            }
          }
LABEL_31:
          v15 = v4;
          if ( !v4 )
            goto $Done_11;
          v4->m_IoQueue = v6;
          v52 = v6->m_IsDevicePowerPolicyOwner == 0;
          v6->m_TransitionFromEmpty = 1;
          v6->m_ForceTransitionFromEmptyWhenAddingNewRequest = 0;
          if ( !v52 && v6->m_PowerManaged && !v6->m_PowerReferenced )
          {
            v68 = *(_QWORD *)(*(_QWORD *)&v6->m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized + 888LL);
            if ( v68 )
              _InterlockedCompareExchange((volatile signed __int32 *)(v68 + 748), 11, 5);
            v69 = *(_QWORD *)(*(_QWORD *)&v6->m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized + 888LL);
            v70 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v69 + 16));
            v71 = *(_BYTE *)(v69 + 224);
            v72 = v70;
            v168 = v70;
            if ( (v71 & 0x10) != 0 )
            {
              v77 = -1073741101;
            }
            else if ( (v71 & 0x20) != 0 )
            {
              v73 = *(unsigned __int8 *)(v69 + 225);
              v8 = ++*(_DWORD *)(v69 + 24);
              v74 = *(_QWORD *)(v69 + 624);
              *(_DWORD *)(v69 + 4 * v73 + 232) = 512;
              *(_BYTE *)(v69 + 225) = (*(_BYTE *)(v69 + 225) + 1) & 7;
              for ( j = 0LL;
                    (unsigned int)j < FxPowerIdleMachine::m_StateTable[*(int *)(v69 + 228) - 1].TargetStatesCount;
                    j = (unsigned int)(j + 1) )
              {
                v76 = &FxPowerIdleMachine::m_StateTable[*(int *)(v69 + 228) - 1].TargetStates[j];
                if ( v76->PowerIdleEvent == PowerIdleEventIoIncrement )
                {
                  v109 = v76->PowerIdleState;
                  if ( v109 != 35 )
                  {
                    do
                    {
                      v110 = *(_QWORD *)(v74 + 96);
                      v111 = (const void *)(v110 ^ 0xFFFFFFFFFFFFFFF8uLL);
                      if ( !*(_WORD *)(v110 + 10) )
                        v111 = 0LL;
                      WPP_IFR_SF_qqLL(
                        *(_FX_DRIVER_GLOBALS **)(v74 + 16),
                        4u,
                        0x15u,
                        0x11u,
                        WPP_PowerIdleStateMachine_cpp_Traceguids,
                        v111,
                        *(const void **)(v110 + 144),
                        v109,
                        *(_DWORD *)(v69 + 228));
                      *(_DWORD *)(v69 + 4LL * *(unsigned __int8 *)(v69 + 226) + 264) = v109;
                      v112 = *(_BYTE *)(v69 + 226) + 1;
                      *(_DWORD *)(v69 + 228) = v109;
                      *(_BYTE *)(v69 + 226) = v112 & 7;
                      v113 = funcs_140011152[3 * (int)v109];
                      if ( !v113 )
                        break;
                      v109 = ((__int64 (__fastcall *)(__int64))v113)(v69);
                    }
                    while ( v109 != 35 );
                    v6 = v165;
                    v72 = v168;
                  }
                  break;
                }
              }
              v77 = 259;
              if ( KeReadStateEvent((PRKEVENT)(v69 + 192)) )
                v77 = 0;
            }
            else
            {
              v77 = -1073741101;
            }
            KeReleaseSpinLock((PKSPIN_LOCK)(v69 + 16), v72);
            v78 = *(FxTagTracker **)(v69 + 32);
            if ( v78 && (!v77 || v77 == 259) )
            {
              _a1 = v8;
              v8 = 0;
              FxTagTracker::UpdateTagHistory(v78, 0LL, 0, 0LL, TagAddRef, _a1);
            }
            else
            {
              v8 = 0;
            }
            if ( v77 >= 0 )
              v6->m_PowerReferenced = 1;
          }
          goto LABEL_130;
        }
        if ( (int)FxIoQueue::InsertNewRequest(v6, &Request, v166) >= 0 )
          goto $Done_11;
        v4 = Request;
        goto LABEL_7;
      }
      if ( !v4 )
        break;
      v97 = v4->m_Globals;
      v98 = (FxRequest_vtbl *)&v6->m_Queue;
      v99 = v166;
      v168 = v166;
      if ( v97->FxVerifierOn )
      {
        v100 = FxRequest::Vf_VerifyInsertIrpQueue(v4, v97, &v6->m_Queue);
        if ( v100 < 0 )
          goto LABEL_247;
      }
      v101 = _InterlockedIncrement(&v4->m_Refcnt);
      if ( SLOBYTE(v4->m_ObjectFlags) < 0 )
      {
        v125 = (FxTagTracker *)v4[-1].m_OwnerListEntry2.Blink;
        if ( v125 )
          FxTagTracker::UpdateTagHistory(
            v125,
            (void *)0x75657551,
            1900,
            "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp",
            TagAddRef,
            v101);
      }
      v102 = v4->m_Irp.m_Irp;
      v103 = &v4->120;
      v4->m_IrpQueue = (FxIrpQueue *)v98;
      if ( v4 == (FxRequest *)-120LL )
      {
        v102->Tail.Overlay.DriverContext[3] = v98;
      }
      else
      {
        v102->Tail.Overlay.DriverContext[3] = v103;
        v4->m_CsqContext.Irp = v102;
        v4->m_CsqContext.Csq = (_IO_CSQ *)v98;
        v103->m_CsqContext.Type = 1;
      }
      v104 = v6->m_Queue.m_Queue.Blink;
      NewRequest = (FxRequest *)(&v102->Tail.CompletionKey + 6);
      if ( (FxRequest_vtbl *)v104->Flink != v98 )
        goto LABEL_242;
      v102->Tail.Overlay.ListEntry.Blink = v104;
      NewRequest->__vftable = v98;
      v104->Flink = (_LIST_ENTRY *)NewRequest;
      v6->m_Queue.m_Queue.Blink = (_LIST_ENTRY *)NewRequest;
      ++v6->m_Queue.m_RequestCount;
      v102->Tail.Overlay.CurrentStackLocation->Control |= 1u;
      _InterlockedExchange64((volatile __int64 *)&v102->CancelRoutine, (__int64)FxIrpQueue::_WdmCancelRoutineInternal);
      if ( v102->Cancel && _InterlockedExchange64((volatile __int64 *)&v102->CancelRoutine, 0LL) )
      {
        v138 = NewRequest->__vftable;
        if ( (FxRequest *)NewRequest->~FxObject != NewRequest )
          goto LABEL_242;
        v139 = (FxRequest **)v102->Tail.Overlay.ListEntry.Blink;
        if ( *v139 != NewRequest )
          goto LABEL_242;
        *v139 = (FxRequest *)v138;
        v138->~FxObject = (void (__fastcall *)(FxObject *))v139;
        v102->Tail.Overlay.ListEntry.Blink = &v102->Tail.Overlay.ListEntry;
        NewRequest->__vftable = (FxRequest_vtbl *)NewRequest;
        --v6->m_Queue.m_RequestCount;
        if ( v4 != (FxRequest *)-120LL )
          v4->m_CsqContext.Irp = 0LL;
        v102->Tail.Overlay.DriverContext[3] = 0LL;
        v140 = v4->__vftable;
        v4->m_IrpQueue = 0LL;
        v105 = -1073741536;
        v140->Release(v4, (void *)1969583441, 1916, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
      }
      else
      {
        v105 = 0;
      }
      v100 = v105;
      if ( v105 < 0 )
      {
LABEL_247:
        FxNonPagedObject::Unlock(v6, v99, (unsigned __int8)NewRequest);
        FxRequest::CompleteWithInformation(v4, v100, 0LL);
        v4->Release(v4, (void *)1886220099, 2636, "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
        FxNonPagedObject::Lock(v6, &v168, v137);
      }
      else
      {
        v4->m_IoQueue = v6;
        if ( v6->m_Queue.m_RequestCount == 1 || v6->m_ForceTransitionFromEmptyWhenAddingNewRequest )
        {
          FxIoQueue::SetTransitionFromEmpty(v6);
          v100 = v105;
        }
      }
      m_Globals = v163;
      p_m_Cancelled = &v6->m_Cancelled;
      v141 = v100 < 0;
      Request = 0LL;
      p_m_CanceledOnQueueList = &v6->m_CanceledOnQueueList;
      v4 = 0LL;
    }
    while ( v141 );
    if ( v6->m_ReadyNotify.Method && v6->m_TransitionFromEmpty )
    {
      m_ReadyNotify = v6->m_ReadyNotify;
      v29 = v6->m_ObjectFlags;
      v30 = (char *)&v6->24;
      v31 = v6->m_Globals;
      m_ReadyNotifyContext = v6->m_ReadyNotifyContext;
      v6->m_TransitionFromEmpty = 0;
      v164 = m_ReadyNotify;
      if ( v29 < 0 && (v127 = *(FxVerifierLock **)&v6[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
        FxVerifierLock::Unlock(v127, v166, (unsigned __int8)NewRequest);
      else
        KeReleaseSpinLock(&v6->m_NPLock.m_Lock, v166);
      Method = v164.Method;
      if ( v164.Method )
      {
        m_CallbackLock = v164.m_CallbackLock;
        v36 = (unsigned __int64)v6 ^ 0xFFFFFFFFFFFFFFF8uLL;
        v168 = 0;
        if ( !v6->m_ObjectSize )
          v36 = 0LL;
        if ( v164.m_CallbackLock )
          v164.m_CallbackLock->Lock(v164.m_CallbackLock, &v168);
        Method((WDFQUEUE__ *)v36, m_ReadyNotifyContext);
        if ( m_CallbackLock )
          m_CallbackLock->Unlock(m_CallbackLock, v168);
        v30 = (char *)&v6->24;
      }
      else if ( v31->FxVerifierOn )
      {
        v160 = (const void *)((unsigned __int64)v6 ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !v6->m_ObjectSize )
          v160 = 0LL;
        WPP_IFR_SF_q(v31, 2u, 0xDu, 0x53u, WPP_FxIoQueue_cpp_Traceguids, v160);
        FxVerifierDbgBreakPoint(v31);
      }
      if ( *v30 < 0 )
      {
        v123 = *(FxVerifierLock **)&v6[-1].m_PowerIdle.m_DbgFlagIsInitialized;
        if ( v123 )
        {
LABEL_209:
          FxVerifierLock::Lock(v123, &v166, v33);
          m_Globals = v163;
          continue;
        }
      }
LABEL_68:
      m_Globals = v163;
      v166 = KeAcquireSpinLockRaiseToDpc(&v6->m_NPLock.m_Lock);
      continue;
    }
    break;
  }
$Done_11:
  --v6->m_Dispatching;
  if ( SLOBYTE(v6->m_ObjectFlags) >= 0 )
  {
LABEL_33:
    KeReleaseSpinLock(&v6->m_NPLock.m_Lock, v166);
    return 1;
  }
LABEL_81:
  v44 = *(FxVerifierLock **)&v6[-1].m_PowerIdle.m_DbgFlagIsInitialized;
  if ( !v44 )
    goto LABEL_33;
  FxVerifierLock::Unlock(v44, v166, (unsigned __int8)NewRequest);
  return 1;
}
