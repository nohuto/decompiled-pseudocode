/*
 * XREFs of XmDecOp @ 0x1404A7AC0
 * Callers:
 *     <none>
 * Callees:
 *     XmSubOperands @ 0x1404A7AE0 (XmSubOperands.c)
 */

__int64 __fastcall XmDecOp(__int64 a1)
{
  *(_DWORD *)(a1 + 108) = 1;
  return XmSubOperands(a1, 0LL);
}
