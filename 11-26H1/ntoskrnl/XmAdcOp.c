/*
 * XREFs of XmAdcOp @ 0x1405AF290
 * Callers:
 *     <none>
 * Callees:
 *     XmAddOperands @ 0x1404A1780 (XmAddOperands.c)
 */

__int64 __fastcall XmAdcOp(__int64 a1)
{
  return XmAddOperands(a1, *(_DWORD *)(a1 + 16) & 1);
}
