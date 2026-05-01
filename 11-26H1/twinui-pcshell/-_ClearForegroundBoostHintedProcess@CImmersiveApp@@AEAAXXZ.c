/*
 * XREFs of ?_ClearForegroundBoostHintedProcess@CImmersiveApp@@AEAAXXZ @ 0x1801A8168
 * Callers:
 *     ?_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z @ 0x180064CB0 (-_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z.c)
 *     ?HandleDestruction@CImmersiveApp@@UEAA?AW4WINDOW_DESTROYED_RESULT@@AEBVCTaskWindowFinder@@PEAPEAUITaskWindow@@@Z @ 0x1802FDC80 (-HandleDestruction@CImmersiveApp@@UEAA-AW4WINDOW_DESTROYED_RESULT@@AEBVCTaskWindowFinder@@PEAPEA.c)
 *     ?HandleViewAddition@CImmersiveApp@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4WindowAdditionReason@@PEAUITaskWindow@@@Z @ 0x1802FDF90 (-HandleViewAddition@CImmersiveApp@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windo.c)
 * Callees:
 *     ?GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ @ 0x1800AE7DC (-GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ.c)
 *     ??1?$CAutoHandle@PEAX@@QEAA@XZ @ 0x1801A8400 (--1-$CAutoHandle@PEAX@@QEAA@XZ.c)
 *     ?_SetProcessForegroundPriority@CImmersiveApp@@AEAAXW4APP_FOREGROUND_PRIORITY@1@PEAXKPEAUHWND__@@@Z @ 0x18022B80C (-_SetProcessForegroundPriority@CImmersiveApp@@AEAAXW4APP_FOREGROUND_PRIORITY@1@PEAXKPEAUHWND__@@.c)
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
