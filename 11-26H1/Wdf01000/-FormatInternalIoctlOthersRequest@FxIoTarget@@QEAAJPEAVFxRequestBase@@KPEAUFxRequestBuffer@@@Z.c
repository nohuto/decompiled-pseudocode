/*
 * XREFs of ?FormatInternalIoctlOthersRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KPEAUFxRequestBuffer@@@Z @ 0x140016BA4
 * Callers:
 *     ?GetPortStatus@FxUsbDevice@@IEAAJPEAK@Z @ 0x140015D90 (-GetPortStatus@FxUsbDevice@@IEAAJPEAK@Z.c)
 *     imp_WdfIoTargetFormatRequestForInternalIoctlOthers @ 0x140015F10 (imp_WdfIoTargetFormatRequestForInternalIoctlOthers.c)
 *     imp_WdfIoTargetSendInternalIoctlOthersSynchronously @ 0x140016380 (imp_WdfIoTargetSendInternalIoctlOthersSynchronously.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x14000642C (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_qqd @ 0x14000EA80 (WPP_IFR_SF_qqd.c)
 *     WPP_IFR_SF_qd @ 0x140012548 (WPP_IFR_SF_qd.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140025E70 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_ @ 0x14004B128 (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_dd @ 0x140055174 (WPP_IFR_SF_dd.c)
 *     ?ContextReleaseAndRestore@FxRequestBase@@QEAAXXZ @ 0x14005A390 (-ContextReleaseAndRestore@FxRequestBase@@QEAAXXZ.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x14007BDC4 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?ClearVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x140083260 (-ClearVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 *     memset @ 0x1400ACFC0 (memset.c)
 */

__int64 __fastcall FxIoTarget::FormatInternalIoctlOthersRequest(
        FxIoTarget *this,
        FxRequestBase *Request,
        unsigned int Ioctl,
        FxRequestBuffer *Buffers)
{
  _IRP *m_Irp; // rbx
  FxRequestContext *m_RequestContext; // rcx
  unsigned int v7; // r13d
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  unsigned int _a3; // ebp
  const void *v13; // rsi
  _IRP *Irp; // rcx
  _IRP *v15; // rax
  _IRP *v16; // rbx
  FxRequestContext *v17; // r14
  int _a2; // ebx
  _FX_DRIVER_GLOBALS *v19; // rcx
  void *v20; // rax
  FxRequestContext *v21; // rax
  FxRequestContext *v22; // rcx
  IFxMemory *Memory; // rax
  IFxMemory *v24; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  _IO_STACK_LOCATION *v26; // rcx
  __int64 v27; // r14
  FxRequestBufferType DataType; // ecx
  void **v29; // r12
  __int32 v30; // ecx
  __int32 v31; // ecx
  __int32 v32; // ecx
  IFxMemory *v33; // rax
  int _a1; // eax
  _WDFMEMORY_OFFSET *Offsets; // rbx
  __int64 (*GetBuffer)(void); // rax
  _FX_DRIVER_GLOBALS *v37; // rax
  __int64 v39; // r8
  __int64 v40; // r8
  unsigned __int64 BufferOffset; // rbx
  const void *v42; // rsi
  FxRequestBase *v43; // rax
  unsigned __int16 v44; // r9
  _FX_DRIVER_GLOBALS *v45; // rcx
  FxRequestBase *v46; // rax
  _MDL *Mdl; // rcx
  char *MappedSystemVa; // rax
  _WDFMEMORY_OFFSET *v49; // rcx
  IFxMemory *v50; // rcx
  PVOID v51; // rax
  void **bufs[3]; // [rsp+40h] [rbp-58h] BYREF
  void *retaddr; // [rsp+98h] [rbp+0h]

  m_Irp = Request->m_Irp.m_Irp;
  m_RequestContext = Request->m_RequestContext;
  v7 = 0;
  if ( m_RequestContext )
  {
    if ( m_Irp )
    {
      ((void (__fastcall *)(FxRequestContext *))m_RequestContext->ReleaseAndRestore)(m_RequestContext);
      m_Globals = Request->m_Globals;
      if ( m_Globals->FxVerifierOn )
      {
        if ( m_Globals->FxVerifierIO )
          FxRequestBase::ClearVerifierFlags(Request, 128);
      }
    }
  }
  if ( !this->m_TargetStackSize )
  {
    _a3 = -1073741436;
    if ( this->m_ObjectSize )
      v42 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v42 = 0LL;
    WPP_IFR_SF_qd(Request->m_Globals, 2u, 0xEu, 0xBu, WPP_FxRequestBase_cpp_Traceguids, v42, -1073741436);
    return _a3;
  }
  if ( m_Irp )
  {
    if ( m_Irp->CurrentLocation - 1 >= this->m_TargetStackSize )
      goto LABEL_13;
    if ( Request->m_IrpAllocation != 1 )
    {
      _a3 = -1073741616;
      if ( this->m_ObjectSize )
        v13 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v13 = 0LL;
      if ( !Request->m_ObjectSize || (v43 = (FxRequestBase *)((unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL)) == 0LL )
        v43 = Request;
      v44 = 13;
LABEL_65:
      WPP_IFR_SF_qqd(Request->m_Globals, 2u, 0xEu, v44, WPP_FxRequestBase_cpp_Traceguids, v43, v13, _a3);
      return _a3;
    }
  }
  Irp = IoAllocateIrp(this->m_TargetStackSize, 0);
  if ( !Irp )
  {
    _a3 = -1073741670;
    if ( this->m_ObjectSize )
      v13 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v13 = 0LL;
    if ( !Request->m_ObjectSize || (v43 = (FxRequestBase *)((unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL)) == 0LL )
      v43 = Request;
    v44 = 12;
    goto LABEL_65;
  }
  v15 = Request->m_Irp.m_Irp;
  v16 = 0LL;
  Request->m_Irp.m_Irp = Irp;
  Request->m_Completed = 0;
  if ( v15 && v15 != Irp && Request->m_IrpAllocation == 1 )
    v16 = v15;
  Request->m_IrpAllocation = 1;
  if ( v16 )
  {
    v45 = Request->m_Globals;
    if ( v45->FxVerboseOn )
    {
      if ( !Request->m_ObjectSize || (v46 = (FxRequestBase *)((unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL)) == 0LL )
        v46 = Request;
      WPP_IFR_SF_qq(v45, 5u, 0xDu, 0xEu, WPP_FxRequestBase_cpp_Traceguids, v16, v46);
    }
    IoFreeIrp(v16);
  }
LABEL_13:
  v17 = Request->m_RequestContext;
  _a2 = 0;
  if ( !v17 || v17->m_RequestType != 2 )
  {
    v19 = this->m_Globals;
    v20 = retaddr;
    bufs[0] = 0LL;
    bufs[1] = (void **)64;
    if ( !v19->FxPoolTrackingOn )
      v20 = 0LL;
    v21 = (FxRequestContext *)FxPoolAllocator(
                                v19,
                                &v19->FxPoolFrameworks,
                                (FxPoolTypeOrPoolFlags *)bufs,
                                0x70uLL,
                                v19->Tag,
                                v20);
    v17 = v21;
    if ( !v21 )
    {
      WPP_IFR_SF_(this->m_Globals, 2u, 0xEu, 0x35u, WPP_FxIoTarget_cpp_Traceguids);
      return 3221225626LL;
    }
    v21->m_RequestMemory = 0LL;
    v21->m_RequestType = 2;
    memset(&v21->m_CompletionParams, 0, sizeof(v21->m_CompletionParams));
    v17->m_CompletionParams.Size = 72;
    v17->__vftable = (FxRequestContext_vtbl *)FxInternalIoctlOthersContext::`vftable';
    v17->m_CompletionParams.Type = WdfRequestTypeNoFormat;
    *(_OWORD *)&v17[1].__vftable = 0LL;
    v22 = Request->m_RequestContext;
    if ( v22 != v17 )
    {
      if ( v22 )
        ((void (__fastcall *)(FxRequestContext *, __int64))v22->~FxRequestContext)(v22, 1LL);
      Request->m_RequestContext = v17;
    }
  }
  v17->StoreAndReferenceMemory(v17, Buffers);
  if ( Buffers[1].DataType == FxRequestBufferMemory )
  {
    v39 = 130LL;
  }
  else
  {
    if ( Buffers[1].DataType != FxRequestBufferReferencedMdl )
    {
      Memory = 0LL;
      goto LABEL_25;
    }
    v39 = 135LL;
  }
  Buffers[1].u.Memory.Memory->AddRef(
    Buffers[1].u.Memory.Memory,
    v17,
    v39,
    "minkernel\\wdf\\framework\\shared\\core\\fxrequestcontext.cpp");
  Memory = Buffers[1].u.Memory.Memory;
LABEL_25:
  v17[1].__vftable = (FxRequestContext_vtbl *)Memory;
  if ( Buffers[2].DataType == FxRequestBufferMemory )
  {
    v40 = 130LL;
LABEL_51:
    Buffers[2].u.Memory.Memory->AddRef(
      Buffers[2].u.Memory.Memory,
      v17,
      v40,
      "minkernel\\wdf\\framework\\shared\\core\\fxrequestcontext.cpp");
    v24 = Buffers[2].u.Memory.Memory;
    goto LABEL_28;
  }
  if ( Buffers[2].DataType == FxRequestBufferReferencedMdl )
  {
    v40 = 135LL;
    goto LABEL_51;
  }
  v24 = 0LL;
LABEL_28:
  *(_QWORD *)&v17[1].m_CompletionParams.Size = v24;
  CurrentStackLocation = Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = 0LL;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = 0LL;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = 0LL;
  CurrentStackLocation[-1].FileObject = 0LL;
  Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].MajorFunction = 15;
  Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = Ioctl;
  if ( !Request->m_IrpAllocation )
  {
    Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Flags = Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->Flags;
    Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].FileObject = Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->FileObject;
  }
  if ( !this->m_InStack )
    Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].FileObject = this->m_TargetFileObject;
  v26 = Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation;
  bufs[0] = &v26[-1].Parameters.Others.Argument1;
  bufs[1] = &v26[-1].Parameters.QueryEa.EaList;
  bufs[2] = &v26[-1].Parameters.SetFile.DeleteHandle;
  while ( v7 < 3 )
  {
    v27 = v7;
    DataType = Buffers[v27].DataType;
    v29 = bufs[v7];
    if ( DataType == FxRequestBufferUnspecified )
    {
      *v29 = 0LL;
      goto LABEL_40;
    }
    v30 = DataType - 1;
    if ( !v30 )
    {
      Offsets = Buffers[v27].u.Memory.Offsets;
      GetBuffer = (__int64 (*)(void))Buffers[v27].u.Memory.Memory->GetBuffer;
      if ( Offsets )
      {
        BufferOffset = Offsets->BufferOffset;
        v33 = (IFxMemory *)(BufferOffset + GetBuffer());
      }
      else
      {
        v33 = (IFxMemory *)GetBuffer();
      }
      goto LABEL_39;
    }
    v31 = v30 - 1;
    if ( !v31 )
    {
      v50 = Buffers[v27].u.Memory.Memory;
      if ( (BYTE2(v50[1].__vftable) & 5) != 0 )
        v51 = v50[3].__vftable;
      else
        v51 = MmMapLockedPagesSpecifyCache((PMDL)v50, 0, MmCached, 0LL, 0, ExDefaultMdlProtection | 0x40000010);
      *v29 = v51;
      _a2 = v51 == 0LL ? 0xC000009A : 0;
      goto LABEL_41;
    }
    v32 = v31 - 1;
    if ( !v32 )
    {
      v33 = Buffers[v27].u.Memory.Memory;
LABEL_39:
      *v29 = v33;
      goto LABEL_40;
    }
    if ( v32 != 1 )
    {
      _a2 = -1073741811;
      goto LABEL_41;
    }
    Mdl = Buffers[v27].u.RefMdl.Mdl;
    if ( (Mdl->MdlFlags & 5) != 0 )
      MappedSystemVa = (char *)Mdl->MappedSystemVa;
    else
      MappedSystemVa = (char *)MmMapLockedPagesSpecifyCache(
                                 Mdl,
                                 0,
                                 MmCached,
                                 0LL,
                                 0,
                                 ExDefaultMdlProtection | 0x40000010);
    *v29 = MappedSystemVa;
    if ( !MappedSystemVa )
    {
      _a2 = -1073741670;
      goto LABEL_41;
    }
    v49 = Buffers[v27].u.Memory.Offsets;
    if ( v49 )
    {
      v33 = (IFxMemory *)&MappedSystemVa[v49->BufferOffset];
      goto LABEL_39;
    }
LABEL_40:
    _a2 = 0;
LABEL_41:
    _a1 = ++v7;
    if ( _a2 < 0 )
    {
      WPP_IFR_SF_dd(this->m_Globals, 2u, 0xEu, 0x36u, WPP_FxIoTarget_cpp_Traceguids, _a1, _a2);
      FxRequestBase::ContextReleaseAndRestore(Request);
      return (unsigned int)_a2;
    }
  }
  v37 = Request->m_Globals;
  if ( v37->FxVerifierOn && v37->FxVerifierIO )
    FxRequestBase::SetVerifierFlags(Request, 128);
  return (unsigned int)_a2;
}
