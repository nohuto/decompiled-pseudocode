/*
 * XREFs of ?IsSmartFillSettingEnabled@SnapLayoutHelpers@@YA_NPEAUIImmersiveSettingsCache@@@Z @ 0x180589408
 * Callers:
 *     ?DetermineRectForSnapAction@HotkeyHandler@@AEBA?AUCRect@Geometry@@PEAUISnappedWindow@@PEAUIImmersiveMonitor@@W4SnapAction@1@AEBU23@I@Z @ 0x18058A9C4 (-DetermineRectForSnapAction@HotkeyHandler@@AEBA-AUCRect@Geometry@@PEAUISnappedWindow@@PEAUIImmer.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall SnapLayoutHelpers::IsSmartFillSettingEnabled(
        SnapLayoutHelpers *this,
        struct IImmersiveSettingsCache *a2)
{
  __int64 v2; // rax
  char v3; // bl
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)this;
  v3 = 0;
  v7 = 0;
  v4 = (*(__int64 (__fastcall **)(SnapLayoutHelpers *, __int64, int *))(v2 + 32))(this, 4LL, &v7);
  if ( v4 >= 0 )
    return v7 != 0;
  wil::details::in1diag3::_Log_Hr(
    retaddr,
    (void *)0x2CD,
    (int)"pcshell\\twinui\\snapcomponent\\lib\\snaplayouthelpers.cpp",
    (const char *)(unsigned int)v4);
  return v3;
}
