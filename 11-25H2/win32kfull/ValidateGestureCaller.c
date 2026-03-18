/*
 * XREFs of ValidateGestureCaller @ 0x1402B9A4C
 * Callers:
 *     NtUserInjectGesture @ 0x14029A330 (NtUserInjectGesture.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 */

__int64 __fastcall ValidateGestureCaller(__int64 a1, __int64 a2)
{
  const struct tagUIPI_INFO *v4; // r8
  const struct tagUIPI_INFO *v5; // rax

  v4 = *(const struct tagUIPI_INFO **)(W32GetUserSessionState(a1, a2) + 19144);
  v5 = *(const struct tagUIPI_INFO **)(a1 + 496);
  if ( v5 == v4 && v5 == *(const struct tagUIPI_INFO **)(a2 + 24) )
  {
    if ( UIPrivilegeIsolation::CheckAccess(
           (UIPrivilegeIsolation *)(*(_QWORD *)(a1 + 464) + 864LL),
           (const struct tagUIPI_INFO *)(*(_QWORD *)(*(_QWORD *)(a2 + 16) + 464LL) + 864LL),
           v4) )
    {
      return 1LL;
    }
    UserSetLastError(5);
    EtwTraceUIPIMsgError(*(_QWORD *)(a1 + 464), *(_QWORD *)(*(_QWORD *)(a2 + 16) + 464LL), 281LL, 0LL, 0LL);
  }
  else
  {
    UserSetLastError(5);
  }
  return 0LL;
}
