/*
 * XREFs of NvmeAdapterDeleteChildren @ 0x1400D4920
 * Callers:
 *     NvmeAdapterRemoveDeviceIrp @ 0x14019E4E8 (NvmeAdapterRemoveDeviceIrp.c)
 * Callees:
 *     NvmeControllerRemoveNvmeNamespaceFromList @ 0x1400F9DFC (NvmeControllerRemoveNvmeNamespaceFromList.c)
 *     NvmeControllerDeleteNvmeNamespace @ 0x140100A2C (NvmeControllerDeleteNvmeNamespace.c)
 */

void __fastcall NvmeAdapterDeleteChildren(__int64 a1)
{
  struct _ERESOURCE *v2; // rsi
  unsigned int v3; // ecx
  __int64 v4; // rdi
  int v5; // eax
  __int64 v6; // rbp
  volatile __int32 **v7; // r14
  volatile __int32 *v8; // r15
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  volatile __int32 *v10; // [rsp+70h] [rbp+8h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !*(_QWORD *)(a1 + 608) )
  {
    if ( (*(_DWORD *)(a1 + 416) & 0x40) != 0 )
    {
      KeEnterCriticalRegion();
      v2 = (struct _ERESOURCE *)(a1 + 1192);
      ExAcquireResourceSharedLite((PERESOURCE)(a1 + 1192), 1u);
      v3 = *(_DWORD *)(a1 + 1320);
      v4 = *(_QWORD *)(a1 + 1304) - 112LL;
      v5 = *(_DWORD *)(a1 + 416);
      if ( !v3 )
      {
LABEL_13:
        if ( (v5 & 0x40) != 0 )
        {
          ExReleaseResourceLite(v2);
          KeLeaveCriticalRegion();
        }
        return;
      }
    }
    else
    {
      v4 = *(_QWORD *)(a1 + 1152);
      v2 = (struct _ERESOURCE *)(a1 + 1192);
      v3 = 1;
    }
    v6 = v3;
    do
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 632), &LockHandle);
      v7 = (volatile __int32 **)(v4 + 640);
      while ( 1 )
      {
        v8 = *v7;
        if ( *v7 == (volatile __int32 *)v7 )
          break;
        v10 = v8 - 6;
        NvmeControllerRemoveNvmeNamespaceFromList(v4, v8 - 6, 0LL);
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        _InterlockedExchange(v8 + 18, 6);
        NvmeControllerDeleteNvmeNamespace(&v10);
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 632), &LockHandle);
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      v5 = *(_DWORD *)(a1 + 416);
      if ( (v5 & 0x40) != 0 )
        v4 = *(_QWORD *)(v4 + 112) - 112LL;
      --v6;
    }
    while ( v6 );
    goto LABEL_13;
  }
}
