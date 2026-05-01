/*
 * XREFs of ?OnForegroundChanged@TouchKeyboardExperienceManager@@AEAAXPEAUHWND__@@@Z @ 0x1801CCC78
 * Callers:
 *     ?HandleForegroundChangeEvent@TouchKeyboardExperienceManager@@CAXQEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@Z @ 0x1801CCC50 (-HandleForegroundChangeEvent@TouchKeyboardExperienceManager@@CAXQEAUHWINEVENTHOOK__@@KPEAUHWND__.c)
 * Callees:
 *     ?OnForegroundChanged@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHWND__@@@Z @ 0x1801CCCC4 (-OnForegroundChanged@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHWND__@@@Z.c)
 */

void __fastcall TouchKeyboardExperienceManager::OnForegroundChanged(TouchKeyboardExperienceManager *this, HWND a2)
{
  KeyboardHosting::TabTipAdapter *v2; // rcx
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)TouchKeyboardExperienceManager::s_currentTouchKeyboardExperienceManager
                                         + 73);
  if ( v2 )
  {
    v3 = KeyboardHosting::TabTipAdapter::OnForegroundChanged(v2, a2);
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1883,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v3);
  }
}
