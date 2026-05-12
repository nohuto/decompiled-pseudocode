/*
 * XREFs of NvmeControllerReleaseInternalDbgLog @ 0x1400F9A44
 * Callers:
 *     NvmeAdapterDeleteNvmeController @ 0x1400E74A8 (NvmeAdapterDeleteNvmeController.c)
 *     NvmeAdapterCreateNvmeController @ 0x1401A0988 (NvmeAdapterCreateNvmeController.c)
 * Callees:
 *     <none>
 */

void __fastcall NvmeControllerReleaseInternalDbgLog(__int64 a1)
{
  __int64 v2; // rdi
  void *v3; // rcx

  if ( *(_QWORD *)(a1 + 1368) )
  {
    v2 = 0LL;
    for ( *(_DWORD *)(a1 + 1408) = -1; (unsigned int)v2 < *(_DWORD *)(a1 + 1340); v2 = (unsigned int)(v2 + 1) )
    {
      v3 = *(void **)(*(_QWORD *)(a1 + 1368) + 8 * v2);
      if ( v3 )
      {
        ExFreePoolWithTag(v3, 0x52436152u);
        *(_QWORD *)(*(_QWORD *)(a1 + 1368) + 8 * v2) = 0LL;
      }
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 1368), 0x52436152u);
    *(_QWORD *)(a1 + 1368) = 0LL;
  }
}
