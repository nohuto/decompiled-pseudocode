/*
 * XREFs of IoUninitializeWorkItem @ 0x140494A70
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

void __stdcall IoUninitializeWorkItem(PIO_WORKITEM IoWorkItem)
{
  if ( IoWorkItem->WorkItem.List.Flink )
    KeBugCheckEx(0xE4u, 2uLL, (ULONG_PTR)IoWorkItem, (ULONG_PTR)&IoWorkItem->Routine, 0LL);
}
