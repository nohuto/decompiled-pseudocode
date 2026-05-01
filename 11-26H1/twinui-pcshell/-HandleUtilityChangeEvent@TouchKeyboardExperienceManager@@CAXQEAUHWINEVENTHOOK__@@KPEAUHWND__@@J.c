/*
 * XREFs of ?HandleUtilityChangeEvent@TouchKeyboardExperienceManager@@CAXQEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@Z @ 0x18046E290
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnOnScreenKeyboardVisibilityChanged@TabTipAdapter@KeyboardHosting@@QEAAJ_N@Z @ 0x18047B744 (-OnOnScreenKeyboardVisibilityChanged@TabTipAdapter@KeyboardHosting@@QEAAJ_N@Z.c)
 */

void __fastcall TouchKeyboardExperienceManager::HandleUtilityChangeEvent(
        HWINEVENTHOOK hWinEventHook,
        DWORD event,
        HWND hwnd,
        LONG idObject)
{
  KeyboardHosting::TabTipAdapter *v4; // rcx
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( event == 35 )
  {
    if ( TouchKeyboardExperienceManager::s_currentTouchKeyboardExperienceManager )
    {
      if ( (idObject & 1) != 0 )
      {
        v4 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)TouchKeyboardExperienceManager::s_currentTouchKeyboardExperienceManager
                                               + 73);
        if ( v4 )
        {
          v5 = KeyboardHosting::TabTipAdapter::OnOnScreenKeyboardVisibilityChanged(v4, HIWORD(idObject) == 1);
          if ( v5 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x183C,
              (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
              (const char *)(unsigned int)v5);
        }
      }
    }
  }
}
