/*
 * XREFs of ?AssignQueueWorker@tagTHREADINFO@@AEAAPEAUtagQ@@PEAU2@PEQ2@PEAU1@PEQ1@PEAU1@PEQ1@PEAU2@@Z @ 0x140140A0C
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1400BA274 (xxxDestroyThreadInfo.c)
 *     ?AssignQueue@tagTHREADINFO@@QEAAPEAUtagQ@@PEAU2@@Z @ 0x140140960 (-AssignQueue@tagTHREADINFO@@QEAAPEAUtagQ@@PEAU2@@Z.c)
 *     ?AssignAttachQueue@tagTHREADINFO@@QEAAPEAUtagQ@@PEAU2@@Z @ 0x1401409E0 (-AssignAttachQueue@tagTHREADINFO@@QEAAPEAUtagQ@@PEAU2@@Z.c)
 *     ?AssignQueueWorker@tagTHREADINFO@@AEAAPEAUtagQ@@PEAU2@PEQ2@PEAU1@PEQ1@PEAU1@PEQ1@PEAU2@@Z @ 0x140140A0C (-AssignQueueWorker@tagTHREADINFO@@AEAAPEAUtagQ@@PEAU2@PEQ2@PEAU1@PEQ1@PEAU1@PEQ1@PEAU2@@Z.c)
 * Callees:
 *     ?AssignQueueWorker@tagTHREADINFO@@AEAAPEAUtagQ@@PEAU2@PEQ2@PEAU1@PEQ1@PEAU1@PEQ1@PEAU2@@Z @ 0x140140A0C (-AssignQueueWorker@tagTHREADINFO@@AEAAPEAUtagQ@@PEAU2@PEQ2@PEAU1@PEQ1@PEAU1@PEQ1@PEAU2@@Z.c)
 *     ?AddThreadToListWorker@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@PEQ1@PEAU2@PEQ2@PEAU2@@Z @ 0x140140AD8 (-AddThreadToListWorker@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@PEQ1@PEAU2@PEQ2@PEAU2@@Z.c)
 *     ?RemoveThreadFromListWorker@tagTHREADINFO@@AEAA_NPEAUtagQ@@PEQ2@PEAU1@PEQ1@PEAU1@@Z @ 0x14014BB34 (-RemoveThreadFromListWorker@tagTHREADINFO@@AEAA_NPEAUtagQ@@PEQ2@PEAU1@PEQ1@PEAU1@@Z.c)
 */

ULONG_PTR __fastcall tagTHREADINFO::AssignQueueWorker(ULONG_PTR a1, ULONG_PTR a2, __int64 a3, __int64 a4, int a5)
{
  ULONG_PTR BugCheckParameter4; // rsi

  BugCheckParameter4 = *(_QWORD *)(a5 + a1);
  if ( BugCheckParameter4 && !(unsigned __int8)tagTHREADINFO::RemoveThreadFromListWorker(a1, *(_QWORD *)(a5 + a1)) )
    KeBugCheckEx(0x164u, 0x12uLL, a1, a2, BugCheckParameter4);
  *(_QWORD *)(a5 + a1) = a2;
  if ( a2 )
    AddThreadToListWorker(a2, a1);
  if ( a5 == 464 && a2 == *(_QWORD *)(a1 + 688) )
    tagTHREADINFO::AssignQueueWorker(a1, 0, 536, 1696, 688);
  return BugCheckParameter4;
}
