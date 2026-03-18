/*
 * XREFs of ?InForegroundQueue@@YAHPEBUtagTHREADINFO@@H@Z @ 0x140247B34
 * Callers:
 *     CheckCursorClipAccess @ 0x14005FB50 (CheckCursorClipAccess.c)
 *     NtUserCheckProcessForClipboardAccess @ 0x1402484F0 (NtUserCheckProcessForClipboardAccess.c)
 *     NtUserGetClipboardData @ 0x140248F00 (NtUserGetClipboardData.c)
 * Callees:
 *     IsDebuggerAttached @ 0x140151D14 (IsDebuggerAttached.c)
 *     ?ForegroundInputOwnerMatch@@YAHPEBUtagTHREADINFO@@H@Z @ 0x1401DE440 (-ForegroundInputOwnerMatch@@YAHPEBUtagTHREADINFO@@H@Z.c)
 */

__int64 __fastcall InForegroundQueue(__int64 **a1, unsigned int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx

  v6 = 0;
  if ( !(unsigned int)IsDebuggerAttached(a1[58]) )
  {
    if ( !*(_QWORD *)(W32GetUserSessionState(v5, v4) + 18888) )
      return 0LL;
    if ( a1[59] != *(__int64 **)(W32GetUserSessionState(v8, v7) + 18888)
      && (*((_DWORD *)a1[58] + 3) & 0x4080000) != 0x4080000 )
    {
      LOBYTE(v6) = (unsigned int)ForegroundInputOwnerMatch((const struct tagTHREADINFO *)a1, a2) != 0;
      return v6;
    }
  }
  return 1LL;
}
