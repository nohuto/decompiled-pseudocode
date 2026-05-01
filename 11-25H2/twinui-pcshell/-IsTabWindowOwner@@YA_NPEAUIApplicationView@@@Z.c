/*
 * XREFs of ?IsTabWindowOwner@@YA_NPEAUIApplicationView@@@Z @ 0x180173464
 * Callers:
 *     ?NumTabItems@AppViewDataSourceAdapter@@UEAAIXZ @ 0x1801733B0 (-NumTabItems@AppViewDataSourceAdapter@@UEAAIXZ.c)
 *     ?ShouldIncludeView@AppViewDataSourceAdapter@@MEAA_NPEAUIApplicationView@@@Z @ 0x180176350 (-ShouldIncludeView@AppViewDataSourceAdapter@@MEAA_NPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x18005556C (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 */

bool __fastcall IsTabWindowOwner(
        __int64 (__fastcall ***a1)(ApplicationViewHelpers *, GUID *, __int64 *),
        struct IApplicationView *a2)
{
  HWND WindowForView; // rax

  WindowForView = (HWND)ApplicationViewHelpers::GetWindowForView(a1, a2);
  return GetPropW(WindowForView, (LPCWSTR)0xA920) != 0LL;
}
