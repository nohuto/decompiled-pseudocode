/*
 * XREFs of ?FullScreenVisibilityChanged@CFullScreenManager@@UEAAJH@Z @ 0x1803230D0
 * Callers:
 *     <none>
 * Callees:
 *     ?_FireFullScreenModeChangedEvent@CFullScreenManager@@AEAAXH@Z @ 0x180324E80 (-_FireFullScreenModeChangedEvent@CFullScreenManager@@AEAAXH@Z.c)
 */

__int64 __fastcall CFullScreenManager::FullScreenVisibilityChanged(CFullScreenManager *this, int a2)
{
  CFullScreenManager *v2; // rcx

  v2 = (CFullScreenManager *)((char *)this - 112);
  if ( *((_DWORD *)v2 + 49) )
    CFullScreenManager::_FireFullScreenModeChangedEvent(v2, a2);
  return 0LL;
}
