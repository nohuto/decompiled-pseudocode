/*
 * XREFs of ?CheckForActiveAnimations@CDesktopManager@@AEAA_NXZ @ 0x180009160
 * Callers:
 *     ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x18008F8D0 (-DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z.c)
 * Callees:
 *     ?IsIdle@CAnimationEngine@@QEAA_NXZ @ 0x1800091B0 (-IsIdle@CAnimationEngine@@QEAA_NXZ.c)
 */

char __fastcall CDesktopManager::CheckForActiveAnimations(CDesktopManager *this)
{
  CDesktopManager *v1; // rbx

  v1 = CDesktopManager::s_pDesktopManagerInstance;
  if ( !CAnimationEngine::IsIdle(*((CAnimationEngine **)CDesktopManager::s_pDesktopManagerInstance + 22))
    || (CDesktopManager::s_fTimelineDirty || *((_DWORD *)v1 + 136)) && !*((_BYTE *)v1 + 19) )
  {
    *((_BYTE *)v1 + 18) = 1;
    return 1;
  }
  else
  {
    *((_BYTE *)v1 + 18) = 0;
    return 0;
  }
}
