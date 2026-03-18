/*
 * XREFs of UserAddAtomToAtomTable @ 0x14019D6C0
 * Callers:
 *     UserAddAtom @ 0x140160180 (UserAddAtom.c)
 * Callees:
 *     SetLastNtError @ 0x14009DA54 (SetLastNtError.c)
 *     ?LkdForAtomAdditionFailure@@YAXPEAXJ@Z @ 0x1401C1594 (-LkdForAtomAdditionFailure@@YAXPEAXJ@Z.c)
 */

__int64 __fastcall UserAddAtomToAtomTable(struct _RTL_ATOM_TABLE *a1, WCHAR *a2, int a3)
{
  NTSTATUS v5; // ebx
  __int64 result; // rax
  USHORT v7; // [rsp+48h] [rbp+20h] BYREF

  v7 = 0;
  v5 = RtlAddAtomToAtomTable(a1, a2, &v7);
  if ( (int)(v5 + 0x80000000) >= 0 && v5 != -1073741773 )
  {
    LkdForAtomAdditionFailure(a1, v5);
    SetLastNtError(v5);
  }
  result = v7;
  if ( v7 )
  {
    if ( a3 )
    {
      RtlPinAtomInAtomTable(a1, v7);
      return v7;
    }
  }
  return result;
}
