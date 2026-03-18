/*
 * XREFs of EditionShowSystemCursor @ 0x1401212C0
 * Callers:
 *     NtUserShowSystemCursor @ 0x1402A2770 (NtUserShowSystemCursor.c)
 * Callees:
 *     ?HidePointer@CursorApiRouter@@QEAA_N_N@Z @ 0x1401212F8 (-HidePointer@CursorApiRouter@@QEAA_N_N@Z.c)
 */

_BOOL8 __fastcall EditionShowSystemCursor(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 UserSessionState; // rax

  v2 = a1;
  UserSessionState = W32GetUserSessionState(a1, a2);
  return CursorApiRouter::HidePointer(*(CursorApiRouter **)(UserSessionState + 36304), v2 == 0);
}
