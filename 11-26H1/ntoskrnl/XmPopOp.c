/*
 * XREFs of XmPopOp @ 0x1404A1040
 * Callers:
 *     XmPopaOp @ 0x1405AFD60 (XmPopaOp.c)
 * Callees:
 *     XmPopStack @ 0x1404A1068 (XmPopStack.c)
 *     XmStoreResult @ 0x1404A24CC (XmStoreResult.c)
 */

__int64 __fastcall XmPopOp(__int64 a1)
{
  unsigned int v2; // eax

  v2 = XmPopStack();
  return XmStoreResult(a1, v2);
}
