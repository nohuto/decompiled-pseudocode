/*
 * XREFs of _UnlockWindowStation @ 0x1402035A4
 * Callers:
 *     NtUserUnlockWindowStation @ 0x140203520 (NtUserUnlockWindowStation.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 */

__int64 __fastcall UnlockWindowStation(__int64 a1, __int64 a2)
{
  HANDLE v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 UserSessionState; // rax

  v3 = *(HANDLE *)(W32GetUserSessionState(a1, a2) + 63544);
  if ( PsGetCurrentProcessId() == v3 )
  {
    UserSessionState = W32GetUserSessionState(v5, v4);
    if ( (*(_DWORD *)(a1 + 64) & 8) != 0 )
    {
      *(_DWORD *)(UserSessionState + 63480) &= ~1u;
      *(_DWORD *)(a1 + 64) &= ~1u;
    }
    else
    {
      *(_DWORD *)(UserSessionState + 63480) &= 0xFFFFFFFC;
      *(_DWORD *)(a1 + 64) &= 0xFFFFFFFC;
    }
    return 1LL;
  }
  else
  {
    UserSetLastError(5);
    return 0LL;
  }
}
