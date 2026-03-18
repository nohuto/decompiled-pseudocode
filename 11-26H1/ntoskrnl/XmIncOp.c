/*
 * XREFs of XmIncOp @ 0x1404A7FC0
 * Callers:
 *     <none>
 * Callees:
 *     XmAddOperands @ 0x1404A80F0 (XmAddOperands.c)
 */

__int64 __fastcall XmIncOp(__int64 a1)
{
  *(_DWORD *)(a1 + 108) = 1;
  return XmAddOperands(a1, 0LL);
}
