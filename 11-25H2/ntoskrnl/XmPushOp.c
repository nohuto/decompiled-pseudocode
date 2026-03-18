/*
 * XREFs of XmPushOp @ 0x14046A340
 * Callers:
 *     <none>
 * Callees:
 *     XmPushStack @ 0x14046A638 (XmPushStack.c)
 */

__int64 __fastcall XmPushOp(__int64 a1)
{
  return XmPushStack(a1, *(unsigned int *)(a1 + 108));
}
