/*
 * XREFs of ?GetPriorityFloorRequester@@YA?AW4tagThreadPriorityFloorRequester@@W4tagThreadPriorityFloor@@@Z @ 0x1400C13C8
 * Callers:
 *     ?ClearPriorityFloor@tagTHREADINFO@@QEAAXW4tagThreadPriorityFloor@@@Z @ 0x1400C0B80 (-ClearPriorityFloor@tagTHREADINFO@@QEAAXW4tagThreadPriorityFloor@@@Z.c)
 *     ?SetPriorityFloor@tagTHREADINFO@@QEAAXW4tagThreadPriorityFloor@@@Z @ 0x1400C0FB0 (-SetPriorityFloor@tagTHREADINFO@@QEAAXW4tagThreadPriorityFloor@@@Z.c)
 *     ?IsPriorityFloorSet@tagTHREADINFO@@QEAA_NW4tagThreadPriorityFloor@@@Z @ 0x1400C1330 (-IsPriorityFloorSet@tagTHREADINFO@@QEAA_NW4tagThreadPriorityFloor@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetPriorityFloorRequester(unsigned int a1)
{
  if ( a1 > 1 )
    KeBugCheckEx(0x164u, 0x41uLL, 0LL, 0LL, 0LL);
  return dword_1402617EC[2 * a1];
}
