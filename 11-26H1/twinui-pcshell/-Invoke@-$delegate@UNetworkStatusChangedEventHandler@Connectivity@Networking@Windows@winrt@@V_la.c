/*
 * XREFs of ?Invoke@?$delegate@UNetworkStatusChangedEventHandler@Connectivity@Networking@Windows@winrt@@V_lambda_703cae52a218d703be11aa7a1a82a7bd_@@@impl@winrt@@UEAAHPEAX@Z @ 0x1806706D0
 * Callers:
 *     <none>
 * Callees:
 *     ??$?RAEBUIInspectable@Foundation@Windows@winrt@@@_lambda_703cae52a218d703be11aa7a1a82a7bd_@@QEBA?A_PAEBUIInspectable@Foundation@Windows@winrt@@@Z @ 0x18066FF08 (--$-RAEBUIInspectable@Foundation@Windows@winrt@@@_lambda_703cae52a218d703be11aa7a1a82a7bd_@@QEBA.c)
 */

__int64 __fastcall winrt::impl::delegate<winrt::Windows::Networking::Connectivity::NetworkStatusChangedEventHandler,_lambda_703cae52a218d703be11aa7a1a82a7bd_>::Invoke(
        __int64 a1,
        struct IUnknownVtbl *a2)
{
  struct IUnknown v3; // [rsp+38h] [rbp+10h] BYREF

  v3.lpVtbl = a2;
  _lambda_703cae52a218d703be11aa7a1a82a7bd_::operator()<winrt::Windows::Foundation::IInspectable const &>(
    (__int64 *)(a1 + 16),
    &v3);
  return 0LL;
}
