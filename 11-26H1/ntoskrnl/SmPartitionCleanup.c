/*
 * XREFs of SmPartitionCleanup @ 0x140818F90
 * Callers:
 *     SmDeletePartition @ 0x140818D10 (SmDeletePartition.c)
 *     SmCreatePartition @ 0x140AB0DEC (SmCreatePartition.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     SmKmStoreDereference @ 0x140265B10 (SmKmStoreDereference.c)
 *     SmFpCleanup @ 0x1403F02E0 (SmFpCleanup.c)
 *     MmStoreReleaseResidentAvailableForRead @ 0x14047D1B4 (MmStoreReleaseResidentAvailableForRead.c)
 *     ?SmCleanup@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14063C534 (-SmCleanup@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmTerminateStoreProcess @ 0x14063E81C (SmTerminateStoreProcess.c)
 *     SmpKeyedStoreCtxCleanup @ 0x14063E8E8 (SmpKeyedStoreCtxCleanup.c)
 *     SmHwAcceleratorPartitionMgrCleanup @ 0x14081B83C (SmHwAcceleratorPartitionMgrCleanup.c)
 */

unsigned __int64 __fastcall SmPartitionCleanup(__int64 a1)
{
  int v1; // edx
  void *v3; // rcx
  unsigned __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 2384);
  if ( v1 != -1 )
    SmKmStoreDereference(a1, v1);
  SMKM_STORE_MGR<SM_TRAITS>::SmCleanup((union _SLIST_HEADER *)a1);
  SmpKeyedStoreCtxCleanup(a1 + 2344);
  v3 = *(void **)(a1 + 2400);
  if ( v3 )
    ObfDereferenceObject(v3);
  SmFpCleanup(a1 + 2432);
  SmFpCleanup(a1 + 2552);
  SmHwAcceleratorPartitionMgrCleanup(a1 + 2672, *(_QWORD *)(a1 + 2280));
  if ( *(_QWORD *)(a1 + 2272) )
    SmTerminateStoreProcess(a1);
  result = *(unsigned int *)(a1 + 2248);
  if ( (result & 0x10) != 0 )
    return MmStoreReleaseResidentAvailableForRead(*(ULONG ***)(a1 + 2208), 1LL);
  return result;
}
