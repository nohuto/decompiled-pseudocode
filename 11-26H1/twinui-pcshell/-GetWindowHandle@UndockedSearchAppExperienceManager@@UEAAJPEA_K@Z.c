/*
 * XREFs of ?GetWindowHandle@UndockedSearchAppExperienceManager@@UEAAJPEA_K@Z @ 0x180075870
 * Callers:
 *     <none>
 * Callees:
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180074CE0 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 */

__int64 __fastcall UndockedSearchAppExperienceManager::GetWindowHandle(
        UndockedSearchAppExperienceManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2)
{
  ExperienceManagerUtils *v3; // rcx
  __int64 v4; // rax

  *(_QWORD *)a2 = 0LL;
  v3 = (ExperienceManagerUtils *)*((_QWORD *)this + 7);
  if ( !v3 )
    return 2147943568LL;
  v4 = ExperienceManagerUtils::WindowFromViewWrapper(v3, a2);
  *(_QWORD *)a2 = v4;
  return v4 == 0 ? 0x8007139F : 0;
}
