/*
 * XREFs of ?WorkAreaMayHaveChanged@CStartExperienceManager@@UEAAJXZ @ 0x1800B5A50
 * Callers:
 *     CStartExperienceManager::OnDisplayMonitorInfoChangedAsync$_ResumeCoro$1 @ 0x18023A330 (CStartExperienceManager--OnDisplayMonitorInfoChangedAsync$_ResumeCoro$1.c)
 * Callees:
 *     ?PositionMenu@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@W4PositionMenuFlags@1@@Z @ 0x1800B4780 (-PositionMenu@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@W4PositionMenuFlags@.c)
 */

__int64 __fastcall CStartExperienceManager::WorkAreaMayHaveChanged(CStartExperienceManager *this)
{
  int v1; // eax
  unsigned int v2; // ecx

  v1 = CStartExperienceManager::PositionMenu((__int64)this - 40, (__int64)this + 280, 1);
  v2 = 0;
  if ( v1 < 0 )
    return (unsigned int)v1;
  return v2;
}
