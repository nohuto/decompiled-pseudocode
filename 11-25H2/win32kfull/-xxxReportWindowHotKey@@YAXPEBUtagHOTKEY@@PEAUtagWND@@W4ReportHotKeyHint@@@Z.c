/*
 * XREFs of ?xxxReportWindowHotKey@@YAXPEBUtagHOTKEY@@PEAUtagWND@@W4ReportHotKeyHint@@@Z @ 0x14028B784
 * Callers:
 *     ?xxxReportHotKey@@YA?AW4tagHotKeyCallBackResult@@PEBUtagHOTKEY@@_NPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x14028B1B8 (-xxxReportHotKey@@YA-AW4tagHotKeyCallBackResult@@PEBUtagHOTKEY@@_NPEAUtagINPUT_MESSAGE_SOURCE@@@.c)
 * Callees:
 *     _PostMessage @ 0x1400208B0 (_PostMessage.c)
 *     ?GetDestination@CHILDHOTKEY@@QEBA?AUDestination@1@XZ @ 0x1402258D0 (-GetDestination@CHILDHOTKEY@@QEBA-AUDestination@1@XZ.c)
 *     ?Execute@ShellHangDetection@@YAXXZ @ 0x14026C150 (-Execute@ShellHangDetection@@YAXXZ.c)
 *     ?xxxReportHotKeyToShell@@YAXPEAUtagWND@@_J_KPEAUHWND__@@W4ReportHotKeyHint@@@Z @ 0x14028B60C (-xxxReportHotKeyToShell@@YAXPEAUtagWND@@_J_KPEAUHWND__@@W4ReportHotKeyHint@@@Z.c)
 */

char __fastcall xxxReportWindowHotKey(__int64 a1, __int64 a2, char a3)
{
  char v4; // si
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  char result; // al
  __int64 v13; // r8
  int v14; // [rsp+30h] [rbp-18h] BYREF
  _QWORD *v15; // [rsp+38h] [rbp-10h]

  v4 = a3 & 1;
  if ( *(_DWORD *)(a1 + 40) == -7 )
    *(_DWORD *)(W32GetUserSessionState(a1, a2) + 14044) = 0;
  ShellHangDetection::Execute((ShellHangDetection *)a1, a2);
  if ( *(_QWORD *)(W32GetUserSessionState(v8, v7) + 14000) )
    *(_QWORD *)(W32GetUserSessionState(v10, v9) + 14000) = 0LL;
  v11 = *(_QWORD *)(a1 + 56);
  if ( v11 == a1 + 56 )
  {
    PostMessage(a2, 274, 61744, 0);
    LOBYTE(v13) = v4;
    return LastWokenThread::Set(*(_QWORD *)(a2 + 16), 1LL, v13);
  }
  else
  {
    result = CHILDHOTKEY::GetDestination(v11 - 32, (__int64)&v14);
    if ( v14 )
      return xxxReportHotKeyToShell(
               v15,
               *(unsigned __int16 *)(a1 + 32) | (*(unsigned __int16 *)(a1 + 36) << 16),
               *(int *)(v11 - 12),
               *(_QWORD *)(v11 - 8),
               a3);
  }
  return result;
}
