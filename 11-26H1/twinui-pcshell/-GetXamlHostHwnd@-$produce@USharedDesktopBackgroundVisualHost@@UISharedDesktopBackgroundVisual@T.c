/*
 * XREFs of ?GetXamlHostHwnd@?$produce@USharedDesktopBackgroundVisualHost@@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@@impl@winrt@@UEAAHPEA_K@Z @ 0x18060AE80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce<SharedDesktopBackgroundVisualHost,winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisual>::GetXamlHostHwnd(
        __int64 a1,
        __int64 *a2)
{
  __int64 v2; // rax

  v2 = a1 + 256;
  if ( !a1 )
    v2 = 272LL;
  *a2 = *(_QWORD *)v2 & -(__int64)(*(_QWORD *)v2 != 0LL);
  return 0LL;
}
