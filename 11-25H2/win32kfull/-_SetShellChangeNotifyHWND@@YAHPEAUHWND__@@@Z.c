/*
 * XREFs of ?_SetShellChangeNotifyHWND@@YAHPEAUHWND__@@@Z @ 0x140220820
 * Callers:
 *     NtUserSetShellChangeNotifyHWND @ 0x1402207E0 (NtUserSetShellChangeNotifyHWND.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall _SetShellChangeNotifyHWND(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 result; // rax

  v4 = *((_QWORD *)PtiCurrent(a1, a2) + 62);
  if ( v4 )
  {
    v5 = *(_QWORD *)(v4 + 8);
    if ( v5 )
    {
      v6 = *(_QWORD *)(v5 + 168);
      if ( v6 )
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v3);
        v8 = CurrentProcessWin32Process;
        if ( CurrentProcessWin32Process )
          v8 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
        v9 = *(_QWORD *)(*(_QWORD *)(v6 + 16) + 464LL);
        if ( *(_DWORD *)(v8 + 764) == *(_DWORD *)(v9 + 764) )
        {
          v10 = PsGetCurrentProcessWin32Process(v9);
          v11 = v10;
          if ( v10 )
            v11 = -(__int64)(*(_QWORD *)v10 != 0LL) & v10;
          if ( *(_DWORD *)(v11 + 768) == *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 16) + 464LL) + 768LL) )
          {
            result = 1LL;
            *(_QWORD *)(**(_QWORD **)(v4 + 8) + 56LL) = a1;
            return result;
          }
        }
        UserSetLastError(5);
      }
    }
  }
  return 0LL;
}
