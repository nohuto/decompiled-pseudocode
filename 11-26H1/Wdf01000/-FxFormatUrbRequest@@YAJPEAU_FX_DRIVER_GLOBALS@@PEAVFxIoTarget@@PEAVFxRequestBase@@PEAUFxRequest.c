/*
 * XREFs of ?FxFormatUrbRequest@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIoTarget@@PEAVFxRequestBase@@PEAUFxRequestBuffer@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z @ 0x1400036F4
 * Callers:
 *     imp_WdfUsbTargetDeviceSendUrbSynchronously @ 0x140001D20 (imp_WdfUsbTargetDeviceSendUrbSynchronously.c)
 *     imp_WdfUsbTargetDeviceFormatRequestForUrb @ 0x140001FE0 (imp_WdfUsbTargetDeviceFormatRequestForUrb.c)
 *     imp_WdfUsbTargetPipeSendUrbSynchronously @ 0x14009CC30 (imp_WdfUsbTargetPipeSendUrbSynchronously.c)
 * Callees:
 *     ??0FxUsbRequestContext@@QEAA@E@Z @ 0x140004384 (--0FxUsbRequestContext@@QEAA@E@Z.c)
 *     ?SetContext@FxRequestBase@@QEAAXPEAUFxRequestContext@@@Z @ 0x1400043F4 (-SetContext@FxRequestBase@@QEAAXPEAUFxRequestContext@@@Z.c)
 *     WPP_IFR_SF_qq @ 0x14000642C (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_qqd @ 0x14000EA80 (WPP_IFR_SF_qqd.c)
 *     WPP_IFR_SF_qd @ 0x140012548 (WPP_IFR_SF_qd.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140025E70 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x14007BDC4 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?ClearVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x140083260 (-ClearVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxFormatUrbRequest(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        unsigned __int64 Target,
        FxRequestBase *Request,
        FxRequestBuffer *Buffer,
        _FX_URB_TYPE FxUrbType,
        USBD_HANDLE__ *UsbdHandle)
{
  _IRP *m_Irp; // rdi
  FxRequestContext *m_RequestContext; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  unsigned int _a3; // edi
  unsigned __int16 v14; // r9
  const void *_a2; // rdx
  FxRequestBase *_a1; // rax
  unsigned __int64 v17; // rcx
  _IRP *Irp; // rax
  _IRP *v20; // rdi
  FxRequestContext *v21; // rdi
  _FX_DRIVER_GLOBALS *v22; // rcx
  void *v23; // rax
  FxUsbRequestContext *v24; // rax
  _FILE_OBJECT *v25; // rdx
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  _IO_STACK_LOCATION *v27; // r8
  _FX_DRIVER_GLOBALS *v28; // rax
  unsigned int v29; // ecx
  _FX_DRIVER_GLOBALS *v30; // rcx
  unsigned __int64 v31; // rdx
  FxRequestBase *v32; // rax
  const void *v33; // rcx
  FxPoolTypeOrPoolFlags v34; // [rsp+40h] [rbp-28h] BYREF
  void *retaddr; // [rsp+68h] [rbp+0h]

  m_Irp = Request->m_Irp.m_Irp;
  m_RequestContext = Request->m_RequestContext;
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
  if ( !*(_BYTE *)(Target + 336) )
  {
    _a3 = -1073741436;
    v33 = (const void *)(Target ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !*(_WORD *)(Target + 10) )
      v33 = 0LL;
    WPP_IFR_SF_qd(Request->m_Globals, 2u, 0xEu, 0xBu, WPP_FxRequestBase_cpp_Traceguids, v33, -1073741436);
    goto LABEL_16;
  }
  if ( m_Irp )
  {
    if ( m_Irp->CurrentLocation - 1 >= *(char *)(Target + 336) )
      goto LABEL_22;
    if ( Request->m_IrpAllocation != 1 )
    {
      _a3 = -1073741616;
      v14 = 13;
LABEL_9:
      _a2 = (const void *)(Target ^ 0xFFFFFFFFFFFFFFF8uLL);
      _a1 = Request;
      if ( !*(_WORD *)(Target + 10) )
        _a2 = 0LL;
      v17 = (unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL;
      if ( !Request->m_ObjectSize )
        v17 = 0LL;
      if ( v17 )
        _a1 = (FxRequestBase *)v17;
      WPP_IFR_SF_qqd(Request->m_Globals, 2u, 0xEu, v14, WPP_FxRequestBase_cpp_Traceguids, _a1, _a2, _a3);
LABEL_16:
      if ( FxDriverGlobals->FxVerboseOn )
        WPP_IFR_SF_qqd(FxDriverGlobals, 5u, 0xEu, 0xAu, WPP_usbutil_cpp_Traceguids, (const void *)Target, Request, _a3);
      return _a3;
    }
  }
  Irp = IoAllocateIrp(*(_BYTE *)(Target + 336), 0);
  if ( !Irp )
  {
    _a3 = -1073741670;
    v14 = 12;
    goto LABEL_9;
  }
  v20 = Request->m_Irp.m_Irp;
  Request->m_Irp.m_Irp = Irp;
  Request->m_Completed = 0;
  if ( v20 && v20 != Irp && Request->m_IrpAllocation == 1 )
  {
    Request->m_IrpAllocation = 1;
    v30 = Request->m_Globals;
    if ( v30->FxVerboseOn )
    {
      v31 = (unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL;
      v32 = Request;
      if ( !Request->m_ObjectSize )
        v31 = 0LL;
      if ( v31 )
        v32 = (FxRequestBase *)v31;
      WPP_IFR_SF_qq(v30, 5u, 0xDu, 0xEu, WPP_FxRequestBase_cpp_Traceguids, v20, v32);
    }
    IoFreeIrp(v20);
  }
  else
  {
    Request->m_IrpAllocation = 1;
  }
LABEL_22:
  v21 = Request->m_RequestContext;
  if ( !v21 || v21->m_RequestType != 17 )
  {
    v22 = *(_FX_DRIVER_GLOBALS **)(Target + 16);
    v23 = retaddr;
    *(_QWORD *)&v34.UsePoolType = 0LL;
    v34.u.PoolFlags = 64LL;
    if ( !v22->FxPoolTrackingOn )
      v23 = 0LL;
    v24 = (FxUsbRequestContext *)FxPoolAllocator(v22, &v22->FxPoolFrameworks, &v34, 0x88uLL, v22->Tag, v23);
    v21 = v24;
    if ( !v24 )
      return 3221225626LL;
    FxUsbRequestContext::FxUsbRequestContext(v24, 0x11u);
    v21[1].m_CompletionParams.Parameters.Others.Argument1.Value = 0LL;
    v21->__vftable = (FxRequestContext_vtbl *)FxUsbUrbContext::`vftable';
    FxRequestBase::SetContext(Request, v21);
  }
  v21->StoreAndReferenceMemory(v21, Buffer);
  v25 = (_FILE_OBJECT *)v21[1].m_CompletionParams.Parameters.Write.Buffer;
  CurrentStackLocation = Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = 0LL;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = 0LL;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = 0LL;
  CurrentStackLocation[-1].FileObject = 0LL;
  Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].MajorFunction = 15;
  Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = 2228227;
  v27 = Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation;
  if ( FxUrbType == FxUrbTypeUsbdAllocated )
  {
    v29 = *((_DWORD *)UsbdHandle + 54);
    if ( v29 != -1 && v29 >= 0x602 )
      v27[-1].FileObject = v25;
  }
  v27[-1].Parameters.WMI.ProviderId = (unsigned __int64)v25;
  v28 = Request->m_Globals;
  if ( v28->FxVerifierOn && v28->FxVerifierIO )
    FxRequestBase::SetVerifierFlags(Request, 128);
  return 0LL;
}
