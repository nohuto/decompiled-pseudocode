/*
 * XREFs of ?AddRef@?$produce_base@VInteractionTracker@SnapInteraction@@UIInspectable@Foundation@Windows@winrt@@X@impl@winrt@@UEAAIXZ @ 0x18057AEC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce_base<SnapInteraction::InteractionTracker,winrt::Windows::Foundation::IInspectable,void>::AddRef(
        __int64 a1)
{
  __int64 v2; // rcx

  v2 = a1 + 8;
  if ( !a1 )
    v2 = 24LL;
  return winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::RemoteDesktopProviderInfo,winrt::Windows::Internal::Shell::RemoteDesktopProviderInfo>::AddRef(v2);
}
