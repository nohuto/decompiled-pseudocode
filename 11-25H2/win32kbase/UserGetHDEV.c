/*
 * XREFs of UserGetHDEV @ 0x1400DE530
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall UserGetHDEV(__int64 a1, __int64 a2)
{
  return *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(a1, a2) + 56968) + 48LL);
}
