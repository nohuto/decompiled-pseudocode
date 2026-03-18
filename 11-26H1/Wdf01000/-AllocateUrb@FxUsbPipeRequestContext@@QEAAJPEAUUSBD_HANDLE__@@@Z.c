/*
 * XREFs of ?AllocateUrb@FxUsbPipeRequestContext@@QEAAJPEAUUSBD_HANDLE__@@@Z @ 0x14009E398
 * Callers:
 *     ?FormatResetRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z @ 0x14000460C (-FormatResetRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z.c)
 *     ?FormatAbortRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z @ 0x140074374 (-FormatAbortRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z.c)
 * Callees:
 *     USBD_UrbAllocate @ 0x1400031CC (USBD_UrbAllocate.c)
 */

__int64 __fastcall FxUsbPipeRequestContext::AllocateUrb(FxUsbPipeRequestContext *this, USBD_HANDLE__ *USBDHandle)
{
  __int64 result; // rax

  if ( this->m_Urb )
    return 3221225860LL;
  result = USBD_UrbAllocate(USBDHandle, (_URB **)&this->m_Urb);
  if ( (int)result >= 0 )
    this->m_USBDHandle = USBDHandle;
  return result;
}
