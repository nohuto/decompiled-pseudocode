/*
 * XREFs of ?GetTrustLevel@?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@UDisableCausality@WRL@Microsoft@@@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z @ 0x18001E9B0
 * Callers:
 *     ?GetTrustLevel@?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@UDisableCausality@WRL@Microsoft@@@Internal@Windows@@WLA@EAAJPEAW4TrustLevel@@@Z @ 0x18001E9D0 (-GetTrustLevel@-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionComp_ea_18001E9D0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::CNoResult,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::DisableCausality>::GetTrustLevel(
        __int64 a1,
        _DWORD *a2)
{
  *a2 = *(_DWORD *)(a1 + 240);
  return 0LL;
}
