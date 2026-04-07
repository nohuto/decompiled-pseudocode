/*
 * XREFs of ?_ScheduleStartAnimations@CAnimationScheduler@@AEAAJXZ @ 0x180071C90
 * Callers:
 *     ?_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x18003D510 (-_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z.c)
 * Callees:
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x180013B20 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x180013B64 (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     ?AddRef@CAnimationEngine@@UEAAKXZ @ 0x180013BA0 (-AddRef@CAnimationEngine@@UEAAKXZ.c)
 *     ?IsIdle@CAnimationEngine@@QEAA_NXZ @ 0x18001D650 (-IsIdle@CAnimationEngine@@QEAA_NXZ.c)
 *     ?_CleanupTransition@CAnimationScheduler@@AEAAXXZ @ 0x18002A220 (-_CleanupTransition@CAnimationScheduler@@AEAAXXZ.c)
 *     ?ScheduleStartAnimation@CStoryboard@@QEAAJXZ @ 0x18003CB38 (-ScheduleStartAnimation@CStoryboard@@QEAAJXZ.c)
 *     ?_RegisterAnimationNotification@CAnimationScheduler@@AEAAJXZ @ 0x180071D64 (-_RegisterAnimationNotification@CAnimationScheduler@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
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
      (void *)0x3F9,
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
