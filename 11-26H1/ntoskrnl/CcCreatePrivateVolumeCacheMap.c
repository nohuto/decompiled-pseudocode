/*
 * XREFs of CcCreatePrivateVolumeCacheMap @ 0x1403E51AC
 * Callers:
 *     CcInitializeCacheMapInternal @ 0x1403E4420 (CcInitializeCacheMapInternal.c)
 *     CcAddExternalCacheToVolumeEx @ 0x1405B3240 (CcAddExternalCacheToVolumeEx.c)
 *     CcRegisterExternalCache @ 0x1405B3870 (CcRegisterExternalCache.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     CcDecrementPrivateVolumeUseCount @ 0x14039EF10 (CcDecrementPrivateVolumeUseCount.c)
 *     CcFindPrivateVolumeCacheMap @ 0x1403E530C (CcFindPrivateVolumeCacheMap.c)
 *     CcInitializePrivateVolumeCacheMap @ 0x1403E6740 (CcInitializePrivateVolumeCacheMap.c)
 *     CcInsertPrivateVolumeCacheMap @ 0x1403E6E08 (CcInsertPrivateVolumeCacheMap.c)
 *     CcDeletePrivateVolumeCacheMap @ 0x1403E7080 (CcDeletePrivateVolumeCacheMap.c)
 *     ExAllocatePoolWithTag @ 0x140C16340 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CcCreatePrivateVolumeCacheMap(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 PrivateVolumeCacheMap; // rax
  PVOID v8; // r15
  PVOID v9; // rax
  void *v10; // rbx
  void *v11; // rcx
  __int64 v12; // [rsp+30h] [rbp-20h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-18h] BYREF
  char v14; // [rsp+88h] [rbp+38h] BYREF
  PVOID PoolWithTag; // [rsp+98h] [rbp+48h] BYREF

  v12 = 0LL;
  v14 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( a2 )
  {
    PrivateVolumeCacheMap = CcFindPrivateVolumeCacheMap(a1, *(_QWORD *)(*(_QWORD *)(a2 + 512) + 16LL));
    if ( PrivateVolumeCacheMap )
    {
      *a3 = 0LL;
      *(_QWORD *)(a2 + 600) = PrivateVolumeCacheMap;
      return 0LL;
    }
  }
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)1536, 400LL * (unsigned int)CcNumberNumaNodes, 0x754E6343u);
  v8 = PoolWithTag;
  if ( PoolWithTag )
  {
    v9 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x680uLL, 0x6D566343u);
    v10 = v9;
    if ( v9 )
    {
      if ( (unsigned __int8)CcInitializePrivateVolumeCacheMap(a1, v9, &PoolWithTag, a2) )
      {
        if ( (unsigned __int8)CcInsertPrivateVolumeCacheMap(a1, (_DWORD)v10, (unsigned int)&v12, 0, 0, (__int64)&v14) )
        {
          *a3 = v10;
        }
        else
        {
          *a3 = v12;
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 768), &LockHandle);
          CcDecrementPrivateVolumeUseCount((__int64)v10);
          KeReleaseInStackQueuedSpinLock(&LockHandle);
          CcDeletePrivateVolumeCacheMap(v10);
        }
        return 0LL;
      }
      CcDeletePrivateVolumeCacheMap(v10);
      v11 = PoolWithTag;
      if ( !PoolWithTag )
        return 3221225626LL;
    }
    else
    {
      v11 = v8;
    }
    ExFreePoolWithTag(v11, 0x754E6343u);
  }
  return 3221225626LL;
}
