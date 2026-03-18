/*
 * XREFs of PsSetSystemMultipleGroupAffinityThread @ 0x1406156F0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetSystemMultipleGroupAffinityThread @ 0x14050FB94 (KeSetSystemMultipleGroupAffinityThread.c)
 */

__int64 __fastcall PsSetSystemMultipleGroupAffinityThread(__int64 *a1, unsigned __int16 a2, __int64 a3)
{
  return KeSetSystemMultipleGroupAffinityThread(a1, a2, a3);
}
