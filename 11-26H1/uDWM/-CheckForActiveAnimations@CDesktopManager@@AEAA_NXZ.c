/*
 * XREFs of ?CheckForActiveAnimations@CDesktopManager@@AEAA_NXZ @ 0x18001E3CC
 * Callers:
 *     ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x18001C670 (-DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z.c)
 * Callees:
 *     ?IsIdle@CAnimationEngine@@QEAA_NXZ @ 0x18001D650 (-IsIdle@CAnimationEngine@@QEAA_NXZ.c)
 */

char __fastcall CDesktopManager::CheckForActiveAnimations(CDesktopManager *this)
{
  char result; // al
  char v2; // bl
  CDesktopManager *v3; // rdi

  result = g_monitorDisplayState;
  v2 = 0;
  v3 = CDesktopManager::s_pDesktopManagerInstance;
  if ( g_monitorDisplayState )
  {
    if ( !CAnimationEngine::IsIdle(*((CAnimationEngine **)CDesktopManager::s_pDesktopManagerInstance + 22))
      || (CDesktopManager::s_fTimelineDirty || *((_DWORD *)v3 + 138)) && !*((_BYTE *)v3 + 19) )
    {
      v2 = 1;
    }
    *((_BYTE *)v3 + 18) = v2;
    return v2;
  }
  return result;
}
