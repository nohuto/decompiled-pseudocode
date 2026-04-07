/*
 * XREFs of ?s_PowerNotification@CDesktopManager@@CAKPEAXK0@Z @ 0x1800AD3E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDesktopManager::s_PowerNotification(DWORD idThread, __int64 a2, _QWORD *a3)
{
  __int64 v4; // rax
  volatile enum _MONITOR_DISPLAY_STATE v5; // ecx

  v4 = *a3 - *(_QWORD *)&GUID_SESSION_DISPLAY_STATUS.Data1;
  if ( *a3 == *(_QWORD *)&GUID_SESSION_DISPLAY_STATUS.Data1 )
    v4 = a3[1] - *(_QWORD *)GUID_SESSION_DISPLAY_STATUS.Data4;
  if ( !v4 )
  {
    v5 = g_monitorDisplayState;
    g_monitorDisplayState = *((_DWORD *)a3 + 5);
    if ( g_monitorDisplayState != v5 && v5 == PowerMonitorOff )
      PostThreadMessageW(idThread, 0x400u, 0LL, 0LL);
  }
  return 0LL;
}
