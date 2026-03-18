/*
 * XREFs of imp_WdfRequestCreate @ 0x140024FC0
 * Callers:
 *     <none>
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
 *     WPP_IFR_SF_qLqd @ 0x14007F22C (WPP_IFR_SF_qLqd.c)
 *     ?CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x140081EF0 (-CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     ?ClearVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x140083260 (-ClearVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1400832CC (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x140083318 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 *     memset @ 0x1400ACFC0 (memset.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1400E58C4 (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 */

__int64 __fastcall imp_WdfRequestCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *RequestAttributes,
        unsigned __int64 Target,
        WDFREQUEST__ **Request)
{
  _FX_DRIVER_GLOBALS *v4; // r14
  WDFREQUEST__ **v5; // rax
  __int64 v8; // rcx
  unsigned __int64 flags; // rdi
  unsigned __int64 v10; // r15
  int _a1; // r12d
  unsigned int Tag; // r10d
  unsigned __int64 ContextSizeOverride; // rdx
  __int64 v14; // r8
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // rax
  unsigned __int64 v16; // rbx
  int id; // r12d
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // r9
  unsigned __int64 v20; // rax
  bool v21; // zf
  void *v22; // rax
  _OWORD *v23; // rax
  _FX_DRIVER_GLOBALS *v24; // rdx
  FxRequestBase *v25; // rbx
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *v26; // rax
  unsigned __int64 ContextSize; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  _WDF_BIND_INFO *WdfBindInfo; // rcx
  KIRQL v30; // al
  FxRequestContext *m_RequestContext; // rcx
  _IRP *m_Irp; // r12
  _FX_DRIVER_GLOBALS *v33; // rax
  const void *v34; // rdi
  unsigned __int64 v35; // rcx
  unsigned __int64 v36; // rcx
  __int64 v37; // rax
  PIRP Irp; // rax
  _IRP *v39; // rdi
  __int16 v40; // ax
  unsigned __int64 v41; // r15
  unsigned __int16 *Driver; // rdi
  unsigned __int64 v44; // r12
  __int64 v45; // rax
  __int64 m_ObjectSize; // rax
  char *v47; // rcx
  void (__fastcall *EvtDestroyCallback)(void *); // rax
  void (__fastcall *EvtCleanupCallback)(void *); // rax
  _FX_DRIVER_GLOBALS *v50; // rax
  FxIoTarget_vtbl *v51; // rax
  unsigned __int8 v52; // dl
  unsigned int v53; // r8d
  unsigned __int16 v54; // r9
  unsigned __int64 ParentObject; // rbx
  __int64 v56; // rcx
  unsigned __int16 *v57; // r14
  __int64 v58; // rax
  unsigned __int8 v59; // dl
  unsigned int v60; // r8d
  unsigned __int16 v61; // r9
  KIRQL v62; // al
  __int64 v63; // rax
  unsigned __int8 v64; // dl
  unsigned int v65; // r8d
  unsigned __int16 v66; // r9
  _FX_DRIVER_GLOBALS *v67; // rcx
  const void *v68; // rax
  const void *v69; // rdi
  const void *v70; // rax
  unsigned __int16 v71; // r9
  _FX_DRIVER_GLOBALS *v72; // rdx
  const _GUID *traceGuid; // [rsp+20h] [rbp-60h]
  const _GUID *traceGuida; // [rsp+20h] [rbp-60h]
  FxIoTarget *pTarget; // [rsp+50h] [rbp-30h] BYREF
  FxIoTarget **p_pTarget; // [rsp+58h] [rbp-28h] BYREF
  __int16 v77; // [rsp+60h] [rbp-20h]
  __int16 v78; // [rsp+62h] [rbp-1Eh]
  int v79; // [rsp+64h] [rbp-1Ch]
  FxPoolTypeOrPoolFlags v80; // [rsp+70h] [rbp-10h] BYREF
  void *retaddr; // [rsp+B8h] [rbp+38h]
  FxVerifierLock *VerifierLock; // [rsp+C0h] [rbp+40h] BYREF
  WDFREQUEST__ **v83; // [rsp+D8h] [rbp+58h]

  v83 = Request;
  v4 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  v5 = Request;
  if ( Target )
  {
    LOWORD(v8) = 0;
    flags = ~Target & 0xFFFFFFFFFFFFFFF8uLL;
    if ( (Target & 1) != 0 )
    {
      v8 = *(unsigned __int16 *)flags;
      flags -= v8;
    }
    if ( *(_WORD *)(flags + 8) == 4608 )
    {
      pTarget = (FxIoTarget *)flags;
    }
    else
    {
      pTarget = 0LL;
      p_pTarget = &pTarget;
      v78 = v8;
      v79 = 0;
      v51 = *(FxIoTarget_vtbl **)flags;
      v77 = 4608;
      if ( v51->QueryInterface((FxObject *)flags, (FxQueryInterfaceParams *)&p_pTarget) < 0 )
      {
        WPP_IFR_SF_qDqD(
          *(_FX_DRIVER_GLOBALS **)(flags + 16),
          v52,
          v53,
          v54,
          traceGuid,
          (const void *)Target,
          0x1200u,
          (const void *)flags,
          *(unsigned __int16 *)(flags + 8));
        FxVerifierBugCheckWorker(*(_FX_DRIVER_GLOBALS **)(flags + 16), WDF_INVALID_HANDLE, Target, 0x1200uLL);
      }
      flags = (unsigned __int64)pTarget;
      v5 = v83;
    }
    v4 = *(_FX_DRIVER_GLOBALS **)(flags + 16);
  }
  else
  {
    pTarget = 0LL;
    flags = 0LL;
    if ( RequestAttributes )
    {
      ParentObject = (unsigned __int64)RequestAttributes->ParentObject;
      if ( ParentObject )
      {
        LOWORD(v56) = 0;
        v57 = (unsigned __int16 *)(~ParentObject & 0xFFFFFFFFFFFFFFF8uLL);
        if ( (ParentObject & 1) != 0 )
        {
          v56 = *v57;
          v57 = (unsigned __int16 *)((char *)v57 - v56);
        }
        if ( v57[4] == 4096 )
        {
          p_pTarget = (FxIoTarget **)v57;
        }
        else
        {
          p_pTarget = 0LL;
          *(_QWORD *)&v80.UsePoolType = &p_pTarget;
          WORD1(v80.u.PoolFlags) = v56;
          HIDWORD(v80.u.PoolFlags) = 0;
          v63 = *(_QWORD *)v57;
          LOWORD(v80.u.PoolType) = 4096;
          if ( (*(int (__fastcall **)(unsigned __int16 *, FxPoolTypeOrPoolFlags *))(v63 + 40))(v57, &v80) < 0 )
          {
            WPP_IFR_SF_qDqD(
              *((_FX_DRIVER_GLOBALS **)v57 + 2),
              v64,
              v65,
              v66,
              traceGuid,
              (const void *)ParentObject,
              0x1000u,
              v57,
              v57[4]);
            FxVerifierBugCheckWorker(*((_FX_DRIVER_GLOBALS **)v57 + 2), WDF_INVALID_HANDLE, ParentObject, 0x1000uLL);
          }
          flags = (unsigned __int64)pTarget;
          v57 = (unsigned __int16 *)p_pTarget;
          v5 = v83;
        }
        v4 = (_FX_DRIVER_GLOBALS *)*((_QWORD *)v57 + 2);
      }
    }
  }
  if ( !v5 )
    FxVerifierNullBugCheck(v4, retaddr);
  *v5 = 0LL;
  v10 = 0LL;
  _a1 = FxValidateObjectAttributes(v4, RequestAttributes, 0);
  if ( _a1 >= 0 )
  {
    Tag = v4->Tag;
    ContextSizeOverride = 0LL;
    LODWORD(VerifierLock) = Tag;
    v14 = -1LL;
    v80.u.PoolFlags = 64LL;
    if ( RequestAttributes )
    {
      ContextTypeInfo = RequestAttributes->ContextTypeInfo;
      if ( ContextTypeInfo )
      {
        ContextSizeOverride = RequestAttributes->ContextSizeOverride;
        if ( ContextSizeOverride )
        {
LABEL_49:
          v35 = (ContextSizeOverride + 7) & 0xFFFFFFFFFFFFFFF8uLL;
          if ( v35 < ContextSizeOverride )
            goto LABEL_105;
          v36 = v35 + 416;
          v37 = -1LL;
          if ( v36 >= 0x1A0 )
            v37 = v36;
          v16 = v37;
          id = v36 < 0x1A0 ? 0xC0000095 : 0;
LABEL_14:
          v18 = v16;
          v19 = v16;
          if ( id < 0 )
            goto LABEL_122;
          if ( v4->FxVerifierHandle )
          {
            v20 = v16 + 48;
            if ( v16 + 48 >= v16 )
              v14 = v16 + 48;
            v16 = v14;
            id = v20 < v19 ? 0xC0000095 : 0;
            if ( v20 < v18 )
            {
LABEL_122:
              WPP_IFR_SF_DDid(v4, ContextSizeOverride, v14, v19, traceGuid, 0x168u, 0, ContextSizeOverride, id);
              Tag = (unsigned int)VerifierLock;
            }
          }
          if ( id >= 0 )
          {
            v21 = v4->FxPoolTrackingOn == 0;
            *(_QWORD *)&v80.UsePoolType = 0LL;
            v80.u.PoolFlags = 64LL;
            if ( v21 )
              v22 = 0LL;
            else
              v22 = retaddr;
            v23 = FxPoolAllocator(v4, &v4->FxPoolFrameworks, &v80, v16, Tag, v22);
            v25 = (FxRequestBase *)v23;
            if ( v23 )
            {
              if ( v4->FxVerifierHandle )
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
              v25->m_Globals = v4;
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
                v72 = v25->m_Globals;
                if ( v72->FxVerifierLock )
                {
                  VerifierLock = 0LL;
                  FxVerifierLock::CreateAndInitialize(&VerifierLock, v72, v25);
                  *(_QWORD *)&v25[-1].m_IrpCompletionReferenceCount = VerifierLock;
                }
              }
              v25->__vftable = (FxRequestBase_vtbl *)FxRequestBase::`vftable';
              v25->m_Irp.m_Irp = 0LL;
              v25->m_CancelRoutine.m_Cancel = 0LL;
              v25->m_CompletionRoutine.m_Completion = 0LL;
              v25->m_CanComplete = 0;
              v25->m_IrpAllocation = 1;
              WdfBindInfo = v4->WdfBindInfo;
              if ( WdfBindInfo->Version.Major > 1
                || WdfBindInfo->Version.Major == 1 && WdfBindInfo->Version.Minor >= 0xB )
              {
                v30 = KeAcquireSpinLockRaiseToDpc(&v25->m_SpinLock.m_Lock);
                v25->m_ObjectFlags |= 0x800u;
                KeReleaseSpinLock(&v25->m_SpinLock.m_Lock, v30);
              }
              v21 = v25->m_Irp.m_Irp == 0LL;
              v25->m_Target = 0LL;
              v25->m_TargetFlags = 0;
              v25->m_Completed = v21;
              v25->m_TargetCompletionContext = 0LL;
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
              v25[1].m_NPLock.m_DbgFlagIsInitialized = 1;
              *((_WORD *)&v25[1].m_NPLock.m_DbgFlagIsInitialized + 1) = 0;
              v25[1].m_DisposeSingleEntry.Next = 0LL;
              v25[1].m_DeviceBase = 0LL;
              if ( !flags )
                goto LABEL_67;
              m_RequestContext = v25->m_RequestContext;
              m_Irp = v25->m_Irp.m_Irp;
              if ( m_RequestContext )
              {
                if ( m_Irp )
                {
                  m_RequestContext->ReleaseAndRestore(m_RequestContext, v25);
                  v33 = v25->m_Globals;
                  if ( v33->FxVerifierOn )
                  {
                    if ( v33->FxVerifierIO )
                      FxRequestBase::ClearVerifierFlags(v25, 128);
                  }
                }
              }
              if ( !*(_BYTE *)(flags + 336) )
              {
                _a1 = -1073741436;
                if ( *(_WORD *)(flags + 10) )
                  v69 = (const void *)(flags ^ 0xFFFFFFFFFFFFFFF8uLL);
                else
                  v69 = 0LL;
                WPP_IFR_SF_qd(v25->m_Globals, 2u, 0xEu, 0xBu, WPP_FxRequestBase_cpp_Traceguids, v69, -1073741436);
                goto LABEL_57;
              }
              if ( m_Irp )
              {
                if ( m_Irp->CurrentLocation - 1 >= *(char *)(flags + 336) )
                  goto LABEL_56;
                if ( v25->m_IrpAllocation != 1 )
                {
                  _a1 = -1073741616;
                  if ( *(_WORD *)(flags + 10) )
                    v34 = (const void *)(flags ^ 0xFFFFFFFFFFFFFFF8uLL);
                  else
                    v34 = 0LL;
                  if ( !v25->m_ObjectSize
                    || (v70 = (const void *)((unsigned __int64)v25 ^ 0xFFFFFFFFFFFFFFF8uLL)) == 0LL )
                  {
                    v70 = v25;
                  }
                  v71 = 13;
LABEL_121:
                  WPP_IFR_SF_qqd(v25->m_Globals, 2u, 0xEu, v71, WPP_FxRequestBase_cpp_Traceguids, v70, v34, _a1);
                  goto LABEL_57;
                }
              }
              Irp = IoAllocateIrp(*(_BYTE *)(flags + 336), 0);
              if ( !Irp )
              {
                _a1 = -1073741670;
                if ( *(_WORD *)(flags + 10) )
                  v34 = (const void *)(flags ^ 0xFFFFFFFFFFFFFFF8uLL);
                else
                  v34 = 0LL;
                if ( !v25->m_ObjectSize || (v70 = (const void *)((unsigned __int64)v25 ^ 0xFFFFFFFFFFFFFFF8uLL)) == 0LL )
                  v70 = v25;
                v71 = 12;
                goto LABEL_121;
              }
              v39 = v25->m_Irp.m_Irp;
              v25->m_Irp.m_Irp = Irp;
              v25->m_Completed = 0;
              if ( v39 && v39 != Irp && v25->m_IrpAllocation == 1 )
              {
                v25->m_IrpAllocation = 1;
                _a1 = 0;
                v67 = v25->m_Globals;
                if ( v67->FxVerboseOn )
                {
                  if ( !v25->m_ObjectSize
                    || (v68 = (const void *)((unsigned __int64)v25 ^ 0xFFFFFFFFFFFFFFF8uLL)) == 0LL )
                  {
                    v68 = v25;
                  }
                  WPP_IFR_SF_qq(v67, 5u, 0xDu, 0xEu, WPP_FxRequestBase_cpp_Traceguids, v39, v68);
                }
                IoFreeIrp(v39);
LABEL_57:
                if ( _a1 < 0 )
                {
LABEL_58:
                  WPP_IFR_SF_D(v4, 2u, 0x10u, 0xCu, WPP_FxRequest_cpp_Traceguids, _a1);
                  FxObject::DeleteFromFailedCreate(v25);
                  goto LABEL_59;
                }
LABEL_67:
                v21 = v25->m_ObjectSize == 0;
                Driver = 0LL;
                VerifierLock = 0LL;
                if ( v21 )
                {
                  _a1 = -1073741816;
                }
                else
                {
                  if ( !RequestAttributes )
                    goto LABEL_142;
                  if ( RequestAttributes->ExecutionLevel == WdfExecutionLevelPassive )
                  {
                    v62 = KeAcquireSpinLockRaiseToDpc(&v25->m_SpinLock.m_Lock);
                    v25->m_ObjectFlags |= 0x11u;
                    KeReleaseSpinLock(&v25->m_SpinLock.m_Lock, v62);
                    Driver = (unsigned __int16 *)VerifierLock;
                  }
                  v44 = (unsigned __int64)RequestAttributes->ParentObject;
                  if ( v44 )
                  {
                    LOWORD(v45) = 0;
                    Driver = (unsigned __int16 *)(~v44 & 0xFFFFFFFFFFFFFFF8uLL);
                    if ( (v44 & 1) != 0 )
                    {
                      v45 = *Driver;
                      Driver = (unsigned __int16 *)((char *)Driver - v45);
                    }
                    if ( Driver[4] == 4096 )
                    {
                      VerifierLock = (FxVerifierLock *)Driver;
                    }
                    else
                    {
                      WORD1(v80.u.PoolFlags) = v45;
                      *(_QWORD *)&v80.UsePoolType = &VerifierLock;
                      HIDWORD(v80.u.PoolFlags) = 0;
                      v58 = *(_QWORD *)Driver;
                      LOWORD(v80.u.PoolType) = 4096;
                      if ( (*(int (__fastcall **)(unsigned __int16 *, FxPoolTypeOrPoolFlags *))(v58 + 40))(Driver, &v80) < 0 )
                      {
                        WPP_IFR_SF_qDqD(
                          *((_FX_DRIVER_GLOBALS **)Driver + 2),
                          v59,
                          v60,
                          v61,
                          traceGuida,
                          (const void *)v44,
                          0x1000u,
                          Driver,
                          Driver[4]);
                        FxVerifierBugCheckWorker(
                          *((_FX_DRIVER_GLOBALS **)Driver + 2),
                          WDF_INVALID_HANDLE,
                          v44,
                          0x1000uLL);
                      }
                      Driver = (unsigned __int16 *)VerifierLock;
                    }
                  }
                  else
                  {
LABEL_142:
                    if ( !v25->m_ParentObject )
                    {
                      v50 = v25->m_Globals;
                      if ( (FxRequestBase *)v50->Driver != v25 )
                      {
                        Driver = (unsigned __int16 *)v50->Driver;
                        VerifierLock = (FxVerifierLock *)Driver;
                      }
                    }
                  }
                  if ( !Driver || (_a1 = FxObject::AssignParentObject(v25, (FxObject *)Driver), _a1 >= 0) )
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
                    _a1 = 0;
                    v10 = (unsigned __int64)v25;
                    goto LABEL_59;
                  }
                }
                goto LABEL_58;
              }
              v25->m_IrpAllocation = 1;
LABEL_56:
              _a1 = 0;
              goto LABEL_57;
            }
          }
LABEL_105:
          _a1 = -1073741670;
LABEL_59:
          if ( v4->FxVerboseOn )
            WPP_IFR_SF_qLqd(v4, 5u, 0x10u, 0xDu, WPP_FxRequest_cpp_Traceguids, 0LL, 1u, (const void *)v10, _a1);
          goto LABEL_61;
        }
        ContextSizeOverride = ContextTypeInfo->ContextSize;
      }
    }
    v16 = 416LL;
    id = 0;
    if ( !ContextSizeOverride )
      goto LABEL_14;
    goto LABEL_49;
  }
LABEL_61:
  if ( _a1 >= 0 )
  {
    v40 = *(_WORD *)(v10 + 10);
    v41 = v10 ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !v40 )
      v41 = 0LL;
    *v83 = (WDFREQUEST__ *)v41;
  }
  return (unsigned int)_a1;
}
