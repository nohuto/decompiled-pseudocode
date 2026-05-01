/*
 * XREFs of ?GetIids@?$implements@UPinManager@implementation@Shell@Internal@Windows@winrt@@U13456@UIPinManagerInterop3@@Uimmersive_shell_component@6@@winrt@@QEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1805C2444
 * Callers:
 *     ?GetIids@?$produce_base@UPinManager@implementation@Shell@Internal@Windows@winrt@@UIPinManager@3456@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x1805C2460 (-GetIids@-$produce_base@UPinManager@implementation@Shell@Internal@Windows@winrt@@UIPinManager@34.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::implementation::PinManager,winrt::Windows::Internal::Shell::PinManager,IPinManagerInterop3,winrt::immersive_shell_component>::GetIids(
        __int64 a1,
        unsigned int *a2,
        _QWORD *a3)
{
  return winrt::impl::root_implements<winrt::immersive_shell_component,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::GetIids(
           a1 + 48,
           a2,
           a3);
}
