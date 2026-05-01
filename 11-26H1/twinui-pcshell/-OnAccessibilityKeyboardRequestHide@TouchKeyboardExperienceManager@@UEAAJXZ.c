/*
 * XREFs of ?OnAccessibilityKeyboardRequestHide@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x18046EB40
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnAccessibilityKeyboardRequestHide@TabTipAdapter@KeyboardHosting@@QEAAJXZ @ 0x18047A820 (-OnAccessibilityKeyboardRequestHide@TabTipAdapter@KeyboardHosting@@QEAAJXZ.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::OnAccessibilityKeyboardRequestHide(
        KeyboardHosting::TabTipAdapter **this)
{
  int v1; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = KeyboardHosting::TabTipAdapter::OnAccessibilityKeyboardRequestHide(this[55]);
  v2 = v1;
  if ( v1 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x660,
    (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)(unsigned int)v1);
  return v2;
}
