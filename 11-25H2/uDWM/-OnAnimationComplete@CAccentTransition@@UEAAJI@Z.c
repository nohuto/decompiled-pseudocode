/*
 * XREFs of ?OnAnimationComplete@CAccentTransition@@UEAAJI@Z @ 0x1800A0B20
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180051910 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?StopAnimation@CAccentTransition@@QEAAXXZ @ 0x1800A0DF0 (-StopAnimation@CAccentTransition@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAccentTransition::OnAnimationComplete(CAccentTransition *this, int a2)
{
  struct _RTL_CRITICAL_SECTION *v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  if ( *((_DWORD *)this + 9) == a2 )
    CAccentTransition::StopAnimation(this);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v5);
  return 0LL;
}
