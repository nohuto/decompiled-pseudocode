/*
 * XREFs of XmXaddOp @ 0x140572780
 * Callers:
 *     <none>
 * Callees:
 *     XmAddOperands @ 0x14046A450 (XmAddOperands.c)
 *     XmStoreResult @ 0x14046AFAC (XmStoreResult.c)
 */

_WORD *__fastcall XmXaddOp(__int64 a1)
{
  int v1; // ebx

  v1 = *(_DWORD *)(a1 + 104);
  XmAddOperands(a1, 0);
  *(_QWORD *)(a1 + 88) = *(_QWORD *)(a1 + 96);
  return XmStoreResult(a1, v1);
}
