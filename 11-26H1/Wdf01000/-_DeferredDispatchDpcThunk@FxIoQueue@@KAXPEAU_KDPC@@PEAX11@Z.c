/*
 * XREFs of ?_DeferredDispatchDpcThunk@FxIoQueue@@KAXPEAU_KDPC@@PEAX11@Z @ 0x140071460
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_ @ 0x14004B128 (WPP_IFR_SF_.c)
 *     ?DeferredDispatchRequestsFromDpc@FxIoQueue@@QEAAXXZ @ 0x1400714AC (-DeferredDispatchRequestsFromDpc@FxIoQueue@@QEAAXXZ.c)
 */

void __fastcall FxIoQueue::_DeferredDispatchDpcThunk(
        _KDPC *Dpc,
        FxIoQueue *DeferredContext,
        void *SystemArgument1,
        void *SystemArgument2)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx

  m_Globals = DeferredContext->m_Globals;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_(m_Globals, 5u, 0xDu, 0x69u, WPP_FxIoQueue_cpp_Traceguids);
  FxIoQueue::DeferredDispatchRequestsFromDpc(DeferredContext);
}
