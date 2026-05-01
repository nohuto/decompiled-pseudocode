/*
 * XREFs of ?IsValidHwnd@CUndockedSearchAppExperienceManagerConfig@@UEAA_NPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18021A4B0
 * Callers:
 *     <none>
 * Callees:
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18002EB20 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 */

bool __fastcall CUndockedSearchAppExperienceManagerConfig::IsValidHwnd(
        CUndockedSearchAppExperienceManagerConfig *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2)
{
  HWND v3; // rax

  return a2 && (v3 = (HWND)ExperienceManagerUtils::WindowFromViewWrapper(a2, a2)) != 0LL && IsWindow(v3);
}
