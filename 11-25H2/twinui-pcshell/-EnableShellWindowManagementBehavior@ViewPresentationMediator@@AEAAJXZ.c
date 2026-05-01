/*
 * XREFs of ?EnableShellWindowManagementBehavior@ViewPresentationMediator@@AEAAJXZ @ 0x180205700
 * Callers:
 *     ?SetShellWindowManagementScenario@ViewPresentationMediator@@UEAAJW4WINDOW_MANAGEMENT_BEHAVIOR_SCENARIO@@0@Z @ 0x1802AF430 (-SetShellWindowManagementScenario@ViewPresentationMediator@@UEAAJW4WINDOW_MANAGEMENT_BEHAVIOR_SC.c)
 *     ?OnChannelSever@ViewPresentationMediator@@UEAAXXZ @ 0x18043CA80 (-OnChannelSever@ViewPresentationMediator@@UEAAXXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ComputeMaskAndFeaturesForScenarios@ViewPresentationMediator@@CA?AUBehaviorMaskAndFeatures@1@W4WINDOW_MANAGEMENT_BEHAVIOR_SCENARIO@@@Z @ 0x1802C234C (-ComputeMaskAndFeaturesForScenarios@ViewPresentationMediator@@CA-AUBehaviorMaskAndFeatures@1@W4W.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ViewPresentationMediator::EnableShellWindowManagementBehavior(ViewPresentationMediator *this)
{
  unsigned __int64 v3; // rbx
  unsigned int v4; // edi
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*((_QWORD *)this + 25) )
    return 2147943515LL;
  v3 = ViewPresentationMediator::ComputeMaskAndFeaturesForScenarios(*((unsigned int *)this + 76));
  v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int64))(**((_QWORD **)this + 24) + 24LL))(
         *((_QWORD *)this + 24),
         (unsigned int)v3,
         HIDWORD(v3));
  if ( v4 == -2147019873 )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 25) + 144LL))(*((_QWORD *)this + 25));
    v4 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x12B,
        (int)"pcshell\\twinui\\viewpresentationmediator\\lib\\viewpresentationmediator.cpp",
        (const char *)(unsigned int)v5);
LABEL_8:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x130,
        (int)"pcshell\\twinui\\viewpresentationmediator\\lib\\viewpresentationmediator.cpp",
        (const char *)v4);
      return v4;
    }
    v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 24) + 24LL))(
           *((_QWORD *)this + 24),
           (unsigned int)v3,
           HIDWORD(v3));
  }
  if ( (v4 & 0x80000000) != 0 )
    goto LABEL_8;
  return v4;
}
