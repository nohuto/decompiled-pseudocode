/*
 * XREFs of ?HaveUsedPen@PenWorkspaceDiscoverBroker@@UEAAJPEAH@Z @ 0x1803DF970
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?HaveUsedPen@RecentAppsCache@Discover@PenWorkspace@@QEAAJPEAH@Z @ 0x1803E2BB0 (-HaveUsedPen@RecentAppsCache@Discover@PenWorkspace@@QEAAJPEAH@Z.c)
 *     ?EnsureCallingProcessIsShellExperience@CallerIdentity@@YAJXZ @ 0x180653C0C (-EnsureCallingProcessIsShellExperience@CallerIdentity@@YAJXZ.c)
 */

__int64 __fastcall PenWorkspaceDiscoverBroker::HaveUsedPen(PenWorkspace::Discover::RecentAppsCache **this, int *a2)
{
  int IsShellExperience; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0;
  IsShellExperience = CallerIdentity::EnsureCallingProcessIsShellExperience((CallerIdentity *)this);
  v5 = IsShellExperience;
  if ( IsShellExperience >= 0 )
    return PenWorkspace::Discover::RecentAppsCache::HaveUsedPen(this[5], a2);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x30,
    (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
    (const char *)(unsigned int)IsShellExperience);
  return v5;
}
