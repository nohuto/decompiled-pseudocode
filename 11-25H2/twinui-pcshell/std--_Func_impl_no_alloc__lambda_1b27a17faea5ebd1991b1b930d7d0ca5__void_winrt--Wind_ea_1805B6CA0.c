/*
 * XREFs of std::_Func_impl_no_alloc__lambda_1b27a17faea5ebd1991b1b930d7d0ca5__void_winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension_::_Do_call @ 0x1805B6CA0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_1b27a17faea5ebd1991b1b930d7d0ca5_::operator() @ 0x1805A8688 (_lambda_1b27a17faea5ebd1991b1b930d7d0ca5_--operator().c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_1b27a17faea5ebd1991b1b930d7d0ca5__void_winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension_::_Do_call(
        __int64 a1,
        __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v2 = *a2;
  *a2 = 0LL;
  v3 = v2;
  lambda_1b27a17faea5ebd1991b1b930d7d0ca5_::operator()(
    a1,
    (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v3);
}
