/*
 * XREFs of XmOrOp @ 0x1405ACA60
 * Callers:
 *     <none>
 * Callees:
 *     XmSetLogicalResult @ 0x1404A8DA0 (XmSetLogicalResult.c)
 */

__int64 __fastcall XmOrOp(__int64 a1)
{
  return XmSetLogicalResult(a1, *(_DWORD *)(a1 + 104) | *(_DWORD *)(a1 + 108));
}
