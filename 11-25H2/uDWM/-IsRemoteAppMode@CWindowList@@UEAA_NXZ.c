/*
 * XREFs of ?IsRemoteAppMode@CWindowList@@UEAA_NXZ @ 0x1800E5FA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CWindowList::IsRemoteAppMode(CWindowList *this)
{
  return (unsigned int)(*((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 8) - 5) <= 2;
}
