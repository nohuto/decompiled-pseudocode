/*
 * XREFs of ?FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z @ 0x1400137E8
 * Callers:
 *     imp_WdfUsbTargetPipeFormatRequestForRead @ 0x140012C00 (imp_WdfUsbTargetPipeFormatRequestForRead.c)
 *     ?_FormatTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAUWDFMEMORY__@@PEAU_WDFMEMORY_OFFSET@@K@Z @ 0x140012FF4 (-_FormatTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAUW.c)
 *     ?_SendTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAU_WDF_MEMORY_DESCRIPTOR@@PEAKK@Z @ 0x1400173B4 (-_SendTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAU_WD.c)
 *     ?FormatRepeater@FxUsbPipeContinuousReader@@QEAAJPEAUFxUsbPipeRepeatReader@@@Z @ 0x14002E510 (-FormatRepeater@FxUsbPipeContinuousReader@@QEAAJPEAUFxUsbPipeRepeatReader@@@Z.c)
 * Callees:
 *     USBD_UrbAllocate @ 0x1400031CC (USBD_UrbAllocate.c)
 *     ?IsObjectDisposedOnRemove@FxUsbDevice@@QEAAEPEAVFxObject@@@Z @ 0x140003450 (-IsObjectDisposedOnRemove@FxUsbDevice@@QEAAEPEAVFxObject@@@Z.c)
 *     WPP_IFR_SF_qqd @ 0x14000EA80 (WPP_IFR_SF_qqd.c)
 *     WPP_IFR_SF_qd @ 0x140012548 (WPP_IFR_SF_qd.c)
 *     ?GetOrAllocateMdl@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAU_MDL@@1PEAEW4_LOCK_OPERATION@@EPEA_K@Z @ 0x14001339C (-GetOrAllocateMdl@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAU_MDL@@1PEAEW4_LOCK_OPERAT.c)
 *     ?GetBufferLength@FxRequestBuffer@@QEAAKXZ @ 0x140013D00 (-GetBufferLength@FxRequestBuffer@@QEAAKXZ.c)
 *     ?ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z @ 0x140013DB0 (-ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140025E70 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_q @ 0x1400488BC (WPP_IFR_SF_q.c)
 *     ??0FxUsbPipeTransferContext@@QEAA@W4_FX_URB_TYPE@@@Z @ 0x1400663EC (--0FxUsbPipeTransferContext@@QEAA@W4_FX_URB_TYPE@@@Z.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x14007BDC4 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxUsbPipe::FormatTransferRequest(
        FxUsbPipe *this,
        FxRequestBase *Request,
        FxRequestBuffer *Buffer,
        unsigned int TransferFlags)
{
  unsigned int v5; // r12d
  __int64 PipeType; // rcx
  unsigned __int64 BufferLength; // r8
  signed __int8 EndpointAddress; // al
  unsigned int v11; // eax
  signed int v12; // ebx
  FxRequestContext *m_RequestContext; // r14
  FxUsbDevice *m_UsbDevice; // rcx
  _FX_URB_TYPE v15; // bl
  void *v16; // rax
  _FX_DRIVER_GLOBALS **p_m_Globals; // r15
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  FxUsbPipeTransferContext *v19; // rax
  __int64 v20; // rax
  FxRequestContext *v21; // rcx
  _FX_DRIVER_GLOBALS *v22; // rdx
  __int64 result; // rax
  void *PipeHandle; // rcx
  _FILE_OBJECT *Length; // rdx
  USBD_HANDLE__ *v26; // r8
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  _IO_STACK_LOCATION *v28; // rcx
  _FX_DRIVER_GLOBALS *v29; // rax
  const void *v30; // rcx
  unsigned __int16 v31; // r9
  unsigned int v32; // eax
  USBD_HANDLE__ *m_USBDHandle; // r12
  KIRQL v34; // al
  _LOCK_OPERATION Operation; // [rsp+28h] [rbp-60h]
  FxPoolTypeOrPoolFlags v36; // [rsp+40h] [rbp-48h] BYREF
  void *retaddr; // [rsp+88h] [rbp+0h]
  _MDL *pMdl; // [rsp+90h] [rbp+8h] BYREF
  unsigned int v39; // [rsp+A8h] [rbp+20h]

  v39 = TransferFlags;
  v5 = TransferFlags;
  PipeType = this->m_PipeInformation.PipeType;
  if ( (unsigned int)PipeType >= 4
    || `FxUsbPipe::_UsbdPipeTypeToWdf'::`2'::types[PipeType] != 3
    && `FxUsbPipe::_UsbdPipeTypeToWdf'::`2'::types[PipeType] != 4 )
  {
    v30 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v30 = 0LL;
    WPP_IFR_SF_qd(this->m_Globals, 2u, 0xEu, 0xCu, WPP_FxUsbPipeKm_cpp_Traceguids, v30, -1073741808);
    return 3221225488LL;
  }
  BufferLength = FxRequestBuffer::GetBufferLength(Buffer);
  EndpointAddress = this->m_PipeInformation.EndpointAddress;
  if ( (v5 & 1) == 0 )
  {
    if ( EndpointAddress >= 0 )
      goto LABEL_9;
    v31 = 15;
LABEL_38:
    WPP_IFR_SF_q(this->m_Globals, 2u, 0xEu, v31, WPP_FxUsbPipeKm_cpp_Traceguids, this);
    return 3221225488LL;
  }
  if ( EndpointAddress >= 0 )
  {
    v31 = 14;
    goto LABEL_38;
  }
  if ( this->m_CheckPacketSize )
  {
    v11 = (this->m_PipeInformation.PipeFlags & 0x10000) != 0
        ? this->m_PipeInformation.MaximumTransferSize
        : this->m_PipeInformation.MaximumPacketSize;
    if ( BufferLength % v11 )
      return 3221225990LL;
  }
LABEL_9:
  v12 = FxRequestBase::ValidateTarget(Request, this);
  if ( v12 < 0 )
  {
    WPP_IFR_SF_qqd(this->m_Globals, 2u, 0xEu, 0x10u, WPP_FxUsbPipeKm_cpp_Traceguids, this, Request, v12);
    return (unsigned int)v12;
  }
  m_RequestContext = Request->m_RequestContext;
  if ( !m_RequestContext || m_RequestContext->m_RequestType != 16 )
  {
    m_UsbDevice = this->m_UsbDevice;
    if ( m_UsbDevice->m_UrbType )
    {
      if ( Request->m_IrpAllocation )
        v15 = FxUsbDevice::IsObjectDisposedOnRemove(m_UsbDevice, Request) != 0;
      else
        v15 = FxUrbTypeUsbdAllocated;
    }
    else
    {
      v15 = FxUrbTypeLegacy;
    }
    v16 = retaddr;
    p_m_Globals = &this->m_Globals;
    m_Globals = this->m_Globals;
    *(_QWORD *)&v36.UsePoolType = 0LL;
    v36.u.PoolFlags = 64LL;
    if ( !m_Globals->FxPoolTrackingOn )
      v16 = 0LL;
    v19 = (FxUsbPipeTransferContext *)FxPoolAllocator(
                                        m_Globals,
                                        &m_Globals->FxPoolFrameworks,
                                        &v36,
                                        0x120uLL,
                                        m_Globals->Tag,
                                        v16);
    if ( !v19 )
      return 3221225626LL;
    FxUsbPipeTransferContext::FxUsbPipeTransferContext(v19, v15);
    m_RequestContext = (FxRequestContext *)v20;
    if ( !v20 )
      return 3221225626LL;
    if ( v15 != FxUrbTypeUsbdAllocated )
      goto LABEL_20;
    if ( *(_QWORD *)(v20 + 264) )
    {
      v12 = -1073741436;
    }
    else
    {
      m_USBDHandle = this->m_USBDHandle;
      v12 = USBD_UrbAllocate(m_USBDHandle, (_URB **)(v20 + 264));
      if ( v12 >= 0 )
      {
        m_RequestContext[1].m_CompletionParams.Parameters.Others.Argument1.Value = (unsigned __int64)m_USBDHandle;
        v34 = KeAcquireSpinLockRaiseToDpc(&Request->m_SpinLock.m_Lock);
        Request->m_ObjectFlags |= 0x800u;
        KeReleaseSpinLock(&Request->m_SpinLock.m_Lock, v34);
        v5 = v39;
LABEL_20:
        v21 = Request->m_RequestContext;
        if ( v21 != m_RequestContext )
        {
          if ( v21 )
            ((void (__fastcall *)(FxRequestContext *, __int64))v21->~FxRequestContext)(v21, 1LL);
          Request->m_RequestContext = m_RequestContext;
        }
        goto LABEL_24;
      }
    }
    ((void (__fastcall *)(FxRequestContext *, __int64))m_RequestContext->~FxRequestContext)(m_RequestContext, 1LL);
    return (unsigned int)v12;
  }
  p_m_Globals = &this->m_Globals;
LABEL_24:
  if ( Buffer->DataType != FxRequestBufferMdl && Buffer->DataType != FxRequestBufferReferencedMdl
    || (v22 = *p_m_Globals,
        Operation = this->m_PipeInformation.EndpointAddress >> 7,
        pMdl = 0LL,
        result = FxRequestBuffer::GetOrAllocateMdl(
                   Buffer,
                   v22,
                   &pMdl,
                   (_MDL **)&m_RequestContext[2].m_RequestMemory,
                   &m_RequestContext[2].m_RequestType,
                   Operation,
                   0,
                   0LL),
        (int)result >= 0) )
  {
    m_RequestContext->StoreAndReferenceMemory(m_RequestContext, Buffer);
    PipeHandle = this->m_PipeInformation.PipeHandle;
    *(_DWORD *)(m_RequestContext[2].m_CompletionParams.Parameters.Ioctl.Output.Length + 32) = v5;
    *(_QWORD *)(m_RequestContext[2].m_CompletionParams.Parameters.Ioctl.Output.Length + 24) = PipeHandle;
    Length = (_FILE_OBJECT *)m_RequestContext[2].m_CompletionParams.Parameters.Ioctl.Output.Length;
    v26 = this->m_USBDHandle;
    CurrentStackLocation = Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = 0LL;
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = 0LL;
    *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = 0LL;
    CurrentStackLocation[-1].FileObject = 0LL;
    Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].MajorFunction = 15;
    Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = 2228227;
    v28 = Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation;
    if ( Length != (_FILE_OBJECT *)(&m_RequestContext[1].m_CompletionParams.Parameters.Usb + 1) )
    {
      v32 = *((_DWORD *)v26 + 54);
      if ( v32 != -1 && v32 >= 0x602 )
        v28[-1].FileObject = Length;
    }
    v28[-1].Parameters.WMI.ProviderId = (unsigned __int64)Length;
    v29 = Request->m_Globals;
    if ( v29->FxVerifierOn )
    {
      if ( v29->FxVerifierIO )
        FxRequestBase::SetVerifierFlags(Request, 128);
    }
    return 0LL;
  }
  return result;
}
