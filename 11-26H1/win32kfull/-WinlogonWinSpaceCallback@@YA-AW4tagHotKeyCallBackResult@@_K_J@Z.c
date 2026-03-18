/*
 * XREFs of ?WinlogonWinSpaceCallback@@YA?AW4tagHotKeyCallBackResult@@_K_J@Z @ 0x14029B5B0
 * Callers:
 *     <none>
 * Callees:
 *     PostShellHookMessagesEx @ 0x1400101EC (PostShellHookMessagesEx.c)
 */

__int64 __fastcall WinlogonWinSpaceCallback(__int64 a1)
{
  __int64 v1; // rdx

  switch ( a1 )
  {
    case -11LL:
      v1 = 14LL;
      goto LABEL_9;
    case -10LL:
      v1 = 12LL;
      goto LABEL_9;
    case -9LL:
      v1 = 10LL;
      goto LABEL_9;
    case -8LL:
      v1 = 8LL;
LABEL_9:
      PostShellHookMessagesEx((LastWokenThread *)0x38, v1);
      break;
  }
  return 0LL;
}
