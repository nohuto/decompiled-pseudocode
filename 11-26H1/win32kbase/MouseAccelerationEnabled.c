/*
 * XREFs of MouseAccelerationEnabled @ 0x14013B950
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall MouseAccelerationEnabled(int a1, int a2, int a3)
{
  return *(_BYTE *)(*(_QWORD *)(W32GetUserSessionState(a1, a2, a3) + 16360) + 112LL);
}
