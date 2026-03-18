/*
 * XREFs of _ImpersonateDdeClientWindow @ 0x1402B2A18
 * Callers:
 *     NtUserImpersonateDdeClientWindow @ 0x140299EE0 (NtUserImpersonateDdeClientWindow.c)
 * Callees:
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     ?FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z @ 0x1401DCF78 (-FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z.c)
 */

__int64 __fastcall ImpersonateDdeClientWindow(struct tagWND *a1, struct tagWND *a2)
{
  struct tagDDECONV *DdeConv; // rax
  __int64 v3; // rcx
  int v4; // eax

  DdeConv = FindDdeConv(a1, a2);
  if ( !DdeConv )
    return 0LL;
  v3 = *((_QWORD *)DdeConv + 11);
  if ( !v3 )
    return 0LL;
  v4 = SeImpersonateClientEx((PSECURITY_CLIENT_CONTEXT)(v3 + 16), KeGetCurrentThread());
  if ( v4 < 0 )
  {
    SetLastNtError(v4);
    return 0LL;
  }
  return 1LL;
}
