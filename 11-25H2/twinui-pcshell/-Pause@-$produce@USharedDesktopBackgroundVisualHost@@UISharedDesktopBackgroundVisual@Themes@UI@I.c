/*
 * XREFs of ?Pause@?$produce@USharedDesktopBackgroundVisualHost@@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@@impl@winrt@@UEAAHXZ @ 0x1805E6C10
 * Callers:
 *     <none>
 * Callees:
 *     ?Pause@SharedDesktopBackgroundVisualHost@@QEAAXXZ @ 0x1805E6C3C (-Pause@SharedDesktopBackgroundVisualHost@@QEAAXXZ.c)
 */

__int64 __fastcall winrt::impl::produce<SharedDesktopBackgroundVisualHost,winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisual>::Pause(
        __int64 a1)
{
  SharedDesktopBackgroundVisualHost::Pause((SharedDesktopBackgroundVisualHost *)((a1 - 16) & -(__int64)(a1 != 0)));
  return 0LL;
}
