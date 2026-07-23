/*
 * XREFs of IoEnqueueIrp @ 0x140798F30
 * Callers:
 *     <none>
 * Callees:
 *     IopQueueThreadIrp @ 0x1403310C0 (IopQueueThreadIrp.c)
 */

__int64 __fastcall IoEnqueueIrp(__int64 a1, __int64 a2)
{
  return IopQueueThreadIrp(a1, a2);
}
