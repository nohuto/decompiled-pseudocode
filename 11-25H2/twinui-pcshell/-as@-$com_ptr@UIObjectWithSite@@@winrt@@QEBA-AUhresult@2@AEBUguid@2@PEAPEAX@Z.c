/*
 * XREFs of ?as@?$com_ptr@UIObjectWithSite@@@winrt@@QEBA?AUhresult@2@AEBUguid@2@PEAPEAX@Z @ 0x1802065E4
 * Callers:
 *     ?CreateInstance@?$wrl_factory_for_winrt_com_class@VGamingPosturePositioner@@@wil@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1804E2290 (-CreateInstance@-$wrl_factory_for_winrt_com_class@VGamingPosturePositioner@@@wil@@UEAAJPEAUIUnkn.c)
 *     ?CreateInstance@?$wrl_factory_for_winrt_com_class@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@wil@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180554FF0 (-CreateInstance@-$wrl_factory_for_winrt_com_class@UDragDropSimulatorComponent@implementation@Dra.c)
 *     ?CreateInstance@TouchGestureComponentClassFactory@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180567530 (-CreateInstance@TouchGestureComponentClassFactory@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?CreateInstance@?$wrl_factory_for_winrt_com_class@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@@wil@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1805E1450 (-CreateInstance@-$wrl_factory_for_winrt_com_class@UThemeCoordinator@implementation@Themes@UI@Int.c)
 *     ?CreateInstance@?$wrl_factory_for_winrt_com_class@VCopilotHotkeyManager@@@wil@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1805FE9C0 (-CreateInstance@-$wrl_factory_for_winrt_com_class@VCopilotHotkeyManager@@@wil@@UEAAJPEAUIUnknown.c)
 *     ?CreateInstance@?$wrl_factory_for_winrt_com_class@VRdpShellExtensionHost@@@wil@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18064DCB0 (-CreateInstance@-$wrl_factory_for_winrt_com_class@VRdpShellExtensionHost@@@wil@@UEAAJPEAUIUnknow.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_DWORD *__fastcall winrt::com_ptr<IObjectWithSite>::as(_QWORD *a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  *a2 = (**(__int64 (__fastcall ***)(_QWORD, __int64, __int64))*a1)(*a1, a3, a4);
  return a2;
}
