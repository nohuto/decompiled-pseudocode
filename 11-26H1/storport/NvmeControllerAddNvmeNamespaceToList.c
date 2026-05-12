/*
 * XREFs of NvmeControllerAddNvmeNamespaceToList @ 0x1400F02D0
 * Callers:
 *     NvmeControllerIdentifyChangedNamespaces @ 0x1400C5E88 (NvmeControllerIdentifyChangedNamespaces.c)
 *     NvmeNamespaceIdentify @ 0x1400C6954 (NvmeNamespaceIdentify.c)
 *     NvmeAdapterFabricControllerUpdateNamespace @ 0x1400E8524 (NvmeAdapterFabricControllerUpdateNamespace.c)
 *     NvmeAdapterStartFabricControllerNamespaces @ 0x1400EDDD0 (NvmeAdapterStartFabricControllerNamespaces.c)
 * Callees:
 *     StorInsertDictionary @ 0x1400383C0 (StorInsertDictionary.c)
 *     StorAdjustDictionarySize @ 0x14012F72C (StorAdjustDictionarySize.c)
 */

__int64 __fastcall NvmeControllerAddNvmeNamespaceToList(__int64 a1, _QWORD *a2)
{
  int v4; // edx
  int inserted; // edi
  _QWORD *v6; // rdx
  _QWORD *v7; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 632), &LockHandle);
  v4 = *(_DWORD *)(a1 + 668);
  if ( *(_DWORD *)(a1 + 664) != v4
    || (inserted = StorAdjustDictionarySize(a1 + 664, (unsigned int)(v4 + 32)), inserted >= 0) )
  {
    inserted = StorInsertDictionary(a1 + 664, a2 + 5);
    if ( inserted >= 0 )
    {
      v6 = *(_QWORD **)(a1 + 648);
      v7 = a2 + 3;
      if ( *v6 != a1 + 640 )
        __fastfail(3u);
      *v7 = a1 + 640;
      a2[4] = v6;
      *v6 = v7;
      *(_QWORD *)(a1 + 648) = v7;
      if ( (*(_DWORD *)(a1 + 656))++ != -1 )
        KeClearEvent((PRKEVENT)(a1 + 256));
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return (unsigned int)inserted;
}
