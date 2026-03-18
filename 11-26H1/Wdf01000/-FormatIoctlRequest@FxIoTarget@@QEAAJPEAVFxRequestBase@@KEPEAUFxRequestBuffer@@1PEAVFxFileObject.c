/*
 * XREFs of ?FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject@@@Z @ 0x140026F90
 * Callers:
 *     FxIoTargetSendIoctl @ 0x140027D60 (FxIoTargetSendIoctl.c)
 *     FxIoTargetFormatIoctl @ 0x14005D154 (FxIoTargetFormatIoctl.c)
 *     ?FormatCycleRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@@Z @ 0x14009F934 (-FormatCycleRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@@Z.c)
 *     ?Reset@FxUsbDevice@@QEAAJXZ @ 0x1400A0790 (-Reset@FxUsbDevice@@QEAAJXZ.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x14000642C (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_qqd @ 0x14000EA80 (WPP_IFR_SF_qqd.c)
 *     WPP_IFR_SF_qd @ 0x140012548 (WPP_IFR_SF_qd.c)
 *     ?GetOrAllocateMdl@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAU_MDL@@1PEAEW4_LOCK_OPERATION@@EPEA_K@Z @ 0x14001339C (-GetOrAllocateMdl@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAU_MDL@@1PEAEW4_LOCK_OPERAT.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140025E70 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_D @ 0x140026890 (WPP_IFR_SF_D.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x14002C910 (-FxPoolFree@@YAXPEAX@Z.c)
 *     WPP_IFR_SF_ @ 0x14004B128 (WPP_IFR_SF_.c)
 *     ?GetBuffer@FxRequestBuffer@@QEAAJPEAPEAX@Z @ 0x140059820 (-GetBuffer@FxRequestBuffer@@QEAAJPEAPEAX@Z.c)
 *     ?ContextReleaseAndRestore@FxRequestBase@@QEAAXXZ @ 0x14005A390 (-ContextReleaseAndRestore@FxRequestBase@@QEAAXXZ.c)
 *     ??0FxIoContext@@QEAA@XZ @ 0x14005DC98 (--0FxIoContext@@QEAA@XZ.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x14007BDC4 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?ClearVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x140083260 (-ClearVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400AD500 (memmove.c)
 */

__int64 __fastcall FxIoTarget::FormatIoctlRequest(
        FxIoTarget *this,
        FxRequestBase *Request,
        unsigned int Ioctl,
        unsigned __int8 Internal,
        FxRequestBuffer *InputBuffer,
        FxRequestBuffer *OutputBuffer,
        FxFileObject *Request_0)
{
  _IRP *m_Irp; // rdi
  _LOCK_OPERATION v8; // ebp
  FxRequestContext *m_RequestContext; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  int m_TargetStackSize; // r8d
  unsigned int _a3; // esi
  unsigned __int16 v16; // r9
  unsigned __int16 m_ObjectSize; // ax
  const void *_a2; // r13
  bool v19; // zf
  FxRequestBase *_a1; // rax
  unsigned __int64 v21; // rcx
  _IRP *Irp; // rax
  _IRP *v24; // rdi
  FxRequestContext *v25; // rdi
  unsigned int v26; // esi
  _FX_DRIVER_GLOBALS *v27; // rcx
  void *v28; // rax
  FX_POOL **v29; // rax
  FxRequestContext *v30; // rax
  FxRequestContext *v31; // rcx
  FxRequestBuffer *v32; // r15
  FxRequestBuffer *v33; // rdx
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  FxRequestBuffer *v35; // r14
  IFxMemory *Memory; // rax
  unsigned __int8 v37; // dl
  _WDFMEMORY_OFFSET *Offsets; // rax
  _WDFMEMORY_OFFSET *v39; // rax
  __int64 v40; // r12
  char v41; // r8
  unsigned int v42; // eax
  unsigned __int64 v43; // r9
  _FX_DRIVER_GLOBALS *v44; // rcx
  void *v45; // rax
  FxRequestBufferType DataType; // ecx
  __int32 v47; // ecx
  _WDFMEMORY_OFFSET *v48; // rsi
  __int64 v49; // rax
  char *MappedSystemVa; // rdx
  FxRequestBufferType v51; // ecx
  char *v52; // rdx
  FxRequestContext_vtbl *v53; // rcx
  _IRP::<unnamed_type_AssociatedIrp> v54; // rdx
  char v55; // al
  _FX_DRIVER_GLOBALS *v56; // rax
  __int64 v57; // r8
  FxRequestBufferType v58; // ecx
  _IRP::<unnamed_type_AssociatedIrp> v59; // rdx
  __int32 v60; // ecx
  _WDFMEMORY_OFFSET *v61; // rsi
  __int64 v62; // rax
  unsigned __int64 v63; // r12
  unsigned __int64 BufferLength; // rcx
  __int64 *v65; // rax
  _IRP::<unnamed_type_AssociatedIrp> v66; // rcx
  signed int Buffer; // eax
  unsigned __int16 v68; // r9
  __int32 v69; // ecx
  _WDFMEMORY_OFFSET *v70; // rsi
  __int64 v71; // rax
  unsigned __int64 BufferOffset; // r12
  unsigned __int64 v73; // rcx
  _FX_DRIVER_GLOBALS *v74; // rcx
  FxRequestBase *v75; // rax
  unsigned __int64 v76; // rdx
  unsigned __int16 v77; // ax
  const void *v78; // r13
  int v79; // eax
  __int32 v80; // ecx
  _MDL *v81; // rcx
  PVOID v82; // rax
  _WDFMEMORY_OFFSET *v83; // rcx
  IFxMemory *v84; // rcx
  PVOID v85; // rax
  __int32 v86; // ecx
  _MDL *Mdl; // rcx
  _WDFMEMORY_OFFSET *v88; // rax
  IFxMemory *v89; // rcx
  unsigned int v90; // eax
  unsigned __int16 v91; // r9
  __int32 v92; // ecx
  _MDL *v93; // rcx
  _WDFMEMORY_OFFSET *v94; // rcx
  IFxMemory *v95; // rcx
  __m128i v96; // [rsp+40h] [rbp-48h] BYREF
  void *retaddr; // [rsp+88h] [rbp+0h]
  char v98; // [rsp+90h] [rbp+8h]
  void *pBuffer; // [rsp+98h] [rbp+10h] BYREF
  unsigned int v100; // [rsp+A0h] [rbp+18h]

  v100 = Ioctl;
  m_Irp = Request->m_Irp.m_Irp;
  v8 = IoReadAccess;
  pBuffer = 0LL;
  m_RequestContext = Request->m_RequestContext;
  v98 = 0;
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
  m_TargetStackSize = this->m_TargetStackSize;
  if ( this->m_TargetStackSize )
  {
    if ( m_Irp )
    {
      if ( m_Irp->CurrentLocation - 1 >= m_TargetStackSize )
        goto LABEL_19;
      if ( Request->m_IrpAllocation != 1 )
      {
        _a3 = -1073741616;
        v16 = 13;
LABEL_9:
        m_ObjectSize = this->m_ObjectSize;
        _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        v19 = m_ObjectSize == 0;
        _a1 = Request;
        if ( v19 )
          _a2 = 0LL;
        v21 = (unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL;
        if ( !Request->m_ObjectSize )
          v21 = 0LL;
        if ( v21 )
          _a1 = (FxRequestBase *)v21;
        WPP_IFR_SF_qqd(Request->m_Globals, 2u, 0xEu, v16, WPP_FxRequestBase_cpp_Traceguids, _a1, _a2, _a3);
        return _a3;
      }
    }
    Irp = IoAllocateIrp(m_TargetStackSize, 0);
    if ( !Irp )
    {
      _a3 = -1073741670;
      v16 = 12;
      goto LABEL_9;
    }
    v24 = Request->m_Irp.m_Irp;
    Request->m_Irp.m_Irp = Irp;
    Request->m_Completed = 0;
    if ( v24 && v24 != Irp && Request->m_IrpAllocation == 1 )
    {
      Request->m_IrpAllocation = 1;
      v74 = Request->m_Globals;
      if ( v74->FxVerboseOn )
      {
        v75 = Request;
        v76 = (unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL;
        if ( !Request->m_ObjectSize )
          v76 = 0LL;
        if ( v76 )
          v75 = (FxRequestBase *)v76;
        WPP_IFR_SF_qq(v74, 5u, 0xDu, 0xEu, WPP_FxRequestBase_cpp_Traceguids, v24, v75);
      }
      IoFreeIrp(v24);
    }
    else
    {
      Request->m_IrpAllocation = 1;
    }
LABEL_19:
    v25 = Request->m_RequestContext;
    v26 = 0;
    if ( !v25 || v25->m_RequestType != 1 )
    {
      v27 = this->m_Globals;
      v96.m128i_i64[0] = 0LL;
      v96.m128i_i64[1] = 64LL;
      if ( v27->FxPoolTrackingOn )
        v28 = retaddr;
      else
        v28 = 0LL;
      v29 = FxPoolAllocator(v27, &v27->FxPoolFrameworks, &v96, 0xB0uLL, v27->Tag, v28);
      if ( !v29 || (FxIoContext::FxIoContext((FxIoContext *)v29), (v25 = v30) == 0LL) )
      {
        WPP_IFR_SF_(this->m_Globals, 2u, 0xEu, 0x10u, WPP_FxIoTargetKm_cpp_Traceguids);
        return 3221225626LL;
      }
      v31 = Request->m_RequestContext;
      if ( v31 != v30 )
      {
        if ( v31 )
          ((void (__fastcall *)(FxRequestContext *, __int64))v31->~FxRequestContext)(v31, 1LL);
        Request->m_RequestContext = v25;
      }
    }
    *((_BYTE *)&v25[1].m_CompletionParams.Parameters.Usb + 34) = 1;
    v32 = InputBuffer;
    v33 = InputBuffer;
    *(_QWORD *)&v25[1].m_CompletionParams.Size = Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp;
    v25[1].m_CompletionParams.IoStatus.Pointer = Request->m_Irp.m_Irp->UserBuffer;
    v25[1].m_CompletionParams.Parameters.Others.Argument1.Value = (unsigned __int64)Request->m_Irp.m_Irp->MdlAddress;
    *((_DWORD *)&v25[1].m_CompletionParams.Parameters.Usb + 2) = Request->m_Irp.m_Irp->Flags;
    CurrentStackLocation = Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = 0LL;
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = 0LL;
    *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = 0LL;
    CurrentStackLocation[-1].FileObject = 0LL;
    v25->StoreAndReferenceMemory(v25, v33);
    v35 = OutputBuffer;
    if ( OutputBuffer->DataType == FxRequestBufferMemory )
    {
      v57 = 130LL;
    }
    else
    {
      if ( OutputBuffer->DataType != FxRequestBufferReferencedMdl )
      {
        Memory = 0LL;
        goto LABEL_32;
      }
      v57 = 135LL;
    }
    OutputBuffer->u.Memory.Memory->AddRef(
      OutputBuffer->u.Memory.Memory,
      v25,
      v57,
      "minkernel\\wdf\\framework\\shared\\core\\fxrequestcontext.cpp");
    Memory = v35->u.Memory.Memory;
LABEL_32:
    v25[1].m_CompletionParams.Parameters.Ioctl.Output.Length = (unsigned __int64)Memory;
    v37 = (Internal != 0) + 14;
    Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].MajorFunction = v37;
    *((_BYTE *)&v25[1].m_CompletionParams.Parameters.Usb + 35) = v37;
    if ( !Request->m_IrpAllocation )
    {
      Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Flags = Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->Flags;
      Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].FileObject = Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->FileObject;
    }
    if ( !this->m_InStack )
      Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].FileObject = this->m_TargetFileObject;
    if ( v32->DataType != FxRequestBufferMdl )
    {
      if ( v32->DataType == FxRequestBufferMemory )
      {
        Offsets = v32->u.Memory.Offsets;
        if ( !Offsets )
        {
LABEL_39:
          LODWORD(Request_0) = v32->u.Memory.Memory->GetBufferSize(v32->u.Memory.Memory);
          goto LABEL_40;
        }
        if ( Offsets->BufferOffset )
        {
          BufferLength = Offsets->BufferLength;
          if ( !BufferLength )
          {
            BufferOffset = Offsets->BufferOffset;
            LODWORD(Request_0) = v32->u.Memory.Memory->GetBufferSize(v32->u.Memory.Memory) - BufferOffset;
            goto LABEL_40;
          }
          goto LABEL_90;
        }
        goto LABEL_88;
      }
      if ( v32->DataType != FxRequestBufferBuffer )
      {
        if ( v32->DataType != FxRequestBufferReferencedMdl )
        {
          LODWORD(Request_0) = 0;
          goto LABEL_40;
        }
        Offsets = v32->u.Memory.Offsets;
        if ( !Offsets )
          goto LABEL_39;
        if ( Offsets->BufferOffset )
        {
          BufferLength = Offsets->BufferLength;
          if ( !BufferLength )
          {
            v63 = Offsets->BufferOffset;
            Request_0 = (FxFileObject *)((unsigned int)v32->u.Memory.Memory->GetBufferSize(v32->u.Memory.Memory)
                                       - (unsigned int)v63);
LABEL_40:
            if ( v35->DataType != FxRequestBufferMdl )
            {
              if ( v35->DataType == FxRequestBufferMemory )
              {
                v39 = v35->u.Memory.Offsets;
                if ( !v39 )
                {
LABEL_43:
                  LODWORD(v40) = v35->u.Memory.Memory->GetBufferSize(v35->u.Memory.Memory);
                  goto LABEL_44;
                }
                v40 = v39->BufferOffset;
                if ( !v39->BufferOffset )
                {
                  if ( !v39->BufferLength )
                    goto LABEL_43;
                  v73 = v39->BufferLength;
                  goto LABEL_119;
                }
                v73 = v39->BufferLength;
                if ( v73 )
                {
LABEL_119:
                  LODWORD(v40) = v73;
                  goto LABEL_44;
                }
                LODWORD(v40) = v35->u.Memory.Memory->GetBufferSize(v35->u.Memory.Memory) - v40;
LABEL_44:
                v41 = v100;
                Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = v100;
                Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.Create.Options = (unsigned int)Request_0;
                Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.Read.Length = v40;
                if ( (v41 & 3) == 0 )
                {
                  v42 = (unsigned int)Request_0;
                  if ( (_DWORD)Request_0 )
                  {
                    if ( (unsigned int)Request_0 > (unsigned int)v40 )
                    {
LABEL_48:
                      v43 = v42;
                      LODWORD(pBuffer) = v42;
                      if ( v25[1].m_CompletionParams.Parameters.Write.Offset >= v42
                        && (v66.MasterIrp = (_IRP *)v25[1].__vftable) != 0LL )
                      {
                        Request->m_Irp.m_Irp->AssociatedIrp = v66;
                      }
                      else
                      {
                        v44 = this->m_Globals;
                        v96.m128i_i64[0] = 0LL;
                        v96.m128i_i64[1] = 64LL;
                        if ( v44->FxPoolTrackingOn )
                          v45 = retaddr;
                        else
                          v45 = 0LL;
                        Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp = (_IRP *)FxPoolAllocator(
                                                                                  v44,
                                                                                  &v44->FxPoolFrameworks,
                                                                                  &v96,
                                                                                  v43,
                                                                                  v44->Tag,
                                                                                  v45);
                        if ( !Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp )
                        {
                          WPP_IFR_SF_(this->m_Globals, 2u, 0xEu, 0x11u, WPP_FxIoTargetKm_cpp_Traceguids);
                          v26 = -1073741670;
                          goto LABEL_128;
                        }
                        v98 = 1;
                      }
                      DataType = v32->DataType;
                      if ( v32->DataType == FxRequestBufferBuffer )
                      {
                        MappedSystemVa = (char *)v32->u.Memory.Memory;
                        goto LABEL_59;
                      }
                      if ( DataType == FxRequestBufferUnspecified )
                        goto LABEL_61;
                      v47 = DataType - 1;
                      if ( !v47 )
                      {
                        v48 = v32->u.Memory.Offsets;
                        v49 = (__int64)v32->u.Memory.Memory->GetBuffer(v32->u.Memory.Memory);
                        if ( v48 )
                          MappedSystemVa = (char *)(v49 + v48->BufferOffset);
                        else
                          MappedSystemVa = (char *)v49;
                        goto LABEL_59;
                      }
                      v86 = v47 - 1;
                      if ( v86 )
                      {
                        if ( v86 != 2 )
                        {
                          v26 = -1073741811;
LABEL_186:
                          v90 = v26;
                          v91 = 18;
LABEL_189:
                          WPP_IFR_SF_D(this->m_Globals, 2u, 0xEu, v91, WPP_FxIoTargetKm_cpp_Traceguids, v90);
                          goto LABEL_123;
                        }
                        Mdl = v32->u.RefMdl.Mdl;
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
                        if ( MappedSystemVa )
                        {
                          v88 = v32->u.Memory.Offsets;
                          if ( v88 )
                            MappedSystemVa += v88->BufferOffset;
LABEL_59:
                          if ( !MappedSystemVa )
                            goto LABEL_61;
                          goto LABEL_60;
                        }
                      }
                      else
                      {
                        v89 = v32->u.Memory.Memory;
                        if ( (BYTE2(v89[1].__vftable) & 5) != 0 )
                          MappedSystemVa = (char *)v89[3].__vftable;
                        else
                          MappedSystemVa = (char *)MmMapLockedPagesSpecifyCache(
                                                     (PMDL)v89,
                                                     0,
                                                     MmCached,
                                                     0LL,
                                                     0,
                                                     ExDefaultMdlProtection | 0x40000010);
                        if ( MappedSystemVa )
                        {
LABEL_60:
                          memmove(
                            Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp,
                            MappedSystemVa,
                            (unsigned int)Request_0);
LABEL_61:
                          v51 = v35->DataType;
                          if ( v35->DataType == FxRequestBufferBuffer )
                          {
                            v52 = (char *)v35->u.Memory.Memory;
                            goto LABEL_65;
                          }
                          if ( v51 == FxRequestBufferUnspecified )
                          {
                            v52 = 0LL;
LABEL_65:
                            v26 = 0;
                            Request->m_Irp.m_Irp->UserBuffer = v52;
                            if ( v98 )
                            {
                              v53 = v25[1].__vftable;
                              v54.MasterIrp = (_IRP *)Request->m_Irp.m_Irp->AssociatedIrp;
                              v25[1].m_CompletionParams.Parameters.Write.Offset = (unsigned int)pBuffer;
                              *((_BYTE *)&v25[1].m_CompletionParams.Parameters.Usb + 32) = (_DWORD)v40 != 0;
                              v25[1].__vftable = (FxRequestContext_vtbl *)v54.MasterIrp;
                              if ( v53 )
                                FxPoolFree(v53);
                              goto LABEL_68;
                            }
                            *((_BYTE *)&v25[1].m_CompletionParams.Parameters.Usb + 32) = (_DWORD)v40 != 0;
LABEL_123:
                            v55 = v98;
                            goto LABEL_69;
                          }
                          v60 = v51 - 1;
                          if ( !v60 )
                          {
                            v61 = v35->u.Memory.Offsets;
                            v62 = (__int64)v35->u.Memory.Memory->GetBuffer(v35->u.Memory.Memory);
                            if ( v61 )
                              v52 = (char *)(v62 + v61->BufferOffset);
                            else
                              v52 = (char *)v62;
                            goto LABEL_65;
                          }
                          v92 = v60 - 1;
                          if ( v92 )
                          {
                            if ( v92 != 2 )
                            {
                              v26 = -1073741811;
                              goto LABEL_188;
                            }
                            v93 = v35->u.RefMdl.Mdl;
                            if ( (v93->MdlFlags & 5) != 0 )
                              v52 = (char *)v93->MappedSystemVa;
                            else
                              v52 = (char *)MmMapLockedPagesSpecifyCache(
                                              v93,
                                              0,
                                              MmCached,
                                              0LL,
                                              0,
                                              ExDefaultMdlProtection | 0x40000010);
                            if ( v52 )
                            {
                              v94 = v35->u.Memory.Offsets;
                              if ( v94 )
                                v52 += v94->BufferOffset;
                              goto LABEL_65;
                            }
                          }
                          else
                          {
                            v95 = v35->u.Memory.Memory;
                            if ( (BYTE2(v95[1].__vftable) & 5) != 0 )
                              v52 = (char *)v95[3].__vftable;
                            else
                              v52 = (char *)MmMapLockedPagesSpecifyCache(
                                              (PMDL)v95,
                                              0,
                                              MmCached,
                                              0LL,
                                              0,
                                              ExDefaultMdlProtection | 0x40000010);
                            if ( v52 )
                              goto LABEL_65;
                          }
                          v26 = -1073741670;
LABEL_188:
                          v90 = v26;
                          v91 = 19;
                          goto LABEL_189;
                        }
                      }
                      v26 = -1073741670;
                      goto LABEL_186;
                    }
LABEL_47:
                    v42 = v40;
                    goto LABEL_48;
                  }
                  if ( (_DWORD)v40 )
                    goto LABEL_47;
                  Request->m_Irp.m_Irp->UserBuffer = 0LL;
                  Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp = 0LL;
LABEL_68:
                  v55 = 0;
LABEL_69:
                  if ( (v26 & 0x80000000) == 0 )
                  {
LABEL_70:
                    v56 = Request->m_Globals;
                    if ( v56->FxVerifierOn && v56->FxVerifierIO )
                      FxRequestBase::SetVerifierFlags(Request, 128);
                    return v26;
                  }
                  if ( v55 )
                  {
                    FxPoolFree(Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp);
                    Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp = 0LL;
                  }
LABEL_128:
                  FxRequestBase::ContextReleaseAndRestore(Request);
                  return v26;
                }
                if ( (v41 & 3) != 1 && (v41 & 3) != 2 )
                {
                  if ( (v41 & 3) != 3 )
                    goto LABEL_68;
                  Buffer = FxRequestBuffer::GetBuffer(v35, &pBuffer);
                  v26 = Buffer;
                  if ( Buffer < 0 )
                  {
                    v68 = 22;
                  }
                  else
                  {
                    Request->m_Irp.m_Irp->UserBuffer = pBuffer;
                    Buffer = FxRequestBuffer::GetBuffer(v32, &pBuffer);
                    v26 = Buffer;
                    if ( Buffer >= 0 )
                    {
                      Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = (_NAMED_PIPE_CREATE_PARAMETERS *)pBuffer;
                      goto LABEL_70;
                    }
                    v68 = 23;
                  }
LABEL_127:
                  WPP_IFR_SF_D(this->m_Globals, 2u, 0xEu, v68, WPP_FxIoTargetKm_cpp_Traceguids, Buffer);
                  goto LABEL_128;
                }
                v58 = v32->DataType;
                if ( v32->DataType == FxRequestBufferBuffer )
                {
                  v59.MasterIrp = (_IRP *)v32->u.Memory.Memory;
                  goto LABEL_101;
                }
                if ( v58 == FxRequestBufferUnspecified )
                {
                  v59.MasterIrp = 0LL;
LABEL_101:
                  Request->m_Irp.m_Irp->AssociatedIrp = v59;
                  LOBYTE(v8) = (v41 & 3) != 1;
                  Buffer = FxRequestBuffer::GetOrAllocateMdl(
                             v35,
                             this->m_Globals,
                             &Request->m_Irp.m_Irp->MdlAddress,
                             (_MDL **)&v25[1].m_CompletionParams.IoStatus.Information,
                             (unsigned __int8 *)&v25[1].m_CompletionParams.Parameters.Usb + 33,
                             v8,
                             v25[1].m_CompletionParams.IoStatus.Information != 0,
                             &v25[1].m_CompletionParams.Parameters.Others.Argument4.Value);
                  v26 = Buffer;
                  if ( Buffer >= 0 )
                    goto LABEL_70;
                  v68 = 21;
                  goto LABEL_127;
                }
                v69 = v58 - 1;
                if ( !v69 )
                {
                  v70 = v32->u.Memory.Offsets;
                  v71 = (__int64)v32->u.Memory.Memory->GetBuffer(v32->u.Memory.Memory);
                  v41 = v100;
                  if ( v70 )
                    v59.MasterIrp = (_IRP *)(v71 + v70->BufferOffset);
                  else
                    v59.MasterIrp = (_IRP *)v71;
                  goto LABEL_101;
                }
                v80 = v69 - 1;
                if ( v80 )
                {
                  if ( v80 != 2 )
                  {
                    v26 = -1073741811;
LABEL_170:
                    WPP_IFR_SF_D(this->m_Globals, 2u, 0xEu, 0x14u, WPP_FxIoTargetKm_cpp_Traceguids, v26);
                    goto LABEL_68;
                  }
                  v81 = v32->u.RefMdl.Mdl;
                  if ( (v81->MdlFlags & 5) != 0 )
                  {
                    v59.MasterIrp = (_IRP *)v81->MappedSystemVa;
                  }
                  else
                  {
                    v82 = MmMapLockedPagesSpecifyCache(v81, 0, MmCached, 0LL, 0, ExDefaultMdlProtection | 0x40000010);
                    v41 = v100;
                    v59.MasterIrp = (_IRP *)v82;
                  }
                  if ( v59.MasterIrp )
                  {
                    v83 = v32->u.Memory.Offsets;
                    if ( v83 )
                      v59.MasterIrp = (_IRP *)((char *)v59.MasterIrp + v83->BufferOffset);
                    goto LABEL_101;
                  }
                }
                else
                {
                  v84 = v32->u.Memory.Memory;
                  if ( (BYTE2(v84[1].__vftable) & 5) != 0 )
                  {
                    v59.MasterIrp = (_IRP *)v84[3].__vftable;
                  }
                  else
                  {
                    v85 = MmMapLockedPagesSpecifyCache(
                            (PMDL)v84,
                            0,
                            MmCached,
                            0LL,
                            0,
                            ExDefaultMdlProtection | 0x40000010);
                    v41 = v100;
                    v59.MasterIrp = (_IRP *)v85;
                  }
                  if ( v59.MasterIrp )
                    goto LABEL_101;
                }
                v26 = -1073741670;
                goto LABEL_170;
              }
              if ( v35->DataType != FxRequestBufferBuffer )
              {
                if ( v35->DataType == FxRequestBufferReferencedMdl )
                {
                  v65 = (__int64 *)v35->u.Memory.Offsets;
                  if ( !v65 )
                    goto LABEL_43;
                  v96.m128i_i64[0] = *v65;
                  if ( v96.m128i_i64[0] )
                  {
                    v40 = v65[1];
                    if ( !v40 )
                    {
                      v79 = v35->u.Memory.Memory->GetBufferSize(v35->u.Memory.Memory);
                      LODWORD(v40) = v79 - v96.m128i_i32[0];
                    }
                  }
                  else
                  {
                    if ( !v65[1] )
                      goto LABEL_43;
                    v40 = v65[1];
                  }
                }
                else
                {
                  LODWORD(v40) = 0;
                }
                goto LABEL_44;
              }
            }
            LODWORD(v40) = v35->u.Mdl.Length;
            goto LABEL_44;
          }
LABEL_90:
          LODWORD(Request_0) = BufferLength;
          goto LABEL_40;
        }
LABEL_88:
        if ( !Offsets->BufferLength )
          goto LABEL_39;
        BufferLength = Offsets->BufferLength;
        goto LABEL_90;
      }
    }
    Request_0 = (FxFileObject *)v32->u.Mdl.Length;
    goto LABEL_40;
  }
  v77 = this->m_ObjectSize;
  v78 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !v77 )
    v78 = 0LL;
  WPP_IFR_SF_qd(Request->m_Globals, 2u, 0xEu, 0xBu, WPP_FxRequestBase_cpp_Traceguids, v78, -1073741436);
  return 3221225860LL;
}
