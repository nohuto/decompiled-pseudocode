/*
 * XREFs of ?CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1401588D8
 * Callers:
 *     zzzInternalShowCaret @ 0x140053124 (zzzInternalShowCaret.c)
 *     _SetCaretBlinkTime @ 0x14005EE60 (_SetCaretBlinkTime.c)
 *     zzzSetCaretPos @ 0x140158248 (zzzSetCaretPos.c)
 * Callees:
 *     _SetSystemTimer @ 0x140158A0C (_SetSystemTimer.c)
 *     IsRemoteConnection @ 0x1401590F0 (IsRemoteConnection.c)
 */

void __fastcall CreateCaretTimer(struct tagWND *a1, struct tagQ *a2)
{
  int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 UserSessionState; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx

  v3 = (int)a1;
  if ( !*((_QWORD *)a2 + 46) && *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(a1, a2) + 19872) + 4984LL) != -1 )
  {
    if ( *(_DWORD *)UPDWORDPointer(8226LL) )
    {
      v7 = *(_QWORD *)(W32GetUserSessionState(v5, v4) + 19872);
      if ( (*(_DWORD *)(v7 + 2236) & 4) != 0 || !(unsigned int)IsRemoteConnection() )
      {
        UserSessionState = W32GetUserSessionState(v7, v6);
        *((_QWORD *)a2 + 46) = SetSystemTimer(
                                 v3,
                                 0xFFFF,
                                 *(_DWORD *)(*(_QWORD *)(UserSessionState + 19872) + 4984LL),
                                 (unsigned int)CaretBlinkProc,
                                 0);
        if ( *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v10, v9) + 19872) + 4984LL) )
        {
          v11 = *(_DWORD *)UPDWORDPointer(8226LL);
          *((_DWORD *)a2 + 84) = v11 / *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v13, v12) + 19872) + 4984LL) + 1;
        }
        else
        {
          *((_DWORD *)a2 + 84) = -1;
        }
      }
    }
  }
}
