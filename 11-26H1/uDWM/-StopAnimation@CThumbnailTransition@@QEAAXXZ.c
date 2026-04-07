/*
 * XREFs of ?StopAnimation@CThumbnailTransition@@QEAAXXZ @ 0x1800C93DC
 * Callers:
 *     ?_UpdateAnimatedProperties@CThumbnailVisual@@AEAAJK@Z @ 0x1800739C4 (-_UpdateAnimatedProperties@CThumbnailVisual@@AEAAJK@Z.c)
 *     ??1CThumbnailTransition@@UEAA@XZ @ 0x1800C9034 (--1CThumbnailTransition@@UEAA@XZ.c)
 *     ?OnAnimationComplete@CThumbnailTransition@@UEAAJI@Z @ 0x1800C9140 (-OnAnimationComplete@CThumbnailTransition@@UEAAJI@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004ABD0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?_CleanupAnimation@CThumbnailTransition@@AEAAXXZ @ 0x1800C9470 (-_CleanupAnimation@CThumbnailTransition@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CThumbnailTransition::StopAnimation(CThumbnailTransition *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  if ( *((_BYTE *)this + 36) )
  {
    *((_BYTE *)this + 36) = 0;
    CThumbnailTransition::_CleanupAnimation(this);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v2);
}
