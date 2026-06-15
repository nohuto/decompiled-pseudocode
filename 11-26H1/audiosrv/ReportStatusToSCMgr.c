/*
 * XREFs of ReportStatusToSCMgr @ 0x180152C80
 * Callers:
 *     ?ServiceCtrl@@YAKKKPEAX0@Z @ 0x18006E850 (-ServiceCtrl@@YAKKKPEAX0@Z.c)
 *     ?AudioSrvStartupThread@@YAKPEAX@Z @ 0x180152700 (-AudioSrvStartupThread@@YAKPEAX@Z.c)
 *     ?OnServiceShutdown@@YAXPEAXE@Z @ 0x1801527C0 (-OnServiceShutdown@@YAXPEAXE@Z.c)
 *     ?ServiceMain@@YAXKQEAPEAG@Z @ 0x180152920 (-ServiceMain@@YAXKQEAPEAG@Z.c)
 *     ?ShutdownKeepaliveThread@@YAKPEAX@Z @ 0x180152C20 (-ShutdownKeepaliveThread@@YAKPEAX@Z.c)
 *     ServiceStart @ 0x180153674 (ServiceStart.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall ReportStatusToSCMgr(int a1, int a2, int a3)
{
  int v3; // eax

  v3 = 0;
  dword_1801D651C = a1;
  dword_1801D6524 = a2;
  dword_1801D6530 = a3;
  if ( a1 == 4 )
    v3 = 193;
  dword_1801D6520 = v3;
  if ( a1 == 4 || a1 == 1 )
    dword_1801D652C = 0;
  else
    dword_1801D652C = dword_1801D52FC++;
  return SetServiceStatus(sshStatusHandle, (LPSERVICE_STATUS)&ssStatus);
}
