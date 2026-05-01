/*
 * XREFs of ?GetCurrentTextSelectionRect@TouchKeyboardExperienceManager@@UEAAJPEAUtagRECT@@@Z @ 0x180461D20
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCurrentTextSelectionRect@TabTipAdapter@KeyboardHosting@@QEAAJPEAUtagRECT@@@Z @ 0x1802C0788 (-GetCurrentTextSelectionRect@TabTipAdapter@KeyboardHosting@@QEAAJPEAUtagRECT@@@Z.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::GetCurrentTextSelectionRect(
        TouchKeyboardExperienceManager *this,
        struct tagRECT *a2)
{
  KeyboardHosting::TabTipAdapter *v2; // rcx
  int CurrentTextSelectionRect; // ebx
  __int64 v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 49);
  if ( !v2 )
  {
    CurrentTextSelectionRect = -2147467259;
    v4 = 6135LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)CurrentTextSelectionRect);
    return (unsigned int)CurrentTextSelectionRect;
  }
  CurrentTextSelectionRect = KeyboardHosting::TabTipAdapter::GetCurrentTextSelectionRect(v2, a2);
  if ( CurrentTextSelectionRect < 0 )
  {
    v4 = 6136LL;
    goto LABEL_3;
  }
  return 0LL;
}
