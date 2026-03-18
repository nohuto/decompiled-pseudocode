/*
 * XREFs of ??1FxUsbPipeRequestContext@@UEAA@XZ @ 0x1400045A4
 * Callers:
 *     ?Reset@FxUsbPipe@@QEAAJXZ @ 0x140004494 (-Reset@FxUsbPipe@@QEAAJXZ.c)
 *     imp_WdfUsbTargetPipeAbortSynchronously @ 0x140004800 (imp_WdfUsbTargetPipeAbortSynchronously.c)
 *     imp_WdfUsbTargetPipeResetSynchronously @ 0x140022B30 (imp_WdfUsbTargetPipeResetSynchronously.c)
 *     ??_EFxUsbPipeRequestContext@@UEAAPEAXI@Z @ 0x14009E360 (--_EFxUsbPipeRequestContext@@UEAAPEAXI@Z.c)
 * Callees:
 *     USBD_UrbFree @ 0x140066BC0 (USBD_UrbFree.c)
 */

void __fastcall FxUsbPipeRequestContext::~FxUsbPipeRequestContext(FxUsbPipeRequestContext *this)
{
  _URB *m_Urb; // rdx

  m_Urb = (_URB *)this->m_Urb;
  this->__vftable = (FxUsbPipeRequestContext_vtbl *)FxUsbPipeRequestContext::`vftable';
  if ( m_Urb && m_Urb != (_URB *)&this->m_UrbLegacy )
    USBD_UrbFree(this->m_USBDHandle, m_Urb);
  this->m_Urb = 0LL;
  this->__vftable = (FxUsbPipeRequestContext_vtbl *)FxRequestContext::`vftable';
  this->m_USBDHandle = 0LL;
}
