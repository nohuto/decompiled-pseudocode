/*
 * XREFs of ?Invoke@?$delegate@UNetworkStatusChangedEventHandler@Connectivity@Networking@Windows@winrt@@V_lambda_76c9288afc5e7a71ff025a45727ad440_@@@impl@winrt@@UEAAHPEAX@Z @ 0x18064A780
 * Callers:
 *     <none>
 * Callees:
 *     ??$?RAEBUIInspectable@Foundation@Windows@winrt@@@_lambda_76c9288afc5e7a71ff025a45727ad440_@@QEBA?A_PAEBUIInspectable@Foundation@Windows@winrt@@@Z @ 0x180649F64 (--$-RAEBUIInspectable@Foundation@Windows@winrt@@@_lambda_76c9288afc5e7a71ff025a45727ad440_@@QEBA.c)
 */

__int64 __fastcall winrt::impl::delegate<winrt::Windows::Networking::Connectivity::NetworkStatusChangedEventHandler,_lambda_76c9288afc5e7a71ff025a45727ad440_>::Invoke(
        __int64 a1,
        struct IUnknownVtbl *a2)
{
  struct IUnknown v3; // [rsp+38h] [rbp+10h] BYREF

  v3.lpVtbl = a2;
  _lambda_76c9288afc5e7a71ff025a45727ad440_::operator()<winrt::Windows::Foundation::IInspectable const &>(
    (__int64 *)(a1 + 16),
    &v3);
  return 0LL;
}
