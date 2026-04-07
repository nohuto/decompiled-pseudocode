/*
 * XREFs of ??1?$CUnGuard@VCDwmCS@@@@QEAA@XZ @ 0x180078904
 * Callers:
 *     _CTimer::_OnTimerCallback_::_1_::dtor$0 @ 0x1800E73AC (_CTimer--_OnTimerCallback_--_1_--dtor$0.c)
 *     _CTransitionVisualController::RestoreWindow_::_1_::dtor$0 @ 0x1800E77DE (_CTransitionVisualController--RestoreWindow_--_1_--dtor$0.c)
 *     _CDesktopManager::Initialize_::_1_::dtor$12 @ 0x1800E8040 (_CDesktopManager--Initialize_--_1_--dtor$12.c)
 * Callees:
 *     <none>
 */

void __fastcall CUnGuard<CDwmCS>::~CUnGuard<CDwmCS>(LPCRITICAL_SECTION *a1)
{
  EnterCriticalSection(*a1);
}
