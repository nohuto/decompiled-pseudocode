/*
 * XREFs of ?GetChromeConfigurationForView@CDesktopPositioner@@WBA@EAAJPEAUIApplicationView@@PEAHPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x180510140
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDesktopPositioner::GetChromeConfigurationForView(
        __int64 a1,
        struct IApplicationView *a2,
        int *a3,
        struct IApplicationViewTitlebarConfiguration **a4)
{
  return CDesktopPositioner::GetChromeConfigurationForView((CDesktopPositioner *)(a1 - 16), a2, a3, a4);
}
