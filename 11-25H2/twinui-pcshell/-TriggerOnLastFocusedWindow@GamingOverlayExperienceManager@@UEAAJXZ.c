/*
 * XREFs of ?TriggerOnLastFocusedWindow@GamingOverlayExperienceManager@@UEAAJXZ @ 0x180350AF0
 * Callers:
 *     ?RestoreTargetAfterTakingFocus@GamingOverlayExperienceManager@@UEAAJXZ @ 0x18034E6E0 (-RestoreTargetAfterTakingFocus@GamingOverlayExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GameBarSupportsDirectUriActivation@GamingOverlayExperienceManager@@AEAA_NXZ @ 0x180344690 (-GameBarSupportsDirectUriActivation@GamingOverlayExperienceManager@@AEAA_NXZ.c)
 *     ?LaunchGameBarLegacy@GamingOverlayExperienceManager@@AEAAJW4_BCASTDVR_COMMAND@@@Z @ 0x180349D10 (-LaunchGameBarLegacy@GamingOverlayExperienceManager@@AEAAJW4_BCASTDVR_COMMAND@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::TriggerOnLastFocusedWindow(GamingOverlayExperienceManager *this)
{
  char *v1; // rbx
  int v3; // eax
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (char *)this - 136;
  if ( GamingOverlayExperienceManager::GameBarSupportsDirectUriActivation((GamingOverlayExperienceManager *)((char *)this - 136)) )
    return 0LL;
  v3 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 32) + 24LL))(*((_QWORD *)this + 32));
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1015,
      (int)"pcshell\\twinui\\GamingOverlayExperienceManager\\lib\\GamingOverlayExperienceManager.cpp",
      (const char *)(unsigned int)v3);
  v4 = GamingOverlayExperienceManager::LaunchGameBarLegacy((__int64)v1, 0);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1018,
    (int)"pcshell\\twinui\\GamingOverlayExperienceManager\\lib\\GamingOverlayExperienceManager.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
