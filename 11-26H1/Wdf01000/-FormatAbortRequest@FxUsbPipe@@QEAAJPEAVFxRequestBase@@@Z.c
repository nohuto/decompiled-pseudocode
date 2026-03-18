/*
 * XREFs of ?FormatAbortRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z @ 0x140074374
 * Callers:
 *     imp_WdfUsbTargetPipeAbortSynchronously @ 0x140004800 (imp_WdfUsbTargetPipeAbortSynchronously.c)
 *     imp_WdfUsbTargetPipeFormatRequestForAbort @ 0x14009C9E0 (imp_WdfUsbTargetPipeFormatRequestForAbort.c)
 * Callees:
 *     ?GetFxUrbTypeForRequest@FxUsbDevice@@QEAA?AW4_FX_URB_TYPE@@PEAVFxRequestBase@@@Z @ 0x14000341C (-GetFxUrbTypeForRequest@FxUsbDevice@@QEAA-AW4_FX_URB_TYPE@@PEAVFxRequestBase@@@Z.c)
 *     ?SetContext@FxRequestBase@@QEAAXPEAUFxRequestContext@@@Z @ 0x1400043F4 (-SetContext@FxRequestBase@@QEAAXPEAUFxRequestContext@@@Z.c)
 *     ??0FxUsbPipeRequestContext@@QEAA@W4_FX_URB_TYPE@@@Z @ 0x140004440 (--0FxUsbPipeRequestContext@@QEAA@W4_FX_URB_TYPE@@@Z.c)
 *     WPP_IFR_SF_qqd @ 0x14000EA80 (WPP_IFR_SF_qqd.c)
 *     ?ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z @ 0x140013DB0 (-ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140025E70 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     ?FxFormatUsbRequest@@YAXPEAVFxRequestBase@@PEAU_URB@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z @ 0x140055FD0 (-FxFormatUsbRequest@@YAXPEAVFxRequestBase@@PEAU_URB@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z.c)
 *     ?MarkDisposeOverride@FxObject@@QEAAXW4FxObjectLockState@@@Z @ 0x140060F28 (-MarkDisposeOverride@FxObject@@QEAAXW4FxObjectLockState@@@Z.c)
 *     ?AllocateUrb@FxUsbPipeRequestContext@@QEAAJPEAUUSBD_HANDLE__@@@Z @ 0x14009E398 (-AllocateUrb@FxUsbPipeRequestContext@@QEAAJPEAUUSBD_HANDLE__@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxUsbPipe::FormatAbortRequest(FxUsbPipe *this, FxRequestBase *Request)
{
  signed int _a3; // ebx
  FxRequestContext *m_RequestContext; // rbx
  bool FxUrbTypeForRequest; // al
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  _FX_URB_TYPE v8; // bp
  void *v9; // r8
  FX_POOL **v11; // rax
  FxUsbPipeRequestContext *v12; // rax
  int Urb; // ebp
  IFxMemory_vtbl *PipeHandle; // rcx
  IFxMemory *m_RequestMemory; // rax
  _FILE_OBJECT *v16; // rdx
  __m128i v17; // [rsp+40h] [rbp-18h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]

  _a3 = FxRequestBase::ValidateTarget(Request, (unsigned __int64)this);
  if ( _a3 < 0 )
  {
    WPP_IFR_SF_qqd(this->m_Globals, 2u, 0xEu, 0x21u, WPP_FxUsbPipe_cpp_Traceguids, this, Request, _a3);
    return (unsigned int)_a3;
  }
  m_RequestContext = Request->m_RequestContext;
  if ( m_RequestContext && m_RequestContext->m_RequestType == 18 )
  {
LABEL_15:
    PipeHandle = (IFxMemory_vtbl *)this->m_PipeInformation.PipeHandle;
    m_RequestMemory = m_RequestContext[1].m_RequestMemory;
    *(_OWORD *)&m_RequestMemory->__vftable = 0LL;
    *(_OWORD *)&m_RequestMemory[2].__vftable = 0LL;
    m_RequestMemory[4].__vftable = 0LL;
    LOWORD(m_RequestContext[1].m_RequestMemory->__vftable) = 40;
    WORD1(m_RequestContext[1].m_RequestMemory->__vftable) = 2;
    m_RequestContext[1].m_RequestMemory[3].__vftable = PipeHandle;
    v16 = (_FILE_OBJECT *)m_RequestContext[1].m_RequestMemory;
    m_RequestContext->m_CompletionParams.Parameters.Others.Argument1.Value = (unsigned __int64)&m_RequestContext[1];
    m_RequestContext->m_CompletionParams.Type = WdfRequestTypeUsb;
    HIDWORD(m_RequestContext[1].__vftable) = 7;
    FxFormatUsbRequest(
      Request,
      v16,
      (_FX_URB_TYPE)(v16 != (_FILE_OBJECT *)(&m_RequestContext[1].m_CompletionParams.Parameters.Usb + 1)),
      this->m_USBDHandle);
    return 0LL;
  }
  FxUrbTypeForRequest = FxUsbDevice::GetFxUrbTypeForRequest(this->m_UsbDevice, Request);
  m_Globals = this->m_Globals;
  v8 = FxUrbTypeForRequest;
  v17.m128i_i64[0] = 0LL;
  v17.m128i_i64[1] = 64LL;
  if ( m_Globals->FxPoolTrackingOn )
    v9 = retaddr;
  else
    v9 = 0LL;
  v11 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &v17, 0xB8uLL, m_Globals->Tag, v9);
  if ( v11 )
  {
    FxUsbPipeRequestContext::FxUsbPipeRequestContext((FxUsbPipeRequestContext *)v11, v8);
    m_RequestContext = v12;
    if ( v12 )
    {
      if ( v8 == FxUrbTypeUsbdAllocated )
      {
        Urb = FxUsbPipeRequestContext::AllocateUrb(v12, this->m_USBDHandle);
        if ( Urb < 0 )
        {
          ((void (__fastcall *)(FxRequestContext *, __int64))m_RequestContext->~FxRequestContext)(m_RequestContext, 1LL);
          return (unsigned int)Urb;
        }
        FxObject::MarkDisposeOverride(Request, ObjectLock);
      }
      FxRequestBase::SetContext(Request, m_RequestContext);
      goto LABEL_15;
    }
  }
  return 3221225626LL;
}
