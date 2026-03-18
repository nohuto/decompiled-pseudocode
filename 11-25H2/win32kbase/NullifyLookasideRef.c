/*
 * XREFs of NullifyLookasideRef @ 0x1401A6994
 * Callers:
 *     xxxDestroyThreadInfo @ 0x140164194 (xxxDestroyThreadInfo.c)
 * Callees:
 *     ?Win32FreeToPagedLookasideListImpl@@YAXPEAX0@Z @ 0x140010398 (-Win32FreeToPagedLookasideListImpl@@YAXPEAX0@Z.c)
 */

void __fastcall NullifyLookasideRef(_DWORD *a1, __int64 a2)
{
  bool v3; // zf
  __int64 UserSessionState; // rax

  *(_QWORD *)a1 = 0LL;
  v3 = a1[2] == 0;
  *((_BYTE *)a1 + 12) = 1;
  if ( v3 )
  {
    UserSessionState = W32GetUserSessionState(a1, a2);
    Win32FreeToPagedLookasideListImpl(*(char **)(UserSessionState + 42584), (char *)a1);
  }
}
