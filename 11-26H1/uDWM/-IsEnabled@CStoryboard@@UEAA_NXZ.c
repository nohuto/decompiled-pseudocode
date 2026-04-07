/*
 * XREFs of ?IsEnabled@CStoryboard@@UEAA_NXZ @ 0x1800429C0
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckAnyPreference@CDesktopManager@@SA_NK@Z @ 0x1800429A0 (-CheckAnyPreference@CDesktopManager@@SA_NK@Z.c)
 *     ?IsScreenRotating@CWindowList@@QEAA_NXZ @ 0x180042A20 (-IsScreenRotating@CWindowList@@QEAA_NXZ.c)
 *     ?IsWindowAnimationEnabled@CDesktopManager@@SA_NXZ @ 0x180044858 (-IsWindowAnimationEnabled@CDesktopManager@@SA_NXZ.c)
 */

char __fastcall CStoryboard::IsEnabled(CStoryboard *this)
{
  __int64 v1; // rcx
  char v2; // bl
  __int64 v3; // rax

  v2 = 0;
  if ( !CWindowList::IsScreenRotating(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53)) )
  {
    v3 = *(_QWORD *)(v1 + 544);
    if ( (!v3 || *(_DWORD *)(v3 + 72) != 65 || !*(_BYTE *)(v3 + 68))
      && CDesktopManager::IsWindowAnimationEnabled()
      && !(unsigned __int8)CDesktopManager::CheckAnyPreference(0x10u) )
    {
      return 1;
    }
  }
  return v2;
}
