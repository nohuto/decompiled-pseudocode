/*
 * XREFs of ?ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z @ 0x140013DB0
 * Callers:
 *     ?FormatResetRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z @ 0x14000460C (-FormatResetRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z.c)
 *     ?FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z @ 0x1400137E8 (-FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z.c)
 *     ?SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z @ 0x140053FFC (-SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z.c)
 *     ?InitDevice@FxUsbDevice@@QEAAJK@Z @ 0x14005E824 (-InitDevice@FxUsbDevice@@QEAAJK@Z.c)
 *     ?GetString@FxUsbDevice@@QEAAJPEAG0EGPEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z @ 0x14005EFE8 (-GetString@FxUsbDevice@@QEAAJPEAG0EGPEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z.c)
 *     ?FormatAbortRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z @ 0x140074374 (-FormatAbortRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z.c)
 *     ?SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z @ 0x140074C44 (-SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z.c)
 *     imp_WdfRequestChangeTarget @ 0x140093040 (imp_WdfRequestChangeTarget.c)
 *     ?Deconfig@FxUsbDevice@@QEAAJXZ @ 0x14009F78C (-Deconfig@FxUsbDevice@@QEAAJXZ.c)
 *     ?FormatStringRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@EG@Z @ 0x1400A04FC (-FormatStringRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@EG@Z.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x14000642C (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_qqd @ 0x14000EA80 (WPP_IFR_SF_qqd.c)
 *     WPP_IFR_SF_qd @ 0x140012548 (WPP_IFR_SF_qd.c)
 *     ?ClearVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x140083260 (-ClearVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxRequestBase::ValidateTarget(FxRequestBase *this, unsigned __int64 Target)
{
  _IRP *m_Irp; // rdi
  unsigned __int64 v3; // rbx
  FxRequestContext *m_RequestContext; // rcx
  _FX_DRIVER_GLOBALS *v6; // rax
  unsigned __int16 v7; // ax
  const void *_a2; // rsi
  const void *_a1; // rcx
  unsigned __int64 v10; // rdx
  PIRP Irp; // rax
  _IRP *v13; // rsi
  _FX_DRIVER_GLOBALS *v14; // r10
  unsigned __int64 v15; // rdx
  unsigned __int16 v16; // cx
  const void *v17; // rsi
  __int64 v18; // rax
  const void *v19; // rsi
  const void *v20; // rcx
  unsigned __int64 v21; // rdx

  m_Irp = this->m_Irp.m_Irp;
  v3 = (unsigned __int64)this;
  m_RequestContext = this->m_RequestContext;
  if ( m_RequestContext )
  {
    if ( m_Irp )
    {
      m_RequestContext->ReleaseAndRestore(m_RequestContext, (FxRequestBase *)v3);
      v6 = *(_FX_DRIVER_GLOBALS **)(v3 + 16);
      if ( v6->FxVerifierOn )
      {
        if ( v6->FxVerifierIO )
          FxRequestBase::ClearVerifierFlags((FxRequestBase *)v3, 128);
      }
    }
  }
  if ( *(_BYTE *)(Target + 336) )
  {
    if ( m_Irp )
    {
      if ( m_Irp->CurrentLocation - 1 >= *(char *)(Target + 336) )
        return 0LL;
      if ( *(_BYTE *)(v3 + 213) != 1 )
      {
        v7 = *(_WORD *)(Target + 10);
        _a2 = (const void *)(Target ^ 0xFFFFFFFFFFFFFFF8uLL);
        _a1 = (const void *)v3;
        if ( !v7 )
          _a2 = 0LL;
        v10 = v3 ^ 0xFFFFFFFFFFFFFFF8uLL;
        if ( !*(_WORD *)(v3 + 10) )
          v10 = 0LL;
        if ( v10 )
          _a1 = (const void *)v10;
        WPP_IFR_SF_qqd(
          *(_FX_DRIVER_GLOBALS **)(v3 + 16),
          2u,
          0xEu,
          0xDu,
          WPP_FxRequestBase_cpp_Traceguids,
          _a1,
          _a2,
          0xC00000D0);
        return 3221225680LL;
      }
    }
    Irp = IoAllocateIrp(*(_BYTE *)(Target + 336), 0);
    if ( Irp )
    {
      v13 = *(_IRP **)(v3 + 152);
      *(_QWORD *)(v3 + 152) = Irp;
      *(_BYTE *)(v3 + 214) = 0;
      if ( v13 && v13 != Irp && *(_BYTE *)(v3 + 213) == 1 )
      {
        *(_BYTE *)(v3 + 213) = 1;
        v14 = *(_FX_DRIVER_GLOBALS **)(v3 + 16);
        if ( v14->FxVerboseOn )
        {
          v15 = v3 ^ 0xFFFFFFFFFFFFFFF8uLL;
          if ( !*(_WORD *)(v3 + 10) )
            v15 = 0LL;
          if ( v15 )
            v3 = v15;
          WPP_IFR_SF_qq(v14, 5u, 0xDu, 0xEu, WPP_FxRequestBase_cpp_Traceguids, v13, (const void *)v3);
        }
        IoFreeIrp(v13);
        return 0LL;
      }
      *(_BYTE *)(v3 + 213) = 1;
      return 0LL;
    }
    v18 = *(unsigned __int16 *)(Target + 10);
    v19 = (const void *)(Target ^ 0xFFFFFFFFFFFFFFF8uLL);
    v20 = (const void *)v3;
    if ( !(_WORD)v18 )
      v19 = 0LL;
    v21 = v3 ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !*(_WORD *)(v3 + 10) )
      v21 = 0LL;
    if ( v21 )
      v20 = (const void *)v21;
    WPP_IFR_SF_qqd(
      *(_FX_DRIVER_GLOBALS **)(v3 + 16),
      2u,
      0xEu,
      0xCu,
      WPP_FxRequestBase_cpp_Traceguids,
      v20,
      v19,
      0xC000009A);
    return 3221225626LL;
  }
  else
  {
    v16 = *(_WORD *)(Target + 10);
    v17 = (const void *)(Target ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v16 )
      v17 = 0LL;
    WPP_IFR_SF_qd(*(_FX_DRIVER_GLOBALS **)(v3 + 16), 2u, 0xEu, 0xBu, WPP_FxRequestBase_cpp_Traceguids, v17, -1073741436);
    return 3221225860LL;
  }
}
