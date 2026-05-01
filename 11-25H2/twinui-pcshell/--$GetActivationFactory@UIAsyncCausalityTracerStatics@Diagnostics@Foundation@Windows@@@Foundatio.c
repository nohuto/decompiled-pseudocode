/*
 * XREFs of ??$GetActivationFactory@UIAsyncCausalityTracerStatics@Diagnostics@Foundation@Windows@@@Foundation@Windows@@YAJPEAUHSTRING__@@PEAPEAUIAsyncCausalityTracerStatics@Diagnostics@01@@Z @ 0x18033BFCC
 * Callers:
 *     ?InitCausality@?$AsyncBase@UIAsyncActionCompletedHandler@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncCausalityOptions@$1?c_gammaFlashAsyncOperationName@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@CAHPEAT_RTL_RUN_ONCE@@PEAXPEAPEAX@Z @ 0x180348060 (-InitCausality@-$AsyncBase@UIAsyncActionCompletedHandler@Foundation@Windows@@VNil@Details@WRL@Mi.c)
 *     ?InitCausality@?$AsyncBase@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@CAHPEAT_RTL_RUN_ONCE@@PEAXPEAPEAX@Z @ 0x1803EEB10 (-InitCausality@-$AsyncBase@U-$IAsyncOperationCompletedHandler@PEAU-$IVectorView@PEAVGetCurrentAc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Foundation::GetActivationFactory<Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics>(
        __int64 a1)
{
  return RoGetActivationFactory(a1, &GUID_50850b26_267e_451b_a890_ab6a370245ee, &Microsoft::WRL::gCausality);
}
