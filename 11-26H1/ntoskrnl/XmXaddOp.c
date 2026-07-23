/*
 * XREFs of XmXaddOp @ 0x1405AF390
 * Callers:
 *     <none>
 * Callees:
 *     XmAddOperands @ 0x1404A1780 (XmAddOperands.c)
 *     XmStoreResult @ 0x1404A24CC (XmStoreResult.c)
 */

_WORD *__fastcall XmXaddOp(__int64 a1)
{
  int v1; // ebx

  v1 = *(_DWORD *)(a1 + 104);
  XmAddOperands(a1, 0);
  *(_QWORD *)(a1 + 88) = *(_QWORD *)(a1 + 96);
  return XmStoreResult(a1, v1);
}
