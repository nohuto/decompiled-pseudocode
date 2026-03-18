/*
 * XREFs of _GetWOWClass @ 0x1402880C4
 * Callers:
 *     NtUserGetWOWClass @ 0x140298C30 (NtUserGetWOWClass.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     GetClassPtr @ 0x140034BF0 (GetClassPtr.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x140131080 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

_QWORD *__fastcall GetWOWClass(__int64 a1, char *a2)
{
  __int64 ClassPtr; // rdi
  struct tagTHREADINFO *v4; // rsi
  unsigned __int16 Atom; // ax
  _QWORD *result; // rax
  __int64 v7; // rcx
  char v8[512]; // [rsp+40h] [rbp-228h] BYREF

  ClassPtr = 0LL;
  v4 = PtiCurrent(a1, (__int64)a2);
  if ( (int)RtlStringCchCopyW(v8, 256LL, a2) < 0 )
    Atom = 0;
  else
    Atom = UserFindAtom(v8);
  if ( Atom )
    ClassPtr = GetClassPtr((_QWORD *)Atom, *((_QWORD **)v4 + 58), a1);
  if ( ClassPtr )
  {
    result = *(_QWORD **)ClassPtr;
    v7 = *((_QWORD *)v4 + 62);
    if ( v7 == *(_QWORD *)(*(_QWORD *)ClassPtr + 32LL) )
      return result;
    for ( result = (_QWORD *)result[8]; result; result = (_QWORD *)*result )
    {
      if ( v7 == result[4] )
        return result;
    }
  }
  UserSetLastError(1411);
  return 0LL;
}
