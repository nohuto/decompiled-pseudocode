/*
 * XREFs of ?RAILModeChanged@CWindowList@@UEAAXXZ @ 0x1800E3310
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004ABD0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?ModeChange@CDesktopManager@@QEAAJXZ @ 0x18004B1A8 (-ModeChange@CDesktopManager@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CWindowList::RAILModeChanged(CWindowList *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // [rsp+38h] [rbp+10h] BYREF

  v1 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  CDesktopManager::ModeChange(CDesktopManager::s_pDesktopManagerInstance);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v1);
}
