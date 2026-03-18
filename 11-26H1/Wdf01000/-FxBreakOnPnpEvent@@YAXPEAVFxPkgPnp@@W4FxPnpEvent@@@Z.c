/*
 * XREFs of ?FxBreakOnPnpEvent@@YAXPEAVFxPkgPnp@@W4FxPnpEvent@@@Z @ 0x140021B1C
 * Callers:
 *     ?PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z @ 0x1400216A4 (-PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z.c)
 *     ?PnpProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x1400218AC (-PnpProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxBreakOnPnpEvent(FxPkgPnp *fx, FxPnpEvent event)
{
  FxStateMachineBreak *m_StateMachineBreak; // rax

  m_StateMachineBreak = fx->m_StateMachineBreak;
  if ( m_StateMachineBreak && m_StateMachineBreak->BreakEnabled && (event & m_StateMachineBreak->PnpEvents) != 0 )
    DbgBreakPoint();
}
