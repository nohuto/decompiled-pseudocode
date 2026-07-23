/*
 * XREFs of CcQueueAsyncGetDeviceGuid @ 0x1405B5A14
 * Callers:
 *     CcInitializeVolumeCacheMap @ 0x14038713C (CcInitializeVolumeCacheMap.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     CcDecrementVolumeUseCountWithDelete @ 0x1403861F0 (CcDecrementVolumeUseCountWithDelete.c)
 *     ExAllocatePoolWithTag @ 0x140C16340 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CcQueueAsyncGetDeviceGuid(__int64 a1, void *a2)
{
  char *PoolWithTag; // rbx

  PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)1536, 0x30uLL, 0x65546343u);
  if ( PoolWithTag )
  {
    ObfReferenceObjectWithTag(a2, 0x746C6644u);
    *((_QWORD *)PoolWithTag + 1) = a2;
    *(_QWORD *)PoolWithTag = a1;
    *((_QWORD *)PoolWithTag + 4) = CcGetDeviceGuidAsync;
    *((_QWORD *)PoolWithTag + 5) = PoolWithTag;
    *((_QWORD *)PoolWithTag + 2) = 0LL;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(PoolWithTag + 16), NormalWorkQueue);
    return 0LL;
  }
  else
  {
    CcDecrementVolumeUseCountWithDelete(a1);
    return 3221225626LL;
  }
}
