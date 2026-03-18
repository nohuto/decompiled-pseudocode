/*
 * XREFs of UserAddAtomEx @ 0x1400D8E20
 * Callers:
 *     ?InitAtoms@GroupedProcessForegroundBoost@@YA_NXZ @ 0x14019FDD8 (-InitAtoms@GroupedProcessForegroundBoost@@YA_NXZ.c)
 *     Win32UserInitialize @ 0x1402EB804 (Win32UserInitialize.c)
 * Callees:
 *     SetLastNtError @ 0x14009DA54 (SetLastNtError.c)
 *     ?LkdForAtomAdditionFailure@@YAXPEAXJ@Z @ 0x1401C1594 (-LkdForAtomAdditionFailure@@YAXPEAXJ@Z.c)
 */

__int64 __fastcall UserAddAtomEx(__int64 a1, __int64 a2, unsigned int a3)
{
  int v4; // ebp
  __int64 UserSessionState; // rax
  struct _RTL_ATOM_TABLE *v7; // rsi
  int v8; // ebx
  __int64 result; // rax
  RTL_ATOM v10; // [rsp+58h] [rbp+20h] BYREF

  v4 = a2;
  UserSessionState = W32GetUserSessionState(a1, a2);
  v10 = 0;
  v7 = *(struct _RTL_ATOM_TABLE **)(UserSessionState + 41376);
  v8 = RtlAddAtomToAtomTableEx(v7, a1, &v10, a3);
  if ( (int)(v8 + 0x80000000) >= 0 && v8 != -1073741773 )
  {
    LkdForAtomAdditionFailure(v7, v8);
    SetLastNtError(v8);
  }
  result = v10;
  if ( v10 )
  {
    if ( v4 )
    {
      RtlPinAtomInAtomTable(v7, v10);
      return v10;
    }
  }
  return result;
}
