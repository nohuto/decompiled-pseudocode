/*
 * XREFs of CiDecrementTotalThreadCount @ 0x140003DF0
 * Callers:
 *     CiThreadCreate @ 0x14000E900 (CiThreadCreate.c)
 *     CiThreadCleanup @ 0x14000EEF0 (CiThreadCleanup.c)
 * Callees:
 *     <none>
 */

void __fastcall CiDecrementTotalThreadCount(volatile signed __int32 *a1)
{
  _InterlockedDecrement(a1);
}
