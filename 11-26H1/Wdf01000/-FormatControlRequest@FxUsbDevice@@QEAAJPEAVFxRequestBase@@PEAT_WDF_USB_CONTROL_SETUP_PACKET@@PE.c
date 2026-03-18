/*
 * XREFs of ?FormatControlRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAT_WDF_USB_CONTROL_SETUP_PACKET@@PEAUFxRequestBuffer@@@Z @ 0x140002450
 * Callers:
 *     imp_WdfUsbTargetDeviceFormatRequestForControlTransfer @ 0x140002280 (imp_WdfUsbTargetDeviceFormatRequestForControlTransfer.c)
 * Callees:
 *     USBD_UrbAllocate @ 0x1400031CC (USBD_UrbAllocate.c)
 *     ?GetFxUrbTypeForRequest@FxUsbDevice@@QEAA?AW4_FX_URB_TYPE@@PEAVFxRequestBase@@@Z @ 0x14000341C (-GetFxUrbTypeForRequest@FxUsbDevice@@QEAA-AW4_FX_URB_TYPE@@PEAVFxRequestBase@@@Z.c)
 *     ??0FxUsbDeviceControlContext@@QEAA@W4_FX_URB_TYPE@@@Z @ 0x140003644 (--0FxUsbDeviceControlContext@@QEAA@W4_FX_URB_TYPE@@@Z.c)
 *     ?SetContext@FxRequestBase@@QEAAXPEAUFxRequestContext@@@Z @ 0x1400043F4 (-SetContext@FxRequestBase@@QEAAXPEAUFxRequestContext@@@Z.c)
 *     WPP_IFR_SF_qq @ 0x14000642C (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_qqd @ 0x14000EA80 (WPP_IFR_SF_qqd.c)
 *     WPP_IFR_SF_qd @ 0x140012548 (WPP_IFR_SF_qd.c)
 *     ?GetOrAllocateMdl@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAU_MDL@@1PEAEW4_LOCK_OPERATION@@EPEA_K@Z @ 0x14001339C (-GetOrAllocateMdl@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAU_MDL@@1PEAEW4_LOCK_OPERAT.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140025E70 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_i @ 0x140026104 (WPP_IFR_SF_i.c)
 *     WPP_IFR_SF_D @ 0x140026890 (WPP_IFR_SF_D.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x14007BDC4 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?ClearVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x140083260 (-ClearVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

int __fastcall FxUsbDevice::FormatControlRequest(
        FxUsbDevice *this,
        FxRequestBase *Request,
        IFxMemory_vtbl **SetupPacket,
        FxRequestBuffer *RequestBuffer)
{
  FxRequestBufferType DataType; // edx
  _WDFMEMORY_OFFSET *Offsets; // rax
  unsigned __int64 BufferLength; // rax
  FxRequestContext *m_RequestContext; // rcx
  _IRP *m_Irp; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  int m_TargetStackSize; // r8d
  unsigned int Length; // r15d
  unsigned int _a3; // ebx
  unsigned __int16 v17; // r9
  const void *v18; // rdi
  const void *_a2; // rdx
  FxRequestBase *_a1; // rax
  unsigned __int64 v21; // rcx
  int result; // eax
  _IRP *Irp; // rax
  _IRP *v24; // rbx
  FxRequestContext *v25; // rbx
  _FX_URB_TYPE FxUrbTypeForRequest; // al
  _FX_DRIVER_GLOBALS *v27; // rcx
  _FX_URB_TYPE v28; // di
  void *v29; // rax
  FxUsbDeviceControlContext *v30; // rax
  __int64 v31; // rax
  _FX_DRIVER_GLOBALS *v32; // rdx
  IFxMemory *m_RequestMemory; // rax
  IFxMemory *Memory; // rax
  _MDL **p_pMdl; // r13
  IFxMemory *v36; // rdi
  _MDL **v37; // rdx
  FxRequestBufferType v38; // ecx
  IFxMemory *v39; // rcx
  IFxMemory_vtbl *v40; // rcx
  _FILE_OBJECT *v41; // rdx
  USBD_HANDLE__ *v42; // r8
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  _IO_STACK_LOCATION *v44; // rcx
  _FX_DRIVER_GLOBALS *v45; // rax
  __int64 v46; // r8
  __int32 v47; // ecx
  _MDL *v48; // rax
  IFxMemory *v49; // rcx
  unsigned int v50; // edx
  _WDFMEMORY_OFFSET *v51; // rax
  _MDL *v52; // rcx
  unsigned int v53; // eax
  unsigned __int64 BufferOffset; // rbx
  __int32 v55; // ecx
  _WDFMEMORY_OFFSET *v56; // rax
  unsigned __int64 v57; // rax
  unsigned __int64 v58; // rcx
  unsigned __int64 v59; // r8
  _MDL *v60; // rcx
  USBD_HANDLE__ *m_USBDHandle; // rdi
  signed int v62; // r13d
  KIRQL v63; // al
  _FX_DRIVER_GLOBALS *v64; // rcx
  FxRequestBase *v65; // rax
  unsigned __int64 v66; // rdx
  const void *v67; // rax
  FxPoolTypeOrPoolFlags v68; // [rsp+40h] [rbp-38h] BYREF
  void *retaddr; // [rsp+78h] [rbp+0h]
  _MDL *pMdl; // [rsp+98h] [rbp+20h] BYREF

  DataType = RequestBuffer->DataType;
  if ( RequestBuffer->DataType == FxRequestBufferMdl )
    goto LABEL_57;
  if ( --DataType )
  {
    DataType -= 2;
    if ( DataType )
    {
      if ( DataType != FxRequestBufferMemory )
        goto LABEL_6;
      goto LABEL_3;
    }
LABEL_57:
    LODWORD(BufferLength) = RequestBuffer->u.Mdl.Length;
    goto LABEL_5;
  }
LABEL_3:
  Offsets = RequestBuffer->u.Memory.Offsets;
  if ( !Offsets )
  {
LABEL_4:
    LODWORD(BufferLength) = RequestBuffer->u.Memory.Memory->GetBufferSize(RequestBuffer->u.Memory.Memory);
    goto LABEL_5;
  }
  BufferOffset = Offsets->BufferOffset;
  if ( Offsets->BufferOffset )
  {
    BufferLength = Offsets->BufferLength;
    if ( !BufferLength )
      LODWORD(BufferLength) = RequestBuffer->u.Memory.Memory->GetBufferSize(RequestBuffer->u.Memory.Memory)
                            - BufferOffset;
  }
  else
  {
    if ( !Offsets->BufferLength )
      goto LABEL_4;
    BufferLength = Offsets->BufferLength;
  }
LABEL_5:
  if ( (unsigned int)BufferLength > 0xFFFF )
  {
    WPP_IFR_SF_i(this->m_Globals, DataType, 0xEu, 0x16u, WPP_FxusbDeviceKm_cpp_Traceguids, (unsigned int)BufferLength);
    return -1073741811;
  }
LABEL_6:
  m_RequestContext = Request->m_RequestContext;
  m_Irp = Request->m_Irp.m_Irp;
  if ( m_RequestContext )
  {
    if ( m_Irp )
    {
      m_RequestContext->ReleaseAndRestore(m_RequestContext, Request);
      m_Globals = Request->m_Globals;
      if ( m_Globals->FxVerifierOn )
      {
        if ( m_Globals->FxVerifierIO )
          FxRequestBase::ClearVerifierFlags(Request, 128);
      }
    }
  }
  m_TargetStackSize = this->m_TargetStackSize;
  if ( !this->m_TargetStackSize )
  {
    _a3 = -1073741436;
    v18 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    v67 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v67 = 0LL;
    WPP_IFR_SF_qd(Request->m_Globals, 2u, 0xEu, 0xBu, WPP_FxRequestBase_cpp_Traceguids, v67, -1073741436);
    goto LABEL_21;
  }
  Length = 0;
  if ( m_Irp )
  {
    if ( m_Irp->CurrentLocation - 1 >= m_TargetStackSize )
      goto LABEL_27;
    if ( Request->m_IrpAllocation != 1 )
    {
      _a3 = -1073741616;
      v17 = 13;
LABEL_14:
      v18 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      _a1 = Request;
      if ( !this->m_ObjectSize )
        _a2 = 0LL;
      v21 = (unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL;
      if ( !Request->m_ObjectSize )
        v21 = 0LL;
      if ( v21 )
        _a1 = (FxRequestBase *)v21;
      WPP_IFR_SF_qqd(Request->m_Globals, 2u, 0xEu, v17, WPP_FxRequestBase_cpp_Traceguids, _a1, _a2, _a3);
LABEL_21:
      if ( !this->m_ObjectSize )
        v18 = 0LL;
      WPP_IFR_SF_qqd(this->m_Globals, 2u, 0xEu, 0x17u, WPP_FxusbDeviceKm_cpp_Traceguids, v18, Request, _a3);
      return _a3;
    }
  }
  Irp = IoAllocateIrp(m_TargetStackSize, 0);
  if ( !Irp )
  {
    _a3 = -1073741670;
    v17 = 12;
    goto LABEL_14;
  }
  v24 = Request->m_Irp.m_Irp;
  Request->m_Irp.m_Irp = Irp;
  Request->m_Completed = 0;
  if ( v24 && v24 != Irp && Request->m_IrpAllocation == 1 )
  {
    Request->m_IrpAllocation = 1;
    v64 = Request->m_Globals;
    if ( v64->FxVerboseOn )
    {
      v65 = Request;
      v66 = (unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL;
      if ( !Request->m_ObjectSize )
        v66 = 0LL;
      if ( v66 )
        v65 = (FxRequestBase *)v66;
      WPP_IFR_SF_qq(v64, 5u, 0xDu, 0xEu, WPP_FxRequestBase_cpp_Traceguids, v24, v65);
    }
    IoFreeIrp(v24);
  }
  else
  {
    Request->m_IrpAllocation = 1;
  }
LABEL_27:
  v25 = Request->m_RequestContext;
  if ( !v25 || v25->m_RequestType != 19 )
  {
    FxUrbTypeForRequest = FxUsbDevice::GetFxUrbTypeForRequest(this, Request);
    v27 = this->m_Globals;
    *(_QWORD *)&v68.UsePoolType = 0LL;
    v28 = FxUrbTypeForRequest;
    v68.u.PoolFlags = 64LL;
    if ( v27->FxPoolTrackingOn )
      v29 = retaddr;
    else
      v29 = 0LL;
    v30 = (FxUsbDeviceControlContext *)FxPoolAllocator(v27, &v27->FxPoolFrameworks, &v68, 0x128uLL, v27->Tag, v29);
    if ( !v30 )
      return -1073741670;
    FxUsbDeviceControlContext::FxUsbDeviceControlContext(v30, v28);
    v25 = (FxRequestContext *)v31;
    if ( !v31 )
      return -1073741670;
    if ( v28 == FxUrbTypeUsbdAllocated )
    {
      m_USBDHandle = this->m_USBDHandle;
      v62 = USBD_UrbAllocate(m_USBDHandle, (_URB **)(v31 + 272));
      if ( v62 < 0 )
      {
        WPP_IFR_SF_D(this->m_Globals, 2u, 0xEu, 0x18u, WPP_FxusbDeviceKm_cpp_Traceguids, v62);
        ((void (__fastcall *)(FxRequestContext *, __int64))v25->~FxRequestContext)(v25, 1LL);
        return v62;
      }
      v25[1].m_CompletionParams.Parameters.Others.Argument1.Value = (unsigned __int64)m_USBDHandle;
      v63 = KeAcquireSpinLockRaiseToDpc(&Request->m_SpinLock.m_Lock);
      Request->m_ObjectFlags |= 0x800u;
      KeReleaseSpinLock(&Request->m_SpinLock.m_Lock, v63);
    }
    FxRequestBase::SetContext(Request, v25);
  }
  if ( RequestBuffer->DataType != FxRequestBufferMdl && RequestBuffer->DataType != FxRequestBufferReferencedMdl
    || (v32 = this->m_Globals,
        pMdl = 0LL,
        result = FxRequestBuffer::GetOrAllocateMdl(
                   RequestBuffer,
                   v32,
                   &pMdl,
                   (_MDL **)&v25[2].m_RequestType,
                   (unsigned __int8 *)&v25[3],
                   IoModifyAccess,
                   0,
                   0LL),
        result >= 0) )
  {
    v25->m_CompletionParams.Type = WdfRequestTypeUsb;
    v25->m_CompletionParams.Parameters.Others.Argument1.Value = (unsigned __int64)&v25[1];
    m_RequestMemory = v25[2].m_RequestMemory;
    HIDWORD(v25[1].__vftable) = 3;
    *(_OWORD *)&m_RequestMemory->__vftable = 0LL;
    *(_OWORD *)&m_RequestMemory[2].__vftable = 0LL;
    *(_OWORD *)&m_RequestMemory[4].__vftable = 0LL;
    *(_OWORD *)&m_RequestMemory[6].__vftable = 0LL;
    *(_OWORD *)&m_RequestMemory[8].__vftable = 0LL;
    *(_OWORD *)&m_RequestMemory[10].__vftable = 0LL;
    *(_OWORD *)&m_RequestMemory[12].__vftable = 0LL;
    *(_OWORD *)&m_RequestMemory[14].__vftable = 0LL;
    m_RequestMemory[16].__vftable = 0LL;
    WORD1(v25[2].m_RequestMemory->__vftable) = 8;
    LOWORD(v25[2].m_RequestMemory->__vftable) = 136;
    if ( RequestBuffer->DataType == FxRequestBufferMemory )
    {
      v46 = 130LL;
    }
    else
    {
      if ( RequestBuffer->DataType != FxRequestBufferReferencedMdl )
      {
        Memory = 0LL;
        goto LABEL_40;
      }
      v46 = 135LL;
    }
    RequestBuffer->u.Memory.Memory->AddRef(
      RequestBuffer->u.Memory.Memory,
      v25,
      v46,
      "minkernel\\wdf\\framework\\shared\\core\\fxrequestcontext.cpp");
    Memory = RequestBuffer->u.Memory.Memory;
LABEL_40:
    v25->m_RequestMemory = Memory;
    p_pMdl = &pMdl;
    v36 = v25[2].m_RequestMemory;
    v37 = &pMdl;
    if ( v36 != (IFxMemory *)-40LL )
      p_pMdl = (_MDL **)&v36[5];
    if ( v36 != (IFxMemory *)-48LL )
      v37 = (_MDL **)&v36[6];
    v38 = RequestBuffer->DataType;
    *(_QWORD *)&v68.UsePoolType = v37;
    if ( v38 == FxRequestBufferBuffer )
    {
      *v37 = 0LL;
      *p_pMdl = RequestBuffer->u.Mdl.Mdl;
    }
    else
    {
      v47 = v38 - 1;
      if ( !v47 )
      {
        v48 = (_MDL *)RequestBuffer->u.Memory.Memory->GetBuffer(RequestBuffer->u.Memory.Memory);
        v49 = RequestBuffer->u.Memory.Memory;
        pMdl = v48;
        v50 = v49->GetBufferSize(v49);
        v51 = RequestBuffer->u.Memory.Offsets;
        if ( v51 )
        {
          v58 = v51->BufferLength;
          v59 = v51->BufferOffset;
          if ( !v58 )
            LODWORD(v58) = v50;
          v50 = v58;
          v52 = pMdl;
          if ( v59 )
          {
            v60 = (_MDL *)((char *)pMdl + v59);
            **(_QWORD **)&v68.UsePoolType = 0LL;
            Length = v50;
            *p_pMdl = v60;
            goto LABEL_47;
          }
        }
        else
        {
          v52 = pMdl;
        }
        **(_QWORD **)&v68.UsePoolType = 0LL;
        Length = v50;
        *p_pMdl = v52;
LABEL_47:
        HIDWORD(v36[4].__vftable) = Length;
        v25[2].m_RequestMemory[16].__vftable = *SetupPacket;
        HIWORD(v25[2].m_RequestMemory[16].__vftable) = WORD2(v25[2].m_RequestMemory[4].__vftable);
        LODWORD(v25[2].m_RequestMemory[4].__vftable) = 2;
        if ( *(char *)SetupPacket < 0 )
          LODWORD(v25[2].m_RequestMemory[4].__vftable) |= 1u;
        v39 = v25[2].m_RequestMemory;
        if ( this->m_OnUSBD )
          v39[3].__vftable = (IFxMemory_vtbl *)this->m_ControlPipe;
        else
          LODWORD(v39[4].__vftable) |= 8u;
        v40 = *(IFxMemory_vtbl **)&v25[2].m_RequestType;
        if ( v40 )
          v25[2].m_RequestMemory[6].__vftable = v40;
        v41 = (_FILE_OBJECT *)v25[2].m_RequestMemory;
        v42 = this->m_USBDHandle;
        CurrentStackLocation = Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation;
        *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = 0LL;
        *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = 0LL;
        *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = 0LL;
        CurrentStackLocation[-1].FileObject = 0LL;
        Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].MajorFunction = 15;
        Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = 2228227;
        v44 = Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation;
        if ( v41 != (_FILE_OBJECT *)(&v25[1].m_CompletionParams.Parameters.Usb + 1) )
        {
          v53 = *((_DWORD *)v42 + 54);
          if ( v53 != -1 && v53 >= 0x602 )
            v44[-1].FileObject = v41;
        }
        v44[-1].Parameters.WMI.ProviderId = (unsigned __int64)v41;
        v45 = Request->m_Globals;
        if ( v45->FxVerifierOn && v45->FxVerifierIO )
          FxRequestBase::SetVerifierFlags(Request, 128);
        return 0;
      }
      v55 = v47 - 1;
      if ( v55 )
      {
        if ( v55 == 2 )
        {
          *v37 = RequestBuffer->u.RefMdl.Mdl;
          *p_pMdl = 0LL;
          v56 = RequestBuffer->u.Memory.Offsets;
          if ( !v56 || (v57 = v56->BufferLength) == 0 )
            LODWORD(v57) = RequestBuffer->u.Memory.Memory->GetBufferSize(RequestBuffer->u.Memory.Memory);
          Length = v57;
        }
        else
        {
          *v37 = 0LL;
          *p_pMdl = 0LL;
        }
        goto LABEL_47;
      }
      *v37 = RequestBuffer->u.Mdl.Mdl;
      *p_pMdl = 0LL;
    }
    Length = RequestBuffer->u.Mdl.Length;
    goto LABEL_47;
  }
  return result;
}
