/*
 * XREFs of ?InForegroundQueue@@YAHPEBUtagTHREADINFO@@H@Z @ 0x1402942C4
 * Callers:
 *     CheckCursorClipAccess @ 0x1400293B0 (CheckCursorClipAccess.c)
 *     NtUserCheckProcessForClipboardAccess @ 0x140249EE0 (NtUserCheckProcessForClipboardAccess.c)
 *     NtUserGetClipboardData @ 0x1402B27A0 (NtUserGetClipboardData.c)
 * Callees:
 *     IsDebuggerAttached @ 0x1400599F0 (IsDebuggerAttached.c)
 *     ?ForegroundInputOwnerMatch@@YAHPEBUtagTHREADINFO@@H@Z @ 0x14020DF40 (-ForegroundInputOwnerMatch@@YAHPEBUtagTHREADINFO@@H@Z.c)
 */

__int64 __fastcall InForegroundQueue(const struct tagTHREADINFO *a1, unsigned int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx

  v6 = 0;
  if ( !(unsigned int)IsDebuggerAttached(*((_QWORD *)a1 + 57)) )
  {
    if ( !*(_QWORD *)(W32GetUserSessionState(v5, v4) + 18928) )
      return 0LL;
    if ( *((_QWORD *)a1 + 58) != *(_QWORD *)(W32GetUserSessionState(v8, v7) + 18928)
      && (*(_DWORD *)(*((_QWORD *)a1 + 57) + 12LL) & 0x4080000) != 0x4080000 )
    {
      LOBYTE(v6) = (unsigned int)ForegroundInputOwnerMatch(a1, a2) != 0;
      return v6;
    }
  }
  return 1LL;
}
