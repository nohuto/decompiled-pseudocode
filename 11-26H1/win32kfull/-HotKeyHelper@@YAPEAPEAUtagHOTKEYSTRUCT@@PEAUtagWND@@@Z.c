/*
 * XREFs of ?HotKeyHelper@@YAPEAPEAUtagHOTKEYSTRUCT@@PEAUtagWND@@@Z @ 0x140044848
 * Callers:
 *     ?xxxDestroyWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z @ 0x140042B60 (-xxxDestroyWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z.c)
 *     DWP_SetHotKey @ 0x1400446DC (DWP_SetHotKey.c)
 *     xxxRealDefWindowProc @ 0x14012F36C (xxxRealDefWindowProc.c)
 * Callees:
 *     <none>
 */

struct tagWND ***__fastcall HotKeyHelper(struct tagWND *a1, __int64 a2)
{
  struct tagWND ***result; // rax
  struct tagWND **v4; // rdx

  for ( result = (struct tagWND ***)(W32GetUserSessionState(a1, a2) + 12928); ; result = (struct tagWND ***)(v4 + 2) )
  {
    v4 = *result;
    if ( !*result || *v4 == a1 )
      break;
  }
  return result;
}
