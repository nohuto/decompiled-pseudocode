/*
 * XREFs of UserGetAtomNameFromAtomTable @ 0x14009D8E0
 * Callers:
 *     <none>
 * Callees:
 *     SetLastNtError @ 0x14009DA54 (SetLastNtError.c)
 */

__int64 __fastcall UserGetAtomNameFromAtomTable(struct _RTL_ATOM_TABLE *a1, RTL_ATOM a2, WCHAR *AtomName, int a4)
{
  NTSTATUS v4; // eax
  ULONG NameLength; // [rsp+58h] [rbp+20h] BYREF

  NameLength = 2 * a4;
  v4 = RtlQueryAtomInAtomTable(a1, a2, 0LL, 0LL, AtomName, &NameLength);
  if ( v4 >= 0 )
    return NameLength >> 1;
  SetLastNtError((unsigned int)v4);
  return 0LL;
}
