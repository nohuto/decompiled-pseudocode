/*
 * XREFs of ??1?$CUnGuard@VCDwmCS@@@@QEAA@XZ @ 0x18008A0A8
 * Callers:
 *     _CTimer::_OnTimerCallback_::_1_::dtor$0 @ 0x1800EBC59 (_CTimer--_OnTimerCallback_--_1_--dtor$0.c)
 *     _CTransitionVisualController::RestoreWindow_::_1_::dtor$0 @ 0x1800EC36F (_CTransitionVisualController--RestoreWindow_--_1_--dtor$0.c)
 *     _CDesktopManager::Initialize_::_1_::dtor$11 @ 0x1800EC46D (_CDesktopManager--Initialize_--_1_--dtor$11.c)
 * Callees:
 *     <none>
 */

void __fastcall CUnGuard<CDwmCS>::~CUnGuard<CDwmCS>(LPCRITICAL_SECTION *a1)
{
  EnterCriticalSection(*a1);
}
