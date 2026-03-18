/*
 * XREFs of ?DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z @ 0x14000BD20
 * Callers:
 *     ?Send@FxIoTargetSelf@@UEAAXPEAU_IRP@@@Z @ 0x14000AF40 (-Send@FxIoTargetSelf@@UEAAXPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x14000642C (WPP_IFR_SF_qq.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14000A7C0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x14000A800 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x14000AD10 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14000AD58 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     FxAllocateFromNPagedLookasideList @ 0x14000D1D0 (FxAllocateFromNPagedLookasideList.c)
 *     WPP_IFR_SF_qqd @ 0x14000EA80 (WPP_IFR_SF_qqd.c)
 *     WPP_IFR_SF_qDqD @ 0x140010ADC (WPP_IFR_SF_qDqD.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x140020570 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1400205B8 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     WPP_IFR_SF_D @ 0x140026890 (WPP_IFR_SF_D.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x140026990 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     WPP_IFR_SF_qLsqd @ 0x1400306F4 (WPP_IFR_SF_qLsqd.c)
 *     ?InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z @ 0x1400312A0 (-InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1400339D0 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x140036010 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     ?TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z @ 0x1400375F8 (-TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z.c)
 *     WPP_IFR_SF_qdd @ 0x14003EFD8 (WPP_IFR_SF_qdd.c)
 *     WPP_IFR_SF_q @ 0x1400488BC (WPP_IFR_SF_q.c)
 *     ?AssignMemoryBuffers@FxRequest@@AEAAXW4_WDF_DEVICE_IO_TYPE@@@Z @ 0x140053D90 (-AssignMemoryBuffers@FxRequest@@AEAAXW4_WDF_DEVICE_IO_TYPE@@@Z.c)
 *     WPP_IFR_SF_qiid @ 0x14005646C (WPP_IFR_SF_qiid.c)
 *     ?VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400594F8 (-VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1400708BC (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x14007BDC4 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?GetReservedRequest@FxIoQueue@@QEAAJPEAU_IRP@@PEAPEAVFxRequest@@@Z @ 0x14007FF50 (-GetReservedRequest@FxIoQueue@@QEAAJPEAU_IRP@@PEAPEAVFxRequest@@@Z.c)
 *     ?CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x140081EF0 (-CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     ?FxPoolInsertNonPagedAllocateTracker@@YAXPEAUFX_POOL@@PEAUFX_POOL_TRACKER@@_KKPEAX@Z @ 0x14008285C (-FxPoolInsertNonPagedAllocateTracker@@YAXPEAUFX_POOL@@PEAUFX_POOL_TRACKER@@_KKPEAX@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x140083318 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140083568 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     FxLiveDump @ 0x140083910 (FxLiveDump.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x140083E48 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?VerifierFreeRequestToTestForwardProgess@FxPkgIo@@AEAAJPEAVFxRequest@@@Z @ 0x1400A16FC (-VerifierFreeRequestToTestForwardProgess@FxPkgIo@@AEAAJPEAVFxRequest@@@Z.c)
 *     ?QueueForwardProgressIrpLocked@FxIoQueue@@AEAAJPEAU_IRP@@@Z @ 0x1400A1FA4 (-QueueForwardProgressIrpLocked@FxIoQueue@@AEAAJPEAU_IRP@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 *     memset @ 0x1400ACFC0 (memset.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1400E58C4 (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 */

__int64 __fastcall FxPkgIo::DispatchStep2(
        FxPkgIo *this,
        _IRP *Irp,
        FxIoInCallerContext *IoInCallerCtx,
        FxIoQueue *Queue)
{
  unsigned __int64 v6; // rdx
  FxCxDeviceInfo *m_CxDeviceInfo; // rsi
  _WDF_EXECUTION_LEVEL *p_RequestAttributes; // rsi
  FxDeviceBase *m_DeviceBase; // r13
  const void *v10; // r14
  FxRequest *v11; // r12
  __int64 v12; // rax
  char *m_Globals; // rdi
  FX_POOL_TRACKER *v14; // rax
  _FX_DRIVER_GLOBALS *v15; // rdx
  unsigned int v16; // r8d
  FX_POOL_TRACKER *v17; // rbx
  _QWORD *p_Flink; // rdi
  char *v19; // rax
  _QWORD *v20; // rbx
  _WDF_EXECUTION_LEVEL *p_m_ExecutionLevel; // rdi
  __int64 v22; // rax
  __int64 v23; // r8
  __int64 v24; // rax
  PIRP v25; // rcx
  __int64 v26; // rdx
  unsigned __int8 *v27; // rcx
  int v28; // eax
  __int64 v29; // rax
  __int16 v30; // cx
  FxObject *flags; // rdi
  char *v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  char *v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rdi
  int v39; // edi
  bool v40; // al
  FxPkgIo *v41; // r13
  PIRP v42; // rdi
  FxIoInCallerContext *v43; // rbx
  char m_ObjectFlags; // al
  KIRQL v45; // bl
  unsigned __int8 v46; // r8
  _FX_IO_QUEUE_STATE m_QueueState; // ecx
  _FX_DRIVER_GLOBALS *v48; // rcx
  KIRQL v50; // di
  KIRQL v51; // cl
  _LIST_ENTRY *v52; // r8
  _LIST_ENTRY *v53; // rax
  __int64 v54; // rax
  char *v55; // rax
  __int64 v56; // rcx
  __int64 v57; // rcx
  __int64 v58; // rdi
  signed int _a1; // esi
  _WDF_BUGCHECK_CODES v60; // edx
  _FX_DRIVER_GLOBALS *v61; // rcx
  _FX_DRIVER_GLOBALS *v62; // r10
  FxDeviceBase *v63; // rbx
  _FX_DRIVER_GLOBALS *v64; // rcx
  char m_Globals_high; // al
  PIRP v66; // rcx
  unsigned __int64 v67; // rbx
  WDFQUEUE__ *v68; // rcx
  WDFREQUEST__ *v69; // rdx
  FxRequestContext *m_RequestContext; // rcx
  _FXIO_FORWARD_PROGRESS_CONTEXT *m_FwdProgContext; // rdx
  _FX_DRIVER_GLOBALS *v72; // rsi
  _WDF_IO_FORWARD_PROGRESS_RESERVED_POLICY m_Policy; // ecx
  KIRQL v74; // bl
  _LIST_ENTRY *p_m_ReservedRequestList; // rcx
  _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *v77; // rdx
  _LIST_ENTRY *v78; // rcx
  _LIST_ENTRY *p_m_ReservedRequestInUseList; // rax
  _LIST_ENTRY *v80; // r8
  FxRequestBase *v81; // rcx
  __int64 v82; // rax
  _FX_DRIVER_GLOBALS *v83; // rcx
  unsigned __int8 m_CompletionState; // al
  FxDeviceBase *v85; // rcx
  unsigned __int64 v86; // rdx
  unsigned __int16 v87; // r8
  unsigned __int64 v88; // rcx
  KIRQL v89; // al
  bool v90; // zf
  KIRQL v91; // r8
  _LIST_ENTRY *Blink; // rdx
  _LIST_ENTRY *v93; // rax
  KIRQL v94; // dl
  unsigned __int8 v95; // dl
  unsigned __int16 v96; // r9
  unsigned int v97; // edx
  FxTagTracker *v98; // rcx
  char *v99; // rbx
  KIRQL v100; // al
  KIRQL v101; // al
  FxVerifierLock *v102; // rcx
  FxVerifierLock *v103; // rcx
  _FX_DRIVER_GLOBALS *v104; // rdx
  signed int v105; // esi
  _WDF_BUGCHECK_CODES v106; // edx
  _FX_DRIVER_GLOBALS *v107; // rcx
  KIRQL v108; // dl
  KIRQL v109; // dl
  const void *v110; // rax
  unsigned __int16 m_ObjectSize; // ax
  const void *v112; // r15
  int ReservedRequest; // eax
  __int32 v114; // ecx
  int v115; // ecx
  _WDF_IO_FORWARD_PROGRESS_ACTION (__fastcall *Method)(WDFQUEUE__ *, _IRP *); // rax
  unsigned __int64 v117; // rcx
  int v118; // eax
  const void *v119; // rax
  const void *v120; // rdx
  unsigned __int8 v121; // r8
  unsigned __int8 v122; // r8
  const void *v123; // r11
  const char *v124; // r8
  const void *v125; // rdx
  const void *v126; // rdx
  const _GUID *traceGuid; // [rsp+20h] [rbp-49h]
  bool v128; // [rsp+50h] [rbp-19h]
  char v129; // [rsp+51h] [rbp-18h]
  KIRQL v130; // [rsp+52h] [rbp-17h]
  KIRQL v131; // [rsp+52h] [rbp-17h]
  FxObject *v132; // [rsp+58h] [rbp-11h] BYREF
  FxRequest *request; // [rsp+60h] [rbp-9h] BYREF
  FxObject **v134; // [rsp+68h] [rbp-1h] BYREF
  __int16 v135; // [rsp+70h] [rbp+7h]
  __int16 v136; // [rsp+72h] [rbp+9h]
  int v137; // [rsp+74h] [rbp+Bh]
  void *retaddr; // [rsp+C8h] [rbp+5Fh]
  FxPkgIo *v139; // [rsp+D0h] [rbp+67h] BYREF
  PIRP v140; // [rsp+D8h] [rbp+6Fh] BYREF
  FxIoInCallerContext *v141; // [rsp+E0h] [rbp+77h]
  char *OriginatingBinary; // [rsp+E8h] [rbp+7Fh] BYREF

  v141 = IoInCallerCtx;
  v140 = Irp;
  v139 = this;
  v129 = 0;
  v128 = Queue && Queue->m_SupportForwardProgress;
  if ( KeGetCurrentIrql() <= 1u )
  {
    KeEnterCriticalRegion();
    v129 = 1;
  }
  if ( Queue && (m_CxDeviceInfo = Queue->m_CxDeviceInfo) != 0LL )
    p_RequestAttributes = (_WDF_EXECUTION_LEVEL *)&m_CxDeviceInfo->RequestAttributes;
  else
    p_RequestAttributes = &this->m_DeviceBase[2].m_ExecutionLevel;
  m_DeviceBase = this->m_DeviceBase;
  v10 = 0LL;
  v11 = 0LL;
  request = 0LL;
  v12 = *(_QWORD *)&m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized;
  m_Globals = (char *)m_DeviceBase->m_Globals;
  OriginatingBinary = m_Globals;
  if ( v12 && *(_WORD *)(v12 + 8) == 4354 && *(_BYTE *)(v12 + 1787) )
  {
    v17 = (FX_POOL_TRACKER *)ExpInterlockedPopEntrySList((PSLIST_HEADER)&m_DeviceBase[2].m_SpinLock);
    if ( v17 )
      goto LABEL_13;
    v14 = (FX_POOL_TRACKER *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))m_DeviceBase[2].m_DeviceBase)(
                               HIDWORD(m_DeviceBase[2].m_ChildEntry.Blink),
                               HIDWORD(m_DeviceBase[2].m_DisposeSingleEntry.Next),
                               LODWORD(m_DeviceBase[2].m_DisposeSingleEntry.Next));
  }
  else
  {
    v14 = (FX_POOL_TRACKER *)FxAllocateFromNPagedLookasideList(
                               (_NPAGED_LOOKASIDE_LIST *)&m_DeviceBase[2].m_SpinLock,
                               v6);
  }
  v17 = v14;
LABEL_13:
  if ( !v17 )
    goto LABEL_179;
  if ( m_Globals[272] )
  {
    p_Flink = &v17[1].Link.Flink;
    FxPoolInsertNonPagedAllocateTracker(
      (FX_POOL *)(OriginatingBinary + 112),
      v17,
      (unsigned __int64)m_DeviceBase[2].m_CallbackLockObjectPtr,
      *((_DWORD *)OriginatingBinary + 17),
      retaddr);
  }
  else
  {
    p_Flink = &v17->Link.Flink;
  }
  v19 = OriginatingBinary;
  *p_Flink = v17;
  v20 = p_Flink + 2;
  p_Flink[1] = v19;
  if ( p_RequestAttributes )
    p_m_ExecutionLevel = p_RequestAttributes;
  else
    p_m_ExecutionLevel = &m_DeviceBase[2].m_ExecutionLevel;
  if ( v19[328] )
  {
    *(_OWORD *)v20 = 0LL;
    *((_OWORD *)v20 + 1) = 0LL;
    *((_OWORD *)v20 + 2) = 0LL;
    *((_DWORD *)v20 + 8) = 1146058822;
    v20 += 6;
  }
  v20[47] = 0LL;
  v20[48] = 0LL;
  v20[49] = 0LL;
  v20[50] = 0LL;
  v20[51] = 0LL;
  v20[46] = v20;
  if ( p_m_ExecutionLevel )
  {
    v22 = *((_QWORD *)p_m_ExecutionLevel + 6);
    if ( v22 )
    {
      v23 = *((_QWORD *)p_m_ExecutionLevel + 5);
      if ( !v23 )
        v23 = *(_QWORD *)(v22 + 16);
      memset(v20 + 52, 0, (v23 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
    }
    v20[50] = *((_QWORD *)p_m_ExecutionLevel + 6);
  }
  if ( !v20 )
  {
LABEL_179:
    v39 = -1073741670;
    WPP_IFR_SF_D(m_DeviceBase->m_Globals, 2u, 0x10u, 0xAu, WPP_FxRequest_cpp_Traceguids, 0xC000009A);
    goto LABEL_62;
  }
  v20[2] = m_DeviceBase->m_Globals;
  *v20 = FxObject::`vftable';
  *((_DWORD *)v20 + 2) = 24121352;
  v20[7] = 0LL;
  *((_BYTE *)v20 + 48) = 1;
  *((_DWORD *)v20 + 3) = 1;
  *((_DWORD *)v20 + 6) = 0x10000;
  v20[8] = 0LL;
  v20[5] = v20 + 4;
  v20[4] = v20 + 4;
  v20[10] = v20 + 9;
  v20[9] = v20 + 9;
  v24 = v20[2];
  v20[11] = 0LL;
  v20[12] = 0LL;
  if ( *(_BYTE *)(v24 + 324) )
    FxObject::Vf_VerifyConstruct((FxObject *)v20, v15, 0);
  *v20 = FxNonPagedObject::`vftable';
  v20[14] = 0LL;
  *((_BYTE *)v20 + 104) = 1;
  if ( *((char *)v20 + 24) < 0 )
  {
    v104 = (_FX_DRIVER_GLOBALS *)v20[2];
    if ( v104->FxVerifierLock )
    {
      OriginatingBinary = 0LL;
      FxVerifierLock::CreateAndInitialize((FxVerifierLock **)&OriginatingBinary, v104, (FxObject *)v20);
      *(v20 - 5) = OriginatingBinary;
    }
  }
  v25 = v140;
  v20[19] = v140;
  v20[23] = 0LL;
  v20[24] = 0LL;
  *((_BYTE *)v20 + 214) = v25 == 0LL;
  *((_WORD *)v20 + 106) = 0;
  *((_BYTE *)v20 + 238) = 1;
  v20[20] = 0LL;
  v20[25] = 0LL;
  *((_BYTE *)v20 + 215) = 0;
  *((_BYTE *)v20 + 236) = 0;
  v20[21] = 0LL;
  v20[22] = 0LL;
  v20[16] = v20 + 15;
  v20[15] = v20 + 15;
  v20[18] = 0LL;
  v20[27] = 216LL;
  v20[28] = 0LL;
  *((_DWORD *)v20 + 52) = 0;
  v20[30] = 0LL;
  *((_DWORD *)v20 + 58) = 232;
  *((_BYTE *)v20 + 237) = 0;
  v20[32] = FxRequestSystemBuffer::`vftable';
  v20[33] = 0LL;
  v20[34] = FxRequestOutputBuffer::`vftable';
  v20[35] = 0LL;
  v20[31] = 0LL;
  *((_BYTE *)v20 + 353) = 0;
  v20[37] = v20 + 36;
  v20[36] = v20 + 36;
  v20[39] = v20 + 38;
  v20[38] = v20 + 38;
  v20[41] = v20 + 40;
  v20[40] = v20 + 40;
  *v20 = FxRequestFromLookaside::`vftable';
  *((_BYTE *)v20 + 352) = 0;
  *((_WORD *)v20 + 177) = 0;
  v20[42] = 0LL;
  v20[43] = 0LL;
  v20[12] = m_DeviceBase->m_DeviceBase;
  if ( v25 )
  {
    v26 = v20[19];
    v27 = *(unsigned __int8 **)(v26 + 184);
    v16 = *v27;
    if ( v16 != 15 )
    {
      if ( v16 == 3 || v16 == 4 )
      {
        if ( m_DeviceBase[1].m_Refcnt == 1 )
        {
          if ( *(_BYTE *)(v26 + 64) )
            goto LABEL_40;
          v82 = *(_QWORD *)(v26 + 112);
        }
        else
        {
          if ( m_DeviceBase[1].m_Refcnt != 2 )
            goto LABEL_40;
          v82 = *(_QWORD *)(v26 + 24);
        }
        v20[33] = v82;
        goto LABEL_36;
      }
      if ( v16 != 14 )
        goto LABEL_40;
    }
    v28 = *((_DWORD *)v27 + 6) & 3;
    if ( v28 == 3 )
    {
      if ( (_BYTE)v16 != 15 && *(_BYTE *)(v26 + 64) )
        goto LABEL_40;
      v20[33] = *((_QWORD *)v27 + 4);
      v29 = *(_QWORD *)(v26 + 112);
    }
    else
    {
      if ( v28 )
      {
        if ( (unsigned int)(v28 - 1) <= 1 )
          v20[33] = *(_QWORD *)(v26 + 24);
        goto LABEL_36;
      }
      v20[33] = *(_QWORD *)(v26 + 24);
      v29 = *(_QWORD *)(v26 + 24);
    }
    v20[35] = v29;
LABEL_36:
    if ( v20[33] )
      *((_BYTE *)v20 + 235) |= 1u;
    if ( v20[35] )
      *((_BYTE *)v20 + 235) |= 2u;
  }
LABEL_40:
  v30 = *((_WORD *)v20 + 5);
  if ( m_DeviceBase->m_Globals->FxRequestParentOptimizationOn )
  {
    v132 = 0LL;
    flags = 0LL;
    if ( !v30 )
    {
      v39 = -1073741816;
      goto LABEL_60;
    }
    if ( p_RequestAttributes )
    {
      if ( *((_DWORD *)p_RequestAttributes + 6) == 2 )
      {
        v100 = KeAcquireSpinLockRaiseToDpc(v20 + 7);
        *((_WORD *)v20 + 12) |= 0x11u;
        KeReleaseSpinLock(v20 + 7, v100);
        flags = v132;
      }
      v32 = (char *)*((_QWORD *)p_RequestAttributes + 4);
      OriginatingBinary = v32;
      if ( v32 )
      {
        LOWORD(v33) = 0;
        flags = (FxObject *)(~(unsigned __int64)v32 & 0xFFFFFFFFFFFFFFF8uLL);
        if ( ((unsigned __int8)v32 & 1) != 0 )
        {
          v33 = LOWORD(flags->__vftable);
          flags = (FxObject *)((char *)flags - v33);
        }
        if ( flags->m_Type == 4096 )
        {
          v132 = flags;
        }
        else
        {
          v135 = 4096;
          v134 = &v132;
          v136 = v33;
          v137 = 0;
          if ( flags->QueryInterface(flags, (FxQueryInterfaceParams *)&v134) < 0 )
          {
            v99 = OriginatingBinary;
            WPP_IFR_SF_qDqD(
              flags->m_Globals,
              v95,
              v16,
              v96,
              traceGuid,
              OriginatingBinary,
              0x1000u,
              flags,
              flags->m_Type);
            FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, (unsigned __int64)v99, 0x1000uLL);
          }
          flags = v132;
        }
      }
    }
    if ( !flags )
    {
LABEL_51:
      if ( p_RequestAttributes )
      {
        v34 = *((unsigned __int16 *)v20 + 5);
        if ( (_WORD)v34 )
          v35 = (char *)v20 + v34;
        else
          v35 = 0LL;
        v36 = *((_QWORD *)p_RequestAttributes + 2);
        if ( v36 )
          *((_QWORD *)v35 + 3) = v36;
        v37 = *((_QWORD *)p_RequestAttributes + 1);
        if ( v37 )
        {
          *((_QWORD *)v35 + 2) = v37;
          *((_WORD *)v20 + 12) |= 0x400u;
        }
      }
      *((_WORD *)v20 + 12) |= 8u;
      v38 = *(_QWORD *)(v20[2] + 336LL);
      if ( !v38 || *(_DWORD *)v38 )
        goto LABEL_59;
      if ( *((_WORD *)v20 + 4) == 4098 )
      {
        if ( _InterlockedIncrement((volatile signed __int32 *)(v38 + 20)) >= 2 )
          _InterlockedAdd((volatile signed __int32 *)(v38 + 12), *(_DWORD *)(v38 + 8));
        goto LABEL_200;
      }
      if ( *((_WORD *)v20 + 4) != 4104 || *((_BYTE *)v20 + 213) == 2 )
      {
LABEL_200:
        *((_WORD *)v20 + 12) |= 0x40u;
        v105 = _InterlockedIncrement((volatile signed __int32 *)(v38 + 16));
        if ( v105 >= *(_DWORD *)(v38 + 12)
          && !KeGetCurrentIrql()
          && !_InterlockedCompareExchange((volatile signed __int32 *)v38, 1, 0) )
        {
          WPP_IFR_SF_D((_FX_DRIVER_GLOBALS *)v20[2], 2u, 0x14u, 0xFu, WPP_FxObject_cpp_Traceguids, v105);
          if ( *(_BYTE *)(v38 + 4) )
            DbgBreakPoint();
          v107 = (_FX_DRIVER_GLOBALS *)v20[2];
          OriginatingBinary = v107->Public.DriverName;
          FxLiveDump(v107, v106, (unsigned __int64)v107->Public.DriverName, v105);
          if ( v105 >= *(_DWORD *)(v38 + 12) )
            MicrosoftTelemetryAssertTriggeredArgsKM(OriginatingBinary, v105, 0);
        }
      }
LABEL_59:
      v39 = 0;
      goto LABEL_60;
    }
    v89 = KeAcquireSpinLockRaiseToDpc(v20 + 7);
    v90 = *((_WORD *)v20 + 13) == 1;
    LOBYTE(OriginatingBinary) = v89;
    if ( v90 )
    {
      if ( !v20[8] )
      {
        v91 = KeAcquireSpinLockRaiseToDpc(&flags->m_SpinLock.m_Lock);
        v131 = v91;
        if ( flags->m_ObjectState == 1 )
        {
          Blink = flags->m_ChildListHead.Blink;
          v93 = (_LIST_ENTRY *)(v20 + 9);
          if ( Blink->Flink != &flags->m_ChildListHead )
            goto LABEL_220;
          v93->Flink = &flags->m_ChildListHead;
          v20[10] = Blink;
          Blink->Flink = v93;
          flags->m_ChildListHead.Blink = v93;
          if ( !v20[12] )
            v20[12] = flags->m_DeviceBase;
          KeReleaseSpinLock(&flags->m_SpinLock.m_Lock, v91);
          v94 = (unsigned __int8)OriginatingBinary;
          v20[8] = flags;
          KeReleaseSpinLock(v20 + 7, v94);
          goto LABEL_51;
        }
        FxObject::TraceDroppedEvent(flags, FxObjectDroppedEventAddChildObjectInternal);
        KeReleaseSpinLock(&flags->m_SpinLock.m_Lock, v131);
        v109 = (unsigned __int8)OriginatingBinary;
        goto LABEL_216;
      }
      v108 = v89;
LABEL_214:
      KeReleaseSpinLock(v20 + 7, v108);
      v39 = -1071644147;
      goto LABEL_60;
    }
    FxObject::TraceDroppedEvent((FxObject *)v20, FxObjectDroppedEventAssignParentObject);
    v109 = (unsigned __int8)OriginatingBinary;
  }
  else
  {
    if ( !v30 )
    {
      v39 = -1073741816;
      goto LABEL_60;
    }
    if ( p_RequestAttributes && *((_DWORD *)p_RequestAttributes + 6) == 2 )
    {
      v101 = KeAcquireSpinLockRaiseToDpc(v20 + 7);
      *((_WORD *)v20 + 12) |= 0x11u;
      KeReleaseSpinLock(v20 + 7, v101);
    }
    v50 = KeAcquireSpinLockRaiseToDpc(v20 + 7);
    if ( *((_WORD *)v20 + 13) == 1 )
    {
      if ( v20[8] )
      {
        v108 = v50;
        goto LABEL_214;
      }
      v51 = KeAcquireSpinLockRaiseToDpc(&m_DeviceBase->m_SpinLock.m_Lock);
      v130 = v51;
      if ( m_DeviceBase->m_ObjectState == 1 )
      {
        v52 = m_DeviceBase->m_ChildListHead.Blink;
        v53 = (_LIST_ENTRY *)(v20 + 9);
        if ( v52->Flink != &m_DeviceBase->m_ChildListHead )
          goto LABEL_220;
        v53->Flink = &m_DeviceBase->m_ChildListHead;
        v20[10] = v52;
        v52->Flink = v53;
        m_DeviceBase->m_ChildListHead.Blink = v53;
        if ( !v20[12] )
          v20[12] = m_DeviceBase->m_DeviceBase;
        KeReleaseSpinLock(&m_DeviceBase->m_SpinLock.m_Lock, v51);
        v20[8] = m_DeviceBase;
        KeReleaseSpinLock(v20 + 7, v50);
        if ( p_RequestAttributes )
        {
          v54 = *((unsigned __int16 *)v20 + 5);
          if ( (_WORD)v54 )
            v55 = (char *)v20 + v54;
          else
            v55 = 0LL;
          v56 = *((_QWORD *)p_RequestAttributes + 2);
          if ( v56 )
            *((_QWORD *)v55 + 3) = v56;
          v57 = *((_QWORD *)p_RequestAttributes + 1);
          if ( v57 )
          {
            *((_QWORD *)v55 + 2) = v57;
            *((_WORD *)v20 + 12) |= 0x400u;
          }
        }
        *((_WORD *)v20 + 12) |= 8u;
        v58 = *(_QWORD *)(v20[2] + 336LL);
        if ( !v58 || *(_DWORD *)v58 )
          goto LABEL_59;
        if ( *((_WORD *)v20 + 4) == 4098 )
        {
          if ( _InterlockedIncrement((volatile signed __int32 *)(v58 + 20)) >= 2 )
            _InterlockedAdd((volatile signed __int32 *)(v58 + 12), *(_DWORD *)(v58 + 8));
        }
        else if ( *((_WORD *)v20 + 4) == 4104 && *((_BYTE *)v20 + 213) != 2 )
        {
          goto LABEL_59;
        }
        *((_WORD *)v20 + 12) |= 0x40u;
        _a1 = _InterlockedIncrement((volatile signed __int32 *)(v58 + 16));
        if ( _a1 >= *(_DWORD *)(v58 + 12)
          && !KeGetCurrentIrql()
          && !_InterlockedCompareExchange((volatile signed __int32 *)v58, 1, 0) )
        {
          WPP_IFR_SF_D((_FX_DRIVER_GLOBALS *)v20[2], 2u, 0x14u, 0xFu, WPP_FxObject_cpp_Traceguids, _a1);
          if ( *(_BYTE *)(v58 + 4) )
            DbgBreakPoint();
          v61 = (_FX_DRIVER_GLOBALS *)v20[2];
          OriginatingBinary = v61->Public.DriverName;
          FxLiveDump(v61, v60, (unsigned __int64)v61->Public.DriverName, _a1);
          if ( _a1 >= *(_DWORD *)(v58 + 12) )
            MicrosoftTelemetryAssertTriggeredArgsKM(OriginatingBinary, _a1, 0);
        }
        goto LABEL_59;
      }
      FxObject::TraceDroppedEvent(m_DeviceBase, FxObjectDroppedEventAddChildObjectInternal);
      KeReleaseSpinLock(&m_DeviceBase->m_SpinLock.m_Lock, v130);
    }
    else
    {
      FxObject::TraceDroppedEvent((FxObject *)v20, FxObjectDroppedEventAssignParentObject);
    }
    v109 = v50;
  }
LABEL_216:
  KeReleaseSpinLock(v20 + 7, v109);
  v39 = -1073741738;
LABEL_60:
  if ( v39 < 0 )
  {
    WPP_IFR_SF_D(m_DeviceBase->m_Globals, 2u, 0x10u, 0xBu, WPP_FxRequest_cpp_Traceguids, v39);
    FxObject::DeleteFromFailedCreate((FxObject *)v20);
  }
  else
  {
    v11 = (FxRequest *)v20;
    request = (FxRequest *)v20;
  }
LABEL_62:
  v40 = v128;
  v41 = v139;
  if ( v128 )
  {
    if ( v39 < 0 )
      goto LABEL_117;
    if ( (v139->m_Globals->FxEnhancedVerifierOptions & 0xF0000) == 0 )
      goto LABEL_122;
    v39 = FxPkgIo::VerifierFreeRequestToTestForwardProgess(v139, v11);
    v40 = v128;
  }
  if ( v39 < 0 )
  {
LABEL_117:
    if ( !v41->m_Filter || Queue )
    {
      if ( v40 )
      {
        ReservedRequest = FxIoQueue::GetReservedRequest(Queue, v140, &request);
        v39 = ReservedRequest;
        if ( ReservedRequest == 259 )
          goto $IrpIsGone;
        if ( ReservedRequest >= 0 )
        {
          v11 = request;
          goto LABEL_65;
        }
      }
      else
      {
        WPP_IFR_SF_D(v41->m_Globals, 2u, 0xDu, 0x10u, WPP_FxPkgIo_cpp_Traceguids, v39);
      }
    }
    goto $CompleteIrp;
  }
  if ( v40 )
  {
LABEL_122:
    if ( !Queue->m_FwdProgContext->m_IoResourcesAllocate.Method )
      goto LABEL_65;
    v11->m_Presented = 1;
    v67 = (unsigned __int64)Queue ^ 0xFFFFFFFFFFFFFFF8uLL;
    v68 = (WDFQUEUE__ *)((unsigned __int64)Queue ^ 0xFFFFFFFFFFFFFFF8uLL);
    v69 = (WDFREQUEST__ *)((unsigned __int64)v11 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v11->m_ObjectSize )
      v69 = 0LL;
    if ( !Queue->m_ObjectSize )
      v68 = 0LL;
    if ( Queue->m_FwdProgContext->m_IoResourcesAllocate.Method(v68, v69) >= 0 )
      goto LABEL_65;
    m_RequestContext = v11->m_RequestContext;
    if ( m_RequestContext )
    {
      m_RequestContext->ReleaseAndRestore(m_RequestContext, v11);
      v67 = (unsigned __int64)Queue ^ 0xFFFFFFFFFFFFFFF8uLL;
    }
    if ( !v11->m_Presented )
      FxObject::ClearEvtCallbacks(v11);
    v11->DeleteObject(v11);
    m_FwdProgContext = Queue->m_FwdProgContext;
    v11 = 0LL;
    v72 = Queue->m_Globals;
    v42 = v140;
    m_Policy = m_FwdProgContext->m_Policy;
    if ( m_Policy == WdfIoForwardProgressReservedPolicyAlwaysUseReservedRequest )
      goto LABEL_133;
    v114 = m_Policy - 2;
    if ( v114 )
    {
      if ( v114 == 1 )
      {
        if ( (v140->Flags & 2) == 0 || v140->Tail.Overlay.CurrentStackLocation->MajorFunction == 13 )
          v115 = 1;
        else
          v115 = 2;
        goto LABEL_226;
      }
    }
    else
    {
      Method = m_FwdProgContext->m_IoExamineIrp.Method;
      if ( Method )
      {
        v117 = v67;
        if ( !Queue->m_ObjectSize )
          v117 = 0LL;
        v118 = Method((WDFQUEUE__ *)v117, v140);
        v115 = v118;
        if ( v118 < 1 || v118 > 2 )
        {
          v119 = 0LL;
          v39 = -1073741823;
          if ( Queue->m_ObjectSize )
            v119 = (const void *)v67;
          WPP_IFR_SF_qdd(v72, 2u, 0xDu, 0xAu, WPP_FxIoQueueKm_cpp_Traceguids, v119, v115, -1073741823);
          FxVerifierDbgBreakPoint(v72);
          goto $CompleteIrp;
        }
LABEL_226:
        if ( v115 == 1 )
        {
          m_ObjectSize = Queue->m_ObjectSize;
          v39 = -1073741823;
          v112 = (const void *)((unsigned __int64)Queue ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !m_ObjectSize )
            v112 = 0LL;
          WPP_IFR_SF_qqd(v72, 2u, 0xDu, 0xBu, WPP_FxIoQueueKm_cpp_Traceguids, v112, v140, 0xC0000001);
          goto $CompleteIrp;
        }
      }
    }
LABEL_133:
    v74 = KeAcquireSpinLockRaiseToDpc(&Queue->m_FwdProgContext->m_PendedReserveLock.m_Lock);
    p_m_ReservedRequestList = &Queue->m_FwdProgContext->m_ReservedRequestList;
    Flink = p_m_ReservedRequestList->Flink;
    if ( p_m_ReservedRequestList->Flink != p_m_ReservedRequestList )
    {
      if ( Flink->Blink == p_m_ReservedRequestList )
      {
        v77 = Flink->Flink;
        if ( Flink->Flink->Blink == Flink )
        {
          p_m_ReservedRequestList->Flink = v77;
          v11 = (FxRequest *)&Flink[-20];
          v77->Blink = p_m_ReservedRequestList;
          v78 = Flink;
          p_m_ReservedRequestInUseList = &Queue->m_FwdProgContext->m_ReservedRequestInUseList;
          v80 = Queue->m_FwdProgContext->m_ReservedRequestInUseList.Blink;
          if ( v80->Flink == p_m_ReservedRequestInUseList )
          {
            v78->Flink = p_m_ReservedRequestInUseList;
            v78->Blink = v80;
            v80->Flink = v78;
            p_m_ReservedRequestInUseList->Blink = v78;
            v11->m_Irp.m_Irp = v42;
            FxRequest::AssignMemoryBuffers(v11, (_WDF_DEVICE_IO_TYPE)Queue->m_DeviceBase[1].m_Refcnt);
            if ( v72->FxVerifierOn )
              FxRequestBase::SetVerifierFlags(v81, 1024);
            KeReleaseSpinLock(&Queue->m_FwdProgContext->m_PendedReserveLock.m_Lock, v74);
            goto LABEL_66;
          }
        }
      }
LABEL_220:
      __fastfail(3u);
    }
    v39 = FxIoQueue::QueueForwardProgressIrpLocked(Queue, v42);
    KeReleaseSpinLock(&Queue->m_FwdProgContext->m_PendedReserveLock.m_Lock, v74);
    if ( v39 == 259 )
      goto $IrpIsGone;
    if ( v39 >= 0 )
      goto LABEL_65;
$CompleteIrp:
    v66 = v140;
    v140->IoStatus.Status = v39;
    v66->IoStatus.Information = 0LL;
    IofCompleteRequest(v66, 0);
    goto $IrpIsGone;
  }
LABEL_65:
  v42 = v140;
LABEL_66:
  v43 = v141;
  if ( v141 && v141->m_Method && !v11->m_Reserved )
  {
    v11->m_InternalContext = Queue;
    v83 = v41->m_Globals;
    v42->Tail.Overlay.CurrentStackLocation->Control |= 1u;
    if ( v83->FxVerifierOn )
      FxRequestBase::SetVerifierFlags(v11, 33);
    if ( v11->m_Completed )
    {
      if ( v11->m_ObjectSize )
        v110 = (const void *)((unsigned __int64)v11 ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v110 = 0LL;
      WPP_IFR_SF_q(v11->m_Globals, 2u, 0x10u, 0x27u, WPP_FxRequest_cpp_Traceguids, v110);
      FxVerifierDbgBreakPoint(v11->m_Globals);
    }
    else
    {
      m_CompletionState = v11->m_CompletionState;
      v11->m_CompletionState = -126;
      if ( !m_CompletionState )
      {
        v97 = _InterlockedIncrement(&v11->m_Refcnt);
        if ( SLOBYTE(v11->m_ObjectFlags) < 0 )
        {
          v98 = (FxTagTracker *)v11[-1].m_OwnerListEntry2.Blink;
          if ( v98 )
            FxTagTracker::UpdateTagHistory(
              v98,
              (void *)0x74617453,
              1820,
              "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp",
              TagAddRef,
              v97);
        }
      }
    }
    v11->Release(v11, (void *)1952543827, 1741, "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp");
    v11->m_Presented = 1;
    v85 = v41->m_DeviceBase;
    v86 = 0LL;
    if ( v11->m_ObjectSize )
      v86 = (unsigned __int64)v11 ^ 0xFFFFFFFFFFFFFFF8uLL;
    v87 = v85->m_ObjectSize;
    if ( v43->m_Method )
    {
      v88 = (unsigned __int64)v85 ^ 0xFFFFFFFFFFFFFFF8uLL;
      if ( !v87 )
        v88 = 0LL;
      v43->m_Method((WDFDEVICE__ *)v88, (WDFREQUEST__ *)v86);
    }
LABEL_160:
    v39 = 259;
    goto $IrpIsGone;
  }
  m_ObjectFlags = Queue->m_ObjectFlags;
  v139 = (FxPkgIo *)v11;
  LOBYTE(v140) = 0;
  if ( m_ObjectFlags < 0 && (v102 = *(FxVerifierLock **)&Queue[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
  {
    FxVerifierLock::Lock(v102, (unsigned __int8 *)&v140, v16);
    v45 = (unsigned __int8)v140;
  }
  else
  {
    v45 = KeAcquireSpinLockRaiseToDpc(&Queue->m_NPLock.m_Lock);
  }
  if ( v11->m_Reserved )
    FxObject::AddRef(v11, (void *)0x50647746, 2311, "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
  m_QueueState = Queue->m_QueueState;
  if ( (m_QueueState & 1) != 0 )
  {
    v48 = Queue->m_Globals;
    if ( v48->FxVerboseOn )
    {
      v120 = (const void *)((unsigned __int64)Queue ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !Queue->m_ObjectSize )
        v120 = 0LL;
      if ( v11->m_ObjectSize )
        v10 = (const void *)((unsigned __int64)v11 ^ 0xFFFFFFFFFFFFFFF8uLL);
      WPP_IFR_SF_qq(v48, 5u, 0xDu, 0x2Au, WPP_FxIoQueue_cpp_Traceguids, v10, v120);
    }
    if ( v11->m_Globals->FxVerifierIO )
    {
      LOBYTE(v140) = 0;
      FxNonPagedObject::Lock(v11, (unsigned __int8 *)&v140, v46);
      FxRequest::VerifyRequestIsNotCompleted(v11, v11->m_Globals);
      FxNonPagedObject::Unlock(v11, (unsigned __int8)v140, v121);
    }
    v11->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
    if ( !v11->m_Reserved || !Queue->m_Dispatching )
    {
      FxIoQueue::DispatchEvents(Queue, v45, v11);
      v39 = 259;
      goto $IrpIsGone;
    }
    FxIoQueue::InsertNewRequestLocked(Queue, (FxRequest **)&v139, v45);
    FxNonPagedObject::Unlock(Queue, v45, v122);
    goto LABEL_160;
  }
  v62 = Queue->m_Globals;
  v39 = -1073741436;
  if ( v62->FxVerboseOn )
  {
    if ( v11->m_ObjectSize )
      v123 = (const void *)((unsigned __int64)v11 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v123 = 0LL;
    v124 = "power stopping (Drain) in progress,";
    if ( (m_QueueState & 0x10000) == 0 )
      v124 = a5;
    v125 = (const void *)((unsigned __int64)Queue ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !Queue->m_ObjectSize )
      v125 = 0LL;
    WPP_IFR_SF_qLsqd(v62, 5u, (unsigned int)v124, 0x29u, traceGuid, v125, m_QueueState, v124, v123, -1073741436);
  }
  if ( SLOBYTE(Queue->m_ObjectFlags) < 0
    && (v103 = *(FxVerifierLock **)&Queue[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
  {
    FxVerifierLock::Unlock(v103, v45, v46);
  }
  else
  {
    KeReleaseSpinLock(&Queue->m_NPLock.m_Lock, v45);
  }
  v11->m_Irp.m_Irp->IoStatus.Information = 0LL;
  v63 = v11->m_DeviceBase;
  v64 = v11->m_Globals;
  if ( v64->FxVerboseOn )
  {
    v126 = (const void *)((unsigned __int64)v11 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v11->m_ObjectSize )
      v126 = 0LL;
    WPP_IFR_SF_qiid(
      v64,
      5u,
      0x10u,
      0xBu,
      WPP_FxRequest_hpp_Traceguids,
      v126,
      v11->m_Irp.m_Irp,
      v11->m_Irp.m_Irp->IoStatus.Information,
      -1073741436);
  }
  if ( v63 )
    m_Globals_high = HIBYTE(v63[1].m_Globals);
  else
    m_Globals_high = 0;
  v11->m_PriorityBoost = m_Globals_high;
  FxRequest::CompleteInternal(v11, -1073741436);
  v11->Release(v11, (void *)1886220099, 2338, "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
$IrpIsGone:
  if ( v129 )
    KeLeaveCriticalRegion();
  return (unsigned int)v39;
}
