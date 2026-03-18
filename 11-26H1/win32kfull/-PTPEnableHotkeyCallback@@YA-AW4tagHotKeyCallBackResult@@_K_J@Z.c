/*
 * XREFs of ?PTPEnableHotkeyCallback@@YA?AW4tagHotKeyCallBackResult@@_K_J@Z @ 0x14029B270
 * Callers:
 *     <none>
 * Callees:
 *     PostShellHookMessagesEx @ 0x1400101EC (PostShellHookMessagesEx.c)
 */

__int64 __fastcall PTPEnableHotkeyCallback(__int64 a1, __int64 a2)
{
  _BOOL8 v2; // rbx

  v2 = *(_DWORD *)(W32GetUserSessionState(a1, a2) + 328) == 0;
  if ( (unsigned int)EnablePTPDevices(v2) )
    PostShellHookMessagesEx((LastWokenThread *)0x39, v2);
  return 0LL;
}
