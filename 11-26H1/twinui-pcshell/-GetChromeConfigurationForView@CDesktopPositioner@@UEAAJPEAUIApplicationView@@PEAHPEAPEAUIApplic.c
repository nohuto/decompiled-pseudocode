/*
 * XREFs of ?GetChromeConfigurationForView@CDesktopPositioner@@UEAAJPEAUIApplicationView@@PEAHPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1805100E0
 * Callers:
 *     ?GetChromeConfigurationForView@CDesktopPositioner@@W7EAAJPEAUIApplicationView@@PEAHPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x180510130 (-GetChromeConfigurationForView@CDesktopPositioner@@W7EAAJPEAUIApplicationView@@PEAHPEAPEAUIAppli.c)
 *     ?GetChromeConfigurationForView@CDesktopPositioner@@WBA@EAAJPEAUIApplicationView@@PEAHPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x180510140 (-GetChromeConfigurationForView@CDesktopPositioner@@WBA@EAAJPEAUIApplicationView@@PEAHPEAPEAUIApp.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_CreateTitlebarConfiguration@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1800AF4A0 (-_CreateTitlebarConfiguration@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplication.c)
 */

__int64 __fastcall CDesktopPositioner::GetChromeConfigurationForView(
        CDesktopPositioner *this,
        struct IApplicationView *a2,
        int *a3,
        struct IApplicationViewTitlebarConfiguration **a4)
{
  int TitlebarConfiguration; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a4 = 0LL;
  *a3 = 1;
  TitlebarConfiguration = CDesktopPositioner::_CreateTitlebarConfiguration(this, a2, a4);
  v5 = TitlebarConfiguration;
  if ( TitlebarConfiguration >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x18B,
    (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)(unsigned int)TitlebarConfiguration);
  return v5;
}
