/*
 * XREFs of ?InitCausality@?$AsyncBase@U?$IAsyncOperationCompletedHandler@PEAUHSTRING__@@@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@CAHPEAT_RTL_RUN_ONCE@@PEAXPEAPEAX@Z @ 0x180033B40
 * Callers:
 *     <none>
 * Callees:
 *     ??$GetActivationFactory@UIAsyncCausalityTracerStatics@Diagnostics@Foundation@Windows@@@Foundation@Windows@@YAJPEAUHSTRING__@@PEAPEAUIAsyncCausalityTracerStatics@Diagnostics@01@@Z @ 0x180024AE4 (--$GetActivationFactory@UIAsyncCausalityTracerStatics@Diagnostics@Foundation@Windows@@@Foundatio.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002E084 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x1800B9110 (__security_check_cookie.c)
 */

_BOOL8 __fastcall Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncOperationCompletedHandler<HSTRING__ *>,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::InitCausality(
        PINIT_ONCE InitOnce,
        PVOID Parameter,
        PVOID *Context)
{
  HSTRING_HEADER hstringHeader; // [rsp+20h] [rbp-38h] BYREF
  __int64 v5; // [rsp+38h] [rbp-20h]

  v5 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Foundation.Diagnostics.AsyncCausalityTracer",
    0x34u,
    0x33u);
  return (int)Windows::Foundation::GetActivationFactory<Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics>(v5) >= 0;
}
