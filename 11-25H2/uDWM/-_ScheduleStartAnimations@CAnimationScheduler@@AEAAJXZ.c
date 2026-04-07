/*
 * XREFs of ?_ScheduleStartAnimations@CAnimationScheduler@@AEAAJXZ @ 0x18006D7A4
 * Callers:
 *     ?_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x18002B534 (-_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z.c)
 * Callees:
 *     ?IsIdle@CAnimationEngine@@QEAA_NXZ @ 0x1800091B0 (-IsIdle@CAnimationEngine@@QEAA_NXZ.c)
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x180015874 (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     ?AddRef@CAnimationEngine@@UEAAKXZ @ 0x1800158B0 (-AddRef@CAnimationEngine@@UEAAKXZ.c)
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x1800158D0 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?_CleanupTransition@CAnimationScheduler@@AEAAXXZ @ 0x180029944 (-_CleanupTransition@CAnimationScheduler@@AEAAXXZ.c)
 *     ?_RegisterAnimationNotification@CAnimationScheduler@@AEAAJXZ @ 0x18006D878 (-_RegisterAnimationNotification@CAnimationScheduler@@AEAAJXZ.c)
 *     ?ScheduleStartAnimation@CStoryboard@@QEAAJXZ @ 0x18006DA44 (-ScheduleStartAnimation@CStoryboard@@QEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAnimationScheduler::_ScheduleStartAnimations(CAnimationScheduler *this)
{
  bool IsIdle; // si
  int v3; // eax
  unsigned int v4; // ebx
  __int64 i; // rbx
  CStoryboard *v6; // rcx
  CAnimationEngine *v7; // rax
  CAnimationEngine *v8; // rbx
  int v10; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v10 = (int)this;
  IsIdle = 1;
  v3 = CAnimationScheduler::_RegisterAnimationNotification(this);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3FC,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\animationscheduler.cpp",
      (const char *)(unsigned int)v3,
      v10);
    CAnimationScheduler::_CleanupTransition(this);
    return v4;
  }
  else
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 10); i = (unsigned int)(i + 1) )
    {
      v6 = *(CStoryboard **)(*((_QWORD *)this + 2) + 8 * i);
      if ( *((_DWORD *)v6 + 6) == 2 )
        CStoryboard::ScheduleStartAnimation(v6);
    }
    v7 = CDesktopManager::AcquireAnimationEngine();
    v8 = v7;
    if ( v7 )
    {
      CAnimationEngine::AddRef(v7);
      IsIdle = CAnimationEngine::IsIdle(v8);
    }
    if ( v8 )
      CAnimationEngine::Release(v8);
    if ( IsIdle )
      CAnimationScheduler::_CleanupTransition(this);
    return 0LL;
  }
}
