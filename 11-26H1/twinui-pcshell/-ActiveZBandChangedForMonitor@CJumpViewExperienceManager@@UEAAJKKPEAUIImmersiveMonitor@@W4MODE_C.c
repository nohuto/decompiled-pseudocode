/*
 * XREFs of ?ActiveZBandChangedForMonitor@CJumpViewExperienceManager@@UEAAJKKPEAUIImmersiveMonitor@@W4MODE_CHANGE_REASON@@@Z @ 0x1801D5430
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsBelowImmersiveLauncher@ZBandHelpers@@YA_NW4ZBID@@@Z @ 0x18016787C (-IsBelowImmersiveLauncher@ZBandHelpers@@YA_NW4ZBID@@@Z.c)
 *     ?DismissImpl@CJumpViewExperienceManager@@AEAAJ_N@Z @ 0x18038C334 (-DismissImpl@CJumpViewExperienceManager@@AEAAJ_N@Z.c)
 */

__int64 __fastcall CJumpViewExperienceManager::ActiveZBandChangedForMonitor(__int64 a1, __int64 a2, int a3)
{
  int v4; // r8d
  CJumpViewExperienceManager *v5; // r9
  int v6; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_DWORD *)(a1 - 32 + 192) != 2 || !ZBandHelpers::IsBelowImmersiveLauncher(a3) && v4 != 13 )
    return 0LL;
  v6 = CJumpViewExperienceManager::DismissImpl(v5, 0);
  v7 = v6;
  if ( v6 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x15F,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
    (const char *)(unsigned int)v6);
  return v7;
}
