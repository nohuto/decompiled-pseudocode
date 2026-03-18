/*
 * XREFs of UserGetAtomName @ 0x140087AF0
 * Callers:
 *     <none>
 * Callees:
 *     SetLastNtError @ 0x140087ACC (SetLastNtError.c)
 */

__int64 __fastcall UserGetAtomName(int a1, WCHAR *a2, int a3)
{
  RTL_ATOM v4; // di
  __int64 UserSessionState; // rax
  int v6; // eax
  unsigned int v7; // ebx
  ULONG NameLength; // [rsp+50h] [rbp+18h] BYREF

  NameLength = 2 * a3;
  v4 = a1;
  UserSessionState = W32GetUserSessionState(a1, (_DWORD)a2, a3);
  v6 = RtlQueryAtomInAtomTable(*(PRTL_ATOM_TABLE *)(UserSessionState + 41416), v4, 0LL, 0LL, a2, &NameLength);
  v7 = 0;
  if ( v6 < 0 )
    SetLastNtError(v6);
  else
    return NameLength >> 1;
  return v7;
}
