/*
 * XREFs of XmPopOp @ 0x140469B10
 * Callers:
 *     XmPopaOp @ 0x140573160 (XmPopaOp.c)
 * Callees:
 *     XmPopStack @ 0x140469B38 (XmPopStack.c)
 *     XmStoreResult @ 0x14046AFAC (XmStoreResult.c)
 */

__int64 __fastcall XmPopOp(__int64 a1)
{
  unsigned int v2; // eax

  v2 = XmPopStack();
  return XmStoreResult(a1, v2);
}
