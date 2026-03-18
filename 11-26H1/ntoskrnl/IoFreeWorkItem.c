/*
 * XREFs of IoFreeWorkItem @ 0x1404A1F40
 * Callers:
 *     PnpDeviceCompletionRequestDestroyWorkItem @ 0x1404A1EF0 (PnpDeviceCompletionRequestDestroyWorkItem.c)
 *     ?ExpLookasideMgrWorkerSetCleanup@@YAXPEAU_EXP_LOOKASIDE_MGR_WORKER_SET@@@Z @ 0x140846F70 (-ExpLookasideMgrWorkerSetCleanup@@YAXPEAU_EXP_LOOKASIDE_MGR_WORKER_SET@@@Z.c)
 * Callees:
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __stdcall IoFreeWorkItem(PIO_WORKITEM IoWorkItem)
{
  if ( IoWorkItem->WorkItem.List.Flink )
    KeBugCheckEx(0xE4u, 2uLL, (ULONG_PTR)IoWorkItem, (ULONG_PTR)&IoWorkItem->Routine, 0LL);
  ExFreePoolWithTag(IoWorkItem, 0);
}
