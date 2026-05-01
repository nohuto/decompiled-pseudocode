/*
 * XREFs of ??1unique_cancellation_lock@?1??cancel@cancellable_promise@winrt@@QEAAXXZ@QEAA@XZ @ 0x18032BE50
 * Callers:
 *     _winrt::cancellable_promise::cancel_::_1_::dtor$0 @ 0x1806BB91A (_winrt--cancellable_promise--cancel_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall `winrt::cancellable_promise::cancel'::`2'::unique_cancellation_lock::~unique_cancellation_lock(
        _QWORD *a1)
{
  _QWORD *result; // rax

  result = (_QWORD *)*a1;
  *(_QWORD *)*a1 = 0LL;
  return result;
}
