/*
 * XREFs of ?GetPriorityFloorValue@@YAEW4tagThreadPriorityFloor@@@Z @ 0x1400F7C38
 * Callers:
 *     ?ClearPriorityFloor@tagTHREADINFO@@QEAAXW4tagThreadPriorityFloor@@@Z @ 0x1400F77B0 (-ClearPriorityFloor@tagTHREADINFO@@QEAAXW4tagThreadPriorityFloor@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall GetPriorityFloorValue(unsigned int a1)
{
  if ( a1 > 1 )
    KeBugCheckEx(0x164u, 0x41uLL, 0LL, 0LL, 0LL);
  return asc_140269F10[8 * a1];
}
