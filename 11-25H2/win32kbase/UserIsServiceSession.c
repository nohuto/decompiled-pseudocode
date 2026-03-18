/*
 * XREFs of UserIsServiceSession @ 0x1401A1340
 * Callers:
 *     InitializeGre @ 0x1402EC79C (InitializeGre.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall UserIsServiceSession(__int64 a1, __int64 a2)
{
  return *(_DWORD *)(W32GetUserSessionState(a1, a2) + 68612) == 0;
}
