/*
 * XREFs of ?InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ @ 0x180027CC0
 * Callers:
 *     ?RuntimeClassInitialize@CApplicationManager@@QEAAJXZ @ 0x18004B774 (-RuntimeClassInitialize@CApplicationManager@@QEAAJXZ.c)
 *     ?RuntimeClassInitialize@CClassicWindowManager@@QEAAJPEAUIImmersiveSystemModeInternal@@@Z @ 0x18004D15C (-RuntimeClassInitialize@CClassicWindowManager@@QEAAJPEAUIImmersiveSystemModeInternal@@@Z.c)
 *     ?s_CreateInstance@CImmersiveMode@@SAJAEBU_GUID@@PEAPEAX@Z @ 0x18004E39C (-s_CreateInstance@CImmersiveMode@@SAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??0CDesktopPositioner@@QEAA@XZ @ 0x18004E814 (--0CDesktopPositioner@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CAppTransitionManager@@QEAAJXZ @ 0x180080EC0 (-RuntimeClassInitialize@CAppTransitionManager@@QEAAJXZ.c)
 *     ?RuntimeClassInitialize@XamlAltTabViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z @ 0x1800D3244 (-RuntimeClassInitialize@XamlAltTabViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z.c)
 *     ?RuntimeClassInitialize@CMultitaskingViewServiceProvider@@QEAAJXZ @ 0x1800F9BD8 (-RuntimeClassInitialize@CMultitaskingViewServiceProvider@@QEAAJXZ.c)
 *     ?RuntimeClassInitialize@CMultitaskingViewManager@@QEAAJAEBUMultitaskingViewManagerInitializeArgs@1@@Z @ 0x1801AA3A8 (-RuntimeClassInitialize@CMultitaskingViewManager@@QEAAJAEBUMultitaskingViewManagerInitializeArgs.c)
 *     ?RuntimeClassInitialize@CAltTabViewHost@@QEAAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInternal@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUIMultitaskingViewVisibilityServiceInternal@@PEAUIMultitaskingViewGestureState@@PEAUIApplicationViewCollection@@PEAUITouchGestureSettings@@@Z @ 0x18049C6F0 (-RuntimeClassInitialize@CAltTabViewHost@@QEAAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManage.c)
 *     ?RuntimeClassInitialize@CPPIAllUpViewHost@@QEAAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInternal@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUIMultitaskingViewVisibilityServiceInternal@@PEAUITabletModeViewManager@@@Z @ 0x18049E770 (-RuntimeClassInitialize@CPPIAllUpViewHost@@QEAAJPEAUIMultitaskingData@@PEAUIMultitaskingViewMana.c)
 *     ??$MakeAndInitialize@VDesktopOperation@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVDesktopOperation@@@Z @ 0x1804F196C (--$MakeAndInitialize@VDesktopOperation@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVDesktopOperation.c)
 *     ??$MakeAndInitialize@VAppSwitchOperation@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVAppSwitchOperation@@@Z @ 0x180500A34 (--$MakeAndInitialize@VAppSwitchOperation@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVAppSwitchOpera.c)
 *     ??$MakeAndInitialize@VWindowArrangementOperation@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVWindowArrangementOperation@@@Z @ 0x180501E80 (--$MakeAndInitialize@VWindowArrangementOperation@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVWindow.c)
 *     ??$MakeAndInitialize@VAppResizeOperation@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVAppResizeOperation@@@Z @ 0x180502A64 (--$MakeAndInitialize@VAppResizeOperation@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVAppResizeOpera.c)
 *     ??$MakeAndInitialize@VBackOperation@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVBackOperation@@@Z @ 0x180503564 (--$MakeAndInitialize@VBackOperation@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVBackOperation@@@Z.c)
 *     ??$MakeAndInitialize@VTabletModePositionerOperation@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVTabletModePositionerOperation@@@Z @ 0x180503A80 (--$MakeAndInitialize@VTabletModePositionerOperation@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVTab.c)
 *     ?RuntimeClassInitialize@XamlGamingTaskViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z @ 0x18067B7B0 (-RuntimeClassInitialize@XamlGamingTaskViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z.c)
 *     ??0TaskViewHost@@QEAA@XZ @ 0x18067E868 (--0TaskViewHost@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@XamlSnapAssistViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z @ 0x1806829CC (-RuntimeClassInitialize@XamlSnapAssistViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z.c)
 *     ?RuntimeClassInitialize@VirtualDesktopSwitcherHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z @ 0x180687D1C (-RuntimeClassInitialize@VirtualDesktopSwitcherHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z.c)
 * Callees:
 *     ?_ShouldCheckApartments@@YA_NW4ApartmentCheckEnum@@@Z @ 0x18002670C (-_ShouldCheckApartments@@YA_NW4ApartmentCheckEnum@@@Z.c)
 *     ?SHCoGetApartmentId@@YAJPEAK@Z @ 0x180027530 (-SHCoGetApartmentId@@YAJPEAK@Z.c)
 */

__int64 __fastcall CObjectWithThreadUseDetection::InitApartmentId(CObjectWithThreadUseDetection *this)
{
  char v2; // al
  unsigned int v3; // edx

  v2 = _ShouldCheckApartments(*((_DWORD *)this + 11));
  v3 = 0;
  if ( v2 )
    return (unsigned int)SHCoGetApartmentId((unsigned int *)this + 10);
  return v3;
}
