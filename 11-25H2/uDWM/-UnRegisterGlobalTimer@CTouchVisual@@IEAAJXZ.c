/*
 * XREFs of ?UnRegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x180030728
 * Callers:
 *     ?StopTimer@CTouchVisual@@MEAAJXZ @ 0x180030710 (-StopTimer@CTouchVisual@@MEAAJXZ.c)
 *     ?StopDelayTimer@CTetherVisual@@IEAAXXZ @ 0x1800CEB1C (-StopDelayTimer@CTetherVisual@@IEAAXXZ.c)
 * Callees:
 *     ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z @ 0x180037998 (-UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CTouchVisual::UnRegisterGlobalTimer(CTouchVisual *this)
{
  if ( *((_BYTE *)this + 240) )
  {
    CDesktopManager::UnregisterForGlobalTimeChangeNotification(this);
    *((_BYTE *)this + 240) = 0;
  }
  return 0LL;
}
