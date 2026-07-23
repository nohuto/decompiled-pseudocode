/*
 * XREFs of CmpSetPriorityThread @ 0x1404E6E40
 * Callers:
 *     CmpDoFileWrite @ 0x140AE48C8 (CmpDoFileWrite.c)
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x14023AEC0 (KeSetActualBasePriorityThread.c)
 */

__int64 __fastcall CmpSetPriorityThread(__int64 a1, __int64 a2, __int64 a3)
{
  return KeSetActualBasePriorityThread(a1, a2, a3);
}
