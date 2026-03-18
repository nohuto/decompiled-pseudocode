/*
 * XREFs of EtwpUpdateKernelGroupsWork @ 0x140B3EA30
 * Callers:
 *     <none>
 * Callees:
 *     EtwpUpdateGlobalGroupMasks @ 0x140959E60 (EtwpUpdateGlobalGroupMasks.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpUpdateKernelGroupsWork(void *a1)
{
  ExFreePoolWithTag(a1, 0);
  return EtwpUpdateGlobalGroupMasks(EtwpHostSiloState, 0, 8u);
}
