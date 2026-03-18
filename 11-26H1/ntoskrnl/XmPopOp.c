/*
 * XREFs of XmPopOp @ 0x1404A79B0
 * Callers:
 *     XmPopaOp @ 0x1405AD550 (XmPopaOp.c)
 * Callees:
 *     XmPopStack @ 0x1404A79D8 (XmPopStack.c)
 *     XmStoreResult @ 0x1404A8E3C (XmStoreResult.c)
 */

__int64 __fastcall XmPopOp(__int64 a1)
{
  unsigned int v2; // eax

  v2 = XmPopStack();
  return XmStoreResult(a1, v2);
}
