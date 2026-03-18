/*
 * XREFs of ?_InterruptDisableThunk@FxInterrupt@@CAEPEAX@Z @ 0x140071870
 * Callers:
 *     <none>
 * Callees:
 *     ?InterruptDisableInvokeCallback@FxInterrupt@@AEAAJXZ @ 0x140071894 (-InterruptDisableInvokeCallback@FxInterrupt@@AEAAJXZ.c)
 */

unsigned __int8 __fastcall FxInterrupt::_InterruptDisableThunk(FxInterrupt **SyncContext)
{
  *((_DWORD *)SyncContext + 2) = FxInterrupt::InterruptDisableInvokeCallback(*SyncContext);
  return 1;
}
