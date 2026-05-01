/*
 * XREFs of ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponentWithSite@@UIShellPositionerManager@@UIApplicationViewChangeListener@@UITabletModeChangeListener@@UIShellPositionerActivationHandler@@UIShellPositionerFrameworkViewTypeChangedHandler@@UIShellPositionerPresentationRequestedHandler@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1804D87BC
 * Callers:
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponentWithSite@@UIShellPositionerManager@@UIApplicationViewChangeListener@@UITabletModeChangeListener@@UIShellPositionerActivationHandler@@UIShellPositionerFrameworkViewTypeChangedHandler@@UIShellPositionerPresentationRequestedHandler@@@WRL@Microsoft@@WBI@EAAPEAXI@Z @ 0x1804D8720 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponen_ea_1804D8720.c)
 * Callees:
 *     ??1?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00U?$ImplementsMarker@VCWRLObjectWithSite@@@Details@23@VCImmersiveShellComponent@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x1801B3620 (--1-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00U-$ImplementsMarke_ea_1801B3620.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_DWORD *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CImmersiveShellComponentWithSite,IShellPositionerManager,IApplicationViewChangeListener,ITabletModeChangeListener,IShellPositionerActivationHandler,IShellPositionerFrameworkViewTypeChangedHandler,IShellPositionerPresentationRequestedHandler>::`vector deleting destructor'(
        _DWORD *a1,
        char a2)
{
  a1[35] = -1073741823;
  Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>,CImmersiveShellComponent>::~ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>,CImmersiveShellComponent>((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x90);
  return a1;
}
