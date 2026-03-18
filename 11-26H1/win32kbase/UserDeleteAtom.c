/*
 * XREFs of UserDeleteAtom @ 0x1401416D0
 * Callers:
 *     <none>
 * Callees:
 *     SetLastNtError @ 0x140087ACC (SetLastNtError.c)
 */

__int64 __fastcall UserDeleteAtom(int a1, int a2, int a3)
{
  RTL_ATOM v3; // bx
  struct _RTL_ATOM_TABLE *v4; // rdi
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  int v11; // ecx
  __int64 result; // rax

  v3 = a1;
  v4 = *(struct _RTL_ATOM_TABLE **)(W32GetUserSessionState(a1, a2, a3) + 41416);
  if ( v3 >= *(_WORD *)(W32GetUserSessionState(v6, v5, v7) + 41360)
    && v3 <= *(_WORD *)(W32GetUserSessionState(v9, v8, v10) + 41362) )
  {
    return 0LL;
  }
  v11 = RtlDeleteAtomFromAtomTable(v4, v3);
  result = 0LL;
  if ( v11 < 0 )
  {
    SetLastNtError(v11);
    return v3;
  }
  return result;
}
