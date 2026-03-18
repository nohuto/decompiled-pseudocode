/*
 * XREFs of UserIsServiceSession @ 0x1401C4D60
 * Callers:
 *     InitializeGre @ 0x1402F3768 (InitializeGre.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall UserIsServiceSession(int a1, int a2, int a3)
{
  return *(_DWORD *)(W32GetUserSessionState(a1, a2, a3) + 68604) == 0;
}
