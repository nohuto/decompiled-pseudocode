/*
 * XREFs of NvmeFabricControllerQueueCleanupHostDHKey @ 0x1400FBF3C
 * Callers:
 *     NvmeAdapterFreeControllerAdminQueue @ 0x1400E8D20 (NvmeAdapterFreeControllerAdminQueue.c)
 *     NvmeAdapterFreeControllerIoQueues @ 0x1400E8D9C (NvmeAdapterFreeControllerIoQueues.c)
 *     NvmeFabricControllerQueueAuthReset @ 0x1400FBAA0 (NvmeFabricControllerQueueAuthReset.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NvmeFabricControllerQueueCleanupHostDHKey(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx
  __int64 result; // rax
  void *v5; // rcx

  v2 = *(void **)(*(_QWORD *)(a1 + 96) + 32LL);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x414E6152u);
    *(_QWORD *)(*(_QWORD *)(a1 + 96) + 32LL) = 0LL;
  }
  v3 = *(void **)(*(_QWORD *)(a1 + 96) + 24LL);
  if ( v3 )
  {
    BCryptDestroyKey(v3);
    *(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL) = 0LL;
  }
  result = *(_QWORD *)(a1 + 96);
  v5 = *(void **)(result + 16);
  if ( v5 )
  {
    BCryptCloseAlgorithmProvider(v5, 0);
    result = *(_QWORD *)(a1 + 96);
    *(_QWORD *)(result + 16) = 0LL;
  }
  return result;
}
