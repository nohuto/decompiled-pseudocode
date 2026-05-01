/*
 * XREFs of ?InputHostShowing@CActionCenterExperienceManager@@UEAAJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_MODE@@11@Z @ 0x18035F040
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnInputHostChanging@CActionCenterExperienceManager@@AEAAJW4IHM_DISPLAY_MODE@@@Z @ 0x180222BE0 (-OnInputHostChanging@CActionCenterExperienceManager@@AEAAJW4IHM_DISPLAY_MODE@@@Z.c)
 */

__int64 __fastcall CActionCenterExperienceManager::InputHostShowing(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = CActionCenterExperienceManager::OnInputHostChanging((CActionCenterExperienceManager *)(a1 - 88), a4);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x6B0,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
  return 0LL;
}
