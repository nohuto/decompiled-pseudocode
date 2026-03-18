/*
 * XREFs of imp_WdfDeviceWdmDispatchIrpToIoQueue @ 0x14000EBE0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qq @ 0x14000642C (WPP_IFR_SF_qq.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14000A7C0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x14000A800 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x14000AD10 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14000AD58 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     FxAllocateFromNPagedLookasideList @ 0x14000D1D0 (FxAllocateFromNPagedLookasideList.c)
 *     WPP_IFR_SF_qqd @ 0x14000EA80 (WPP_IFR_SF_qqd.c)
 *     ?AssignParentObject@FxObject@@QEAAJPEAV1@@Z @ 0x1400101A0 (-AssignParentObject@FxObject@@QEAAJPEAV1@@Z.c)
 *     WPP_IFR_SF_qDqD @ 0x140010ADC (WPP_IFR_SF_qDqD.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x140020570 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1400205B8 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     WPP_IFR_SF_D @ 0x140026890 (WPP_IFR_SF_D.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x140026990 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     WPP_IFR_SF_qLsqd @ 0x1400306F4 (WPP_IFR_SF_qLsqd.c)
 *     ?InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z @ 0x1400312A0 (-InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1400339D0 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x140036010 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
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
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1400832CC (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x140083318 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140083568 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     FxLiveDump @ 0x140083910 (FxLiveDump.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x140083E48 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?VerifierFreeRequestToTestForwardProgess@FxPkgIo@@AEAAJPEAVFxRequest@@@Z @ 0x1400A16FC (-VerifierFreeRequestToTestForwardProgess@FxPkgIo@@AEAAJPEAVFxRequest@@@Z.c)
 *     ?QueueForwardProgressIrpLocked@FxIoQueue@@AEAAJPEAU_IRP@@@Z @ 0x1400A1FA4 (-QueueForwardProgressIrpLocked@FxIoQueue@@AEAAJPEAU_IRP@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 *     memset @ 0x1400ACFC0 (memset.c)
 *     Vf_VerifyWdfDeviceWdmDispatchIrpToIoQueue @ 0x1400E524C (Vf_VerifyWdfDeviceWdmDispatchIrpToIoQueue.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1400E58C4 (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 */

__int64 __fastcall imp_WdfDeviceWdmDispatchIrpToIoQueue(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Device,
        _IRP *Irp,
        unsigned __int64 Queue,
        const _GUID *Flags)
{
  const void *v5; // r14
  FxDevice *flags; // rbx
  __int64 v11; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // r15
  __int64 v13; // rax
  unsigned __int64 v14; // rsi
  unsigned int v15; // r12d
  $99160A6F521E5D6ABF92A3566D9946F6 *v16; // rdi
  int v17; // eax
  unsigned int v18; // ebx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IO_STACK_LOCATION *v20; // rcx
  FxPkgIo *m_PkgIo; // rbx
  unsigned __int64 v22; // rdx
  __int64 v23; // r15
  __int64 p_m_ExecutionLevel; // r15
  FxDeviceBase *m_DeviceBase; // rdi
  FxRequest *v26; // r12
  __int64 v27; // rcx
  FX_POOL_TRACKER *v28; // rax
  FX_POOL_TRACKER *v29; // rbx
  _FX_DRIVER_GLOBALS *v30; // rdx
  _QWORD *p_Flink; // rax
  _QWORD *v32; // rbx
  char *v33; // rax
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 m_Refcnt; // r9
  unsigned __int8 *v39; // rcx
  __int64 v40; // r8
  int v41; // eax
  __int64 v42; // rax
  __int16 v43; // cx
  int v44; // edi
  __int64 v45; // rax
  char *v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rdi
  unsigned __int8 v50; // al
  FxPkgIo *v51; // rbx
  void (__fastcall **v52)(unsigned __int64, unsigned __int64); // rdi
  char v53; // al
  KIRQL v54; // bl
  unsigned __int8 v55; // r8
  unsigned int v56; // eax
  _FX_DRIVER_GLOBALS *v57; // rcx
  FxObject *v59; // rdi
  char *v60; // rax
  __int64 v61; // rcx
  __int64 v62; // rax
  char *v63; // rcx
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rdi
  signed int _a1; // r15d
  _WDF_BUGCHECK_CODES v68; // edx
  _FX_DRIVER_GLOBALS *v69; // rcx
  FxDeviceBase *v70; // rbx
  _FX_DRIVER_GLOBALS *v71; // rcx
  char m_Globals_high; // al
  unsigned __int64 v73; // rdx
  unsigned __int64 v74; // rcx
  FxRequestContext *m_RequestContext; // rcx
  __int64 v76; // rdx
  _FX_DRIVER_GLOBALS *v77; // rbx
  int v78; // ecx
  KIRQL v79; // al
  __int64 **v80; // rcx
  __int64 *v81; // rax
  __int64 *v82; // rdx
  __int64 *v83; // rcx
  __int64 v84; // rax
  __int64 **v85; // r8
  FxRequestBase *v86; // rcx
  __int64 v87; // rax
  _FX_DRIVER_GLOBALS *v88; // rcx
  unsigned __int8 m_CompletionState; // al
  FxDeviceBase *v90; // rcx
  unsigned __int64 v91; // rdx
  unsigned __int16 m_ObjectSize; // r8
  unsigned __int64 v93; // rcx
  FxDevice_vtbl *v94; // rax
  unsigned __int8 v95; // dl
  unsigned int v96; // r8d
  unsigned __int16 v97; // r9
  __int64 v98; // rax
  unsigned __int8 v99; // dl
  unsigned int v100; // r8d
  unsigned __int16 v101; // r9
  __int64 v102; // rax
  __int64 p_m_InCallerContextCallback; // rax
  unsigned __int8 v104; // dl
  unsigned __int16 v105; // r9
  unsigned int v106; // edx
  FxTagTracker *Blink; // rcx
  char *v108; // rbx
  KIRQL v109; // al
  KIRQL v110; // al
  FxVerifierLock *v111; // rcx
  FxVerifierLock *v112; // rcx
  _FX_DRIVER_GLOBALS *v113; // rdx
  _WDF_BUGCHECK_CODES v114; // edx
  _FX_DRIVER_GLOBALS *v115; // rcx
  const void *v116; // rax
  const void *v117; // rsi
  KIRQL v118; // r10
  int v119; // eax
  int v120; // ecx
  int v121; // eax
  __int64 (__fastcall *v122)(unsigned __int64, _IRP *); // rax
  unsigned __int64 v123; // rcx
  const void *v124; // rsi
  const void *v125; // rax
  unsigned __int8 v126; // r8
  unsigned __int8 v127; // r8
  const void *v128; // rdx
  const char *v129; // r10
  const void *v130; // r8
  const void *v131; // rdx
  const _GUID *traceGuid; // [rsp+28h] [rbp-61h]
  char v133; // [rsp+58h] [rbp-31h]
  char *OriginatingBinary; // [rsp+60h] [rbp-29h] BYREF
  __int16 v135; // [rsp+68h] [rbp-21h]
  __int16 v136; // [rsp+6Ah] [rbp-1Fh]
  int v137; // [rsp+6Ch] [rbp-1Dh]
  FxDevice *v138; // [rsp+70h] [rbp-19h] BYREF
  _FX_DRIVER_GLOBALS *v139; // [rsp+78h] [rbp-11h] BYREF
  unsigned __int64 v140; // [rsp+80h] [rbp-9h] BYREF
  FxPkgIo *v141; // [rsp+88h] [rbp-1h]
  FxDeviceBase *v142; // [rsp+90h] [rbp+7h]
  FxRequest *ReservedRequest; // [rsp+98h] [rbp+Fh] BYREF
  void (__fastcall **v144)(unsigned __int64, unsigned __int64); // [rsp+A0h] [rbp+17h]
  _FX_DRIVER_GLOBALS **v145; // [rsp+A8h] [rbp+1Fh] BYREF
  __int16 v146; // [rsp+B0h] [rbp+27h]
  __int16 v147; // [rsp+B2h] [rbp+29h]
  int v148; // [rsp+B4h] [rbp+2Bh]
  void *retaddr; // [rsp+E0h] [rbp+57h]
  unsigned __int8 PreviousIrql; // [rsp+F0h] [rbp+67h] BYREF

  v5 = 0LL;
  v144 = 0LL;
  if ( !Device )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1002uLL);
  flags = (FxDevice *)(~Device & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(v11) = 0;
  if ( (Device & 1) != 0 )
  {
    v11 = LOWORD(flags->FxDeviceBase::FxNonPagedObject::FxObject::__vftable);
    flags = (FxDevice *)((char *)flags - v11);
  }
  if ( flags->m_Type == 4098 )
  {
    v138 = flags;
  }
  else
  {
    v136 = v11;
    v138 = 0LL;
    v137 = 0;
    v94 = flags->FxDeviceBase::FxNonPagedObject::FxObject::__vftable;
    OriginatingBinary = (char *)&v138;
    v135 = 4098;
    if ( v94->QueryInterface(flags, (FxQueryInterfaceParams *)&OriginatingBinary) < 0 )
    {
      WPP_IFR_SF_qDqD(flags->m_Globals, v95, v96, v97, traceGuid, (const void *)Device, 0x1002u, flags, flags->m_Type);
      FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, Device, 0x1002uLL);
    }
    flags = v138;
  }
  m_Globals = flags->m_Globals;
  if ( m_Globals->FxTrackDriverForMiniDumpLog )
  {
    *(_QWORD *)((unsigned int)(unk_1400C9080 * HIDWORD(KeGetPcr()[1].LockArray)) + unk_1400C9070) = m_Globals;
    flags = v138;
  }
  if ( !Queue )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1003uLL);
  LOWORD(v13) = 0;
  v14 = ~Queue & 0xFFFFFFFFFFFFFFF8uLL;
  if ( (Queue & 1) != 0 )
  {
    v13 = *(unsigned __int16 *)v14;
    v14 -= v13;
  }
  if ( *(_WORD *)(v14 + 8) == 4099 )
  {
    v140 = v14;
  }
  else
  {
    v136 = v13;
    v140 = 0LL;
    v137 = 0;
    v98 = *(_QWORD *)v14;
    OriginatingBinary = (char *)&v140;
    v135 = 4099;
    if ( (*(int (__fastcall **)(unsigned __int64, char **))(v98 + 40))(v14, &OriginatingBinary) < 0 )
    {
      WPP_IFR_SF_qDqD(
        *(_FX_DRIVER_GLOBALS **)(v14 + 16),
        v99,
        v100,
        v101,
        traceGuid,
        (const void *)Queue,
        0x1003u,
        (const void *)v14,
        *(unsigned __int16 *)(v14 + 8));
      FxVerifierBugCheckWorker(*(_FX_DRIVER_GLOBALS **)(v14 + 16), WDF_INVALID_HANDLE, Queue, 0x1003uLL);
    }
    v14 = v140;
    flags = v138;
  }
  if ( !Irp )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  v15 = (unsigned int)Flags;
  v16 = &Irp->Tail.Overlay.64;
  if ( ((unsigned __int8)Flags & 2) != 0 )
  {
    --Irp->CurrentLocation;
    --v16->CurrentStackLocation;
  }
  if ( m_Globals->FxVerifierOn )
  {
    v17 = Vf_VerifyWdfDeviceWdmDispatchIrpToIoQueue(m_Globals, flags, Irp, (FxIoQueue *)v14, v15);
    v18 = v17;
    if ( v17 < 0 )
    {
      Irp->IoStatus.Status = v17;
      Irp->IoStatus.Information = 0LL;
      IofCompleteRequest(Irp, 0);
      return v18;
    }
    v14 = v140;
    flags = v138;
  }
  if ( flags->m_ParentDevice == *(FxDevice **)(v14 + 96) )
  {
    CurrentStackLocation = v16->CurrentStackLocation;
    *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&v16->CurrentStackLocation->MajorFunction;
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
    *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                               + 6);
    CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
    CurrentStackLocation[-1].Control = 0;
    --Irp->CurrentLocation;
    v20 = --v16->CurrentStackLocation;
    v138 = v138->m_ParentDevice;
    v20->DeviceObject = v138->m_DeviceObject.m_DeviceObject;
    v14 = v140;
    flags = v138;
  }
  if ( (v15 & 1) != 0 )
  {
    v102 = *(_QWORD *)(v14 + 360);
    if ( v102 )
      p_m_InCallerContextCallback = v102 + 24;
    else
      p_m_InCallerContextCallback = (__int64)&flags->m_PkgIo->m_InCallerContextCallback;
    v144 = (void (__fastcall **)(unsigned __int64, unsigned __int64))p_m_InCallerContextCallback;
  }
  m_PkgIo = flags->m_PkgIo;
  v141 = m_PkgIo;
  v133 = 0;
  PreviousIrql = v14 && *(_BYTE *)(v14 + 136);
  if ( KeGetCurrentIrql() <= 1u )
  {
    KeEnterCriticalRegion();
    v133 = 1;
  }
  if ( v14 && (v23 = *(_QWORD *)(v14 + 360)) != 0 )
    p_m_ExecutionLevel = v23 + 32;
  else
    p_m_ExecutionLevel = (__int64)&m_PkgIo->m_DeviceBase[2].m_ExecutionLevel;
  m_DeviceBase = m_PkgIo->m_DeviceBase;
  v26 = 0LL;
  v142 = m_DeviceBase;
  ReservedRequest = 0LL;
  OriginatingBinary = (char *)p_m_ExecutionLevel;
  v27 = *(_QWORD *)&m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized;
  v139 = m_DeviceBase->m_Globals;
  if ( v27 && *(_WORD *)(v27 + 8) == 4354 && *(_BYTE *)(v27 + 1787) )
  {
    v29 = (FX_POOL_TRACKER *)ExpInterlockedPopEntrySList((PSLIST_HEADER)&m_DeviceBase[2].m_SpinLock);
    if ( v29 )
      goto LABEL_34;
    v28 = (FX_POOL_TRACKER *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))m_DeviceBase[2].m_DeviceBase)(
                               HIDWORD(m_DeviceBase[2].m_ChildEntry.Blink),
                               HIDWORD(m_DeviceBase[2].m_DisposeSingleEntry.Next),
                               LODWORD(m_DeviceBase[2].m_DisposeSingleEntry.Next));
  }
  else
  {
    v28 = (FX_POOL_TRACKER *)FxAllocateFromNPagedLookasideList(
                               (_NPAGED_LOOKASIDE_LIST *)&m_DeviceBase[2].m_SpinLock,
                               v22);
  }
  v29 = v28;
LABEL_34:
  if ( !v29 )
    goto LABEL_198;
  v30 = v139;
  if ( v139->FxPoolTrackingOn )
  {
    FxPoolInsertNonPagedAllocateTracker(
      &v139->FxPoolFrameworks,
      v29,
      (unsigned __int64)m_DeviceBase[2].m_CallbackLockObjectPtr,
      v139->Tag,
      retaddr);
    v30 = v139;
    p_Flink = &v29[1].Link.Flink;
  }
  else
  {
    p_Flink = &v29->Link.Flink;
  }
  *p_Flink = v29;
  v32 = p_Flink + 2;
  p_Flink[1] = v30;
  if ( p_m_ExecutionLevel )
  {
    v33 = (char *)p_m_ExecutionLevel;
  }
  else
  {
    v33 = (char *)&m_DeviceBase[2].m_ExecutionLevel;
    OriginatingBinary = (char *)&m_DeviceBase[2].m_ExecutionLevel;
  }
  if ( v30->FxVerifierHandle )
  {
    *(_OWORD *)v32 = 0LL;
    *((_OWORD *)v32 + 1) = 0LL;
    *((_OWORD *)v32 + 2) = 0LL;
    *((_DWORD *)v32 + 8) = 1146058822;
    v32 += 6;
  }
  v32[47] = 0LL;
  v32[48] = 0LL;
  v32[49] = 0LL;
  v32[50] = 0LL;
  v32[51] = 0LL;
  v32[46] = v32;
  if ( v33 )
  {
    v34 = *((_QWORD *)v33 + 6);
    if ( v34 )
    {
      v35 = *((_QWORD *)v33 + 5);
      if ( !v35 )
        v35 = *(_QWORD *)(v34 + 16);
      memset(v32 + 52, 0, (v35 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
      v33 = OriginatingBinary;
    }
    v32[50] = *((_QWORD *)v33 + 6);
  }
  if ( !v32 )
  {
LABEL_198:
    v44 = -1073741670;
    WPP_IFR_SF_D(v142->m_Globals, 2u, 0x10u, 0xAu, WPP_FxRequest_cpp_Traceguids, 0xC000009A);
    goto LABEL_77;
  }
  v32[2] = m_DeviceBase->m_Globals;
  *v32 = FxObject::`vftable';
  *((_DWORD *)v32 + 2) = 24121352;
  v32[7] = 0LL;
  *((_BYTE *)v32 + 48) = 1;
  *((_DWORD *)v32 + 3) = 1;
  *((_DWORD *)v32 + 6) = 0x10000;
  v32[8] = 0LL;
  v32[5] = v32 + 4;
  v32[4] = v32 + 4;
  v32[10] = v32 + 9;
  v32[9] = v32 + 9;
  v36 = v32[2];
  v32[11] = 0LL;
  v32[12] = 0LL;
  if ( *(_BYTE *)(v36 + 324) )
    FxObject::Vf_VerifyConstruct((FxObject *)v32, v30, 0);
  *v32 = FxNonPagedObject::`vftable';
  v32[14] = 0LL;
  *((_BYTE *)v32 + 104) = 1;
  if ( *((char *)v32 + 24) < 0 )
  {
    v113 = (_FX_DRIVER_GLOBALS *)v32[2];
    if ( v113->FxVerifierLock )
    {
      OriginatingBinary = 0LL;
      FxVerifierLock::CreateAndInitialize((FxVerifierLock **)&OriginatingBinary, v113, (FxObject *)v32);
      *(v32 - 5) = OriginatingBinary;
    }
  }
  v32[19] = Irp;
  v32[23] = 0LL;
  v32[24] = 0LL;
  *((_DWORD *)v32 + 53) = 0;
  *((_BYTE *)v32 + 238) = 1;
  v32[20] = 0LL;
  v32[25] = 0LL;
  *((_BYTE *)v32 + 236) = 0;
  v32[21] = 0LL;
  v32[22] = 0LL;
  v32[16] = v32 + 15;
  v32[15] = v32 + 15;
  v32[18] = 0LL;
  v32[27] = 216LL;
  v32[28] = 0LL;
  *((_DWORD *)v32 + 52) = 0;
  v32[30] = 0LL;
  *((_DWORD *)v32 + 58) = 232;
  *((_BYTE *)v32 + 237) = 0;
  v32[32] = FxRequestSystemBuffer::`vftable';
  v32[33] = 0LL;
  v32[34] = FxRequestOutputBuffer::`vftable';
  v32[35] = 0LL;
  v32[31] = 0LL;
  *((_BYTE *)v32 + 353) = 0;
  v32[37] = v32 + 36;
  v32[36] = v32 + 36;
  v32[39] = v32 + 38;
  v32[38] = v32 + 38;
  v32[41] = v32 + 40;
  v32[40] = v32 + 40;
  *v32 = FxRequestFromLookaside::`vftable';
  *((_BYTE *)v32 + 352) = 0;
  *((_WORD *)v32 + 177) = 0;
  v32[42] = 0LL;
  v32[43] = 0LL;
  v32[12] = m_DeviceBase->m_DeviceBase;
  v37 = v32[19];
  m_Refcnt = (unsigned int)m_DeviceBase[1].m_Refcnt;
  v39 = *(unsigned __int8 **)(v37 + 184);
  v40 = *v39;
  if ( (_DWORD)v40 != 15 )
  {
    if ( (_DWORD)v40 == 3 || (_DWORD)v40 == 4 )
    {
      m_Refcnt = (unsigned int)(m_Refcnt - 1);
      if ( (_DWORD)m_Refcnt )
      {
        if ( (_DWORD)m_Refcnt != 1 )
          goto LABEL_60;
        v87 = *(_QWORD *)(v37 + 24);
      }
      else
      {
        if ( *(_BYTE *)(v37 + 64) )
          goto LABEL_60;
        v87 = *(_QWORD *)(v37 + 112);
      }
      v32[33] = v87;
      goto LABEL_56;
    }
    if ( (_DWORD)v40 != 14 )
      goto LABEL_60;
  }
  v41 = *((_DWORD *)v39 + 6) & 3;
  if ( v41 == 3 )
  {
    if ( (_BYTE)v40 != 15 && *(_BYTE *)(v37 + 64) )
      goto LABEL_60;
    v32[33] = *((_QWORD *)v39 + 4);
    v42 = *(_QWORD *)(v37 + 112);
  }
  else
  {
    if ( v41 )
    {
      if ( (unsigned int)(v41 - 1) <= 1 )
        v32[33] = *(_QWORD *)(v37 + 24);
      goto LABEL_56;
    }
    v32[33] = *(_QWORD *)(v37 + 24);
    v42 = *(_QWORD *)(v37 + 24);
  }
  v32[35] = v42;
LABEL_56:
  if ( v32[33] )
    *((_BYTE *)v32 + 235) |= 1u;
  if ( v32[35] )
    *((_BYTE *)v32 + 235) |= 2u;
LABEL_60:
  v43 = *((_WORD *)v32 + 5);
  if ( m_DeviceBase->m_Globals->FxRequestParentOptimizationOn )
  {
    v139 = 0LL;
    v59 = 0LL;
    if ( v43 )
    {
      if ( p_m_ExecutionLevel )
      {
        if ( *(_DWORD *)(p_m_ExecutionLevel + 24) == 2 )
        {
          v109 = KeAcquireSpinLockRaiseToDpc(v32 + 7);
          *((_WORD *)v32 + 12) |= 0x11u;
          KeReleaseSpinLock(v32 + 7, v109);
          v59 = (FxObject *)v139;
        }
        v60 = *(char **)(p_m_ExecutionLevel + 32);
        OriginatingBinary = v60;
        if ( v60 )
        {
          LOWORD(v61) = 0;
          v59 = (FxObject *)(~(unsigned __int64)v60 & 0xFFFFFFFFFFFFFFF8uLL);
          if ( ((unsigned __int8)v60 & 1) != 0 )
          {
            v61 = LOWORD(v59->__vftable);
            v59 = (FxObject *)((char *)v59 - v61);
          }
          if ( v59->m_Type == 4096 )
          {
            v139 = (_FX_DRIVER_GLOBALS *)v59;
          }
          else
          {
            v146 = 4096;
            v145 = &v139;
            v147 = v61;
            v148 = 0;
            if ( ((int (__fastcall *)(FxObject *, _FX_DRIVER_GLOBALS ***, __int64, __int64))v59->QueryInterface)(
                   v59,
                   &v145,
                   v40,
                   m_Refcnt) < 0 )
            {
              v108 = OriginatingBinary;
              WPP_IFR_SF_qDqD(v59->m_Globals, v104, v40, v105, traceGuid, OriginatingBinary, 0x1000u, v59, v59->m_Type);
              FxVerifierBugCheckWorker(v59->m_Globals, WDF_INVALID_HANDLE, (unsigned __int64)v108, 0x1000uLL);
            }
            v59 = (FxObject *)v139;
          }
        }
      }
      if ( v59 )
      {
        v44 = FxObject::AssignParentObject((FxObject *)v32, v59);
        if ( v44 < 0 )
          goto LABEL_75;
      }
      if ( p_m_ExecutionLevel )
      {
        v62 = *((unsigned __int16 *)v32 + 5);
        if ( (_WORD)v62 )
          v63 = (char *)v32 + v62;
        else
          v63 = 0LL;
        v64 = *(_QWORD *)(p_m_ExecutionLevel + 16);
        if ( v64 )
          *((_QWORD *)v63 + 3) = v64;
        v65 = *(_QWORD *)(p_m_ExecutionLevel + 8);
        if ( v65 )
        {
          *((_QWORD *)v63 + 2) = v65;
          *((_WORD *)v32 + 12) |= 0x400u;
        }
      }
      *((_WORD *)v32 + 12) |= 8u;
      v66 = *(_QWORD *)(v32[2] + 336LL);
      if ( !v66 || *(_DWORD *)v66 )
        goto LABEL_74;
      if ( *((_WORD *)v32 + 4) == 4098 )
      {
        if ( _InterlockedIncrement((volatile signed __int32 *)(v66 + 20)) >= 2 )
          _InterlockedAdd((volatile signed __int32 *)(v66 + 12), *(_DWORD *)(v66 + 8));
      }
      else if ( *((_WORD *)v32 + 4) == 4104 && *((_BYTE *)v32 + 213) != 2 )
      {
        goto LABEL_74;
      }
      *((_WORD *)v32 + 12) |= 0x40u;
      _a1 = _InterlockedIncrement((volatile signed __int32 *)(v66 + 16));
      if ( _a1 < *(_DWORD *)(v66 + 12)
        || KeGetCurrentIrql()
        || _InterlockedCompareExchange((volatile signed __int32 *)v66, 1, 0) )
      {
        goto LABEL_74;
      }
      WPP_IFR_SF_D((_FX_DRIVER_GLOBALS *)v32[2], 2u, 0x14u, 0xFu, WPP_FxObject_cpp_Traceguids, _a1);
      if ( *(_BYTE *)(v66 + 4) )
        DbgBreakPoint();
      v69 = (_FX_DRIVER_GLOBALS *)v32[2];
      OriginatingBinary = v69->Public.DriverName;
      FxLiveDump(v69, v68, (unsigned __int64)v69->Public.DriverName, _a1);
      if ( _a1 < *(_DWORD *)(v66 + 12) )
        goto LABEL_74;
      goto LABEL_126;
    }
    v44 = -1073741816;
  }
  else
  {
    if ( v43 )
    {
      if ( p_m_ExecutionLevel && *(_DWORD *)(p_m_ExecutionLevel + 24) == 2 )
      {
        v110 = KeAcquireSpinLockRaiseToDpc(v32 + 7);
        *((_WORD *)v32 + 12) |= 0x11u;
        KeReleaseSpinLock(v32 + 7, v110);
      }
      v44 = FxObject::AssignParentObject((FxObject *)v32, m_DeviceBase);
      if ( v44 < 0 )
        goto LABEL_75;
      if ( p_m_ExecutionLevel )
      {
        v45 = *((unsigned __int16 *)v32 + 5);
        if ( (_WORD)v45 )
          v46 = (char *)v32 + v45;
        else
          v46 = 0LL;
        v47 = *(_QWORD *)(p_m_ExecutionLevel + 16);
        if ( v47 )
          *((_QWORD *)v46 + 3) = v47;
        v48 = *(_QWORD *)(p_m_ExecutionLevel + 8);
        if ( v48 )
        {
          *((_QWORD *)v46 + 2) = v48;
          *((_WORD *)v32 + 12) |= 0x400u;
        }
      }
      *((_WORD *)v32 + 12) |= 8u;
      v49 = *(_QWORD *)(v32[2] + 336LL);
      if ( !v49 || *(_DWORD *)v49 )
        goto LABEL_74;
      if ( *((_WORD *)v32 + 4) == 4098 )
      {
        if ( _InterlockedIncrement((volatile signed __int32 *)(v49 + 20)) >= 2 )
          _InterlockedAdd((volatile signed __int32 *)(v49 + 12), *(_DWORD *)(v49 + 8));
      }
      else if ( *((_WORD *)v32 + 4) == 4104 && *((_BYTE *)v32 + 213) != 2 )
      {
        goto LABEL_74;
      }
      *((_WORD *)v32 + 12) |= 0x40u;
      _a1 = _InterlockedIncrement((volatile signed __int32 *)(v49 + 16));
      if ( _a1 < *(_DWORD *)(v49 + 12)
        || KeGetCurrentIrql()
        || _InterlockedCompareExchange((volatile signed __int32 *)v49, 1, 0) )
      {
        goto LABEL_74;
      }
      WPP_IFR_SF_D((_FX_DRIVER_GLOBALS *)v32[2], 2u, 0x14u, 0xFu, WPP_FxObject_cpp_Traceguids, _a1);
      if ( *(_BYTE *)(v49 + 4) )
        DbgBreakPoint();
      v115 = (_FX_DRIVER_GLOBALS *)v32[2];
      OriginatingBinary = v115->Public.DriverName;
      FxLiveDump(v115, v114, (unsigned __int64)v115->Public.DriverName, _a1);
      if ( _a1 < *(_DWORD *)(v49 + 12) )
        goto LABEL_74;
LABEL_126:
      MicrosoftTelemetryAssertTriggeredArgsKM(OriginatingBinary, _a1, 0);
LABEL_74:
      v44 = 0;
      goto LABEL_75;
    }
    v44 = -1073741816;
  }
LABEL_75:
  if ( v44 < 0 )
  {
    WPP_IFR_SF_D(v142->m_Globals, 2u, 0x10u, 0xBu, WPP_FxRequest_cpp_Traceguids, v44);
    FxObject::DeleteFromFailedCreate((FxObject *)v32);
  }
  else
  {
    v26 = (FxRequest *)v32;
    ReservedRequest = (FxRequest *)v32;
  }
LABEL_77:
  v50 = PreviousIrql;
  v51 = v141;
  if ( PreviousIrql )
  {
    if ( v44 < 0 )
      goto LABEL_92;
    if ( (v141->m_Globals->FxEnhancedVerifierOptions & 0xF0000) == 0 )
      goto LABEL_136;
    v44 = FxPkgIo::VerifierFreeRequestToTestForwardProgess(v141, v26);
    v50 = PreviousIrql;
  }
  if ( v44 >= 0 )
  {
    if ( !v50 )
      goto LABEL_80;
LABEL_136:
    if ( !*(_QWORD *)(*(_QWORD *)(v14 + 128) + 16LL) )
      goto LABEL_80;
    v26->m_Presented = 1;
    v73 = (unsigned __int64)v26 ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !v26->m_ObjectSize )
      v73 = 0LL;
    v74 = *(_WORD *)(v14 + 10) ? v14 ^ 0xFFFFFFFFFFFFFFF8uLL : 0LL;
    if ( (*(int (__fastcall **)(unsigned __int64, unsigned __int64))(*(_QWORD *)(v14 + 128) + 16LL))(v74, v73) >= 0 )
      goto LABEL_80;
    m_RequestContext = v26->m_RequestContext;
    if ( m_RequestContext )
      m_RequestContext->ReleaseAndRestore(m_RequestContext, v26);
    if ( !v26->m_Presented )
      FxObject::ClearEvtCallbacks(v26);
    v26->DeleteObject(v26);
    v76 = *(_QWORD *)(v14 + 128);
    v26 = 0LL;
    v77 = *(_FX_DRIVER_GLOBALS **)(v14 + 16);
    v78 = *(_DWORD *)(v76 + 32);
    if ( v78 == 1 )
      goto LABEL_147;
    v120 = v78 - 2;
    if ( v120 )
    {
      if ( v120 == 1 )
      {
        if ( (Irp->Flags & 2) == 0 || Irp->Tail.Overlay.CurrentStackLocation->MajorFunction == 13 )
          v121 = 1;
        else
          v121 = 2;
        goto LABEL_239;
      }
    }
    else
    {
      v122 = *(__int64 (__fastcall **)(unsigned __int64, _IRP *))(v76 + 24);
      if ( v122 )
      {
        if ( *(_WORD *)(v14 + 10) )
          v123 = v14 ^ 0xFFFFFFFFFFFFFFF8uLL;
        else
          v123 = 0LL;
        v121 = v122(v123, Irp);
        if ( (unsigned int)(v121 - 1) > 1 )
        {
          if ( *(_WORD *)(v14 + 10) )
            v124 = (const void *)(v14 ^ 0xFFFFFFFFFFFFFFF8uLL);
          else
            v124 = 0LL;
          v44 = -1073741823;
          WPP_IFR_SF_qdd(v77, 2u, 0xDu, 0xAu, WPP_FxIoQueueKm_cpp_Traceguids, v124, v121, -1073741823);
          FxVerifierDbgBreakPoint(v77);
          goto LABEL_94;
        }
LABEL_239:
        if ( v121 == 1 )
        {
          if ( *(_WORD *)(v14 + 10) )
            v117 = (const void *)(v14 ^ 0xFFFFFFFFFFFFFFF8uLL);
          else
            v117 = 0LL;
          v44 = -1073741823;
          WPP_IFR_SF_qqd(v77, 2u, 0xDu, 0xBu, WPP_FxIoQueueKm_cpp_Traceguids, v117, Irp, 0xC0000001);
          goto LABEL_94;
        }
      }
    }
LABEL_147:
    v79 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(*(_QWORD *)(v14 + 128) + 96LL));
    v80 = (__int64 **)(*(_QWORD *)(v14 + 128) + 40LL);
    PreviousIrql = v79;
    v81 = *v80;
    if ( *v80 != (__int64 *)v80 )
    {
      if ( (__int64 **)v81[1] != v80
        || (v82 = (__int64 *)*v81, *(__int64 **)(*v81 + 8) != v81)
        || (*v80 = v82,
            v26 = (FxRequest *)(v81 - 40),
            v82[1] = (__int64)v80,
            v83 = v81,
            v84 = *(_QWORD *)(v14 + 128) + 56LL,
            v85 = *(__int64 ***)(*(_QWORD *)(v14 + 128) + 64LL),
            *v85 != (__int64 *)v84) )
      {
        __fastfail(3u);
      }
      *v83 = v84;
      v83[1] = (__int64)v85;
      *v85 = v83;
      *(_QWORD *)(v84 + 8) = v83;
      v26->m_Irp.m_Irp = Irp;
      FxRequest::AssignMemoryBuffers(v26, *(_WDF_DEVICE_IO_TYPE *)(*(_QWORD *)(v14 + 96) + 212LL));
      if ( v77->FxVerifierOn )
        FxRequestBase::SetVerifierFlags(v86, 1024);
      KeReleaseSpinLock((PKSPIN_LOCK)(*(_QWORD *)(v14 + 128) + 96LL), PreviousIrql);
LABEL_246:
      v51 = v141;
      goto LABEL_80;
    }
    v44 = FxIoQueue::QueueForwardProgressIrpLocked((FxIoQueue *)v14, Irp);
    KeReleaseSpinLock((PKSPIN_LOCK)(*(_QWORD *)(v14 + 128) + 96LL), v118);
    if ( v44 == 259 )
      goto LABEL_95;
    if ( v44 >= 0 )
      goto LABEL_246;
LABEL_94:
    Irp->IoStatus.Status = v44;
    Irp->IoStatus.Information = 0LL;
    IofCompleteRequest(Irp, 0);
    goto LABEL_95;
  }
LABEL_92:
  if ( v51->m_Filter && !v14 )
    goto LABEL_94;
  if ( !v50 )
  {
    WPP_IFR_SF_D(v51->m_Globals, 2u, 0xDu, 0x10u, WPP_FxPkgIo_cpp_Traceguids, v44);
    goto LABEL_94;
  }
  v119 = FxIoQueue::GetReservedRequest((FxIoQueue *)v14, Irp, &ReservedRequest);
  v44 = v119;
  if ( v119 == 259 )
    goto LABEL_95;
  if ( v119 < 0 )
    goto LABEL_94;
  v26 = ReservedRequest;
LABEL_80:
  v52 = v144;
  if ( v144 && *v144 && !v26->m_Reserved )
  {
    v26->m_InternalContext = (void *)v14;
    v88 = v51->m_Globals;
    Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
    if ( v88->FxVerifierOn )
      FxRequestBase::SetVerifierFlags(v26, 33);
    if ( v26->m_Completed )
    {
      if ( v26->m_ObjectSize )
        v116 = (const void *)((unsigned __int64)v26 ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v116 = 0LL;
      WPP_IFR_SF_q(v26->m_Globals, 2u, 0x10u, 0x27u, WPP_FxRequest_cpp_Traceguids, v116);
      FxVerifierDbgBreakPoint(v26->m_Globals);
    }
    else
    {
      m_CompletionState = v26->m_CompletionState;
      v26->m_CompletionState = -126;
      if ( !m_CompletionState )
      {
        v106 = _InterlockedIncrement(&v26->m_Refcnt);
        if ( SLOBYTE(v26->m_ObjectFlags) < 0 )
        {
          Blink = (FxTagTracker *)v26[-1].m_OwnerListEntry2.Blink;
          if ( Blink )
            FxTagTracker::UpdateTagHistory(
              Blink,
              (void *)0x74617453,
              1820,
              "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp",
              TagAddRef,
              v106);
        }
      }
    }
    v26->Release(v26, (void *)1952543827, 1741, "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp");
    v26->m_Presented = 1;
    v90 = v51->m_DeviceBase;
    v91 = 0LL;
    if ( v26->m_ObjectSize )
      v91 = (unsigned __int64)v26 ^ 0xFFFFFFFFFFFFFFF8uLL;
    m_ObjectSize = v90->m_ObjectSize;
    if ( *v52 )
    {
      v93 = (unsigned __int64)v90 ^ 0xFFFFFFFFFFFFFFF8uLL;
      if ( !m_ObjectSize )
        v93 = 0LL;
      (*v52)(v93, v91);
    }
    goto LABEL_174;
  }
  v53 = *(_BYTE *)(v14 + 24);
  OriginatingBinary = (char *)v26;
  PreviousIrql = 0;
  if ( v53 < 0 && (v111 = *(FxVerifierLock **)(v14 - 40)) != 0LL )
  {
    FxVerifierLock::Lock(v111, &PreviousIrql, v40);
    v54 = PreviousIrql;
  }
  else
  {
    v54 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v14 + 112));
  }
  if ( v26->m_Reserved )
    FxObject::AddRef(v26, (void *)0x50647746, 2311, "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
  v56 = *(_DWORD *)(v14 + 188);
  v57 = *(_FX_DRIVER_GLOBALS **)(v14 + 16);
  if ( (v56 & 1) == 0 )
  {
    v44 = -1073741436;
    if ( v57->FxVerboseOn )
    {
      if ( v26->m_ObjectSize )
        v128 = (const void *)((unsigned __int64)v26 ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v128 = 0LL;
      v129 = "power stopping (Drain) in progress,";
      if ( (v56 & 0x10000) == 0 )
        v129 = a5;
      if ( *(_WORD *)(v14 + 10) )
        v130 = (const void *)(v14 ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v130 = 0LL;
      WPP_IFR_SF_qLsqd(v57, 5u, (unsigned int)v130, 0x29u, traceGuid, v130, v56, v129, v128, -1073741436);
    }
    if ( *(char *)(v14 + 24) < 0 && (v112 = *(FxVerifierLock **)(v14 - 40)) != 0LL )
      FxVerifierLock::Unlock(v112, v54, v55);
    else
      KeReleaseSpinLock((PKSPIN_LOCK)(v14 + 112), v54);
    v26->m_Irp.m_Irp->IoStatus.Information = 0LL;
    v70 = v26->m_DeviceBase;
    v71 = v26->m_Globals;
    if ( v71->FxVerboseOn )
    {
      v131 = (const void *)((unsigned __int64)v26 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v26->m_ObjectSize )
        v131 = 0LL;
      WPP_IFR_SF_qiid(
        v71,
        5u,
        0x10u,
        0xBu,
        WPP_FxRequest_hpp_Traceguids,
        v131,
        v26->m_Irp.m_Irp,
        v26->m_Irp.m_Irp->IoStatus.Information,
        -1073741436);
    }
    if ( v70 )
      m_Globals_high = HIBYTE(v70[1].m_Globals);
    else
      m_Globals_high = 0;
    v26->m_PriorityBoost = m_Globals_high;
    FxRequest::CompleteInternal(v26, -1073741436);
    v26->Release(v26, (void *)1886220099, 2338, "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
    goto LABEL_95;
  }
  if ( v57->FxVerboseOn )
  {
    if ( *(_WORD *)(v14 + 10) )
      v125 = (const void *)(v14 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v125 = 0LL;
    if ( v26->m_ObjectSize )
      v5 = (const void *)((unsigned __int64)v26 ^ 0xFFFFFFFFFFFFFFF8uLL);
    WPP_IFR_SF_qq(v57, 5u, 0xDu, 0x2Au, WPP_FxIoQueue_cpp_Traceguids, v5, v125);
  }
  if ( v26->m_Globals->FxVerifierIO )
  {
    PreviousIrql = 0;
    FxNonPagedObject::Lock(v26, &PreviousIrql, v55);
    FxRequest::VerifyRequestIsNotCompleted(v26, v26->m_Globals);
    FxNonPagedObject::Unlock(v26, PreviousIrql, v126);
  }
  v26->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  if ( v26->m_Reserved && *(_DWORD *)(v14 + 368) )
  {
    FxIoQueue::InsertNewRequestLocked((FxIoQueue *)v14, (FxRequest **)&OriginatingBinary, v54);
    FxNonPagedObject::Unlock((FxNonPagedObject *)v14, v54, v127);
LABEL_174:
    v44 = 259;
    goto LABEL_95;
  }
  FxIoQueue::DispatchEvents((FxIoQueue *)v14, v54, v26);
  v44 = 259;
LABEL_95:
  if ( v133 )
    KeLeaveCriticalRegion();
  return (unsigned int)v44;
}
