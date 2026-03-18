/*
 * XREFs of XmTestOp @ 0x14046AD80
 * Callers:
 *     <none>
 * Callees:
 *     XmSetLogicalResult @ 0x14046AF10 (XmSetLogicalResult.c)
 */

__int64 __fastcall XmTestOp(__int64 a1)
{
  return XmSetLogicalResult(a1, (unsigned int)(*(_DWORD *)(a1 + 104) & *(_DWORD *)(a1 + 108)));
}
