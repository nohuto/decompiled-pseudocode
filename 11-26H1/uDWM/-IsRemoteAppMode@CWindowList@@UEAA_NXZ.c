/*
 * XREFs of ?IsRemoteAppMode@CWindowList@@UEAA_NXZ @ 0x1800E1C30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CWindowList::IsRemoteAppMode(CWindowList *this)
{
  char v1; // cl
  int v2; // eax

  v1 = 1;
  v2 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 8);
  if ( v2 != 5 )
    return (unsigned int)(v2 - 6) <= 1;
  return v1;
}
