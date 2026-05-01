/*
 * XREFs of ?IsTabWindowOwner@@YA_NPEAUIApplicationView@@@Z @ 0x1800F1CB8
 * Callers:
 *     ?NumTabItems@AppViewDataSourceAdapter@@UEAAIXZ @ 0x1800F1420 (-NumTabItems@AppViewDataSourceAdapter@@UEAAIXZ.c)
 *     ?ShouldIncludeView@AppViewDataSourceAdapter@@MEAA_NPEAUIApplicationView@@@Z @ 0x1800F20A0 (-ShouldIncludeView@AppViewDataSourceAdapter@@MEAA_NPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180047CDC (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 */

bool __fastcall IsTabWindowOwner(
        __int64 (__fastcall ***a1)(ApplicationViewHelpers *, GUID *, __int64 *),
        struct IApplicationView *a2)
{
  HWND WindowForView; // rax

  WindowForView = (HWND)ApplicationViewHelpers::GetWindowForView(a1, a2);
  return GetPropW(WindowForView, (LPCWSTR)0xA920) != 0LL;
}
