/*
 * XREFs of ??1unique_cancellation_lock@?1??cancel@cancellable_promise@winrt@@QEAAXXZ@QEAA@XZ @ 0x180329250
 * Callers:
 *     _winrt::cancellable_promise::cancel_::_1_::dtor$0 @ 0x1806E2BFC (_winrt--cancellable_promise--cancel_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall `winrt::cancellable_promise::cancel'::`2'::unique_cancellation_lock::~unique_cancellation_lock(
        _QWORD **a1)
{
  std::_Atomic_storage<void (*)(void *),8>::store(*a1, 0LL);
}
