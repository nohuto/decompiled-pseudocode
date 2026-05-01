/*
 * XREFs of __lambda_a1bf07eabb51e841d7b59a4e813e5668_$_ResumeCoro$1::operator()_::_1_::dtor$5 @ 0x1807036E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1timespan_awaiter@impl@winrt@@QEAA@XZ @ 0x180329228 (--1timespan_awaiter@impl@winrt@@QEAA@XZ.c)
 */

void __fastcall _lambda_a1bf07eabb51e841d7b59a4e813e5668___ResumeCoro_1::operator()_::_1_::dtor_5(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 160) = *(_QWORD *)(a2 + 240) + 128LL;
  winrt::impl::timespan_awaiter::~timespan_awaiter(*(winrt::cancellable_promise ***)(a2 + 160));
}
