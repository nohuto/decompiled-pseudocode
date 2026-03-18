/*
 * XREFs of ValidateHbwndOwnedByCallingThread @ 0x1401AC2C0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ValidateHbwnd @ 0x140121970 (ValidateHbwnd.c)
 */

__int64 __fastcall ValidateHbwndOwnedByCallingThread(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  struct tagTHREADINFO *v4; // rbx

  v2 = ValidateHbwnd(a1, a2);
  v3 = v2;
  if ( v2 )
  {
    v4 = *(struct tagTHREADINFO **)(v2 + 16);
    if ( v4 != PtiCurrent() )
    {
      UserSetLastError(1400);
      return 0LL;
    }
  }
  else
  {
    UserSetLastError(1400);
  }
  return v3;
}
