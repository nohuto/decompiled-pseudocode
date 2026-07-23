/*
 * XREFs of XmOrOp @ 0x1405AF270
 * Callers:
 *     <none>
 * Callees:
 *     XmSetLogicalResult @ 0x1404A2430 (XmSetLogicalResult.c)
 */

__int64 __fastcall XmOrOp(__int64 a1)
{
  return XmSetLogicalResult(a1, *(_DWORD *)(a1 + 104) | *(_DWORD *)(a1 + 108));
}
