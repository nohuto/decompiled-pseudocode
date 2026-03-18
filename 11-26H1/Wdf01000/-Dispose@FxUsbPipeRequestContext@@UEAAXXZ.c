/*
 * XREFs of ?Dispose@FxUsbPipeRequestContext@@UEAAXXZ @ 0x14007FD50
 * Callers:
 *     <none>
 * Callees:
 *     USBD_UrbFree @ 0x140066BC0 (USBD_UrbFree.c)
 */

void __fastcall FxUsbPipeRequestContext::Dispose(FxUsbPipeRequestContext *this)
{
  _URB *m_Urb; // rdx

  m_Urb = (_URB *)this->m_Urb;
  if ( m_Urb )
  {
    if ( m_Urb != (_URB *)&this->m_UrbLegacy )
    {
      USBD_UrbFree(this->m_USBDHandle, m_Urb);
      this->m_Urb = 0LL;
      this->m_USBDHandle = 0LL;
    }
  }
}
