/*
 * XREFs of GetDisplayAffinity @ 0x1401CBA70
 * Callers:
 *     SetDisplayAffinity @ 0x1401CB8D8 (SetDisplayAffinity.c)
 *     NtUserGetWindowDisplayAffinity @ 0x1401CB9C0 (NtUserGetWindowDisplayAffinity.c)
 * Callees:
 *     _GetProp @ 0x14001DE00 (_GetProp.c)
 *     _IsTopLevelWindow @ 0x140037CA0 (_IsTopLevelWindow.c)
 */

__int64 __fastcall GetDisplayAffinity(__int64 a1, _DWORD *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 UserSessionState; // rax

  v2 = 0;
  *a2 = 0;
  if ( IsTopLevelWindow(a1) && (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 26LL) & 8) != 0 )
  {
    UserSessionState = W32GetUserSessionState(v6, v5);
    v2 = 1;
    *a2 = GetProp(a1, *(unsigned __int16 *)(UserSessionState + 41360), 1u);
  }
  return v2;
}
