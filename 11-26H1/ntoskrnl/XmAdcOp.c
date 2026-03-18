/*
 * XREFs of XmAdcOp @ 0x1405ACA80
 * Callers:
 *     <none>
 * Callees:
 *     XmAddOperands @ 0x1404A80F0 (XmAddOperands.c)
 */

__int64 __fastcall XmAdcOp(__int64 a1)
{
  return XmAddOperands(a1, *(_DWORD *)(a1 + 16) & 1);
}
