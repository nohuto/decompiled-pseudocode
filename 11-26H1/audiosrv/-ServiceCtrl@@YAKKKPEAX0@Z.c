/*
 * XREFs of ?ServiceCtrl@@YAKKKPEAX0@Z @ 0x18006E850
 * Callers:
 *     <none>
 * Callees:
 *     ReportStatusToSCMgr @ 0x180152C80 (ReportStatusToSCMgr.c)
 */

__int64 __fastcall ServiceCtrl(
        DWORD dwControl,
        DWORD dwEventType,
        struct tagWTSSESSION_NOTIFICATION *lpEventData,
        LPVOID lpContext)
{
  DWORD v4; // ecx
  DWORD v5; // ecx
  DWORD v7; // ecx
  int v8; // ecx

  v4 = dwControl - 1;
  if ( !v4 )
    goto LABEL_10;
  v5 = v4 - 3;
  if ( !v5 )
    return 0LL;
  v7 = v5 - 1;
  if ( !v7 )
  {
LABEL_10:
    dwServiceError = 0;
    ReportStatusToSCMgr(3LL, 0LL, 5000LL, lpContext);
    SetEvent(hEventShutdown);
    return 0LL;
  }
  v8 = v7 - 8;
  if ( !v8 )
    return ServicePowerEvent(dwEventType, lpEventData);
  if ( v8 == 1 )
    return ServiceSessionChange(dwEventType, lpEventData);
  return 120LL;
}
