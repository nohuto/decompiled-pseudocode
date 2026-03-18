/*
 * XREFs of NullifyLookasideRef @ 0x1401C9D24
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1400BA274 (xxxDestroyThreadInfo.c)
 * Callees:
 *     ?Win32FreeToPagedLookasideListImpl@@YAXPEAX0@Z @ 0x1400B80E4 (-Win32FreeToPagedLookasideListImpl@@YAXPEAX0@Z.c)
 */

void __fastcall NullifyLookasideRef(_DWORD *a1, int a2, int a3)
{
  bool v3; // zf
  __int64 UserSessionState; // rax
  int v6; // r8d

  v3 = a1[2] == 0;
  *(_QWORD *)a1 = 0LL;
  *((_BYTE *)a1 + 12) = 1;
  if ( v3 )
  {
    UserSessionState = W32GetUserSessionState((_DWORD)a1, a2, a3);
    Win32FreeToPagedLookasideListImpl(*(char **)(UserSessionState + 42608), (char *)a1, v6);
  }
}
