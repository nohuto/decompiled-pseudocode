/*
 * XREFs of ??$try_get_activation_factory@UAppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@@UIActivationFactory@Foundation@Windows@5@@winrt@@YA?A_PXZ @ 0x1802C39DC
 * Callers:
 *     _anonymous_namespace_::TryGetAUMIDFromAppExtensionCatalog @ 0x1800F4878 (_anonymous_namespace_--TryGetAUMIDFromAppExtensionCatalog.c)
 * Callees:
 *     ??$try_get_activation_factory@UIActivationFactory@Foundation@Windows@winrt@@@impl@winrt@@YA?AUIActivationFactory@Foundation@Windows@1@AEBUhstring@param@1@PEAUhresult_error@1@@Z @ 0x1802C3A3C (--$try_get_activation_factory@UIActivationFactory@Foundation@Windows@winrt@@@impl@winrt@@YA-AUIA.c)
 */

__int64 __fastcall winrt::try_get_activation_factory<winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension,winrt::Windows::Foundation::IActivationFactory>(
        __int64 a1)
{
  _DWORD *v3; // [rsp+20h] [rbp-28h] BYREF
  _DWORD v4[4]; // [rsp+28h] [rbp-20h] BYREF
  const wchar_t *v5; // [rsp+38h] [rbp-10h]

  if ( aWindowsudkAppl_0[54] )
    abort();
  v4[0] = 1;
  v5 = L"WindowsUdk.ApplicationModel.AppExtensions.AppExtension";
  v4[1] = 54;
  v3 = v4;
  winrt::impl::try_get_activation_factory<winrt::Windows::Foundation::IActivationFactory>(a1, &v3);
  return a1;
}
