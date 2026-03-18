/*
 * XREFs of PopSqmCreateDwordStreamEntry @ 0x1404FFA48
 * Callers:
 *     PopSqmBatteryUpdate @ 0x1409465DC (PopSqmBatteryUpdate.c)
 * Callees:
 *     <none>
 */

void __fastcall PopSqmCreateDwordStreamEntry(_DWORD *a1, int a2)
{
  a1[2] = a2;
  *a1 = 1;
}
