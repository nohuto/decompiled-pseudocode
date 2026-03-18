/*
 * XREFs of ?CompletingD0@FxWakeInterruptMachine@@CA?AW4FxWakeInterruptStates@@PEAV1@@Z @ 0x140067280
 * Callers:
 *     <none>
 * Callees:
 *     ?AckPendingWakeInterruptOperation@FxPkgPnp@@QEAAXE@Z @ 0x1400672A0 (-AckPendingWakeInterruptOperation@FxPkgPnp@@QEAAXE@Z.c)
 */

__int64 __fastcall FxWakeInterruptMachine::CompletingD0(FxWakeInterruptMachine *This)
{
  FxPkgPnp::AckPendingWakeInterruptOperation(This->m_PkgPnp, 0);
  return 2LL;
}
