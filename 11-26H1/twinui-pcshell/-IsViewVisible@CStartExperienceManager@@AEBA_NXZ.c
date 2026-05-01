/*
 * XREFs of ?IsViewVisible@CStartExperienceManager@@AEBA_NXZ @ 0x1801FD428
 * Callers:
 *     ?InputHostHiding@CStartExperienceManager@@UEAAJPEAUHWND__@@W4IHM_DISPLAY_MODE@@@Z @ 0x1800B6A20 (-InputHostHiding@CStartExperienceManager@@UEAAJPEAUHWND__@@W4IHM_DISPLAY_MODE@@@Z.c)
 *     ?InputHostShowing@CStartExperienceManager@@UEAAJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_MODE@@11@Z @ 0x1801FD390 (-InputHostShowing@CStartExperienceManager@@UEAAJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_MODE@@11@.c)
 *     CStartExperienceManager::OnDisplayMonitorInfoChangedAsync$_ResumeCoro$1 @ 0x18023A330 (CStartExperienceManager--OnDisplayMonitorInfoChangedAsync$_ResumeCoro$1.c)
 * Callees:
 *     <none>
 */

bool __fastcall CStartExperienceManager::IsViewVisible(CStartExperienceManager *this)
{
  char v1; // dl

  v1 = 0;
  if ( this != (CStartExperienceManager *)-320LL )
    return *((_DWORD *)this + 90) == 2;
  return v1;
}
