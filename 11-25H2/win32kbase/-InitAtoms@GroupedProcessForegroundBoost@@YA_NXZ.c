/*
 * XREFs of ?InitAtoms@GroupedProcessForegroundBoost@@YA_NXZ @ 0x14019FDD8
 * Callers:
 *     Win32UserInitialize @ 0x1402EB804 (Win32UserInitialize.c)
 * Callees:
 *     UserAddAtomEx @ 0x1400D8E20 (UserAddAtomEx.c)
 */

bool __fastcall GroupedProcessForegroundBoost::InitAtoms(GroupedProcessForegroundBoost *this)
{
  __int16 v1; // bx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx

  v1 = UserAddAtomEx((__int64)L"AdditionalFGBoostProp", 1LL, 2u);
  *(_WORD *)(W32GetUserSessionState(v3, v2) + 42252) = v1;
  return *(_WORD *)(W32GetUserSessionState(v5, v4) + 42252) != 0;
}
