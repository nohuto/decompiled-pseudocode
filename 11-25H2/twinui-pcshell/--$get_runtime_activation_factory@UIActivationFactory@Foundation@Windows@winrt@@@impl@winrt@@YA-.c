/*
 * XREFs of ??$get_runtime_activation_factory@UIActivationFactory@Foundation@Windows@winrt@@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@PEAPEAX@Z @ 0x18020B204
 * Callers:
 *     ??$get_activation_factory@UIActivationFactory@Foundation@Windows@winrt@@@winrt@@YA?AUIActivationFactory@Foundation@Windows@0@AEBUhstring@param@0@@Z @ 0x1801BB490 (--$get_activation_factory@UIActivationFactory@Foundation@Windows@winrt@@@winrt@@YA-AUIActivation.c)
 *     ??$try_get_activation_factory@UIActivationFactory@Foundation@Windows@winrt@@@impl@winrt@@YA?AUIActivationFactory@Foundation@Windows@1@AEBUhstring@param@1@PEAUhresult_error@1@@Z @ 0x1802C3A3C (--$try_get_activation_factory@UIActivationFactory@Foundation@Windows@winrt@@@impl@winrt@@YA-AUIA.c)
 * Callees:
 *     ??$get_runtime_activation_factory_impl@$00@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@AEBUguid@1@PEAPEAX@Z @ 0x18020B22C (--$get_runtime_activation_factory_impl@$00@impl@winrt@@YA-AUhresult@1@AEBUhstring@param@1@AEBUgu.c)
 */

__int64 __fastcall winrt::impl::get_runtime_activation_factory<winrt::Windows::Foundation::IActivationFactory>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  winrt::impl::get_runtime_activation_factory_impl<1>(a1, a2, L"5", a3);
  return a1;
}
