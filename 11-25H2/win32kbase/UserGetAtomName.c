/*
 * XREFs of UserGetAtomName @ 0x14009D930
 * Callers:
 *     <none>
 * Callees:
 *     SetLastNtError @ 0x14009DA54 (SetLastNtError.c)
 */

__int64 __fastcall UserGetAtomName(__int64 a1, WCHAR *a2, int a3)
{
  RTL_ATOM v5; // si
  struct _RTL_ATOM_TABLE *v6; // rcx
  NTSTATUS v7; // eax
  unsigned int v8; // ebx
  ULONG NameLength; // [rsp+50h] [rbp+18h] BYREF

  v5 = a1;
  v6 = *(struct _RTL_ATOM_TABLE **)(W32GetUserSessionState(a1, a2) + 41376);
  NameLength = 2 * a3;
  v7 = RtlQueryAtomInAtomTable(v6, v5, 0LL, 0LL, a2, &NameLength);
  v8 = 0;
  if ( v7 < 0 )
    SetLastNtError((unsigned int)v7);
  else
    return NameLength >> 1;
  return v8;
}
