/*
 * XREFs of KiInitializeDpcList @ 0x1405FDA18
 * Callers:
 *     KiInitPrcb @ 0x140BF9C24 (KiInitPrcb.c)
 *     KiInitializeProcessor @ 0x140BF9FD4 (KiInitializeProcessor.c)
 * Callees:
 *     <none>
 */

void __fastcall KiInitializeDpcList(_QWORD *a1)
{
  *a1 = 0LL;
  a1[1] = a1;
}
