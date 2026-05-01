/*
 * XREFs of ?callback@timespan_awaiter@impl@winrt@@CAXPEAX00@Z @ 0x18033A460
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall winrt::impl::timespan_awaiter::callback(
        PTP_CALLBACK_INSTANCE Instance,
        void (***Context)(void),
        PTP_TIMER Timer)
{
  (*Context[3])();
}
