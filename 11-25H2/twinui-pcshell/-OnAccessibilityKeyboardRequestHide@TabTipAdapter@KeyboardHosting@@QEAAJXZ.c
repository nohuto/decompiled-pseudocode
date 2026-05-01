/*
 * XREFs of ?OnAccessibilityKeyboardRequestHide@TabTipAdapter@KeyboardHosting@@QEAAJXZ @ 0x18046C82C
 * Callers:
 *     ?OnAccessibilityKeyboardRequestHide@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x180462C50 (-OnAccessibilityKeyboardRequestHide@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetTrackSelectionPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N@Z @ 0x1800A7148 (-SetTrackSelectionPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::OnAccessibilityKeyboardRequestHide(
        KeyboardHosting::TabTipAdapter *this)
{
  int v2; // eax
  __int64 v3; // r8
  unsigned int v4; // edi
  int v6; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = 0;
  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(**((_QWORD **)this + 16) + 152LL))(
         *((_QWORD *)this + 16),
         0LL,
         &v9);
  v4 = v2;
  if ( v2 >= 0 )
  {
    *((_BYTE *)this + 448) = 0;
    v6 = KeyboardHosting::TabTipAdapter::SetTrackSelectionPosition(this, 0LL, v3);
    v7 = v6;
    if ( v6 >= 0 )
    {
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x9C2,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v6);
      return v7;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x9BD,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v2);
    return v4;
  }
}
