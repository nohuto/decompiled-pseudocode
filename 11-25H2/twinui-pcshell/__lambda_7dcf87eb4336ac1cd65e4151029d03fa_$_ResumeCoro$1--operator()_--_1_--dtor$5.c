/*
 * XREFs of __lambda_7dcf87eb4336ac1cd65e4151029d03fa_$_ResumeCoro$1::operator()_::_1_::dtor$5 @ 0x1806DA8D2
 * Callers:
 *     <none>
 * Callees:
 *     ??1timespan_awaiter@impl@winrt@@QEAA@XZ @ 0x1803386D0 (--1timespan_awaiter@impl@winrt@@QEAA@XZ.c)
 */

void __fastcall _lambda_7dcf87eb4336ac1cd65e4151029d03fa___ResumeCoro_1::operator()_::_1_::dtor_5(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 176) = *(_QWORD *)(a2 + 256) + 128LL;
  winrt::impl::timespan_awaiter::~timespan_awaiter(*(winrt::cancellable_promise ***)(a2 + 176));
}
