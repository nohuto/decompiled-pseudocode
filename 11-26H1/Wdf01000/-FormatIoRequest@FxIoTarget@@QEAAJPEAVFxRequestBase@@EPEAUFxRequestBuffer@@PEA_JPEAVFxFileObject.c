/*
 * XREFs of ?FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject@@@Z @ 0x14002BD00
 * Callers:
 *     FxIoTargetSendIo @ 0x14002B350 (FxIoTargetSendIo.c)
 *     FxIoTargetFormatIo @ 0x14002CCC8 (FxIoTargetFormatIo.c)
 *     imp_WdfIoTargetFormatRequestForRead @ 0x14002D0F0 (imp_WdfIoTargetFormatRequestForRead.c)
 * Callees:
 *     ?SetContext@FxRequestBase@@QEAAXPEAUFxRequestContext@@@Z @ 0x1400043F4 (-SetContext@FxRequestBase@@QEAAXPEAUFxRequestContext@@@Z.c)
 *     WPP_IFR_SF_qq @ 0x14000642C (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_qqd @ 0x14000EA80 (WPP_IFR_SF_qqd.c)
 *     WPP_IFR_SF_qd @ 0x140012548 (WPP_IFR_SF_qd.c)
 *     ?GetOrAllocateMdl@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAU_MDL@@1PEAEW4_LOCK_OPERATION@@EPEA_K@Z @ 0x14001339C (-GetOrAllocateMdl@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAU_MDL@@1PEAEW4_LOCK_OPERAT.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140025E70 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_D @ 0x140026890 (WPP_IFR_SF_D.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x14002C910 (-FxPoolFree@@YAXPEAX@Z.c)
 *     WPP_IFR_SF_ @ 0x14004B128 (WPP_IFR_SF_.c)
 *     ??0FxIoContext@@QEAA@XZ @ 0x14005DC98 (--0FxIoContext@@QEAA@XZ.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x14007BDC4 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?ClearVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x140083260 (-ClearVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400AD500 (memmove.c)
 */

__int64 __fastcall FxIoTarget::FormatIoRequest(
        FxIoTarget *this,
        FxRequestBase *Request,
        unsigned __int8 MajorCode,
        FxRequestBuffer *IoBuffer,
        _LARGE_INTEGER *DeviceOffset)
{
  _IRP *m_Irp; // rdi
  FxRequestContext *m_RequestContext; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  int m_TargetStackSize; // r8d
  unsigned int _a3; // esi
  unsigned __int16 v14; // r9
  unsigned __int16 m_ObjectSize; // ax
  const void *_a2; // rbp
  bool v17; // zf
  FxRequestBase *_a1; // rax
  unsigned __int64 v19; // rcx
  _IRP *Irp; // rax
  _IRP *v22; // rdi
  _LARGE_INTEGER v23; // r12
  FxRequestContext *v24; // rdi
  unsigned int v25; // esi
  _FX_DRIVER_GLOBALS *v26; // rcx
  void *v27; // rax
  FX_POOL **v28; // rax
  FxRequestContext *v29; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  _WDFMEMORY_OFFSET *Offsets; // rax
  unsigned __int64 BufferOffset; // r13
  int m_TargetIoType; // ecx
  _FX_DRIVER_GLOBALS *v34; // rcx
  void *v35; // rax
  FxRequestBufferType DataType; // ecx
  char *Memory; // rdx
  FxRequestContext_vtbl *v38; // rcx
  _IRP::<unnamed_type_AssociatedIrp> v39; // rdx
  char v40; // al
  _FX_DRIVER_GLOBALS *v41; // rax
  int v42; // ecx
  FxRequestBufferType v43; // ecx
  __int32 v44; // ecx
  _WDFMEMORY_OFFSET *v45; // rsi
  char *v46; // rax
  _WDFMEMORY_OFFSET *v47; // rax
  FxRequestContext *v48; // rcx
  _FX_DRIVER_GLOBALS *v49; // rax
  signed int v50; // eax
  char *MappedSystemVa; // rcx
  unsigned __int64 BufferLength; // rcx
  __int32 v53; // ecx
  _WDFMEMORY_OFFSET *v54; // rdi
  char *v55; // rax
  char *v56; // rcx
  _IRP::<unnamed_type_AssociatedIrp> v57; // rcx
  _FX_DRIVER_GLOBALS *v58; // rcx
  FxRequestBase *v59; // rax
  unsigned __int64 v60; // rdx
  unsigned __int16 v61; // ax
  const void *v62; // rbp
  __int32 v63; // ecx
  _MDL *v64; // rcx
  _WDFMEMORY_OFFSET *v65; // rax
  IFxMemory *v66; // rcx
  const void *v67; // rcx
  __int32 v68; // ecx
  _MDL *Mdl; // rcx
  _WDFMEMORY_OFFSET *v70; // rax
  IFxMemory *v71; // rcx
  __m128i v72; // [rsp+40h] [rbp-48h] BYREF
  void *retaddr; // [rsp+88h] [rbp+0h]
  char v74; // [rsp+90h] [rbp+8h]
  unsigned __int64 v75; // [rsp+98h] [rbp+10h]

  m_Irp = Request->m_Irp.m_Irp;
  m_RequestContext = Request->m_RequestContext;
  v74 = 0;
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
      {
        v23.QuadPart = 0LL;
        goto LABEL_19;
      }
      if ( Request->m_IrpAllocation != 1 )
      {
        _a3 = -1073741616;
        v14 = 13;
LABEL_9:
        m_ObjectSize = this->m_ObjectSize;
        _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        v17 = m_ObjectSize == 0;
        _a1 = Request;
        if ( v17 )
          _a2 = 0LL;
        v19 = (unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL;
        if ( !Request->m_ObjectSize )
          v19 = 0LL;
        if ( v19 )
          _a1 = (FxRequestBase *)v19;
        WPP_IFR_SF_qqd(Request->m_Globals, 2u, 0xEu, v14, WPP_FxRequestBase_cpp_Traceguids, _a1, _a2, _a3);
        return _a3;
      }
    }
    Irp = IoAllocateIrp(m_TargetStackSize, 0);
    if ( !Irp )
    {
      _a3 = -1073741670;
      v14 = 12;
      goto LABEL_9;
    }
    v22 = Request->m_Irp.m_Irp;
    v23.QuadPart = 0LL;
    Request->m_Irp.m_Irp = Irp;
    Request->m_Completed = 0;
    if ( v22 && v22 != Irp && Request->m_IrpAllocation == 1 )
    {
      Request->m_IrpAllocation = 1;
      v58 = Request->m_Globals;
      if ( v58->FxVerboseOn )
      {
        v59 = Request;
        v60 = (unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL;
        if ( !Request->m_ObjectSize )
          v60 = 0LL;
        if ( v60 )
          v59 = (FxRequestBase *)v60;
        WPP_IFR_SF_qq(v58, 5u, 0xDu, 0xEu, WPP_FxRequestBase_cpp_Traceguids, v22, v59);
      }
      IoFreeIrp(v22);
    }
    else
    {
      Request->m_IrpAllocation = 1;
    }
LABEL_19:
    v24 = Request->m_RequestContext;
    v25 = 0;
    if ( !v24 || v24->m_RequestType != 1 )
    {
      v26 = this->m_Globals;
      v72.m128i_i64[0] = 0LL;
      v72.m128i_i64[1] = 64LL;
      if ( v26->FxPoolTrackingOn )
        v27 = retaddr;
      else
        v27 = 0LL;
      v28 = FxPoolAllocator(v26, &v26->FxPoolFrameworks, &v72, 0xB0uLL, v26->Tag, v27);
      if ( !v28 || (FxIoContext::FxIoContext((FxIoContext *)v28), (v24 = v29) == 0LL) )
      {
        WPP_IFR_SF_(this->m_Globals, 2u, 0xEu, 0xAu, WPP_FxIoTargetKm_cpp_Traceguids);
        return 3221225626LL;
      }
      FxRequestBase::SetContext(Request, v29);
    }
    v24->StoreAndReferenceMemory(v24, IoBuffer);
    CurrentStackLocation = Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = 0LL;
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = 0LL;
    *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = 0LL;
    CurrentStackLocation[-1].FileObject = 0LL;
    if ( !Request->m_IrpAllocation )
    {
      Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Flags = Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->Flags;
      Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].FileObject = Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->FileObject;
    }
    if ( !this->m_InStack )
      Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].FileObject = this->m_TargetFileObject;
    Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].MajorFunction = MajorCode;
    *((_BYTE *)&v24[1].m_CompletionParams.Parameters.Usb + 35) = MajorCode;
    if ( IoBuffer->DataType != FxRequestBufferMdl )
    {
      if ( IoBuffer->DataType == FxRequestBufferMemory )
      {
        Offsets = IoBuffer->u.Memory.Offsets;
        if ( !Offsets )
        {
LABEL_33:
          LODWORD(BufferOffset) = IoBuffer->u.Memory.Memory->GetBufferSize(IoBuffer->u.Memory.Memory);
          goto LABEL_34;
        }
        BufferOffset = Offsets->BufferOffset;
        if ( !Offsets->BufferOffset )
        {
          if ( !Offsets->BufferLength )
            goto LABEL_33;
          BufferLength = Offsets->BufferLength;
          goto LABEL_90;
        }
        BufferLength = Offsets->BufferLength;
        if ( BufferLength )
        {
LABEL_90:
          LODWORD(BufferOffset) = BufferLength;
          goto LABEL_34;
        }
        LODWORD(BufferOffset) = IoBuffer->u.Memory.Memory->GetBufferSize(IoBuffer->u.Memory.Memory) - BufferOffset;
LABEL_34:
        *((_BYTE *)&v24[1].m_CompletionParams.Parameters.Usb + 34) = 1;
        *(_QWORD *)&v24[1].m_CompletionParams.Size = Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp;
        v24[1].m_CompletionParams.IoStatus.Pointer = Request->m_Irp.m_Irp->UserBuffer;
        v24[1].m_CompletionParams.Parameters.Others.Argument1.Value = (unsigned __int64)Request->m_Irp.m_Irp->MdlAddress;
        *((_DWORD *)&v24[1].m_CompletionParams.Parameters.Usb + 2) = Request->m_Irp.m_Irp->Flags;
        m_TargetIoType = this->m_TargetIoType;
        if ( m_TargetIoType == 2 )
        {
          Request->m_Irp.m_Irp->UserBuffer = 0LL;
          if ( !(_DWORD)BufferOffset )
          {
            Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp = 0LL;
            goto LABEL_52;
          }
          if ( v24[1].m_CompletionParams.Parameters.Write.Offset >= (unsigned int)BufferOffset
            && (v57.MasterIrp = (_IRP *)v24[1].__vftable) != 0LL )
          {
            Request->m_Irp.m_Irp->AssociatedIrp = v57;
          }
          else
          {
            v34 = this->m_Globals;
            v72.m128i_i64[0] = 0LL;
            v72.m128i_i64[1] = 64LL;
            if ( v34->FxPoolTrackingOn )
              v35 = retaddr;
            else
              v35 = 0LL;
            Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp = (_IRP *)FxPoolAllocator(
                                                                      v34,
                                                                      &v34->FxPoolFrameworks,
                                                                      &v72,
                                                                      (unsigned int)BufferOffset,
                                                                      v34->Tag,
                                                                      v35);
            if ( !Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp )
            {
              WPP_IFR_SF_(this->m_Globals, 2u, 0xEu, 0xBu, WPP_FxIoTargetKm_cpp_Traceguids);
              v25 = -1073741670;
              goto LABEL_74;
            }
            v74 = 1;
          }
          DataType = IoBuffer->DataType;
          if ( IoBuffer->DataType == FxRequestBufferBuffer )
          {
            Memory = (char *)IoBuffer->u.Memory.Memory;
            goto LABEL_47;
          }
          if ( DataType == FxRequestBufferUnspecified )
          {
            Memory = 0LL;
LABEL_47:
            v25 = 0;
            if ( MajorCode == 4 )
            {
              if ( Memory )
                memmove(Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp, Memory, (unsigned int)BufferOffset);
            }
            else
            {
              Request->m_Irp.m_Irp->UserBuffer = Memory;
            }
            if ( !v74 )
            {
              *((_BYTE *)&v24[1].m_CompletionParams.Parameters.Usb + 32) = MajorCode == 3;
              v40 = 0;
              goto LABEL_53;
            }
            v38 = v24[1].__vftable;
            v39.MasterIrp = (_IRP *)Request->m_Irp.m_Irp->AssociatedIrp;
            v24[1].m_CompletionParams.Parameters.Write.Offset = (unsigned int)BufferOffset;
            *((_BYTE *)&v24[1].m_CompletionParams.Parameters.Usb + 32) = MajorCode == 3;
            v24[1].__vftable = (FxRequestContext_vtbl *)v39.MasterIrp;
            if ( v38 )
              FxPoolFree(v38);
LABEL_52:
            v40 = 0;
LABEL_53:
            if ( (v25 & 0x80000000) == 0 )
            {
LABEL_54:
              Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.Read.Length = BufferOffset;
              if ( DeviceOffset )
                v23 = *DeviceOffset;
              Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.Read.ByteOffset = v23;
              v41 = Request->m_Globals;
              if ( v41->FxVerifierOn && v41->FxVerifierIO )
                FxRequestBase::SetVerifierFlags(Request, 128);
              return v25;
            }
            if ( v40 )
            {
              FxPoolFree(Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp);
              Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp = 0LL;
            }
LABEL_74:
            v48 = Request->m_RequestContext;
            if ( v48 )
            {
              if ( Request->m_Irp.m_Irp )
              {
                v48->ReleaseAndRestore(v48, Request);
                v49 = Request->m_Globals;
                if ( v49->FxVerifierOn )
                {
                  if ( v49->FxVerifierIO )
                    FxRequestBase::ClearVerifierFlags(Request, 128);
                }
              }
            }
            return v25;
          }
          v44 = DataType - 1;
          if ( !v44 )
          {
            v45 = IoBuffer->u.Memory.Offsets;
            v46 = (char *)IoBuffer->u.Memory.Memory->GetBuffer(IoBuffer->u.Memory.Memory);
            if ( v45 )
              Memory = &v46[v45->BufferOffset];
            else
              Memory = v46;
            goto LABEL_47;
          }
          v68 = v44 - 1;
          if ( v68 )
          {
            if ( v68 != 2 )
            {
              v25 = -1073741811;
LABEL_155:
              WPP_IFR_SF_D(this->m_Globals, 2u, 0xEu, 0xCu, WPP_FxIoTargetKm_cpp_Traceguids, v25);
              v40 = v74;
              goto LABEL_53;
            }
            Mdl = IoBuffer->u.RefMdl.Mdl;
            if ( (Mdl->MdlFlags & 5) != 0 )
              Memory = (char *)Mdl->MappedSystemVa;
            else
              Memory = (char *)MmMapLockedPagesSpecifyCache(
                                 Mdl,
                                 0,
                                 MmCached,
                                 0LL,
                                 0,
                                 ExDefaultMdlProtection | 0x40000010);
            if ( Memory )
            {
              v70 = IoBuffer->u.Memory.Offsets;
              if ( v70 )
                Memory += v70->BufferOffset;
              goto LABEL_47;
            }
          }
          else
          {
            v71 = IoBuffer->u.Memory.Memory;
            if ( (BYTE2(v71[1].__vftable) & 5) != 0 )
              Memory = (char *)v71[3].__vftable;
            else
              Memory = (char *)MmMapLockedPagesSpecifyCache(
                                 (PMDL)v71,
                                 0,
                                 MmCached,
                                 0LL,
                                 0,
                                 ExDefaultMdlProtection | 0x40000010);
            if ( Memory )
              goto LABEL_47;
          }
          v25 = -1073741670;
          goto LABEL_155;
        }
        if ( this->m_TargetIoType )
        {
          v42 = m_TargetIoType - 1;
          if ( !v42 )
          {
            v43 = IoBuffer->DataType;
            if ( IoBuffer->DataType == FxRequestBufferBuffer )
            {
              MappedSystemVa = (char *)IoBuffer->u.Memory.Memory;
            }
            else
            {
              if ( v43 == FxRequestBufferUnspecified )
              {
                v25 = 0;
                Request->m_Irp.m_Irp->UserBuffer = 0LL;
                goto LABEL_52;
              }
              v53 = v43 - 1;
              if ( !v53 )
              {
                v54 = IoBuffer->u.Memory.Offsets;
                v55 = (char *)IoBuffer->u.Memory.Memory->GetBuffer(IoBuffer->u.Memory.Memory);
                if ( v54 )
                {
                  v25 = 0;
                  v56 = &v55[v54->BufferOffset];
                }
                else
                {
                  v56 = v55;
                  v25 = 0;
                }
                Request->m_Irp.m_Irp->UserBuffer = v56;
                goto LABEL_52;
              }
              v63 = v53 - 1;
              if ( v63 )
              {
                if ( v63 != 2 )
                {
                  v25 = -1073741811;
LABEL_137:
                  WPP_IFR_SF_D(this->m_Globals, 2u, 0xEu, 0xEu, WPP_FxIoTargetKm_cpp_Traceguids, v25);
                  goto LABEL_52;
                }
                v64 = IoBuffer->u.RefMdl.Mdl;
                if ( (v64->MdlFlags & 5) != 0 )
                  MappedSystemVa = (char *)v64->MappedSystemVa;
                else
                  MappedSystemVa = (char *)MmMapLockedPagesSpecifyCache(
                                             v64,
                                             0,
                                             MmCached,
                                             0LL,
                                             0,
                                             ExDefaultMdlProtection | 0x40000010);
                if ( MappedSystemVa )
                {
                  v65 = IoBuffer->u.Memory.Offsets;
                  if ( v65 )
                    MappedSystemVa += v65->BufferOffset;
                  goto LABEL_86;
                }
LABEL_136:
                v25 = -1073741670;
                goto LABEL_137;
              }
              v66 = IoBuffer->u.Memory.Memory;
              if ( (BYTE2(v66[1].__vftable) & 5) != 0 )
                MappedSystemVa = (char *)v66[3].__vftable;
              else
                MappedSystemVa = (char *)MmMapLockedPagesSpecifyCache(
                                           (PMDL)v66,
                                           0,
                                           MmCached,
                                           0LL,
                                           0,
                                           ExDefaultMdlProtection | 0x40000010);
              if ( !MappedSystemVa )
                goto LABEL_136;
            }
LABEL_86:
            v25 = 0;
            Request->m_Irp.m_Irp->UserBuffer = MappedSystemVa;
            goto LABEL_52;
          }
          if ( v42 == 2 )
          {
            v50 = FxRequestBuffer::GetOrAllocateMdl(
                    IoBuffer,
                    this->m_Globals,
                    &Request->m_Irp.m_Irp->MdlAddress,
                    (_MDL **)&v24[1].m_CompletionParams.IoStatus.Information,
                    (unsigned __int8 *)&v24[1].m_CompletionParams.Parameters.Usb + 33,
                    (_LOCK_OPERATION)(MajorCode == 3),
                    v24[1].m_CompletionParams.IoStatus.Information != 0,
                    &v24[1].m_CompletionParams.Parameters.Others.Argument4.Value);
            v25 = v50;
            if ( v50 >= 0 )
              goto LABEL_54;
            WPP_IFR_SF_D(this->m_Globals, 2u, 0xEu, 0xDu, WPP_FxIoTargetKm_cpp_Traceguids, v50);
            goto LABEL_74;
          }
        }
        v25 = -1073741436;
        v67 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !this->m_ObjectSize )
          v67 = 0LL;
        WPP_IFR_SF_qd(this->m_Globals, 2u, 0xEu, 0xFu, WPP_FxIoTargetKm_cpp_Traceguids, v67, -1073741436);
        goto LABEL_74;
      }
      if ( IoBuffer->DataType != FxRequestBufferBuffer )
      {
        if ( IoBuffer->DataType == FxRequestBufferReferencedMdl )
        {
          v47 = IoBuffer->u.Memory.Offsets;
          if ( !v47 )
            goto LABEL_33;
          if ( v47->BufferOffset )
          {
            BufferOffset = v47->BufferLength;
            if ( !BufferOffset )
            {
              v75 = v47->BufferOffset;
              LODWORD(BufferOffset) = IoBuffer->u.Memory.Memory->GetBufferSize(IoBuffer->u.Memory.Memory) - v75;
            }
          }
          else
          {
            if ( !v47->BufferLength )
              goto LABEL_33;
            BufferOffset = v47->BufferLength;
          }
        }
        else
        {
          LODWORD(BufferOffset) = 0;
        }
        goto LABEL_34;
      }
    }
    LODWORD(BufferOffset) = IoBuffer->u.Mdl.Length;
    goto LABEL_34;
  }
  v61 = this->m_ObjectSize;
  v62 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !v61 )
    v62 = 0LL;
  WPP_IFR_SF_qd(Request->m_Globals, 2u, 0xEu, 0xBu, WPP_FxRequestBase_cpp_Traceguids, v62, -1073741436);
  return 3221225860LL;
}
