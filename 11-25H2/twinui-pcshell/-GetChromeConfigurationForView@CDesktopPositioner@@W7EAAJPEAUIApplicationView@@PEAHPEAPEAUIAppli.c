/*
 * XREFs of ?GetChromeConfigurationForView@CDesktopPositioner@@W7EAAJPEAUIApplicationView@@PEAHPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1804EEB30
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
  return CDesktopPositioner::GetChromeConfigurationForView((CDesktopPositioner *)(a1 - 8), a2, a3, a4);
}
