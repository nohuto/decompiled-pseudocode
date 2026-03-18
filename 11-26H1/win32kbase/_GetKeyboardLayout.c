/*
 * XREFs of _GetKeyboardLayout @ 0x14003B834
 * Callers:
 *     NtUserGetKeyboardLayout @ 0x14003B800 (NtUserGetKeyboardLayout.c)
 *     GetActiveHKL @ 0x14008B420 (GetActiveHKL.c)
 * Callees:
 *     ApiSetEditionGetProcessWindowStation @ 0x14003B90C (ApiSetEditionGetProcessWindowStation.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall GetKeyboardLayout(int a1)
{
  HANDLE v1; // rdi
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  _QWORD **v14; // rsi
  _QWORD *i; // rbx

  v1 = (HANDLE)a1;
  if ( ApiSetEditionGetProcessWindowStation() )
  {
    if ( (_DWORD)v1 )
    {
      v14 = (_QWORD **)(*((_QWORD *)PtiCurrent() + 61) + 176LL);
      for ( i = *v14; i != v14; i = (_QWORD *)*i )
      {
        if ( PsGetThreadId((PETHREAD)*(i - 96)) == v1 )
        {
          v8 = *(i - 37);
          goto LABEL_6;
        }
      }
      return 0LL;
    }
    CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(v3, v2);
    if ( CurrentThreadWin32Thread )
      v7 = *CurrentThreadWin32Thread;
    else
      v7 = 0LL;
    v8 = *(_QWORD *)(v7 + 472);
LABEL_6:
    if ( !v8 )
      return 0LL;
  }
  else
  {
    if ( !*(_QWORD *)(W32GetUserSessionState(v3, v2, v4, v5) + 14232) )
      return 0LL;
    v8 = *(_QWORD *)(W32GetUserSessionState(v11, v10, v12, v13) + 14232);
  }
  return *(_QWORD *)(v8 + 40);
}
