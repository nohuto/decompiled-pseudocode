/*
 * XREFs of ?TriggerOnLastFocusedWindow@GamingOverlayExperienceManager@@UEAAJXZ @ 0x180355910
 * Callers:
 *     ?RestoreTargetAfterTakingFocus@GamingOverlayExperienceManager@@UEAAJXZ @ 0x180352D80 (-RestoreTargetAfterTakingFocus@GamingOverlayExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GameBarSupportsDirectUriActivation@GamingOverlayExperienceManager@@AEAA_NXZ @ 0x18034733C (-GameBarSupportsDirectUriActivation@GamingOverlayExperienceManager@@AEAA_NXZ.c)
 *     ?LaunchGameBarLegacy@GamingOverlayExperienceManager@@AEAAJW4_BCASTDVR_COMMAND@@@Z @ 0x18034D604 (-LaunchGameBarLegacy@GamingOverlayExperienceManager@@AEAAJW4_BCASTDVR_COMMAND@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  v3 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 37) + 24LL))(*((_QWORD *)this + 37));
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x10F4,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
      (const char *)(unsigned int)v3);
  v4 = GamingOverlayExperienceManager::LaunchGameBarLegacy((__int64)v1, 0);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x10F7,
    (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
