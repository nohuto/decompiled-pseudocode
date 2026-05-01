/*
 * XREFs of ?get_IsFailed@?$produce@USharedDesktopBackgroundVisualFinishedArgs@implementation@Themes@UI@Internal@Windows@winrt@@UISharedDesktopBackgroundVisualFinishedArgs@34567@@impl@winrt@@UEAAHPEA_N@Z @ 0x1805EAC30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::UI::Themes::implementation::SharedDesktopBackgroundVisualFinishedArgs,winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisualFinishedArgs>::get_IsFailed(
        __int64 a1,
        _BYTE *a2)
{
  __int64 v2; // rax

  v2 = a1 + 9;
  if ( !a1 )
    v2 = 25LL;
  *a2 = *(_BYTE *)v2;
  return 0LL;
}
