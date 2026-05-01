/*
 * XREFs of ?Invoke@?$delegate@U?$AsyncOperationCompletedHandler@ULaunchUriResult@System@Windows@winrt@@@Foundation@Windows@winrt@@V_lambda_a8f92f18f131270a1181fbecf37b830c_@@@impl@winrt@@UEAAHPEAXH@Z @ 0x180626920
 * Callers:
 *     <none>
 * Callees:
 *     ??$?RAEBU?$IAsyncOperation@ULaunchUriResult@System@Windows@winrt@@@Foundation@Windows@winrt@@AEBW4AsyncStatus@123@@_lambda_a8f92f18f131270a1181fbecf37b830c_@@QEBA?A_PAEBU?$IAsyncOperation@ULaunchUriResult@System@Windows@winrt@@@Foundation@Windows@winrt@@AEBW4AsyncStatus@234@@Z @ 0x18061D438 (--$-RAEBU-$IAsyncOperation@ULaunchUriResult@System@Windows@winrt@@@Foundation@Windows@winrt@@AEB.c)
 */

__int64 __fastcall winrt::impl::delegate<winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::Windows::System::LaunchUriResult>,_lambda_a8f92f18f131270a1181fbecf37b830c_>::Invoke(
        __int64 a1,
        __int64 a2,
        int a3)
{
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF
  int v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = a3;
  v4 = a2;
  _lambda_a8f92f18f131270a1181fbecf37b830c_::operator()<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::System::LaunchUriResult> const &,enum winrt::Windows::Foundation::AsyncStatus const &>(
    a1 + 16,
    &v4,
    &v5);
  return 0LL;
}
