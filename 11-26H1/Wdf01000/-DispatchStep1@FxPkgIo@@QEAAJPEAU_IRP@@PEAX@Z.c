/*
 * XREFs of ?DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z @ 0x14000D2C0
 * Callers:
 *     ?Dispatch@FxPkgIo@@UEAAJPEAU_IRP@@@Z @ 0x14000D1F0 (-Dispatch@FxPkgIo@@UEAAJPEAU_IRP@@@Z.c)
 *     imp_WdfDeviceWdmDispatchIrp @ 0x14004C640 (imp_WdfDeviceWdmDispatchIrp.c)
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
 *     WPP_IFR_SF_qcDqd @ 0x14007F3A0 (WPP_IFR_SF_qcDqd.c)
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
 *     ?Vf_VerifyDispatchContext@FxPkgIo@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1400DDDF8 (-Vf_VerifyDispatchContext@FxPkgIo@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1400E58C4 (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 */

NTSTATUS __fastcall FxPkgIo::DispatchStep1(FxPkgIo *this, _IRP *Irp, _LIST_ENTRY *DispatchContext)
{
  _LIST_ENTRY *p_m_DynamicDispatchInfoListHead; // r14
  const void *v4; // rsi
  _LIST_ENTRY *v5; // rbx
  _IO_STACK_LOCATION *CurrentStackLocation; // r8
  FxIoInCallerContext *p_m_InCallerContextCallback; // r9
  __int64 MajorFunction; // rdx
  FxIoQueue *v11; // r14
  FxCxDeviceInfo *m_CxDeviceInfo; // rax
  FxIoInCallerContext *p_IoInCallerContextCallback; // rcx
  unsigned __int64 v14; // rdx
  FxCxDeviceInfo *v15; // r15
  _WDF_EXECUTION_LEVEL *p_RequestAttributes; // r15
  FxDeviceBase *m_DeviceBase; // rdi
  FxRequest *v18; // r12
  __int64 v19; // rcx
  FX_POOL_TRACKER *v20; // rax
  FX_POOL_TRACKER *v21; // rbx
  _FX_DRIVER_GLOBALS *v22; // rdx
  _QWORD *p_Flink; // rax
  _QWORD *v24; // rbx
  char *p_m_ExecutionLevel; // rax
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rax
  PIRP v29; // rax
  __int64 v30; // rdx
  __int64 m_Refcnt; // r9
  unsigned __int8 *v32; // rcx
  __int64 v33; // r8
  int v34; // eax
  __int64 v35; // rax
  __int16 v36; // cx
  KIRQL v37; // al
  bool v38; // zf
  KIRQL v39; // cl
  _LIST_ENTRY *Blink; // r8
  _LIST_ENTRY *v41; // rax
  KIRQL v42; // dl
  __int64 v43; // rax
  char *v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rdi
  int v48; // edi
  bool v49; // al
  PIRP v50; // rbx
  FxIoInCallerContext *v51; // rdi
  char m_ObjectFlags; // al
  KIRQL v53; // bl
  unsigned __int8 v54; // r8
  unsigned int m_QueueState; // eax
  _FX_DRIVER_GLOBALS *v56; // rcx
  PIRP v57; // rcx
  FxObject *flags; // rdi
  char *v60; // rax
  __int64 v61; // rcx
  __int64 v62; // rax
  char *v63; // rax
  __int64 v64; // rcx
  __int64 v65; // rcx
  __int64 v66; // rdi
  signed int _a1; // r15d
  _WDF_BUGCHECK_CODES v68; // edx
  _FX_DRIVER_GLOBALS *v69; // rcx
  _IO_STACK_LOCATION *v70; // r8
  int v71; // edx
  _FX_DRIVER_GLOBALS *v72; // rdx
  int v73; // r12d
  _LIST_ENTRY *v74; // r10
  _LIST_ENTRY *v75; // r8
  _IO_STACK_LOCATION *v76; // rdx
  FxDeviceBase *v77; // rcx
  __int64 LowPart; // r9
  unsigned __int16 v79; // ax
  unsigned __int64 v80; // rcx
  _LIST_ENTRY *v81; // rax
  __int64 MinorFunction; // r8
  __int64 v83; // rdx
  FxDeviceBase *v84; // rbx
  _FX_DRIVER_GLOBALS *v85; // rcx
  char m_Globals_high; // al
  unsigned __int64 v87; // rdx
  unsigned __int64 v88; // rcx
  FxRequestContext *m_RequestContext; // rcx
  _FXIO_FORWARD_PROGRESS_CONTEXT *m_FwdProgContext; // rdx
  _FX_DRIVER_GLOBALS *m_Globals; // r15
  _WDF_IO_FORWARD_PROGRESS_RESERVED_POLICY m_Policy; // ecx
  KIRQL v93; // al
  _LIST_ENTRY *p_m_ReservedRequestList; // rcx
  _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *v96; // rdx
  __int64 *v97; // rcx
  __int64 p_m_ReservedRequestInUseList; // rax
  _LIST_ENTRY *v99; // r8
  FxRequestBase *v100; // rcx
  __int64 v101; // rax
  _FX_DRIVER_GLOBALS *v102; // rcx
  unsigned __int8 m_CompletionState; // al
  FxDeviceBase *v104; // rcx
  unsigned __int64 v105; // rdx
  unsigned __int16 m_ObjectSize; // r8
  unsigned __int64 v107; // rcx
  KIRQL v108; // r8
  _LIST_ENTRY *v109; // rdx
  _LIST_ENTRY *v110; // rax
  KIRQL v111; // dl
  unsigned __int8 v112; // dl
  unsigned __int16 v113; // r9
  unsigned int v114; // edx
  FxTagTracker *v115; // rcx
  char *v116; // rbx
  KIRQL v117; // al
  KIRQL v118; // al
  FxVerifierLock *v119; // rcx
  FxVerifierLock *v120; // rcx
  FxDeviceBase *v121; // rcx
  unsigned __int16 v122; // ax
  const void *v123; // rcx
  _FX_DRIVER_GLOBALS *v124; // rdx
  signed int v125; // r15d
  _WDF_BUGCHECK_CODES v126; // edx
  _FX_DRIVER_GLOBALS *v127; // rcx
  const void *v128; // rax
  const void *v129; // r14
  KIRQL v130; // r10
  FxDeviceBase *v131; // rcx
  unsigned __int16 v132; // ax
  const void *v133; // rcx
  int v134; // eax
  __int32 v135; // ecx
  int v136; // eax
  _WDF_IO_FORWARD_PROGRESS_ACTION (__fastcall *Method)(WDFQUEUE__ *, _IRP *); // rax
  unsigned __int64 v138; // rcx
  const void *v139; // r14
  const void *v140; // rax
  unsigned __int8 v141; // r8
  unsigned __int8 v142; // r8
  const void *v143; // rdx
  const char *v144; // r10
  const void *v145; // r8
  const void *v146; // rdx
  const _GUID *traceGuid; // [rsp+20h] [rbp-59h]
  int v148; // [rsp+48h] [rbp-31h]
  KIRQL v149; // [rsp+50h] [rbp-29h]
  KIRQL v150; // [rsp+50h] [rbp-29h]
  FxObject *v151; // [rsp+58h] [rbp-21h] BYREF
  FxDeviceBase *v152; // [rsp+60h] [rbp-19h]
  FxRequest *ReservedRequest; // [rsp+68h] [rbp-11h] BYREF
  FxIoInCallerContext *v154; // [rsp+70h] [rbp-9h]
  FxObject **v155; // [rsp+78h] [rbp-1h] BYREF
  __int16 v156; // [rsp+80h] [rbp+7h]
  __int16 v157; // [rsp+82h] [rbp+9h]
  int v158; // [rsp+84h] [rbp+Bh]
  void *retaddr; // [rsp+D8h] [rbp+5Fh]
  char *OriginatingBinary; // [rsp+E0h] [rbp+67h] BYREF
  PIRP v161; // [rsp+E8h] [rbp+6Fh] BYREF
  bool v162; // [rsp+F0h] [rbp+77h]
  char v163; // [rsp+F8h] [rbp+7Fh]

  v161 = Irp;
  p_m_DynamicDispatchInfoListHead = &this->m_DynamicDispatchInfoListHead;
  v4 = 0LL;
  v5 = DispatchContext;
  if ( DispatchContext == &this->m_DynamicDispatchInfoListHead )
  {
LABEL_2:
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    p_m_InCallerContextCallback = &this->m_InCallerContextCallback;
    v154 = &this->m_InCallerContextCallback;
    MajorFunction = CurrentStackLocation->MajorFunction;
    v11 = this->m_DispatchTable[MajorFunction];
    if ( v11 )
    {
      m_CxDeviceInfo = v11->m_CxDeviceInfo;
      p_IoInCallerContextCallback = &m_CxDeviceInfo->IoInCallerContextCallback;
      if ( !m_CxDeviceInfo )
        p_IoInCallerContextCallback = &this->m_InCallerContextCallback;
      p_m_InCallerContextCallback = p_IoInCallerContextCallback;
      v154 = p_IoInCallerContextCallback;
LABEL_6:
      if ( !this->m_Filter
        || p_m_InCallerContextCallback->m_Method
        || v11 != this->m_DefaultQueue
        || v11->m_Type == WdfIoQueueDispatchManual
        || v11->m_IoDefault.Method )
      {
        goto LABEL_7;
      }
      if ( (_DWORD)MajorFunction == 15 )
      {
        if ( v11->m_IoInternalDeviceControl.Method )
          goto LABEL_7;
      }
      else if ( (_BYTE)MajorFunction )
      {
        if ( (_DWORD)MajorFunction == 3 )
        {
          if ( v11->m_IoRead.Method )
            goto LABEL_7;
        }
        else
        {
          if ( (_DWORD)MajorFunction != 4 )
          {
            if ( (_DWORD)MajorFunction != 14 || !v11->m_IoDeviceControl.Method )
              goto $Forward;
LABEL_7:
            v163 = 0;
            v162 = v11 && v11->m_SupportForwardProgress;
            if ( KeGetCurrentIrql() <= 1u )
            {
              KeEnterCriticalRegion();
              v163 = 1;
            }
            if ( v11 && (v15 = v11->m_CxDeviceInfo) != 0LL )
              p_RequestAttributes = (_WDF_EXECUTION_LEVEL *)&v15->RequestAttributes;
            else
              p_RequestAttributes = &this->m_DeviceBase[2].m_ExecutionLevel;
            m_DeviceBase = this->m_DeviceBase;
            v18 = 0LL;
            v152 = m_DeviceBase;
            ReservedRequest = 0LL;
            v151 = (FxObject *)p_RequestAttributes;
            v19 = *(_QWORD *)&m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized;
            OriginatingBinary = (char *)m_DeviceBase->m_Globals;
            if ( v19 && *(_WORD *)(v19 + 8) == 4354 && *(_BYTE *)(v19 + 1787) )
            {
              v21 = (FX_POOL_TRACKER *)ExpInterlockedPopEntrySList((PSLIST_HEADER)&m_DeviceBase[2].m_SpinLock);
              if ( v21 )
                goto LABEL_19;
              v20 = (FX_POOL_TRACKER *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))m_DeviceBase[2].m_DeviceBase)(
                                         HIDWORD(m_DeviceBase[2].m_ChildEntry.Blink),
                                         HIDWORD(m_DeviceBase[2].m_DisposeSingleEntry.Next),
                                         LODWORD(m_DeviceBase[2].m_DisposeSingleEntry.Next));
            }
            else
            {
              v20 = (FX_POOL_TRACKER *)FxAllocateFromNPagedLookasideList(
                                         (_NPAGED_LOOKASIDE_LIST *)&m_DeviceBase[2].m_SpinLock,
                                         v14);
            }
            v21 = v20;
LABEL_19:
            if ( !v21 )
              goto LABEL_218;
            v22 = (_FX_DRIVER_GLOBALS *)OriginatingBinary;
            if ( OriginatingBinary[272] )
            {
              FxPoolInsertNonPagedAllocateTracker(
                (FX_POOL *)(OriginatingBinary + 112),
                v21,
                (unsigned __int64)m_DeviceBase[2].m_CallbackLockObjectPtr,
                *((_DWORD *)OriginatingBinary + 17),
                retaddr);
              v22 = (_FX_DRIVER_GLOBALS *)OriginatingBinary;
              p_Flink = &v21[1].Link.Flink;
            }
            else
            {
              p_Flink = &v21->Link.Flink;
            }
            *p_Flink = v21;
            v24 = p_Flink + 2;
            p_Flink[1] = v22;
            if ( p_RequestAttributes )
            {
              p_m_ExecutionLevel = (char *)p_RequestAttributes;
            }
            else
            {
              p_m_ExecutionLevel = (char *)&m_DeviceBase[2].m_ExecutionLevel;
              v151 = (FxDeviceBase *)((char *)m_DeviceBase + 584);
            }
            if ( v22->FxVerifierHandle )
            {
              *(_OWORD *)v24 = 0LL;
              *((_OWORD *)v24 + 1) = 0LL;
              *((_OWORD *)v24 + 2) = 0LL;
              *((_DWORD *)v24 + 8) = 1146058822;
              v24 += 6;
            }
            v24[47] = 0LL;
            v24[48] = 0LL;
            v24[49] = 0LL;
            v24[50] = 0LL;
            v24[51] = 0LL;
            v24[46] = v24;
            if ( p_m_ExecutionLevel )
            {
              v26 = *((_QWORD *)p_m_ExecutionLevel + 6);
              if ( v26 )
              {
                v27 = *((_QWORD *)p_m_ExecutionLevel + 5);
                if ( !v27 )
                  v27 = *(_QWORD *)(v26 + 16);
                memset(v24 + 52, 0, (v27 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
                p_m_ExecutionLevel = (char *)v151;
              }
              v24[50] = *((_QWORD *)p_m_ExecutionLevel + 6);
            }
            if ( !v24 )
            {
LABEL_218:
              v48 = -1073741670;
              WPP_IFR_SF_D(v152->m_Globals, 2u, 0x10u, 0xAu, WPP_FxRequest_cpp_Traceguids, 0xC000009A);
              goto LABEL_67;
            }
            v24[2] = m_DeviceBase->m_Globals;
            *v24 = FxObject::`vftable';
            *((_DWORD *)v24 + 2) = 24121352;
            v24[7] = 0LL;
            *((_BYTE *)v24 + 48) = 1;
            *((_DWORD *)v24 + 3) = 1;
            *((_DWORD *)v24 + 6) = 0x10000;
            v24[8] = 0LL;
            v24[5] = v24 + 4;
            v24[4] = v24 + 4;
            v24[10] = v24 + 9;
            v24[9] = v24 + 9;
            v28 = v24[2];
            v24[11] = 0LL;
            v24[12] = 0LL;
            if ( *(_BYTE *)(v28 + 324) )
              FxObject::Vf_VerifyConstruct((FxObject *)v24, v22, 0);
            *v24 = FxNonPagedObject::`vftable';
            v24[14] = 0LL;
            *((_BYTE *)v24 + 104) = 1;
            if ( *((char *)v24 + 24) < 0 )
            {
              v124 = (_FX_DRIVER_GLOBALS *)v24[2];
              if ( v124->FxVerifierLock )
              {
                OriginatingBinary = 0LL;
                FxVerifierLock::CreateAndInitialize((FxVerifierLock **)&OriginatingBinary, v124, (FxObject *)v24);
                *(v24 - 5) = OriginatingBinary;
              }
            }
            v29 = v161;
            v24[19] = v161;
            v24[23] = 0LL;
            v24[24] = 0LL;
            *((_BYTE *)v24 + 214) = v29 == 0LL;
            *((_WORD *)v24 + 106) = 0;
            *((_BYTE *)v24 + 238) = 1;
            v24[20] = 0LL;
            v24[25] = 0LL;
            *((_BYTE *)v24 + 215) = 0;
            *((_BYTE *)v24 + 236) = 0;
            v24[21] = 0LL;
            v24[22] = 0LL;
            v24[16] = v24 + 15;
            v24[15] = v24 + 15;
            v24[18] = 0LL;
            v24[27] = 216LL;
            v24[28] = 0LL;
            *((_DWORD *)v24 + 52) = 0;
            v24[30] = 0LL;
            *((_DWORD *)v24 + 58) = 232;
            *((_BYTE *)v24 + 237) = 0;
            v24[32] = FxRequestSystemBuffer::`vftable';
            v24[33] = 0LL;
            v24[34] = FxRequestOutputBuffer::`vftable';
            v24[35] = 0LL;
            v24[31] = 0LL;
            *((_BYTE *)v24 + 353) = 0;
            v24[37] = v24 + 36;
            v24[36] = v24 + 36;
            v24[39] = v24 + 38;
            v24[38] = v24 + 38;
            v24[41] = v24 + 40;
            v24[40] = v24 + 40;
            *v24 = FxRequestFromLookaside::`vftable';
            *((_BYTE *)v24 + 352) = 0;
            *((_WORD *)v24 + 177) = 0;
            v24[42] = 0LL;
            v24[43] = 0LL;
            v24[12] = m_DeviceBase->m_DeviceBase;
            v30 = v24[19];
            m_Refcnt = (unsigned int)m_DeviceBase[1].m_Refcnt;
            v32 = *(unsigned __int8 **)(v30 + 184);
            v33 = *v32;
            if ( (_DWORD)v33 != 15 )
            {
              if ( (_DWORD)v33 == 3 || (_DWORD)v33 == 4 )
              {
                m_Refcnt = (unsigned int)(m_Refcnt - 1);
                if ( (_DWORD)m_Refcnt )
                {
                  if ( (_DWORD)m_Refcnt != 1 )
                    goto LABEL_45;
                  v101 = *(_QWORD *)(v30 + 24);
                }
                else
                {
                  if ( *(_BYTE *)(v30 + 64) )
                    goto LABEL_45;
                  v101 = *(_QWORD *)(v30 + 112);
                }
                v24[33] = v101;
                goto LABEL_41;
              }
              if ( (_DWORD)v33 != 14 )
                goto LABEL_45;
            }
            v34 = *((_DWORD *)v32 + 6) & 3;
            if ( v34 == 3 )
            {
              if ( (_BYTE)v33 != 15 && *(_BYTE *)(v30 + 64) )
                goto LABEL_45;
              v24[33] = *((_QWORD *)v32 + 4);
              v35 = *(_QWORD *)(v30 + 112);
            }
            else
            {
              if ( v34 )
              {
                if ( (unsigned int)(v34 - 1) <= 1 )
                  v24[33] = *(_QWORD *)(v30 + 24);
                goto LABEL_41;
              }
              v24[33] = *(_QWORD *)(v30 + 24);
              v35 = *(_QWORD *)(v30 + 24);
            }
            v24[35] = v35;
LABEL_41:
            if ( v24[33] )
              *((_BYTE *)v24 + 235) |= 1u;
            if ( v24[35] )
              *((_BYTE *)v24 + 235) |= 2u;
LABEL_45:
            v36 = *((_WORD *)v24 + 5);
            if ( !m_DeviceBase->m_Globals->FxRequestParentOptimizationOn )
            {
              if ( !v36 )
              {
                v48 = -1073741816;
                goto LABEL_65;
              }
              if ( p_RequestAttributes && *((_DWORD *)p_RequestAttributes + 6) == 2 )
              {
                v118 = KeAcquireSpinLockRaiseToDpc(v24 + 7);
                *((_WORD *)v24 + 12) |= 0x11u;
                KeReleaseSpinLock(v24 + 7, v118);
              }
              v37 = KeAcquireSpinLockRaiseToDpc(v24 + 7);
              v38 = *((_WORD *)v24 + 13) == 1;
              LOBYTE(OriginatingBinary) = v37;
              if ( v38 )
              {
                if ( !v24[8] )
                {
                  v39 = KeAcquireSpinLockRaiseToDpc(&m_DeviceBase->m_SpinLock.m_Lock);
                  v149 = v39;
                  if ( m_DeviceBase->m_ObjectState == 1 )
                  {
                    Blink = m_DeviceBase->m_ChildListHead.Blink;
                    v41 = (_LIST_ENTRY *)(v24 + 9);
                    if ( Blink->Flink != &m_DeviceBase->m_ChildListHead )
                      goto LABEL_262;
                    v41->Flink = &m_DeviceBase->m_ChildListHead;
                    v24[10] = Blink;
                    Blink->Flink = v41;
                    m_DeviceBase->m_ChildListHead.Blink = v41;
                    if ( !v24[12] )
                      v24[12] = m_DeviceBase->m_DeviceBase;
                    KeReleaseSpinLock(&m_DeviceBase->m_SpinLock.m_Lock, v39);
                    v42 = (unsigned __int8)OriginatingBinary;
                    v24[8] = m_DeviceBase;
                    KeReleaseSpinLock(v24 + 7, v42);
                    if ( p_RequestAttributes )
                    {
                      v43 = *((unsigned __int16 *)v24 + 5);
                      if ( (_WORD)v43 )
                        v44 = (char *)v24 + v43;
                      else
                        v44 = 0LL;
                      v45 = *((_QWORD *)p_RequestAttributes + 2);
                      if ( v45 )
                        *((_QWORD *)v44 + 3) = v45;
                      v46 = *((_QWORD *)p_RequestAttributes + 1);
                      if ( v46 )
                      {
                        *((_QWORD *)v44 + 2) = v46;
                        *((_WORD *)v24 + 12) |= 0x400u;
                      }
                    }
                    *((_WORD *)v24 + 12) |= 8u;
                    v47 = *(_QWORD *)(v24[2] + 336LL);
                    if ( !v47 || *(_DWORD *)v47 )
                      goto LABEL_64;
                    if ( *((_WORD *)v24 + 4) == 4098 )
                    {
                      if ( _InterlockedIncrement((volatile signed __int32 *)(v47 + 20)) >= 2 )
                        _InterlockedAdd((volatile signed __int32 *)(v47 + 12), *(_DWORD *)(v47 + 8));
                      goto LABEL_245;
                    }
                    if ( *((_WORD *)v24 + 4) != 4104 || *((_BYTE *)v24 + 213) == 2 )
                    {
LABEL_245:
                      *((_WORD *)v24 + 12) |= 0x40u;
                      v125 = _InterlockedIncrement((volatile signed __int32 *)(v47 + 16));
                      if ( v125 >= *(_DWORD *)(v47 + 12)
                        && !KeGetCurrentIrql()
                        && !_InterlockedCompareExchange((volatile signed __int32 *)v47, 1, 0) )
                      {
                        WPP_IFR_SF_D((_FX_DRIVER_GLOBALS *)v24[2], 2u, 0x14u, 0xFu, WPP_FxObject_cpp_Traceguids, v125);
                        if ( *(_BYTE *)(v47 + 4) )
                          DbgBreakPoint();
                        v127 = (_FX_DRIVER_GLOBALS *)v24[2];
                        OriginatingBinary = v127->Public.DriverName;
                        FxLiveDump(v127, v126, (unsigned __int64)v127->Public.DriverName, v125);
                        if ( v125 >= *(_DWORD *)(v47 + 12) )
                          MicrosoftTelemetryAssertTriggeredArgsKM(OriginatingBinary, v125, 0);
                      }
                    }
LABEL_64:
                    v48 = 0;
                    goto LABEL_65;
                  }
                  FxObject::TraceDroppedEvent(m_DeviceBase, FxObjectDroppedEventAddChildObjectInternal);
                  KeReleaseSpinLock(&m_DeviceBase->m_SpinLock.m_Lock, v149);
                  goto LABEL_260;
                }
LABEL_258:
                KeReleaseSpinLock(v24 + 7, v37);
                v48 = -1071644147;
                goto LABEL_65;
              }
              FxObject::TraceDroppedEvent((FxObject *)v24, FxObjectDroppedEventAssignParentObject);
LABEL_260:
              KeReleaseSpinLock(v24 + 7, (KIRQL)OriginatingBinary);
              v48 = -1073741738;
              goto LABEL_65;
            }
            v151 = 0LL;
            flags = 0LL;
            if ( !v36 )
            {
              v48 = -1073741816;
              goto LABEL_65;
            }
            if ( p_RequestAttributes )
            {
              if ( *((_DWORD *)p_RequestAttributes + 6) == 2 )
              {
                v117 = KeAcquireSpinLockRaiseToDpc(v24 + 7);
                *((_WORD *)v24 + 12) |= 0x11u;
                KeReleaseSpinLock(v24 + 7, v117);
                flags = v151;
              }
              v60 = (char *)*((_QWORD *)p_RequestAttributes + 4);
              OriginatingBinary = v60;
              if ( v60 )
              {
                LOWORD(v61) = 0;
                flags = (FxObject *)(~(unsigned __int64)v60 & 0xFFFFFFFFFFFFFFF8uLL);
                if ( ((unsigned __int8)v60 & 1) != 0 )
                {
                  v61 = LOWORD(flags->__vftable);
                  flags = (FxObject *)((char *)flags - v61);
                }
                if ( flags->m_Type == 4096 )
                {
                  v151 = flags;
                }
                else
                {
                  v156 = 4096;
                  v155 = &v151;
                  v157 = v61;
                  v158 = 0;
                  if ( ((int (__fastcall *)(FxObject *, FxObject ***, __int64, __int64))flags->QueryInterface)(
                         flags,
                         &v155,
                         v33,
                         m_Refcnt) < 0 )
                  {
                    v116 = OriginatingBinary;
                    WPP_IFR_SF_qDqD(
                      flags->m_Globals,
                      v112,
                      v33,
                      v113,
                      traceGuid,
                      OriginatingBinary,
                      0x1000u,
                      flags,
                      flags->m_Type);
                    FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, (unsigned __int64)v116, 0x1000uLL);
                  }
                  flags = v151;
                }
              }
            }
            if ( flags )
            {
              v37 = KeAcquireSpinLockRaiseToDpc(v24 + 7);
              v38 = *((_WORD *)v24 + 13) == 1;
              LOBYTE(OriginatingBinary) = v37;
              if ( !v38 )
              {
                FxObject::TraceDroppedEvent((FxObject *)v24, FxObjectDroppedEventAssignParentObject);
                goto LABEL_260;
              }
              if ( v24[8] )
                goto LABEL_258;
              v108 = KeAcquireSpinLockRaiseToDpc(&flags->m_SpinLock.m_Lock);
              v150 = v108;
              if ( flags->m_ObjectState != 1 )
              {
                FxObject::TraceDroppedEvent(flags, FxObjectDroppedEventAddChildObjectInternal);
                KeReleaseSpinLock(&flags->m_SpinLock.m_Lock, v150);
                KeReleaseSpinLock(v24 + 7, (KIRQL)OriginatingBinary);
                v48 = -1073741738;
LABEL_65:
                if ( v48 < 0 )
                {
                  WPP_IFR_SF_D(v152->m_Globals, 2u, 0x10u, 0xBu, WPP_FxRequest_cpp_Traceguids, v48);
                  FxObject::DeleteFromFailedCreate((FxObject *)v24);
                }
                else
                {
                  v18 = (FxRequest *)v24;
                  ReservedRequest = (FxRequest *)v24;
                }
LABEL_67:
                v49 = v162;
                if ( v162 )
                {
                  if ( v48 < 0 )
                    goto LABEL_83;
                  if ( (this->m_Globals->FxEnhancedVerifierOptions & 0xF0000) == 0 )
                    goto LABEL_147;
                  v48 = FxPkgIo::VerifierFreeRequestToTestForwardProgess(this, v18);
                  v49 = v162;
                }
                if ( v48 >= 0 )
                {
                  if ( !v49 )
                  {
LABEL_70:
                    v50 = v161;
                    goto LABEL_71;
                  }
LABEL_147:
                  if ( !v11->m_FwdProgContext->m_IoResourcesAllocate.Method )
                    goto LABEL_70;
                  v18->m_Presented = 1;
                  v87 = (unsigned __int64)v18 ^ 0xFFFFFFFFFFFFFFF8uLL;
                  if ( !v18->m_ObjectSize )
                    v87 = 0LL;
                  v88 = v11->m_ObjectSize ? (unsigned __int64)v11 ^ 0xFFFFFFFFFFFFFFF8uLL : 0LL;
                  if ( v11->m_FwdProgContext->m_IoResourcesAllocate.Method((WDFQUEUE__ *)v88, (WDFREQUEST__ *)v87) >= 0 )
                    goto LABEL_70;
                  m_RequestContext = v18->m_RequestContext;
                  if ( m_RequestContext )
                    m_RequestContext->ReleaseAndRestore(m_RequestContext, v18);
                  if ( !v18->m_Presented )
                    FxObject::ClearEvtCallbacks(v18);
                  v18->DeleteObject(v18);
                  m_FwdProgContext = v11->m_FwdProgContext;
                  v18 = 0LL;
                  m_Globals = v11->m_Globals;
                  m_Policy = m_FwdProgContext->m_Policy;
                  if ( m_Policy == WdfIoForwardProgressReservedPolicyAlwaysUseReservedRequest )
                    goto LABEL_158;
                  v135 = m_Policy - 2;
                  if ( v135 )
                  {
                    v50 = v161;
                    if ( v135 != 1 )
                      goto LABEL_159;
                    if ( (v161->Flags & 2) == 0 || v161->Tail.Overlay.CurrentStackLocation->MajorFunction == 13 )
                      v136 = 1;
                    else
                      v136 = 2;
                  }
                  else
                  {
                    Method = m_FwdProgContext->m_IoExamineIrp.Method;
                    if ( !Method )
                    {
LABEL_158:
                      v50 = v161;
LABEL_159:
                      v93 = KeAcquireSpinLockRaiseToDpc(&v11->m_FwdProgContext->m_PendedReserveLock.m_Lock);
                      p_m_ReservedRequestList = &v11->m_FwdProgContext->m_ReservedRequestList;
                      LOBYTE(OriginatingBinary) = v93;
                      Flink = p_m_ReservedRequestList->Flink;
                      if ( p_m_ReservedRequestList->Flink != p_m_ReservedRequestList )
                      {
                        if ( Flink->Blink == p_m_ReservedRequestList )
                        {
                          v96 = Flink->Flink;
                          if ( Flink->Flink->Blink == Flink )
                          {
                            p_m_ReservedRequestList->Flink = v96;
                            v18 = (FxRequest *)&Flink[-20];
                            v96->Blink = p_m_ReservedRequestList;
                            v97 = (__int64 *)Flink;
                            p_m_ReservedRequestInUseList = (__int64)&v11->m_FwdProgContext->m_ReservedRequestInUseList;
                            v99 = v11->m_FwdProgContext->m_ReservedRequestInUseList.Blink;
                            if ( v99->Flink == (_LIST_ENTRY *)p_m_ReservedRequestInUseList )
                            {
                              *v97 = p_m_ReservedRequestInUseList;
                              v97[1] = (__int64)v99;
                              v99->Flink = (_LIST_ENTRY *)v97;
                              *(_QWORD *)(p_m_ReservedRequestInUseList + 8) = v97;
                              v18->m_Irp.m_Irp = v50;
                              FxRequest::AssignMemoryBuffers(v18, (_WDF_DEVICE_IO_TYPE)v11->m_DeviceBase[1].m_Refcnt);
                              if ( m_Globals->FxVerifierOn )
                                FxRequestBase::SetVerifierFlags(v100, 1024);
                              KeReleaseSpinLock(
                                &v11->m_FwdProgContext->m_PendedReserveLock.m_Lock,
                                (KIRQL)OriginatingBinary);
                              goto LABEL_71;
                            }
                          }
                        }
LABEL_262:
                        __fastfail(3u);
                      }
                      v48 = FxIoQueue::QueueForwardProgressIrpLocked(v11, v50);
                      KeReleaseSpinLock(&v11->m_FwdProgContext->m_PendedReserveLock.m_Lock, v130);
                      if ( v48 == 259 )
                        goto LABEL_86;
                      if ( v48 >= 0 )
                        goto LABEL_71;
LABEL_85:
                      v57 = v161;
                      v161->IoStatus.Status = v48;
                      v57->IoStatus.Information = 0LL;
                      IofCompleteRequest(v57, 0);
                      goto LABEL_86;
                    }
                    if ( v11->m_ObjectSize )
                      v138 = (unsigned __int64)v11 ^ 0xFFFFFFFFFFFFFFF8uLL;
                    else
                      v138 = 0LL;
                    v50 = v161;
                    v136 = Method((WDFQUEUE__ *)v138, v161);
                    if ( (unsigned int)(v136 - 1) > 1 )
                    {
                      if ( v11->m_ObjectSize )
                        v139 = (const void *)((unsigned __int64)v11 ^ 0xFFFFFFFFFFFFFFF8uLL);
                      else
                        v139 = 0LL;
                      v48 = -1073741823;
                      WPP_IFR_SF_qdd(m_Globals, 2u, 0xDu, 0xAu, WPP_FxIoQueueKm_cpp_Traceguids, v139, v136, -1073741823);
                      FxVerifierDbgBreakPoint(m_Globals);
                      goto LABEL_85;
                    }
                  }
                  if ( v136 == 1 )
                  {
                    if ( v11->m_ObjectSize )
                      v129 = (const void *)((unsigned __int64)v11 ^ 0xFFFFFFFFFFFFFFF8uLL);
                    else
                      v129 = 0LL;
                    v48 = -1073741823;
                    WPP_IFR_SF_qqd(m_Globals, 2u, 0xDu, 0xBu, WPP_FxIoQueueKm_cpp_Traceguids, v129, v50, 0xC0000001);
                    goto LABEL_85;
                  }
                  goto LABEL_159;
                }
LABEL_83:
                if ( !this->m_Filter || v11 )
                {
                  if ( v49 )
                  {
                    v50 = v161;
                    v134 = FxIoQueue::GetReservedRequest(v11, v161, &ReservedRequest);
                    v48 = v134;
                    if ( v134 == 259 )
                      goto LABEL_86;
                    if ( v134 >= 0 )
                    {
                      v18 = ReservedRequest;
LABEL_71:
                      v51 = v154;
                      if ( v154 && v154->m_Method && !v18->m_Reserved )
                      {
                        v18->m_InternalContext = v11;
                        v102 = this->m_Globals;
                        v50->Tail.Overlay.CurrentStackLocation->Control |= 1u;
                        if ( v102->FxVerifierOn )
                          FxRequestBase::SetVerifierFlags(v18, 33);
                        if ( v18->m_Completed )
                        {
                          if ( v18->m_ObjectSize )
                            v128 = (const void *)((unsigned __int64)v18 ^ 0xFFFFFFFFFFFFFFF8uLL);
                          else
                            v128 = 0LL;
                          WPP_IFR_SF_q(v18->m_Globals, 2u, 0x10u, 0x27u, WPP_FxRequest_cpp_Traceguids, v128);
                          FxVerifierDbgBreakPoint(v18->m_Globals);
                        }
                        else
                        {
                          m_CompletionState = v18->m_CompletionState;
                          v18->m_CompletionState = -126;
                          if ( !m_CompletionState )
                          {
                            v114 = _InterlockedIncrement(&v18->m_Refcnt);
                            if ( SLOBYTE(v18->m_ObjectFlags) < 0 )
                            {
                              v115 = (FxTagTracker *)v18[-1].m_OwnerListEntry2.Blink;
                              if ( v115 )
                                FxTagTracker::UpdateTagHistory(
                                  v115,
                                  (void *)0x74617453,
                                  1820,
                                  "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp",
                                  TagAddRef,
                                  v114);
                            }
                          }
                        }
                        v18->Release(
                          v18,
                          (void *)1952543827,
                          1741,
                          "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp");
                        v18->m_Presented = 1;
                        v104 = this->m_DeviceBase;
                        v105 = 0LL;
                        if ( v18->m_ObjectSize )
                          v105 = (unsigned __int64)v18 ^ 0xFFFFFFFFFFFFFFF8uLL;
                        m_ObjectSize = v104->m_ObjectSize;
                        if ( v51->m_Method )
                        {
                          v107 = (unsigned __int64)v104 ^ 0xFFFFFFFFFFFFFFF8uLL;
                          if ( !m_ObjectSize )
                            v107 = 0LL;
                          v51->m_Method((WDFDEVICE__ *)v107, (WDFREQUEST__ *)v105);
                        }
                        goto LABEL_187;
                      }
                      m_ObjectFlags = v11->m_ObjectFlags;
                      OriginatingBinary = (char *)v18;
                      LOBYTE(v161) = 0;
                      if ( m_ObjectFlags < 0
                        && (v119 = *(FxVerifierLock **)&v11[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
                      {
                        FxVerifierLock::Lock(v119, (unsigned __int8 *)&v161, v33);
                        v53 = (unsigned __int8)v161;
                      }
                      else
                      {
                        v53 = KeAcquireSpinLockRaiseToDpc(&v11->m_NPLock.m_Lock);
                      }
                      if ( v18->m_Reserved )
                        FxObject::AddRef(
                          v18,
                          (void *)0x50647746,
                          2311,
                          "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
                      m_QueueState = v11->m_QueueState;
                      v56 = v11->m_Globals;
                      if ( (m_QueueState & 1) == 0 )
                      {
                        v48 = -1073741436;
                        if ( v56->FxVerboseOn )
                        {
                          if ( v18->m_ObjectSize )
                            v143 = (const void *)((unsigned __int64)v18 ^ 0xFFFFFFFFFFFFFFF8uLL);
                          else
                            v143 = 0LL;
                          v144 = "power stopping (Drain) in progress,";
                          if ( (m_QueueState & 0x10000) == 0 )
                            v144 = a5;
                          if ( v11->m_ObjectSize )
                            v145 = (const void *)((unsigned __int64)v11 ^ 0xFFFFFFFFFFFFFFF8uLL);
                          else
                            v145 = 0LL;
                          WPP_IFR_SF_qLsqd(
                            v56,
                            5u,
                            (unsigned int)v145,
                            0x29u,
                            traceGuid,
                            v145,
                            m_QueueState,
                            v144,
                            v143,
                            -1073741436);
                        }
                        if ( SLOBYTE(v11->m_ObjectFlags) < 0
                          && (v120 = *(FxVerifierLock **)&v11[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
                        {
                          FxVerifierLock::Unlock(v120, v53, v54);
                        }
                        else
                        {
                          KeReleaseSpinLock(&v11->m_NPLock.m_Lock, v53);
                        }
                        v18->m_Irp.m_Irp->IoStatus.Information = 0LL;
                        v84 = v18->m_DeviceBase;
                        v85 = v18->m_Globals;
                        if ( v85->FxVerboseOn )
                        {
                          v146 = (const void *)((unsigned __int64)v18 ^ 0xFFFFFFFFFFFFFFF8uLL);
                          if ( !v18->m_ObjectSize )
                            v146 = 0LL;
                          WPP_IFR_SF_qiid(
                            v85,
                            5u,
                            0x10u,
                            0xBu,
                            WPP_FxRequest_hpp_Traceguids,
                            v146,
                            v18->m_Irp.m_Irp,
                            v18->m_Irp.m_Irp->IoStatus.Information,
                            -1073741436);
                        }
                        if ( v84 )
                          m_Globals_high = HIBYTE(v84[1].m_Globals);
                        else
                          m_Globals_high = 0;
                        v18->m_PriorityBoost = m_Globals_high;
                        FxRequest::CompleteInternal(v18, -1073741436);
                        v18->Release(
                          v18,
                          (void *)1886220099,
                          2338,
                          "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
                        goto LABEL_86;
                      }
                      if ( v56->FxVerboseOn )
                      {
                        if ( v11->m_ObjectSize )
                          v140 = (const void *)((unsigned __int64)v11 ^ 0xFFFFFFFFFFFFFFF8uLL);
                        else
                          v140 = 0LL;
                        if ( v18->m_ObjectSize )
                          v4 = (const void *)((unsigned __int64)v18 ^ 0xFFFFFFFFFFFFFFF8uLL);
                        WPP_IFR_SF_qq(v56, 5u, 0xDu, 0x2Au, WPP_FxIoQueue_cpp_Traceguids, v4, v140);
                      }
                      if ( v18->m_Globals->FxVerifierIO )
                      {
                        LOBYTE(v161) = 0;
                        FxNonPagedObject::Lock(v18, (unsigned __int8 *)&v161, v54);
                        FxRequest::VerifyRequestIsNotCompleted(v18, v18->m_Globals);
                        FxNonPagedObject::Unlock(v18, (unsigned __int8)v161, v141);
                      }
                      v18->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
                      if ( v18->m_Reserved && v11->m_Dispatching )
                      {
                        FxIoQueue::InsertNewRequestLocked(v11, (FxRequest **)&OriginatingBinary, v53);
                        FxNonPagedObject::Unlock(v11, v53, v142);
LABEL_187:
                        v48 = 259;
                        goto LABEL_86;
                      }
                      FxIoQueue::DispatchEvents(v11, v53, v18);
                      v48 = 259;
LABEL_86:
                      if ( v163 )
                        KeLeaveCriticalRegion();
                      return v48;
                    }
                  }
                  else
                  {
                    WPP_IFR_SF_D(this->m_Globals, 2u, 0xDu, 0x10u, WPP_FxPkgIo_cpp_Traceguids, v48);
                  }
                }
                goto LABEL_85;
              }
              v109 = flags->m_ChildListHead.Blink;
              v110 = (_LIST_ENTRY *)(v24 + 9);
              if ( v109->Flink != &flags->m_ChildListHead )
                goto LABEL_262;
              v110->Flink = &flags->m_ChildListHead;
              v24[10] = v109;
              v109->Flink = v110;
              flags->m_ChildListHead.Blink = v110;
              if ( !v24[12] )
                v24[12] = flags->m_DeviceBase;
              KeReleaseSpinLock(&flags->m_SpinLock.m_Lock, v108);
              v111 = (unsigned __int8)OriginatingBinary;
              v24[8] = flags;
              KeReleaseSpinLock(v24 + 7, v111);
            }
            if ( p_RequestAttributes )
            {
              v62 = *((unsigned __int16 *)v24 + 5);
              if ( (_WORD)v62 )
                v63 = (char *)v24 + v62;
              else
                v63 = 0LL;
              v64 = *((_QWORD *)p_RequestAttributes + 2);
              if ( v64 )
                *((_QWORD *)v63 + 3) = v64;
              v65 = *((_QWORD *)p_RequestAttributes + 1);
              if ( v65 )
              {
                *((_QWORD *)v63 + 2) = v65;
                *((_WORD *)v24 + 12) |= 0x400u;
              }
            }
            *((_WORD *)v24 + 12) |= 8u;
            v66 = *(_QWORD *)(v24[2] + 336LL);
            if ( !v66 || *(_DWORD *)v66 )
              goto LABEL_64;
            if ( *((_WORD *)v24 + 4) == 4098 )
            {
              if ( _InterlockedIncrement((volatile signed __int32 *)(v66 + 20)) >= 2 )
                _InterlockedAdd((volatile signed __int32 *)(v66 + 12), *(_DWORD *)(v66 + 8));
            }
            else if ( *((_WORD *)v24 + 4) == 4104 && *((_BYTE *)v24 + 213) != 2 )
            {
              goto LABEL_64;
            }
            *((_WORD *)v24 + 12) |= 0x40u;
            _a1 = _InterlockedIncrement((volatile signed __int32 *)(v66 + 16));
            if ( _a1 >= *(_DWORD *)(v66 + 12)
              && !KeGetCurrentIrql()
              && !_InterlockedCompareExchange((volatile signed __int32 *)v66, 1, 0) )
            {
              WPP_IFR_SF_D((_FX_DRIVER_GLOBALS *)v24[2], 2u, 0x14u, 0xFu, WPP_FxObject_cpp_Traceguids, _a1);
              if ( *(_BYTE *)(v66 + 4) )
                DbgBreakPoint();
              v69 = (_FX_DRIVER_GLOBALS *)v24[2];
              OriginatingBinary = v69->Public.DriverName;
              FxLiveDump(v69, v68, (unsigned __int64)v69->Public.DriverName, _a1);
              if ( _a1 >= *(_DWORD *)(v66 + 12) )
                MicrosoftTelemetryAssertTriggeredArgsKM(OriginatingBinary, _a1, 0);
            }
            goto LABEL_64;
          }
          if ( v11->m_IoWrite.Method )
            goto LABEL_7;
        }
      }
$Forward:
      ++Irp->CurrentLocation;
      Irp->Tail.Overlay.CurrentStackLocation = CurrentStackLocation + 1;
      return IofCallDriver(this->m_DeviceBase->m_AttachedDevice.m_DeviceObject, Irp);
    }
    if ( p_m_InCallerContextCallback->m_Method )
      goto LABEL_6;
    if ( this->m_Filter )
      goto $Forward;
    v73 = -1073741808;
    v121 = this->m_DeviceBase;
    v122 = v121->m_ObjectSize;
    v123 = (const void *)((unsigned __int64)v121 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v122 )
      v123 = 0LL;
    WPP_IFR_SF_qqd(this->m_Globals, 2u, 0xDu, 0xFu, WPP_FxPkgIo_cpp_Traceguids, v123, Irp, 0xC0000010);
    goto $CompleteIrp_0;
  }
  v70 = Irp->Tail.Overlay.CurrentStackLocation;
  v71 = v70->MajorFunction;
  switch ( v71 )
  {
    case 3:
      LODWORD(OriginatingBinary) = 0;
      break;
    case 4:
      LODWORD(OriginatingBinary) = 1;
      break;
    case 14:
      LODWORD(OriginatingBinary) = 2;
      break;
    case 15:
      LODWORD(OriginatingBinary) = 3;
      break;
    default:
      v73 = -1073741811;
      v131 = this->m_DeviceBase;
      v132 = v131->m_ObjectSize;
      v133 = (const void *)((unsigned __int64)v131 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v132 )
        v133 = 0LL;
      WPP_IFR_SF_qcDqd(
        this->m_Globals,
        v71,
        0xDu,
        0xEu,
        WPP_FxPkgIo_cpp_Traceguids,
        Irp,
        v71,
        v70->MinorFunction,
        v133,
        v148);
      FxVerifierDbgBreakPoint(this->m_Globals);
      goto $CompleteIrp_0;
  }
  v72 = this->m_Globals;
  if ( v72->FxVerifierOn )
  {
    v73 = FxPkgIo::Vf_VerifyDispatchContext(this, v72, v5);
    if ( v73 < 0 )
    {
$CompleteIrp_0:
      Irp->IoStatus.Status = v73;
      Irp->IoStatus.Information = 0LL;
      IofCompleteRequest(Irp, 0);
      return v73;
    }
  }
  while ( 1 )
  {
    v74 = v5[(unsigned int)OriginatingBinary + 1].Flink;
    v75 = &v5[(unsigned int)OriginatingBinary];
    v5 = v5->Flink;
    if ( v74 )
      break;
    if ( v5 == p_m_DynamicDispatchInfoListHead )
      goto LABEL_2;
  }
  v76 = Irp->Tail.Overlay.CurrentStackLocation;
  v77 = this->m_DeviceBase;
  LowPart = v76->Parameters.Read.ByteOffset.LowPart;
  v79 = v77->m_ObjectSize;
  v80 = (unsigned __int64)v77 ^ 0xFFFFFFFFFFFFFFF8uLL;
  v38 = v79 == 0;
  v81 = v75[1].Blink;
  MinorFunction = v76->MinorFunction;
  v83 = v76->MajorFunction;
  if ( v38 )
    v80 = 0LL;
  return ((__int64 (__fastcall *)(unsigned __int64, __int64, __int64, __int64, _LIST_ENTRY *, _IRP *, unsigned __int64))v74)(
           v80,
           v83,
           MinorFunction,
           LowPart,
           v81,
           Irp,
           (unsigned __int64)v5 | 1);
}
