/*
 * XREFs of XmAdcOp @ 0x140572680
 * Callers:
 *     <none>
 * Callees:
 *     XmAddOperands @ 0x14046A450 (XmAddOperands.c)
 */

__int64 __fastcall XmAdcOp(__int64 a1)
{
  return XmAddOperands(a1, *(_DWORD *)(a1 + 16) & 1);
}
