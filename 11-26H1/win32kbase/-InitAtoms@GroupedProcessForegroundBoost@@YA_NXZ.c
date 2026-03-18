/*
 * XREFs of ?InitAtoms@GroupedProcessForegroundBoost@@YA_NXZ @ 0x1401C12F0
 * Callers:
 *     Win32UserInitialize @ 0x1402F23AC (Win32UserInitialize.c)
 * Callees:
 *     UserAddAtomEx @ 0x140120D00 (UserAddAtomEx.c)
 */

bool __fastcall GroupedProcessForegroundBoost::InitAtoms(GroupedProcessForegroundBoost *this)
{
  __int16 v1; // bx
  int v2; // edx
  int v3; // ecx
  int v4; // r8d
  int v5; // edx
  int v6; // ecx
  int v7; // r8d

  v1 = UserAddAtomEx((__int64)L"AdditionalFGBoostProp", 1, 2u);
  *(_WORD *)(W32GetUserSessionState(v3, v2, v4) + 42280) = v1;
  return *(_WORD *)(W32GetUserSessionState(v6, v5, v7) + 42280) != 0;
}
