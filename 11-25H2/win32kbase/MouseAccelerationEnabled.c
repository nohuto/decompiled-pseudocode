/*
 * XREFs of MouseAccelerationEnabled @ 0x1400F53E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall MouseAccelerationEnabled(__int64 a1, __int64 a2)
{
  return *(_BYTE *)(*(_QWORD *)(W32GetUserSessionState(a1, a2) + 16368) + 112LL);
}
