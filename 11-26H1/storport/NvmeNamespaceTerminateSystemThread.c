/*
 * XREFs of NvmeNamespaceTerminateSystemThread @ 0x140115E34
 * Callers:
 *     NvmeControllerCreateNvmeNamespace @ 0x140100594 (NvmeControllerCreateNvmeNamespace.c)
 *     NvmeControllerDeleteNvmeNamespace @ 0x140100A2C (NvmeControllerDeleteNvmeNamespace.c)
 *     NvmeNamespaceProcessQueueRequests @ 0x140108FE8 (NvmeNamespaceProcessQueueRequests.c)
 *     NvmeNamespaceRemoveDeviceIrp @ 0x14010D4BC (NvmeNamespaceRemoveDeviceIrp.c)
 *     NvmeNamespaceSurpriseRemovalIrp @ 0x1401AF2A0 (NvmeNamespaceSurpriseRemovalIrp.c)
 * Callees:
 *     <none>
 */

void __fastcall NvmeNamespaceTerminateSystemThread(__int64 a1)
{
  __int64 v1; // rax
  signed __int32 v2[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( *(_QWORD *)(a1 + 464) )
  {
    v1 = *(_QWORD *)(a1 + 112);
    if ( (v1 & 0x20) == 0 )
    {
      *(_QWORD *)(a1 + 112) = v1 | 0x20;
      _InterlockedOr(v2, 0);
      KeSetEvent((PRKEVENT)(a1 + 472), 0, 0);
    }
  }
}
