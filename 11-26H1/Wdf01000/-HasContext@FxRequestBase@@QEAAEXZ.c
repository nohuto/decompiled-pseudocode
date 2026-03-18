/*
 * XREFs of ?HasContext@FxRequestBase@@QEAAEXZ @ 0x140092D8C
 * Callers:
 *     imp_WdfRequestSend @ 0x140029C80 (imp_WdfRequestSend.c)
 *     ?EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z @ 0x14002F7F0 (-EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall FxRequestBase::HasContext(FxRequestBase *this)
{
  FxRequestContext *m_RequestContext; // rdx
  bool result; // al

  m_RequestContext = this->m_RequestContext;
  result = 0;
  if ( m_RequestContext )
    return m_RequestContext->m_RequestType != 0;
  return result;
}
