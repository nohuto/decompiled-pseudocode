/*
 * XREFs of ?GetPriorityFloorRequester@@YA?AW4tagThreadPriorityFloorRequester@@W4tagThreadPriorityFloor@@@Z @ 0x1400F7BF0
 * Callers:
 *     ?ClearPriorityFloor@tagTHREADINFO@@QEAAXW4tagThreadPriorityFloor@@@Z @ 0x1400F77B0 (-ClearPriorityFloor@tagTHREADINFO@@QEAAXW4tagThreadPriorityFloor@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetPriorityFloorRequester(unsigned int a1)
{
  if ( a1 > 1 )
    KeBugCheckEx(0x164u, 0x41uLL, 0LL, 0LL, 0LL);
  return dword_140269F14[2 * a1];
}
