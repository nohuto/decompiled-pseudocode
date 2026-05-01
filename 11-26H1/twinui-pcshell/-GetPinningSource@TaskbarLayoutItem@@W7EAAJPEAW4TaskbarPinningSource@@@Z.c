/*
 * XREFs of ?GetPinningSource@TaskbarLayoutItem@@W7EAAJPEAW4TaskbarPinningSource@@@Z @ 0x18031E5D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TaskbarLayoutItem::GetPinningSource(__int64 a1, enum SWITCH_APP_FLAGS *a2)
{
  return CLauncherUIMode::GetSwitchAppFlags((CLauncherUIMode *)(a1 - 8), a2);
}
