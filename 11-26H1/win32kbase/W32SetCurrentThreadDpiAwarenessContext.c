/*
 * XREFs of W32SetCurrentThreadDpiAwarenessContext @ 0x140085250
 * Callers:
 *     ?zzzUpdateUserScreen@@YAJXZ @ 0x14007FA6C (-zzzUpdateUserScreen@@YAJXZ.c)
 * Callees:
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1400853E0 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 */

__int64 __fastcall W32SetCurrentThreadDpiAwarenessContext(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  int v3; // edi
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v9; // [rsp+48h] [rbp+10h]

  v2 = 0;
  v3 = 0;
  if ( (int)a1 >= 0 )
    v3 = a1;
  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(a1, a2);
  if ( CurrentThreadWin32Thread )
    v6 = *CurrentThreadWin32Thread;
  else
    v6 = 0LL;
  v9 = v6;
  if ( v6 )
  {
    if ( *(_QWORD *)(v6 + 400) )
      CaptureAndValidateUserModeDpiAwarenessContext(v6);
    v2 = *(_DWORD *)(v9 + 392);
    *(_DWORD *)(v9 + 392) = v3;
    if ( *(_QWORD *)(v9 + 400) )
    {
      v5 = *(unsigned int *)(v9 + 392);
      **(_DWORD **)(v9 + 400) = v5;
    }
  }
  if ( !v2 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5);
    if ( CurrentProcessWin32Process && !*(_QWORD *)CurrentProcessWin32Process )
      CurrentProcessWin32Process = 0LL;
    return *(_DWORD *)(CurrentProcessWin32Process + 268) | 0x80000000;
  }
  return v2;
}
