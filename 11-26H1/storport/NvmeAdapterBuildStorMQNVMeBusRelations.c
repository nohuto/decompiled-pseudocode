/*
 * XREFs of NvmeAdapterBuildStorMQNVMeBusRelations @ 0x1400D345C
 * Callers:
 *     NvmeAdapterQueryDeviceRelationsIrp @ 0x1400DB2B8 (NvmeAdapterQueryDeviceRelationsIrp.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 */

__int64 __fastcall NvmeAdapterBuildStorMQNVMeBusRelations(__int64 a1, _QWORD *a2)
{
  void *v3; // rbx
  KSPIN_LOCK **v4; // r12
  KSPIN_LOCK *v5; // rdi
  __int64 v6; // rbp
  _DWORD *Pool; // r14
  KSPIN_LOCK *v8; // r15
  __int64 v9; // rdi
  __int64 *v10; // rax
  __int64 *v11; // rsi
  unsigned int v12; // edi
  signed __int32 v14[8]; // [rsp+0h] [rbp-68h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v3 = 0LL;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite((PERESOURCE)(a1 + 1192), 1u);
  v4 = (KSPIN_LOCK **)(a1 + 1304);
  while ( 1 )
  {
LABEL_2:
    v5 = *v4;
    v6 = 0LL;
    while ( v5 != (KSPIN_LOCK *)v4 )
    {
      KeAcquireInStackQueuedSpinLock(v5 + 65, &LockHandle);
      v6 = (unsigned int)(*((_DWORD *)v5 + 136) + v6);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      v5 = (KSPIN_LOCK *)*v5;
    }
    if ( (*(_DWORD *)(a1 + 416) & 0x100) != 0 )
    {
      _InterlockedOr(v14, 0);
      v3 = *(void **)(a1 + 552);
      if ( v3 )
      {
        ObfReferenceObject(*(PVOID *)(a1 + 552));
        v6 = (unsigned int)(v6 + 1);
      }
    }
    Pool = (_DWORD *)RaidAllocatePool(64LL, 8 * v6 + 8, 1380213074LL, *(_QWORD *)(a1 + 8));
    if ( !Pool )
    {
      v12 = -1073741801;
      goto LABEL_29;
    }
    v8 = *v4;
    v9 = 0LL;
LABEL_10:
    if ( v8 == (KSPIN_LOCK *)v4 )
      break;
    KeAcquireInStackQueuedSpinLock(v8 + 65, &LockHandle);
    v10 = (__int64 *)(v8 + 66);
    v11 = (__int64 *)v8[66];
    while ( 1 )
    {
      if ( v11 == v10 )
      {
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        v8 = (KSPIN_LOCK *)*v8;
        goto LABEL_10;
      }
      if ( (v11[11] & 2) != 0 && *((_DWORD *)v8 + 216) == 2 )
        break;
      v11[11] &= ~1uLL;
LABEL_18:
      v11 = (__int64 *)*v11;
      v10 = (__int64 *)(v8 + 66);
    }
    v11[11] = v11[11] & 0xFFFFFFFFFFFFFFEEuLL | 1;
    if ( (unsigned int)v9 < (unsigned int)v6 )
    {
      ObfReferenceObject((PVOID)*(v11 - 2));
      *(_QWORD *)&Pool[2 * v9 + 2] = *(v11 - 2);
      v9 = (unsigned int)(v9 + 1);
      goto LABEL_18;
    }
    ExFreePoolWithTag(Pool, 0x52446152u);
    if ( v3 )
    {
      ObfDereferenceObject(v3);
      v3 = 0LL;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  if ( v3 )
  {
    if ( (unsigned int)v9 >= (unsigned int)v6 )
    {
      ExFreePoolWithTag(Pool, 0x52446152u);
      ObfDereferenceObject(v3);
      v3 = 0LL;
      goto LABEL_2;
    }
    *(_QWORD *)&Pool[2 * v9 + 2] = v3;
    LODWORD(v9) = v9 + 1;
    v3 = 0LL;
  }
  *Pool = v9;
  v12 = 0;
  *a2 = Pool;
LABEL_29:
  ExReleaseResourceLite((PERESOURCE)(a1 + 1192));
  KeLeaveCriticalRegion();
  if ( v3 )
    ObfDereferenceObject(v3);
  return v12;
}
