/*
 * XREFs of XmSbbOp @ 0x1405ACB60
 * Callers:
 *     <none>
 * Callees:
 *     XmSubOperands @ 0x1404A7AE0 (XmSubOperands.c)
 */

__int64 __fastcall XmSbbOp(_DWORD *a1)
{
  return XmSubOperands(a1, a1[4] & 1);
}
