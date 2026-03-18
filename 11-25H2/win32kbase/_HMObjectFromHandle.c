/*
 * XREFs of _HMObjectFromHandle @ 0x1400C8280
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HMObjectFromHandle(__int64 a1, __int64 a2)
{
  return *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(a1, a2) + 19832) + 40LL * (unsigned __int16)a1);
}
