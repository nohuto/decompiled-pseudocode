/*
 * XREFs of ?_Create@FxRequest@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAVFxIoTarget@@W4FxRequestIrpOwnership@@W4FxRequestConstructorCaller@@PEAPEAV1@@Z @ 0x1400245E0
 * Callers:
 *     ?Config@FxUsbPipeContinuousReader@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z @ 0x1400235B0 (-Config@FxUsbPipeContinuousReader@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z.c)
 *     imp_WdfRequestCreateFromIrp @ 0x140023840 (imp_WdfRequestCreateFromIrp.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x14000642C (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_qqd @ 0x14000EA80 (WPP_IFR_SF_qqd.c)
 *     ?AssignParentObject@FxObject@@QEAAJPEAV1@@Z @ 0x1400101A0 (-AssignParentObject@FxObject@@QEAAJPEAV1@@Z.c)
 *     WPP_IFR_SF_qDqD @ 0x140010ADC (WPP_IFR_SF_qDqD.c)
 *     WPP_IFR_SF_qd @ 0x140012548 (WPP_IFR_SF_qd.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x140025AB0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140025E70 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_DDid @ 0x1400262E0 (WPP_IFR_SF_DDid.c)
 *     WPP_IFR_SF_D @ 0x140026890 (WPP_IFR_SF_D.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x140026990 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?DetectExcessiveAllocation@FxObject@@AEAAXXZ @ 0x140026C60 (-DetectExcessiveAllocation@FxObject@@AEAAXXZ.c)
 *     ?SetSubmitIrp@FxRequestBase@@QEAAPEAU_IRP@@PEAU2@E@Z @ 0x140061B64 (-SetSubmitIrp@FxRequestBase@@QEAAPEAU_IRP@@PEAU2@E@Z.c)
 *     WPP_IFR_SF_qLqd @ 0x14007F22C (WPP_IFR_SF_qLqd.c)
 *     ?CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x140081EF0 (-CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     ?ClearVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x140083260 (-ClearVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x140083318 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 *     memset @ 0x1400ACFC0 (memset.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1400E58C4 (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 */

int __fastcall FxRequest::_Create(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *RequestAttributes,
        _IRP *Irp,
        unsigned __int64 Target,
        unsigned int Ownership,
        FxRequestConstructorCaller Caller,
        FxRequest **Request)
{
  const void **v7; // r13
  int id; // edi
  int result; // eax
  unsigned __int64 ContextSizeOverride; // rdx
  __int64 v15; // r8
  unsigned int Tag; // r14d
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // rax
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // r9
  unsigned __int64 v21; // rax
  void *v22; // rax
  _OWORD *v23; // rax
  _FX_DRIVER_GLOBALS *v24; // rdx
  FxRequestBase *v25; // rbx
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *v26; // rax
  unsigned __int64 ContextSize; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  _IRP *m_Irp; // rax
  FxRequestContext *m_RequestContext; // rcx
  _IRP *v31; // rdi
  _FX_DRIVER_GLOBALS *v32; // rax
  int v33; // edi
  unsigned __int16 v34; // ax
  const void *v35; // r15
  const void *v36; // rax
  unsigned __int64 v37; // rcx
  unsigned __int64 v38; // rcx
  __int64 v39; // rax
  PIRP v40; // rax
  _IRP *v41; // r14
  bool v42; // zf
  FxRequest **flags; // rdi
  unsigned __int64 ParentObject; // r14
  __int64 v45; // rax
  __int64 m_ObjectSize; // rax
  char *v47; // rcx
  void (__fastcall *EvtDestroyCallback)(void *); // rax
  void (__fastcall *EvtCleanupCallback)(void *); // rax
  _FX_DRIVER_GLOBALS *v50; // rax
  _WDF_BIND_INFO *WdfBindInfo; // rcx
  KIRQL v52; // al
  unsigned __int8 v53; // r8
  FxRequest *v54; // rax
  unsigned __int8 v55; // dl
  unsigned int v56; // r8d
  unsigned __int16 v57; // r9
  KIRQL v58; // al
  _FX_DRIVER_GLOBALS *v59; // rcx
  const void *v60; // rax
  unsigned __int16 v61; // ax
  const void *v62; // r15
  __int64 v63; // rax
  unsigned __int16 v64; // r9
  _FX_DRIVER_GLOBALS *v65; // rdx
  const _GUID *traceGuid; // [rsp+20h] [rbp-68h]
  const _GUID *traceGuida; // [rsp+20h] [rbp-68h]
  FxPoolTypeOrPoolFlags v68; // [rsp+50h] [rbp-38h] BYREF
  void *retaddr; // [rsp+88h] [rbp+0h]

  v7 = (const void **)Request;
  id = 0;
  *Request = 0LL;
  result = FxValidateObjectAttributes(FxDriverGlobals, RequestAttributes, 0);
  if ( result < 0 )
    return result;
  ContextSizeOverride = 0LL;
  v15 = -1LL;
  Tag = FxDriverGlobals->Tag;
  v68.u.PoolFlags = 64LL;
  if ( !RequestAttributes || (ContextTypeInfo = RequestAttributes->ContextTypeInfo) == 0LL )
  {
LABEL_6:
    v18 = 416LL;
    if ( !ContextSizeOverride )
      goto LABEL_7;
    goto LABEL_44;
  }
  ContextSizeOverride = RequestAttributes->ContextSizeOverride;
  if ( !ContextSizeOverride )
  {
    ContextSizeOverride = ContextTypeInfo->ContextSize;
    goto LABEL_6;
  }
LABEL_44:
  v37 = (ContextSizeOverride + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( v37 < ContextSizeOverride )
    goto LABEL_90;
  v38 = v37 + 416;
  v39 = -1LL;
  if ( v38 >= 0x1A0 )
    v39 = v38;
  v18 = v39;
  id = v38 < 0x1A0 ? 0xC0000095 : 0;
LABEL_7:
  v19 = v18;
  v20 = v18;
  if ( id < 0 )
    goto LABEL_106;
  if ( FxDriverGlobals->FxVerifierHandle )
  {
    v21 = v18 + 48;
    if ( v18 + 48 >= v18 )
      v15 = v18 + 48;
    v18 = v15;
    id = v21 < v20 ? 0xC0000095 : 0;
    if ( v21 < v19 )
LABEL_106:
      WPP_IFR_SF_DDid(FxDriverGlobals, ContextSizeOverride, v15, v20, traceGuid, 0x168u, 0, ContextSizeOverride, id);
  }
  if ( id >= 0 )
  {
    *(_QWORD *)&v68.UsePoolType = 0LL;
    v68.u.PoolFlags = 64LL;
    if ( FxDriverGlobals->FxPoolTrackingOn )
      v22 = retaddr;
    else
      v22 = 0LL;
    v23 = FxPoolAllocator(FxDriverGlobals, &FxDriverGlobals->FxPoolFrameworks, &v68, v18, Tag, v22);
    v25 = (FxRequestBase *)v23;
    if ( v23 )
    {
      if ( FxDriverGlobals->FxVerifierHandle )
      {
        v25 = (FxRequestBase *)(v23 + 3);
        *v23 = 0LL;
        v23[1] = 0LL;
        v23[2] = 0LL;
        *((_DWORD *)v23 + 8) = 1146058822;
      }
      v25[1].m_CsqContext.Irp = 0LL;
      v25[1].m_CsqContext.Csq = 0LL;
      v25[1].m_DrainSingleEntry.Next = 0LL;
      v25[1].m_Irp.m_Irp = 0LL;
      v25[1].m_Target = 0LL;
      v25[1].m_ListEntry.Flink = (_LIST_ENTRY *)v25;
      if ( RequestAttributes )
      {
        v26 = RequestAttributes->ContextTypeInfo;
        if ( v26 )
        {
          ContextSize = RequestAttributes->ContextSizeOverride;
          if ( !ContextSize )
            ContextSize = v26->ContextSize;
          memset(&v25[1].m_RequestContext, 0, (ContextSize + 7) & 0xFFFFFFFFFFFFFFF8uLL);
        }
        v25[1].m_Irp.m_Irp = (_IRP *)RequestAttributes->ContextTypeInfo;
      }
    }
    if ( v25 )
    {
      v25->m_Globals = FxDriverGlobals;
      v25->__vftable = (FxRequestBase_vtbl *)FxObject::`vftable';
      *(_DWORD *)&v25->m_Type = 24121352;
      v25->m_SpinLock.m_Lock = 0LL;
      v25->m_SpinLock.m_DbgFlagIsInitialized = 1;
      v25->m_Refcnt = 1;
      *(_DWORD *)&v25->m_ObjectFlags = 0x10000;
      v25->m_ParentObject = 0LL;
      v25->m_ChildListHead.Blink = &v25->m_ChildListHead;
      v25->m_ChildListHead.Flink = &v25->m_ChildListHead;
      v25->m_ChildEntry.Blink = &v25->m_ChildEntry;
      v25->m_ChildEntry.Flink = &v25->m_ChildEntry;
      m_Globals = v25->m_Globals;
      v25->m_DisposeSingleEntry.Next = 0LL;
      v25->m_DeviceBase = 0LL;
      if ( m_Globals->FxVerifierOn )
        FxObject::Vf_VerifyConstruct(v25, v24, 0);
      v25->__vftable = (FxRequestBase_vtbl *)FxNonPagedObject::`vftable';
      v25->m_NPLock.m_Lock = 0LL;
      v25->m_NPLock.m_DbgFlagIsInitialized = 1;
      if ( SLOBYTE(v25->m_ObjectFlags) < 0 )
      {
        v65 = v25->m_Globals;
        if ( v65->FxVerifierLock )
        {
          Request = 0LL;
          FxVerifierLock::CreateAndInitialize((FxVerifierLock **)&Request, v65, v25);
          *(_QWORD *)&v25[-1].m_IrpCompletionReferenceCount = Request;
        }
      }
      v25->__vftable = (FxRequestBase_vtbl *)FxRequestBase::`vftable';
      v25->m_Irp.m_Irp = Irp;
      v25->m_CancelRoutine.m_Cancel = 0LL;
      v25->m_CompletionRoutine.m_Completion = 0LL;
      v25->m_CanComplete = 0;
      if ( Caller == FxRequestConstructorCallerIsDriver )
      {
        v25->m_IrpAllocation = (Ownership != 1) + 1;
        WdfBindInfo = FxDriverGlobals->WdfBindInfo;
        if ( WdfBindInfo->Version.Major > 1 || WdfBindInfo->Version.Major == 1 && WdfBindInfo->Version.Minor >= 0xB )
        {
          v52 = KeAcquireSpinLockRaiseToDpc(&v25->m_SpinLock.m_Lock);
          v25->m_ObjectFlags |= 0x800u;
          KeReleaseSpinLock(&v25->m_SpinLock.m_Lock, v52);
          m_Irp = v25->m_Irp.m_Irp;
LABEL_32:
          v25->m_Target = 0LL;
          v25->m_TargetFlags = 0;
          v25->m_TargetCompletionContext = 0LL;
          v25->m_Completed = m_Irp == 0LL;
          v25->m_Canceled = 0;
          v25->m_PriorityBoost = 0;
          v25->m_RequestContext = 0LL;
          v25->m_Timer = 0LL;
          v25->m_CsqContext.Irp = (_IRP *)&v25->120;
          v25->m_ListEntry.Flink = (_LIST_ENTRY *)&v25->120;
          v25->__vftable = (FxRequestBase_vtbl *)FxRequest::`vftable';
          v25->m_DrainSingleEntry.Next = 0LL;
          *(_QWORD *)&v25->m_SystemBufferOffset = 216LL;
          v25->m_IrpQueue = 0LL;
          v25->m_IrpCompletionReferenceCount = 0;
          v25->m_AllocatedMdl = 0LL;
          *(_DWORD *)&v25->m_OutputBufferOffset = 232;
          v25->m_CompletionState = 0;
          *(_QWORD *)&v25[1].m_Type = FxRequestSystemBuffer::`vftable';
          v25[1].m_Globals = 0LL;
          *(_QWORD *)&v25[1].m_ObjectFlags = FxRequestOutputBuffer::`vftable';
          v25[1].m_ChildListHead.Flink = 0LL;
          v25[1].__vftable = 0LL;
          *(&v25[1].m_NPLock.m_DbgFlagIsInitialized + 1) = 0;
          *(_QWORD *)&v25[1].m_SpinLock.m_DbgFlagIsInitialized = (char *)v25 + 288;
          v25[1].m_ChildListHead.Blink = (_LIST_ENTRY *)&v25[1].m_ChildListHead.Blink;
          v25[1].m_ParentObject = (FxRequestBase *)((char *)v25 + 304);
          v25[1].m_SpinLock.m_Lock = (unsigned __int64)&v25[1].m_SpinLock.m_Lock;
          v25[1].m_ChildEntry.Blink = &v25[1].m_ChildEntry;
          v25[1].m_ChildEntry.Flink = &v25[1].m_ChildEntry;
          v25[1].m_NPLock.m_DbgFlagIsInitialized = Caller == FxRequestConstructorCallerIsDriver;
          *((_WORD *)&v25[1].m_NPLock.m_DbgFlagIsInitialized + 1) = 0;
          v25[1].m_DisposeSingleEntry.Next = 0LL;
          v25[1].m_DeviceBase = 0LL;
          if ( !Target )
            goto LABEL_53;
          m_RequestContext = v25->m_RequestContext;
          v31 = v25->m_Irp.m_Irp;
          if ( m_RequestContext )
          {
            if ( v31 )
            {
              m_RequestContext->ReleaseAndRestore(m_RequestContext, v25);
              v32 = v25->m_Globals;
              if ( v32->FxVerifierOn )
              {
                if ( v32->FxVerifierIO )
                  FxRequestBase::ClearVerifierFlags(v25, 128);
              }
            }
          }
          if ( !*(_BYTE *)(Target + 336) )
          {
            v33 = -1073741436;
            v61 = *(_WORD *)(Target + 10);
            v62 = (const void *)(Target ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !v61 )
              v62 = 0LL;
            WPP_IFR_SF_qd(v25->m_Globals, 2u, 0xEu, 0xBu, WPP_FxRequestBase_cpp_Traceguids, v62, -1073741436);
LABEL_52:
            if ( v33 < 0 )
            {
LABEL_84:
              WPP_IFR_SF_D(FxDriverGlobals, 2u, 0x10u, 0xCu, WPP_FxRequest_cpp_Traceguids, v33);
              if ( Irp )
                FxRequestBase::SetSubmitIrp(v25, 0LL, v53);
              FxObject::DeleteFromFailedCreate(v25);
              goto LABEL_71;
            }
LABEL_53:
            v42 = v25->m_ObjectSize == 0;
            flags = 0LL;
            Request = 0LL;
            if ( v42 )
            {
              v33 = -1073741816;
            }
            else
            {
              if ( !RequestAttributes )
                goto LABEL_121;
              if ( RequestAttributes->ExecutionLevel == WdfExecutionLevelPassive )
              {
                v58 = KeAcquireSpinLockRaiseToDpc(&v25->m_SpinLock.m_Lock);
                v25->m_ObjectFlags |= 0x11u;
                KeReleaseSpinLock(&v25->m_SpinLock.m_Lock, v58);
                flags = Request;
              }
              ParentObject = (unsigned __int64)RequestAttributes->ParentObject;
              if ( ParentObject )
              {
                LOWORD(v45) = 0;
                flags = (FxRequest **)(~ParentObject & 0xFFFFFFFFFFFFFFF8uLL);
                if ( (ParentObject & 1) != 0 )
                {
                  v45 = *(unsigned __int16 *)flags;
                  flags = (FxRequest **)((char *)flags - v45);
                }
                if ( *((_WORD *)flags + 4) == 4096 )
                {
                  Request = flags;
                }
                else
                {
                  WORD1(v68.u.PoolFlags) = v45;
                  *(_QWORD *)&v68.UsePoolType = &Request;
                  HIDWORD(v68.u.PoolFlags) = 0;
                  v54 = *flags;
                  LOWORD(v68.u.PoolType) = 4096;
                  if ( ((int (__fastcall *)(FxRequest **, FxPoolTypeOrPoolFlags *))v54->m_ChildListHead.Blink)(
                         flags,
                         &v68) < 0 )
                  {
                    WPP_IFR_SF_qDqD(
                      (_FX_DRIVER_GLOBALS *)flags[2],
                      v55,
                      v56,
                      v57,
                      traceGuida,
                      (const void *)ParentObject,
                      0x1000u,
                      flags,
                      *((unsigned __int16 *)flags + 4));
                    FxVerifierBugCheckWorker(
                      (_FX_DRIVER_GLOBALS *)flags[2],
                      WDF_INVALID_HANDLE,
                      ParentObject,
                      0x1000uLL);
                  }
                  flags = Request;
                }
              }
              else
              {
LABEL_121:
                if ( !v25->m_ParentObject )
                {
                  v50 = v25->m_Globals;
                  if ( (FxRequestBase *)v50->Driver != v25 )
                  {
                    flags = (FxRequest **)v50->Driver;
                    Request = flags;
                  }
                }
              }
              if ( !flags || (v33 = FxObject::AssignParentObject(v25, (FxObject *)flags), v33 >= 0) )
              {
                if ( RequestAttributes )
                {
                  m_ObjectSize = v25->m_ObjectSize;
                  if ( (_WORD)m_ObjectSize )
                    v47 = (char *)v25 + m_ObjectSize;
                  else
                    v47 = 0LL;
                  EvtDestroyCallback = RequestAttributes->EvtDestroyCallback;
                  if ( EvtDestroyCallback )
                    *((_QWORD *)v47 + 3) = EvtDestroyCallback;
                  EvtCleanupCallback = RequestAttributes->EvtCleanupCallback;
                  if ( EvtCleanupCallback )
                  {
                    *((_QWORD *)v47 + 2) = EvtCleanupCallback;
                    v25->m_ObjectFlags |= 0x400u;
                  }
                }
                v25->m_ObjectFlags |= 8u;
                FxObject::DetectExcessiveAllocation(v25);
                *v7 = v25;
                v33 = 0;
                goto LABEL_71;
              }
            }
            goto LABEL_84;
          }
          if ( v31 )
          {
            if ( v31->CurrentLocation - 1 >= *(char *)(Target + 336) )
              goto LABEL_51;
            if ( v25->m_IrpAllocation != 1 )
            {
              v33 = -1073741616;
              v34 = *(_WORD *)(Target + 10);
              v35 = (const void *)(Target ^ 0xFFFFFFFFFFFFFFF8uLL);
              if ( !v34 )
                v35 = 0LL;
              if ( !v25->m_ObjectSize || (v36 = (const void *)((unsigned __int64)v25 ^ 0xFFFFFFFFFFFFFFF8uLL)) == 0LL )
                v36 = v25;
              v64 = 13;
LABEL_105:
              WPP_IFR_SF_qqd(v25->m_Globals, 2u, 0xEu, v64, WPP_FxRequestBase_cpp_Traceguids, v36, v35, v33);
              goto LABEL_52;
            }
          }
          v40 = IoAllocateIrp(*(_BYTE *)(Target + 336), 0);
          if ( !v40 )
          {
            v33 = -1073741670;
            v63 = *(unsigned __int16 *)(Target + 10);
            v35 = (const void *)(Target ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !(_WORD)v63 )
              v35 = 0LL;
            if ( !v25->m_ObjectSize || (v36 = (const void *)((unsigned __int64)v25 ^ 0xFFFFFFFFFFFFFFF8uLL)) == 0LL )
              v36 = v25;
            v64 = 12;
            goto LABEL_105;
          }
          v41 = v25->m_Irp.m_Irp;
          v25->m_Irp.m_Irp = v40;
          v25->m_Completed = 0;
          if ( v41 && v41 != v40 && v25->m_IrpAllocation == 1 )
          {
            v25->m_IrpAllocation = 1;
            v33 = 0;
            v59 = v25->m_Globals;
            if ( v59->FxVerboseOn )
            {
              if ( !v25->m_ObjectSize || (v60 = (const void *)((unsigned __int64)v25 ^ 0xFFFFFFFFFFFFFFF8uLL)) == 0LL )
                v60 = v25;
              WPP_IFR_SF_qq(v59, 5u, 0xDu, 0xEu, WPP_FxRequestBase_cpp_Traceguids, v41, v60);
            }
            IoFreeIrp(v41);
            goto LABEL_52;
          }
          v25->m_IrpAllocation = 1;
LABEL_51:
          v33 = 0;
          goto LABEL_52;
        }
      }
      else if ( Ownership == 1 )
      {
        v25->m_IrpAllocation = 1;
      }
      else
      {
        v25->m_IrpAllocation = 0;
        v25->m_CanComplete = 1;
      }
      m_Irp = Irp;
      goto LABEL_32;
    }
  }
LABEL_90:
  v33 = -1073741670;
LABEL_71:
  if ( FxDriverGlobals->FxVerboseOn )
    WPP_IFR_SF_qLqd(FxDriverGlobals, 5u, 0x10u, 0xDu, WPP_FxRequest_cpp_Traceguids, Irp, Ownership, *v7, v33);
  return v33;
}
