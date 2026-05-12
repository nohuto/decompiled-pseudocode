/*
 * XREFs of NvmeAdapterBuildPCIeNVMeBusRelations @ 0x1400D3324
 * Callers:
 *     NvmeAdapterQueryDeviceRelationsIrp @ 0x1400DB2B8 (NvmeAdapterQueryDeviceRelationsIrp.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 */

__int64 __fastcall NvmeAdapterBuildPCIeNVMeBusRelations(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rcx
  __int64 v5; // r15
  unsigned int v6; // edi
  _DWORD *Pool; // rsi
  __int64 result; // rax
  _QWORD *v9; // rax
  _QWORD *v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v3 = *(_QWORD *)(a1 + 1152);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v3 + 632), &LockHandle);
  v5 = *(unsigned int *)(*(_QWORD *)(a1 + 1152) + 656LL);
  v6 = 0;
  Pool = (_DWORD *)RaidAllocatePool(64LL, 8 * v5 + 16, 1380213074LL, *(_QWORD *)(a1 + 8));
  if ( Pool )
  {
    v9 = (_QWORD *)(*(_QWORD *)(a1 + 1152) + 640LL);
    v10 = (_QWORD *)*v9;
    while ( v10 != v9 )
    {
      v11 = v10[11];
      if ( (v11 & 2) != 0 )
      {
        v10[11] = v11 & 0xFFFFFFFFFFFFFFEEuLL | 1;
        if ( v6 > (unsigned int)v5 )
          break;
        ObfReferenceObject((PVOID)*(v10 - 2));
        v12 = v6++;
        *(_QWORD *)&Pool[2 * v12 + 2] = *(v10 - 2);
      }
      else
      {
        v10[11] = v11 & 0xFFFFFFFFFFFFFFFEuLL;
      }
      v10 = (_QWORD *)*v10;
      v9 = (_QWORD *)(*(_QWORD *)(a1 + 1152) + 640LL);
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    result = 0LL;
    *Pool = v6;
    *a2 = Pool;
  }
  else
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    return 3221225495LL;
  }
  return result;
}
