/*
 * XREFs of IoFreeWorkItem @ 0x14049BA70
 * Callers:
 *     PnpDeviceCompletionRequestDestroyWorkItem @ 0x14049BA20 (PnpDeviceCompletionRequestDestroyWorkItem.c)
 *     ?ExpLookasideMgrWorkerSetCleanup@@YAXPEAU_EXP_LOOKASIDE_MGR_WORKER_SET@@@Z @ 0x14084D1D0 (-ExpLookasideMgrWorkerSetCleanup@@YAXPEAU_EXP_LOOKASIDE_MGR_WORKER_SET@@@Z.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __stdcall IoFreeWorkItem(PIO_WORKITEM IoWorkItem)
{
  if ( IoWorkItem->WorkItem.List.Flink )
    KeBugCheckEx(0xE4u, 2uLL, (ULONG_PTR)IoWorkItem, (ULONG_PTR)&IoWorkItem->Routine, 0LL);
  ExFreePoolWithTag(IoWorkItem, 0);
}
