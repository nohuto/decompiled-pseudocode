/*
 * XREFs of ?ForegroundInputOwnerMatch@@YAHPEBUtagTHREADINFO@@H@Z @ 0x14020DF40
 * Callers:
 *     NtUserOpenClipboard @ 0x1401AF7E0 (NtUserOpenClipboard.c)
 *     ?InForegroundQueue@@YAHPEBUtagTHREADINFO@@H@Z @ 0x1402942C4 (-InForegroundQueue@@YAHPEBUtagTHREADINFO@@H@Z.c)
 *     NtUserSetClipboardData @ 0x1402BC050 (NtUserSetClipboardData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ForegroundInputOwnerMatch(const struct tagTHREADINFO *a1, __int64 a2)
{
  int v2; // r14d
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int v6; // ebx
  __int64 v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rsi
  int v12; // esi

  v2 = a2;
  v6 = 0;
  if ( *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(a1, a2) + 18928) + 104LL) )
    v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v5, v4) + 18928) + 104LL) + 456LL);
  else
    v7 = 0LL;
  v9 = *(_QWORD *)(W32GetUserSessionState(v5, v4) + 18928);
  if ( *(_QWORD *)(v9 + 96) )
  {
    v9 = *(_QWORD *)(W32GetUserSessionState(v9, v8) + 18928);
    v10 = *(_QWORD *)(*(_QWORD *)(v9 + 96) + 456LL);
  }
  else
  {
    v10 = 0LL;
  }
  v11 = *((_QWORD *)a1 + 57);
  if ( v7 == v11 || v10 == v11 )
    return 1LL;
  v12 = *(_DWORD *)(v11 + 868);
  if ( v2 && v12 )
  {
    if ( *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v9, v8) + 18928) + 476LL) != v12
      && (!v7 || *(_DWORD *)(v7 + 868) != v12) )
    {
      if ( v10 )
      {
        LOBYTE(v6) = *(_DWORD *)(v10 + 868) == v12;
        return v6;
      }
      return 0LL;
    }
    return 1LL;
  }
  return 0LL;
}
