/*
 * XREFs of ??0FxUsbPipeTransferContext@@QEAA@W4_FX_URB_TYPE@@@Z @ 0x1400663EC
 * Callers:
 *     ?FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z @ 0x1400137E8 (-FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z.c)
 * Callees:
 *     memset @ 0x1400ACFC0 (memset.c)
 */

void __fastcall FxUsbPipeTransferContext::FxUsbPipeTransferContext(
        FxUsbPipeTransferContext *this,
        _FX_URB_TYPE FxUrbType)
{
  _URB_BULK_OR_INTERRUPT_TRANSFER *p_m_UrbLegacy; // rax

  this->m_RequestType = 16;
  this->m_RequestMemory = 0LL;
  memset(&this->m_CompletionParams, 0, sizeof(this->m_CompletionParams));
  this->m_CompletionParams.Size = 72;
  *(_OWORD *)&this->m_UsbParameters.UsbdStatus = 0LL;
  *(_OWORD *)(&this->m_UsbParameters.Parameters.PipeUrb + 1) = 0LL;
  this->m_CompletionParams.Parameters.Others.Argument1.Value = (unsigned __int64)&this->m_UsbParameters;
  this->__vftable = (FxUsbPipeTransferContext_vtbl *)FxUsbPipeTransferContext::`vftable';
  p_m_UrbLegacy = &this->m_UrbLegacy;
  if ( FxUrbType )
    p_m_UrbLegacy = 0LL;
  this->m_CompletionParams.Type = WdfRequestTypeUsb;
  this->m_UsbParameters.Type = WdfUsbRequestTypeNoFormat;
  this->m_UnlockPages = 0;
  this->m_PartialMdl = 0LL;
  this->m_USBDHandle = 0LL;
  this->m_Urb = p_m_UrbLegacy;
}
