/*
 * XREFs of ?AddThreadToListWorker@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@PEQ1@PEAU2@PEQ2@PEAU2@@Z @ 0x1401002FC
 * Callers:
 *     ?AssignQueueWorker@tagTHREADINFO@@AEAAPEAUtagQ@@PEAU2@PEQ2@PEAU1@PEQ1@PEAU1@PEQ1@PEAU2@@Z @ 0x14012200C (-AssignQueueWorker@tagTHREADINFO@@AEAAPEAUtagQ@@PEAU2@PEQ2@PEAU1@PEQ1@PEAU1@PEQ1@PEAU2@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AddThreadToListWorker(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3, int a3, int a4)
{
  __int64 v4; // r11
  __int64 v5; // rbx
  __int64 i; // r8
  __int64 result; // rax

  v4 = a3;
  v5 = *(_QWORD *)(a3 + BugCheckParameter2);
  for ( i = v5; i; i = *(_QWORD *)(a4 + i) )
  {
    if ( i == BugCheckParameter3 )
      goto LABEL_7;
    result = a4;
  }
  if ( *(_QWORD *)(a4 + BugCheckParameter3) )
LABEL_7:
    KeBugCheckEx(0x164u, 0x12uLL, BugCheckParameter2, BugCheckParameter3, 0LL);
  *(_QWORD *)(a4 + BugCheckParameter3) = v5;
  *(_QWORD *)(v4 + BugCheckParameter2) = BugCheckParameter3;
  return result;
}
