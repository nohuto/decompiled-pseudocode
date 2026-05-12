/*
 * XREFs of NvmeNamespaceCleanupSanitizeContext @ 0x140102008
 * Callers:
 *     NvmeNamespaceReinitializeMediaIoctl @ 0x14010C518 (NvmeNamespaceReinitializeMediaIoctl.c)
 *     NvmeNamespaceReinitializeMediaRecoverWorker @ 0x14010CBE0 (NvmeNamespaceReinitializeMediaRecoverWorker.c)
 * Callees:
 *     NvmeControllerReclaimExtendedCommand @ 0x140044E24 (NvmeControllerReclaimExtendedCommand.c)
 */

void __fastcall NvmeNamespaceCleanupSanitizeContext(__int64 a1)
{
  struct _IO_WORKITEM *v2; // rcx
  __int64 v3; // rdx

  v2 = *(struct _IO_WORKITEM **)(a1 + 632);
  if ( v2 )
  {
    IoFreeWorkItem(v2);
    *(_QWORD *)(a1 + 632) = 0LL;
  }
  v3 = *(_QWORD *)(a1 + 616);
  if ( v3 )
  {
    NvmeControllerReclaimExtendedCommand(*(union _SLIST_HEADER **)(a1 + 16), v3);
    *(_QWORD *)(a1 + 616) = 0LL;
  }
  *(_QWORD *)(a1 + 624) = 0LL;
  *(_BYTE *)(a1 + 642) = 0;
  *(_DWORD *)(a1 + 644) = 0;
}
