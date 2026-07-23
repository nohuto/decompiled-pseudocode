/*
 * XREFs of XmPushOp @ 0x1404A1670
 * Callers:
 *     <none>
 * Callees:
 *     XmPushStack @ 0x1404A19DC (XmPushStack.c)
 */

__int64 __fastcall XmPushOp(__int64 a1)
{
  return XmPushStack(a1, *(unsigned int *)(a1 + 108));
}
