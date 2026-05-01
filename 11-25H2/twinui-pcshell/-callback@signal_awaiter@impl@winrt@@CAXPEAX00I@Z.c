/*
 * XREFs of ?callback@signal_awaiter@impl@winrt@@CAXPEAX00I@Z @ 0x1803319B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall winrt::impl::signal_awaiter::callback(
        PTP_CALLBACK_INSTANCE Instance,
        void (***Context)(void),
        PTP_WAIT Wait,
        TP_WAIT_RESULT WaitResult)
{
  *((_DWORD *)Context + 8) = WaitResult;
  (*Context[5])();
}
