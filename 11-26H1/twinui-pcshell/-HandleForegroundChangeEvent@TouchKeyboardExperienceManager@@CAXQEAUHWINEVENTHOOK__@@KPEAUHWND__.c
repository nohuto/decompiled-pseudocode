/*
 * XREFs of ?HandleForegroundChangeEvent@TouchKeyboardExperienceManager@@CAXQEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@Z @ 0x1801C3D80
 * Callers:
 *     <none>
 * Callees:
 *     ?OnForegroundChanged@TouchKeyboardExperienceManager@@AEAAXPEAUHWND__@@@Z @ 0x1801C3DA8 (-OnForegroundChanged@TouchKeyboardExperienceManager@@AEAAXPEAUHWND__@@@Z.c)
 */

void __fastcall TouchKeyboardExperienceManager::HandleForegroundChangeEvent(
        TouchKeyboardExperienceManager *hWinEventHook,
        DWORD event,
        HWND hwnd,
        LONG idObject)
{
  if ( TouchKeyboardExperienceManager::s_currentTouchKeyboardExperienceManager )
  {
    if ( event == 3 )
      TouchKeyboardExperienceManager::OnForegroundChanged(hWinEventHook, hwnd);
  }
}
