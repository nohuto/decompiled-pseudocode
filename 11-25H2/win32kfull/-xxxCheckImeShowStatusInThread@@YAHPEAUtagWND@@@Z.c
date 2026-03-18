/*
 * XREFs of ?xxxCheckImeShowStatusInThread@@YAHPEAUtagWND@@@Z @ 0x140168D7C
 * Callers:
 *     NtUserCheckImeShowStatusInThread @ 0x140248460 (NtUserCheckImeShowStatusInThread.c)
 * Callees:
 *     ?xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x140168DC8 (-xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 */

__int64 __fastcall xxxCheckImeShowStatusInThread(struct tagTHREADINFO **a1, __int64 a2)
{
  if ( (**(_DWORD **)(W32GetUserSessionState(a1, a2) + 19872) & 4) != 0 && *((char *)a1[5] + 20) >= 0 )
    xxxCheckImeShowStatus((struct tagWND *)a1, a1[2]);
  return 1LL;
}
