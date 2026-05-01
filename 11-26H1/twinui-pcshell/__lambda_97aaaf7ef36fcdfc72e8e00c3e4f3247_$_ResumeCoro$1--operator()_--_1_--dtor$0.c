/*
 * XREFs of __lambda_97aaaf7ef36fcdfc72e8e00c3e4f3247_$_ResumeCoro$1::operator()_::_1_::dtor$0 @ 0x1806F5ECD
 * Callers:
 *     <none>
 * Callees:
 *     ??1timespan_awaiter@impl@winrt@@QEAA@XZ @ 0x180329228 (--1timespan_awaiter@impl@winrt@@QEAA@XZ.c)
 */

void __fastcall _lambda_97aaaf7ef36fcdfc72e8e00c3e4f3247___ResumeCoro_1::operator()_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 104) = *(_QWORD *)(a2 + 144) + 16LL;
  winrt::impl::timespan_awaiter::~timespan_awaiter(*(winrt::cancellable_promise ***)(a2 + 104));
}
