/*
 * XREFs of NvmeAdapterConfigureResources @ 0x1400D3CA4
 * Callers:
 *     NvmeAdapterStartDevice @ 0x1400DDCA8 (NvmeAdapterStartDevice.c)
 * Callees:
 *     RaidInitializeDeferredQueue @ 0x140072180 (RaidInitializeDeferredQueue.c)
 *     RaidInitializeResourceList @ 0x140183EB8 (RaidInitializeResourceList.c)
 *     RaidDeleteResourceList @ 0x140183F14 (RaidDeleteResourceList.c)
 *     RaInitializeBus @ 0x1401B9A44 (RaInitializeBus.c)
 */

__int64 __fastcall NvmeAdapterConfigureResources(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rcx
  __int64 result; // rax

  v5 = *(_QWORD *)(a1 + 600);
  if ( !v5 )
    goto LABEL_6;
  RaidDeleteResourceList(v5 + 88);
  result = RaidInitializeResourceList(*(_QWORD *)(a1 + 600) + 88LL, a2, a3);
  if ( (int)result < 0 )
    return result;
  if ( (unsigned int)RaInitializeBus(*(_QWORD *)(a1 + 600) + 16LL, *(_QWORD *)(a1 + 24)) == -1073741637
    && (*(_BYTE *)(a1 + 144) & 0x10) == 0 )
  {
    return 3221225659LL;
  }
LABEL_6:
  if ( (*(_DWORD *)(a1 + 144) & 0x200LL) == 0 )
    RaidInitializeDeferredQueue(a1 + 624, *(void **)(a1 + 8), a3, 0x50u, (__int64)NvmeAdapterDeferredRoutine);
  return 0LL;
}
