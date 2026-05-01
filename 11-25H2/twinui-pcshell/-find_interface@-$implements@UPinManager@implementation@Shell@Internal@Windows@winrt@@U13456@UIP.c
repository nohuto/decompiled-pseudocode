/*
 * XREFs of ?find_interface@?$implements@UPinManager@implementation@Shell@Internal@Windows@winrt@@U13456@UIPinManagerInterop3@@Uimmersive_shell_component@6@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1805C8F40
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@U?$find_iid_traits@UPinManager@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UIPinManagerInterop3@@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UPinManager@implementation@Shell@Internal@Windows@winrt@@@12@@Z @ 0x1805BDF98 (--$find@U-$find_iid_traits@UPinManager@implementation@Shell@Internal@Windows@winrt@_ea_1805BDF98.c)
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::implementation::PinManager,winrt::Windows::Internal::Shell::PinManager,IPinManagerInterop3,winrt::immersive_shell_component>::find_interface(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rcx
  bool v3; // zf
  __int64 v6[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = a1 - 48;
  v3 = *a2 == winrt::impl::guid_v<winrt::Windows::Internal::Shell::IPinManager>;
  v6[0] = v2;
  v6[1] = (__int64)a2;
  if ( v3 && a2[1] == 0x5FBE5583B74A64AFLL )
    return (v2 + 8) & -(__int64)(v2 != 0);
  else
    return winrt::impl::interface_list<IPinManagerInterop3,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::implementation::PinManager>>(v6);
}
