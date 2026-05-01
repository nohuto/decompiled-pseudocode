/*
 * XREFs of ?get_WasLoaded@?$produce@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UISnapFlyoutInstance@34567@@impl@winrt@@UEAAHPEA_N@Z @ 0x180591880
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance,winrt::Windows::Internal::Shell::SnapComponent::ISnapFlyoutInstance>::get_WasLoaded(
        __int64 a1,
        _BYTE *a2)
{
  __int64 v2; // rax

  v2 = a1 + 327;
  if ( !a1 )
    v2 = 343LL;
  *a2 = *(_BYTE *)v2;
  return 0LL;
}
