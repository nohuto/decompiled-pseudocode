/*
 * XREFs of ?IsFullScreenViewVisible@TabletModePositioner@@AEAA_NXZ @ 0x1805192D8
 * Callers:
 *     ?BlockDismiss@TabletModePositioner@@UEAAJPEAH@Z @ 0x1801C98A0 (-BlockDismiss@TabletModePositioner@@UEAAJPEAH@Z.c)
 *     ?CanShowSwitcherOrLauncher@TabletModePositioner@@AEAA_N_N@Z @ 0x1805163E8 (-CanShowSwitcherOrLauncher@TabletModePositioner@@AEAA_N_N@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall TabletModePositioner::IsFullScreenViewVisible(TabletModePositioner *this)
{
  __int64 v1; // rcx
  char v2; // bl
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 52);
  v2 = 0;
  v6 = 0;
  v3 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v1 + 72LL))(v1, &v6);
  if ( v3 >= 0 )
    return v6 != 0;
  wil::details::in1diag3::_Log_Hr(
    retaddr,
    (void *)0xB70,
    (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
    (const char *)(unsigned int)v3);
  return v2;
}
