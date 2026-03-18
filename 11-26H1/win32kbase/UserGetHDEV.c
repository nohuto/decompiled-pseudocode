/*
 * XREFs of UserGetHDEV @ 0x14012A930
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall UserGetHDEV(int a1, int a2, int a3)
{
  return *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(a1, a2, a3) + 56968) + 40LL);
}
