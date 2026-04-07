/*
 * XREFs of ?RAILModeChanged@CWindowList@@UEAAXXZ @ 0x1800E6BE0
 * Callers:
 *     <none>
 * Callees:
 *     ?ModeChange@CDesktopManager@@QEAAJXZ @ 0x180033BCC (-ModeChange@CDesktopManager@@QEAAJXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180051910 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
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
