/*
 * XREFs of CcChangeBackingFileObject @ 0x14047B150
 * Callers:
 *     FsRtlChangeBackingFileObject @ 0x14047AFF0 (FsRtlChangeBackingFileObject.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14027BDE0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     ObFastReplaceObject @ 0x14047B348 (ObFastReplaceObject.c)
 */

__int64 __fastcall CcChangeBackingFileObject(_QWORD *a1, _QWORD *a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  AutoBoost *v6; // rax
  signed __int8 v7; // cf
  AutoBoost *v8; // rdi
  unsigned int v9; // ebx
  __int64 v10; // rcx
  _QWORD *v11; // rcx
  _QWORD *v12; // rdi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v6 = (AutoBoost *)KeAbPreAcquire((__int64)&EmpParseLock.WriteOperationCount, 0LL, 0LL, a4);
  v7 = _interlockedbittestandset64((volatile signed __int32 *)&EmpParseLock.WriteOperationCount, 0LL);
  v8 = v6;
  if ( v7 )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&EmpParseLock.WriteOperationCount,
      v6,
      (__int64)&EmpParseLock.WriteOperationCount);
  v9 = 0;
  if ( v8 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      *((_BYTE *)v8 + 33) |= 2u;
    else
      *((_BYTE *)v8 + 10) = 1;
  }
  KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
  if ( a1 && a1[5] != a2[5] )
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( (_InterlockedExchangeAdd64(&EmpParseLock.WriteOperationCount, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&EmpParseLock.WriteOperationCount);
    v9 = -1073741584;
LABEL_15:
    KeAbPostRelease((unsigned __int64)&EmpParseLock.WriteOperationCount);
    return v9;
  }
  v10 = *(_QWORD *)(a2[5] + 8LL);
  if ( !v10 )
    goto LABEL_13;
  if ( (*(_DWORD *)(v10 + 152) & 0x100000) != 0 )
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( (_InterlockedExchangeAdd64(&EmpParseLock.WriteOperationCount, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&EmpParseLock.WriteOperationCount);
    v9 = -1073741637;
    goto LABEL_15;
  }
  v11 = (_QWORD *)(v10 + 96);
  v12 = (_QWORD *)(*v11 & 0xFFFFFFFFFFFFFFF0uLL);
  if ( a1 )
  {
    if ( v12 != a1 )
    {
LABEL_13:
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( (_InterlockedExchangeAdd64(&EmpParseLock.WriteOperationCount, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(&EmpParseLock.WriteOperationCount);
      goto LABEL_15;
    }
  }
  ObFastReplaceObject(v11, a2);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( (_InterlockedExchangeAdd64(&EmpParseLock.WriteOperationCount, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&EmpParseLock.WriteOperationCount);
  KeAbPostRelease((unsigned __int64)&EmpParseLock.WriteOperationCount);
  ObfReferenceObjectWithTag(a2, 0x746C6644u);
  ObDereferenceObjectDeferDeleteWithTag(v12, 0x746C6644u);
  return 0LL;
}
