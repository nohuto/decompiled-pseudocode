/*
 * XREFs of ?OnDisplayChanged@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x180225A74
 * Callers:
 *     ?OnMessage@TouchKeyboardExperienceManager@@UEAAJI_K_J@Z @ 0x1801C13E0 (-OnMessage@TouchKeyboardExperienceManager@@UEAAJI_K_J@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnDisplayChanged@TabTipAdapter@KeyboardHosting@@QEAAJXZ @ 0x1802C08E0 (-OnDisplayChanged@TabTipAdapter@KeyboardHosting@@QEAAJXZ.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::OnDisplayChanged(TouchKeyboardExperienceManager *this)
{
  KeyboardHosting::TabTipAdapter *v1; // rcx
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  if ( !v1 )
    return 0LL;
  v2 = KeyboardHosting::TabTipAdapter::OnDisplayChanged(v1);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x11F7,
    (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)(unsigned int)v2);
  return v3;
}
