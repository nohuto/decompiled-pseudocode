/*
 * XREFs of ?Hide@?$produce@USharedDesktopBackgroundVisualHost@@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@@impl@winrt@@UEAAHXZ @ 0x18060AFD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Hide@SharedDesktopBackgroundVisualHost@@QEAAXXZ @ 0x18060AFFC (-Hide@SharedDesktopBackgroundVisualHost@@QEAAXXZ.c)
 */

__int64 __fastcall winrt::impl::produce<SharedDesktopBackgroundVisualHost,winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisual>::Hide(
        __int64 a1)
{
  SharedDesktopBackgroundVisualHost::Hide((SharedDesktopBackgroundVisualHost *)((a1 - 16) & -(__int64)(a1 != 0)));
  return 0LL;
}
