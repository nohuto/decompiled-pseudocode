/*
 * XREFs of ??$GetActivationFactory@UIAsyncCausalityTracerStatics@Diagnostics@Foundation@Windows@@@Foundation@Windows@@YAJPEAUHSTRING__@@PEAPEAUIAsyncCausalityTracerStatics@Diagnostics@01@@Z @ 0x180024AE4
 * Callers:
 *     ?InitCausality@?$AsyncBase@U?$IAsyncOperationCompletedHandler@PEAUHSTRING__@@@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@CAHPEAT_RTL_RUN_ONCE@@PEAXPEAPEAX@Z @ 0x180033B40 (-InitCausality@-$AsyncBase@U-$IAsyncOperationCompletedHandler@PEAUHSTRING__@@@Foundation@Windows.c)
 *     Microsoft::WRL::AsyncBase_Windows::Foundation::IAsyncActionCompletedHandler_Microsoft::WRL::Details::Nil_1_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::StageOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::InitCausality @ 0x180053D60 (Microsoft--WRL--AsyncBase_Windows--Foundation--IAsyncActionCompletedHandler_Microso_ea_180053D60.c)
 *     ?InitCausality@?$AsyncBase@U?$IAsyncOperationCompletedHandler@_N@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@CAHPEAT_RTL_RUN_ONCE@@PEAXPEAPEAX@Z @ 0x18007DEF0 (-InitCausality@-$AsyncBase@U-$IAsyncOperationCompletedHandler@_N@Foundation@Windows@@VNil@Detail.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Foundation::GetActivationFactory<Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics>(
        __int64 a1)
{
  return RoGetActivationFactory(a1, &GUID_50850b26_267e_451b_a890_ab6a370245ee, &Microsoft::WRL::gCausality);
}
