/*
 * XREFs of _GetKeyboardLayout @ 0x140048D38
 * Callers:
 *     NtUserGetKeyboardLayout @ 0x140048D00 (NtUserGetKeyboardLayout.c)
 *     GetActiveHKL @ 0x1400670C0 (GetActiveHKL.c)
 * Callees:
 *     ApiSetEditionGetProcessWindowStation @ 0x140048E08 (ApiSetEditionGetProcessWindowStation.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     W32GetCurrentThreadNonPaged @ 0x1401A595C (W32GetCurrentThreadNonPaged.c)
 */

__int64 __fastcall GetKeyboardLayout(int a1)
{
  HANDLE v1; // rsi
  __int64 v2; // rdx
  __int64 v3; // rcx
  _QWORD *CurrentThreadNonPaged; // rax
  __int64 v5; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD **v9; // rdi
  _QWORD *i; // rbx

  v1 = (HANDLE)a1;
  if ( ApiSetEditionGetProcessWindowStation() )
  {
    if ( (_DWORD)v1 )
    {
      v9 = (_QWORD **)(*((_QWORD *)PtiCurrent() + 62) + 176LL);
      for ( i = *v9; i != v9; i = (_QWORD *)*i )
      {
        if ( PsGetThreadId((PETHREAD)*(i - 97)) == v1 )
        {
          v5 = *(i - 37);
          goto LABEL_6;
        }
      }
      return 0LL;
    }
    CurrentThreadNonPaged = (_QWORD *)W32GetCurrentThreadNonPaged();
    if ( CurrentThreadNonPaged )
      CurrentThreadNonPaged = (_QWORD *)*CurrentThreadNonPaged;
    v5 = CurrentThreadNonPaged[60];
LABEL_6:
    if ( !v5 )
      return 0LL;
  }
  else
  {
    if ( !*(_QWORD *)(W32GetUserSessionState(v3, v2) + 14240) )
      return 0LL;
    v5 = *(_QWORD *)(W32GetUserSessionState(v8, v7) + 14240);
  }
  return *(_QWORD *)(v5 + 40);
}
