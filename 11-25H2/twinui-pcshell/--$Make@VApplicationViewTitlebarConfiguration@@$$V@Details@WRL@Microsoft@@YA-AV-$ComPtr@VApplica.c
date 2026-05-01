/*
 * XREFs of ??$Make@VApplicationViewTitlebarConfiguration@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewTitlebarConfiguration@@@12@XZ @ 0x180117220
 * Callers:
 *     ?SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@PEAUIApplicationViewTitlebarConfiguration@@W4SET_IMM_APP_POS@@W4SESSION_IDLE_STATE@@PEAPEAXPEAUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@W4APPLICATION_VIEW_CLOAK_TYPE@@W4ZBID@@@Z @ 0x18003F800 (-SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPD.c)
 *     ?_CreateTitlebarConfiguration@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x180116E14 (-_CreateTitlebarConfiguration@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplication.c)
 *     ?CreateTitlebarConfiguration@FullScreenPositionerHelpers@@YAJPEAUIApplicationView@@_NPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x180325254 (-CreateTitlebarConfiguration@FullScreenPositionerHelpers@@YAJPEAUIApplicationView@@_NPEAPEAUIApp.c)
 *     ?_CreateTitleBarConfiguration@HolographicPositioner@@AEAAJPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1803FBF90 (-_CreateTitleBarConfiguration@HolographicPositioner@@AEAAJPEAPEAUIApplicationViewTitlebarConfigu.c)
 *     ?_CreateTitlebarConfiguration@SurfaceHubPositioner@@AEAAJPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1804DBD1C (-_CreateTitlebarConfiguration@SurfaceHubPositioner@@AEAAJPEAPEAUIApplicationViewTitlebarConfigur.c)
 *     ?GetChromeConfigurationForView@VoiceAssistantPositioner@@UEAAJPEAUIApplicationView@@PEAHPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1804E7440 (-GetChromeConfigurationForView@VoiceAssistantPositioner@@UEAAJPEAUIApplicationView@@PEAHPEAPEAUI.c)
 *     ?CreateTitlebarConfiguration@TabletModePositioner@@CAJPEAUIApplicationView@@PEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1804F6108 (-CreateTitlebarConfiguration@TabletModePositioner@@CAJPEAUIApplicationView@@PEAPEAUIApplicationV.c)
 * Callees:
 *     ??0ApplicationViewTitlebarConfiguration@@QEAA@XZ @ 0x180117280 (--0ApplicationViewTitlebarConfiguration@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@QEAAXPEAVApplicationViewTitlebarConfiguration@@@Z @ 0x1802C90AC (-Attach@-$ComPtr@VApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@QEAAXPEAVApplicationView.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::Make<ApplicationViewTitlebarConfiguration,>(_QWORD *a1)
{
  ApplicationViewTitlebarConfiguration *v2; // rax
  ApplicationViewTitlebarConfiguration *v3; // rdi
  ApplicationViewTitlebarConfiguration *v4; // rax

  *a1 = 0LL;
  v2 = (ApplicationViewTitlebarConfiguration *)operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = v2;
  if ( v2 )
  {
    memset_0(v2, 0, 0x60uLL);
    v4 = ApplicationViewTitlebarConfiguration::ApplicationViewTitlebarConfiguration(v3);
    Microsoft::WRL::ComPtr<ApplicationViewTitlebarConfiguration>::Attach(a1, v4);
  }
  return a1;
}
