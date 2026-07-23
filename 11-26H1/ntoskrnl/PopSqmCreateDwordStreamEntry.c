/*
 * XREFs of PopSqmCreateDwordStreamEntry @ 0x1404F9238
 * Callers:
 *     PopSqmBatteryUpdate @ 0x1409C1F4C (PopSqmBatteryUpdate.c)
 * Callees:
 *     <none>
 */

void __fastcall PopSqmCreateDwordStreamEntry(_DWORD *a1, int a2)
{
  a1[2] = a2;
  *a1 = 1;
}
