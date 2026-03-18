/*
 * XREFs of ?FlushAndWait@FxWorkItem@@QEAAXXZ @ 0x140066910
 * Callers:
 *     imp_WdfWorkItemFlush @ 0x1400668C0 (imp_WdfWorkItemFlush.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x14000642C (WPP_IFR_SF_qq.c)
 *     ?WaitForSignal@FxWorkItem@@AEAAXXZ @ 0x140066988 (-WaitForSignal@FxWorkItem@@AEAAXXZ.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140083568 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxWorkItem::FlushAndWait(FxWorkItem *this)
{
  struct _KTHREAD *_a2; // rdx
  unsigned __int16 m_ObjectSize; // ax
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  const void *_a1; // rcx

  _a2 = this->m_WorkItemThread;
  if ( _a2 == KeGetCurrentThread() )
  {
    m_ObjectSize = this->m_ObjectSize;
    m_Globals = this->m_Globals;
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qq(m_Globals, 2u, 0x12u, 0x10u, WPP_FxWorkItem_cpp_Traceguids, _a1, _a2);
    FxVerifierDbgBreakPoint(m_Globals);
  }
  else
  {
    FxWorkItem::WaitForSignal(this);
  }
}
