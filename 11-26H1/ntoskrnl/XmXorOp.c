/*
 * XREFs of XmXorOp @ 0x1404A7D50
 * Callers:
 *     <none>
 * Callees:
 *     XmSetLogicalResult @ 0x1404A8DA0 (XmSetLogicalResult.c)
 */

__int64 __fastcall XmXorOp(__int64 a1)
{
  return XmSetLogicalResult(a1, (unsigned int)(*(_DWORD *)(a1 + 104) ^ *(_DWORD *)(a1 + 108)));
}
