/*
 * XREFs of __lambda_ca9df4dcfe6d5cd8540c8434d0f06187_$_ResumeCoro$1::operator()_::_1_::dtor$0 @ 0x1806E3FAF
 * Callers:
 *     <none>
 * Callees:
 *     ??1signal_awaiter@impl@winrt@@QEAA@XZ @ 0x180329200 (--1signal_awaiter@impl@winrt@@QEAA@XZ.c)
 */

void __fastcall _lambda_ca9df4dcfe6d5cd8540c8434d0f06187___ResumeCoro_1::operator()_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 80) = *(_QWORD *)(a2 + 40) + 16LL;
  winrt::impl::signal_awaiter::~signal_awaiter(*(winrt::cancellable_promise ***)(a2 + 80));
}
