/*
 * XREFs of _HMObjectFromHandle @ 0x14010F910
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HMObjectFromHandle(int a1, int a2, int a3)
{
  return *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(a1, a2, a3) + 19864) + 40LL * (unsigned __int16)a1);
}
