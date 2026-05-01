/*
 * XREFs of ?Hide@?$produce@USharedDesktopBackgroundVisualHost@@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@@impl@winrt@@UEAAHXZ @ 0x1805E6390
 * Callers:
 *     <none>
 * Callees:
 *     ?Hide@SharedDesktopBackgroundVisualHost@@QEAAXXZ @ 0x1805E63BC (-Hide@SharedDesktopBackgroundVisualHost@@QEAAXXZ.c)
 */

__int64 __fastcall winrt::impl::produce<SharedDesktopBackgroundVisualHost,winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisual>::Hide(
        __int64 a1)
{
  SharedDesktopBackgroundVisualHost::Hide((SharedDesktopBackgroundVisualHost *)((a1 - 16) & -(__int64)(a1 != 0)));
  return 0LL;
}
