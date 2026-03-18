/*
 * XREFs of ?InitializeCursorGlobals@@YAJXZ @ 0x140156318
 * Callers:
 *     Win32kBaseDriverEntryOrFault @ 0x1401B34A8 (Win32kBaseDriverEntryOrFault.c)
 *     Win32kBaseDriverEntry @ 0x1402E85E0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     memmove @ 0x140243540 (memmove.c)
 */

__int64 __fastcall InitializeCursorGlobals(__int64 a1, __int64 a2)
{
  _DWORD *UserSessionState; // rbx
  __int64 result; // rax

  UserSessionState = (_DWORD *)W32GetUserSessionState(a1, a2);
  memmove(UserSessionState + 5468, &unk_14026A540, 0x28F8uLL);
  memmove(UserSessionState + 8090, &unk_140269620, 0xF18uLL);
  result = 0LL;
  UserSessionState[9085] = 9;
  return result;
}
