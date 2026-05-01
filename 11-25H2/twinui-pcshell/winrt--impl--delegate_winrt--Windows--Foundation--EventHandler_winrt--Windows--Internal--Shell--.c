/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Foundation::EventHandler_winrt::Windows::Internal::Shell::ProcessInfoChangedEventArgs___lambda_f7708ede42cbb90dfb878b61b26817f2___::Invoke @ 0x180634E10
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_f7708ede42cbb90dfb878b61b26817f2_::operator()_winrt::Windows::Internal::Shell::ProcessInfoChangedEventArgs_ @ 0x180630388 (_lambda_f7708ede42cbb90dfb878b61b26817f2_--operator()_winrt--Windows--Internal--Shell--ProcessIn.c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::EventHandler_winrt::Windows::Internal::Shell::ProcessInfoChangedEventArgs___lambda_f7708ede42cbb90dfb878b61b26817f2___::Invoke(
        __int64 a1,
        _QWORD *a2,
        __int64 a3)
{
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  v4 = a3;
  lambda_f7708ede42cbb90dfb878b61b26817f2_::operator()_winrt::Windows::Internal::Shell::ProcessInfoChangedEventArgs_(
    a1 + 16,
    a2,
    &v4);
  return 0LL;
}
