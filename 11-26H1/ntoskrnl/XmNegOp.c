/*
 * XREFs of XmNegOp @ 0x1405AF340
 * Callers:
 *     <none>
 * Callees:
 *     XmSubOperands @ 0x1404A1170 (XmSubOperands.c)
 */

__int64 __fastcall XmNegOp(_DWORD *a1)
{
  a1[27] = a1[26];
  a1[26] = 0;
  return XmSubOperands(a1, 0);
}
