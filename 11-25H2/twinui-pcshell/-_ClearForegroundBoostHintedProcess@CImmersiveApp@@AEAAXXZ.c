/*
 * XREFs of ?_ClearForegroundBoostHintedProcess@CImmersiveApp@@AEAAXXZ @ 0x1801B6908
 * Callers:
 *     ?_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z @ 0x180089E7C (-_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z.c)
 *     ?HandleDestruction@CImmersiveApp@@UEAA?AW4WINDOW_DESTROYED_RESULT@@AEBVCTaskWindowFinder@@PEAPEAUITaskWindow@@@Z @ 0x180302540 (-HandleDestruction@CImmersiveApp@@UEAA-AW4WINDOW_DESTROYED_RESULT@@AEBVCTaskWindowFinder@@PEAPEA.c)
 *     ?HandleViewAddition@CImmersiveApp@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4WindowAdditionReason@@PEAUITaskWindow@@@Z @ 0x180302830 (-HandleViewAddition@CImmersiveApp@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windo.c)
 * Callees:
 *     ?GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ @ 0x18008B574 (-GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ.c)
 *     ??1?$CAutoHandle@PEAX@@QEAA@XZ @ 0x1801B6B38 (--1-$CAutoHandle@PEAX@@QEAA@XZ.c)
 *     ?_SetProcessForegroundPriority@CImmersiveApp@@AEAAXW4APP_FOREGROUND_PRIORITY@1@PEAXKPEAUHWND__@@@Z @ 0x18023D570 (-_SetProcessForegroundPriority@CImmersiveApp@@AEAAXW4APP_FOREGROUND_PRIORITY@1@PEAXKPEAUHWND__@@.c)
 */

void __fastcall CImmersiveApp::_ClearForegroundBoostHintedProcess(HANDLE *this)
{
  HWND ApplicationWindow; // rax
  DWORD ProcessId; // eax
  DWORD dwProcessId; // [rsp+40h] [rbp+8h] BYREF

  if ( *((_BYTE *)this + 792) )
  {
    if ( *((_BYTE *)this + 808) )
    {
      ApplicationWindow = CImmersiveApp::CImmersiveWindowCollection::GetApplicationWindow((CImmersiveApp::CImmersiveWindowCollection *)(this + 36));
      dwProcessId = 0;
      if ( !ApplicationWindow
        || !GetWindowThreadProcessId(ApplicationWindow, &dwProcessId)
        || (ProcessId = GetProcessId(this[100]), dwProcessId != ProcessId) )
      {
        CImmersiveApp::_SetProcessForegroundPriority(this, 1LL, this[100], 0LL, 0LL);
        *((_DWORD *)this + 199) = 1;
      }
    }
    CAutoHandle<void *>::~CAutoHandle<void *>(this + 100);
    *((_BYTE *)this + 808) = 0;
  }
}
