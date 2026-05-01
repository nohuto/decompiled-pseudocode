/*
 * XREFs of ?OnHostFrozen@ExternalResourceSet@ExecutionModel@@UEAAJXZ @ 0x1800895E0
 * Callers:
 *     <none>
 * Callees:
 *     ?CancelWatchdogTimer@ExternalResourceSet@ExecutionModel@@AEAAXXZ @ 0x18002D0DC (-CancelWatchdogTimer@ExternalResourceSet@ExecutionModel@@AEAAXXZ.c)
 *     ?RunWatchdog@ExternalResourceSet@ExecutionModel@@AEAAXXZ @ 0x180089774 (-RunWatchdog@ExternalResourceSet@ExecutionModel@@AEAAXXZ.c)
 */

__int64 __fastcall ExecutionModel::ExternalResourceSet::OnHostFrozen(ExecutionModel::ExternalResourceSet *this)
{
  ExecutionModel::ExternalResourceSet::CancelWatchdogTimer(this);
  ExecutionModel::ExternalResourceSet::RunWatchdog(this);
  return 0LL;
}
