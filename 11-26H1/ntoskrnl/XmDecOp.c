/*
 * XREFs of XmDecOp @ 0x1404A1150
 * Callers:
 *     <none>
 * Callees:
 *     XmSubOperands @ 0x1404A1170 (XmSubOperands.c)
 */

__int64 __fastcall XmDecOp(__int64 a1)
{
  *(_DWORD *)(a1 + 108) = 1;
  return XmSubOperands(a1, 0LL);
}
