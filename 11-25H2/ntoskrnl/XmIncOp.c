/*
 * XREFs of XmIncOp @ 0x14046A320
 * Callers:
 *     <none>
 * Callees:
 *     XmAddOperands @ 0x14046A450 (XmAddOperands.c)
 */

__int64 __fastcall XmIncOp(__int64 a1)
{
  *(_DWORD *)(a1 + 108) = 1;
  return XmAddOperands(a1, 0LL);
}
