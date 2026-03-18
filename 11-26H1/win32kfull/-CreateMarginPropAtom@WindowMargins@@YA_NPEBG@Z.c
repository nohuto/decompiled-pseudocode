/*
 * XREFs of ?CreateMarginPropAtom@WindowMargins@@YA_NPEBG@Z @ 0x14021EE68
 * Callers:
 *     SetupClassAtoms @ 0x14021E280 (SetupClassAtoms.c)
 * Callees:
 *     <none>
 */

bool __fastcall WindowMargins::CreateMarginPropAtom(WindowMargins *this, const unsigned __int16 *a2)
{
  __int16 v2; // bx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx

  v2 = UserAddAtomEx(L"SysWndMargin", 1LL, 2LL);
  *(_WORD *)(W32GetUserSessionState(v4, v3) + 42276) = v2;
  return *(_WORD *)(W32GetUserSessionState(v6, v5) + 42276) != 0;
}
