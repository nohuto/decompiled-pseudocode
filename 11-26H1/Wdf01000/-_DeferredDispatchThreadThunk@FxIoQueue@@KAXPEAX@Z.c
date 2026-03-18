/*
 * XREFs of ?_DeferredDispatchThreadThunk@FxIoQueue@@KAXPEAX@Z @ 0x1400621F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_ @ 0x14004B128 (WPP_IFR_SF_.c)
 *     ?DeferredDispatchRequestsFromWorkerThread@FxIoQueue@@QEAAXXZ @ 0x14006223C (-DeferredDispatchRequestsFromWorkerThread@FxIoQueue@@QEAAXXZ.c)
 */

void __fastcall FxIoQueue::_DeferredDispatchThreadThunk(FxIoQueue *Parameter)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx

  m_Globals = Parameter->m_Globals;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_(m_Globals, 5u, 0xDu, 0x68u, WPP_FxIoQueue_cpp_Traceguids);
  FxIoQueue::DeferredDispatchRequestsFromWorkerThread(Parameter);
}
