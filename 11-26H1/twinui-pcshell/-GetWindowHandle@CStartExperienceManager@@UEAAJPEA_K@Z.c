/*
 * XREFs of ?GetWindowHandle@CStartExperienceManager@@UEAAJPEA_K@Z @ 0x1801FF0C0
 * Callers:
 *     ?GetStartBox@CStartExperienceManager@@UEAAJPEAURect@Foundation@Windows@@@Z @ 0x180389410 (-GetStartBox@CStartExperienceManager@@UEAAJPEAURect@Foundation@Windows@@@Z.c)
 * Callees:
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180074CE0 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 */

__int64 __fastcall CStartExperienceManager::GetWindowHandle(CStartExperienceManager *this, unsigned __int64 *a2)
{
  ExperienceManagerUtils *v2; // rcx

  v2 = (ExperienceManagerUtils *)*((_QWORD *)this + 38);
  if ( !v2 )
    return 2147947423LL;
  *a2 = ExperienceManagerUtils::WindowFromViewWrapper(
          v2,
          (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)a2);
  return 0LL;
}
