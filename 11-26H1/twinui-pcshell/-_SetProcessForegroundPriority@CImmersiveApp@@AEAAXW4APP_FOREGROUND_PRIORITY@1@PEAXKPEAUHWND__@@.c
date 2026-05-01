/*
 * XREFs of ?_SetProcessForegroundPriority@CImmersiveApp@@AEAAXW4APP_FOREGROUND_PRIORITY@1@PEAXKPEAUHWND__@@@Z @ 0x18022B80C
 * Callers:
 *     ?_SetApplicationForegroundPriority@CImmersiveApp@@AEAAXW4APP_FOREGROUND_PRIORITY@1@@Z @ 0x1800AE53C (-_SetApplicationForegroundPriority@CImmersiveApp@@AEAAXW4APP_FOREGROUND_PRIORITY@1@@Z.c)
 *     ?_ClearForegroundBoostHintedProcess@CImmersiveApp@@AEAAXXZ @ 0x1801A8168 (-_ClearForegroundBoostHintedProcess@CImmersiveApp@@AEAAXXZ.c)
 * Callees:
 *     ?GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ @ 0x1800AE7DC (-GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ.c)
 *     McTemplateU0pqztp_EventWriteTransfer @ 0x180301474 (McTemplateU0pqztp_EventWriteTransfer.c)
 */

void __fastcall CImmersiveApp::_SetProcessForegroundPriority(__int64 a1, int a2, void *a3, DWORD a4, __int64 a5)
{
  char v5; // bl
  DWORD ProcessId; // ebp
  char ApplicationWindow; // al
  int v10; // edx

  v5 = 0;
  ProcessId = a4;
  if ( !a4 )
    ProcessId = GetProcessId(a3);
  if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
  {
    ApplicationWindow = (unsigned __int8)CImmersiveApp::CImmersiveWindowCollection::GetApplicationWindow((CImmersiveApp::CImmersiveWindowCollection *)(a1 + 288));
    McTemplateU0pqztp_EventWriteTransfer(a2 == 0, v10, a5, ProcessId, *(_QWORD *)(a1 + 576), a2 == 0, ApplicationWindow);
  }
  *(_DWORD *)(a1 + 796) = a2;
  if ( !a2 && !a5 )
    v5 = 1;
  *(_BYTE *)(a1 + 808) = v5;
}
