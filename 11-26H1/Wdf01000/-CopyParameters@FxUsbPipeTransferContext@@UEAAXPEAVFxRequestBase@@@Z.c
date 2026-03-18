/*
 * XREFs of ?CopyParameters@FxUsbPipeTransferContext@@UEAAXPEAVFxRequestBase@@@Z @ 0x140066E60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall FxUsbPipeTransferContext::CopyParameters(FxUsbPipeTransferContext *this, FxRequestBase *Request)
{
  _URB_BULK_OR_INTERRUPT_TRANSFER *m_Urb; // rdx

  m_Urb = this->m_Urb;
  this->m_CompletionParams.IoStatus.Information = m_Urb->TransferBufferLength;
  this->m_UsbParameters.Parameters.PipeWrite.Length = m_Urb->TransferBufferLength;
  this->m_UsbParameters.UsbdStatus = this->GetUsbdStatus(this);
}
