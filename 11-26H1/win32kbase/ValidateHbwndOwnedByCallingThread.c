/*
 * XREFs of ValidateHbwndOwnedByCallingThread @ 0x1401CEAB0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ValidateHbwnd @ 0x1400533C0 (ValidateHbwnd.c)
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 */

__int64 __fastcall ValidateHbwndOwnedByCallingThread(int a1, int a2, int a3)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdi
  struct tagTHREADINFO *v7; // rbx

  v3 = ValidateHbwnd(a1, a2, a3);
  v6 = v3;
  if ( v3 )
  {
    v7 = *(struct tagTHREADINFO **)(v3 + 16);
    if ( v7 != PtiCurrent(v5, v4) )
    {
      UserSetLastError(1400);
      return 0LL;
    }
  }
  else
  {
    UserSetLastError(1400);
  }
  return v6;
}
