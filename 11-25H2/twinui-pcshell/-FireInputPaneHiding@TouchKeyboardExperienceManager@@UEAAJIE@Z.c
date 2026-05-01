/*
 * XREFs of ?FireInputPaneHiding@TouchKeyboardExperienceManager@@UEAAJIE@Z @ 0x1804603D0
 * Callers:
 *     <none>
 * Callees:
 *     ?FireInputPaneHidingEvent@TouchKeyboardExperienceManager@@AEAAXI_N@Z @ 0x180293388 (-FireInputPaneHidingEvent@TouchKeyboardExperienceManager@@AEAAXI_N@Z.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::FireInputPaneHiding(
        TouchKeyboardExperienceManager *this,
        unsigned int a2,
        char a3)
{
  TouchKeyboardExperienceManager::FireInputPaneHidingEvent(
    (TouchKeyboardExperienceManager *)((char *)this - 200),
    a2,
    a3 != 0);
  return 0LL;
}
