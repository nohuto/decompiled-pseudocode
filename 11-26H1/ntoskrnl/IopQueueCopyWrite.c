/*
 * XREFs of IopQueueCopyWrite @ 0x1404C06F0
 * Callers:
 *     <none>
 * Callees:
 *     IopSynchronousServiceTail @ 0x1409837C4 (IopSynchronousServiceTail.c)
 */

__int64 __fastcall IopQueueCopyWrite(__int64 a1)
{
  return IopSynchronousServiceTail(*(PDEVICE_OBJECT *)(a1 + 8), *(PIRP *)a1, *(_QWORD *)(a1 + 16), 0, 0, 1);
}
