/*
 * XREFs of CcWriteBehindPostProcess @ 0x140386A84
 * Callers:
 *     CcWriteBehindInternal @ 0x140386430 (CcWriteBehindInternal.c)
 *     CcWriteBehindAsync @ 0x1403879F4 (CcWriteBehindAsync.c)
 *     CcCompleteAsyncWriteBehind @ 0x1405B5FF4 (CcCompleteAsyncWriteBehind.c)
 * Callees:
 *     ObFastDereferenceObjectDeferDelete @ 0x140263F90 (ObFastDereferenceObjectDeferDelete.c)
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     CcWriteBehindReleaseFile @ 0x140387F44 (CcWriteBehindReleaseFile.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x14039CB54 (CcReferenceSharedCacheMapFileObject.c)
 *     CcDeleteSharedCacheMap @ 0x14039D950 (CcDeleteSharedCacheMap.c)
 *     CcGetPrivateVolumeCacheMap @ 0x14039DEA0 (CcGetPrivateVolumeCacheMap.c)
 *     CcInsertIntoDirtySharedCacheMapList @ 0x14039EDC8 (CcInsertIntoDirtySharedCacheMapList.c)
 *     CcGetFlushedValidData @ 0x14039FE80 (CcGetFlushedValidData.c)
 *     CcScheduleLazyWriteScan @ 0x1403E3830 (CcScheduleLazyWriteScan.c)
 *     CcIsFatalWriteError @ 0x140467230 (CcIsFatalWriteError.c)
 *     CcSetValidData @ 0x140489944 (CcSetValidData.c)
 *     CcShouldIssueVDLUpdate @ 0x1404AA23C (CcShouldIssueVDLUpdate.c)
 *     CcMmLogLostDelayedWriteError @ 0x1404F70C0 (CcMmLogLostDelayedWriteError.c)
 *     CcCancelMmWaitForUninitializeCacheMap @ 0x14050B81C (CcCancelMmWaitForUninitializeCacheMap.c)
 *     FsRtlAcquireFileExclusive @ 0x14098C620 (FsRtlAcquireFileExclusive.c)
 *     FsRtlReleaseFile @ 0x140A64120 (FsRtlReleaseFile.c)
 */

char __fastcall CcWriteBehindPostProcess(__int64 a1, char a2)
{
  __int64 v3; // rsi
  unsigned int *v4; // r12
  __int64 v5; // rdi
  __int64 v6; // r13
  __int64 PrivateVolumeCacheMap; // rax
  int valid; // r14d
  LARGE_INTEGER FlushedValidData; // rbx
  __int64 v10; // r8
  __int64 v11; // r9
  struct _FILE_OBJECT *v12; // r14
  int v13; // ecx
  char result; // al
  char v15; // cl
  struct _FILE_OBJECT *v16; // rbx
  ULONG_PTR v17; // rbx
  _BYTE *v18; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE v20; // [rsp+48h] [rbp-20h] BYREF
  char v21; // [rsp+B0h] [rbp+48h]
  char v22; // [rsp+B8h] [rbp+50h]
  LARGE_INTEGER v23; // [rsp+C0h] [rbp+58h]
  __int64 v24; // [rsp+C8h] [rbp+60h]

  v22 = 0;
  v21 = 0;
  memset(&v20, 0, sizeof(v20));
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !a2 )
    CcWriteBehindReleaseFile();
  v3 = *(_QWORD *)(a1 + 264);
  v4 = *(unsigned int **)(a1 + 112);
  if ( *(_DWORD *)(v3 + 128) == 2 )
  {
    v5 = *(_QWORD *)(v3 + 16);
    v21 = *(_BYTE *)(v3 + 56);
    v6 = *(_QWORD *)(v5 + 536);
    PrivateVolumeCacheMap = CcGetPrivateVolumeCacheMap(v5);
  }
  else
  {
    v5 = *(_QWORD *)(v3 + 24);
    v6 = *(_QWORD *)(v3 + 136);
    PrivateVolumeCacheMap = *(_QWORD *)(v3 + 144);
  }
  v24 = PrivateVolumeCacheMap;
  if ( *v4 != -2147483626 && (unsigned __int8)CcIsFatalWriteError(v5) )
  {
    v17 = CcReferenceSharedCacheMapFileObject(v5);
    CcMmLogLostDelayedWriteError(v17, *v4);
    ObFastDereferenceObjectDeferDelete((signed __int64 *)(v5 + 96), v17, 0x63536343u);
  }
  valid = 0;
  ExAcquireFastMutex((PKGUARDED_MUTEX)(v5 + 288));
  FlushedValidData = *(LARGE_INTEGER *)(v5 + 40);
  if ( (unsigned __int8)CcShouldIssueVDLUpdate(v5) )
  {
    FlushedValidData = CcGetFlushedValidData(*(PSECTION_OBJECT_POINTERS *)(a1 + 24), 1u);
    v23 = FlushedValidData;
    if ( FlushedValidData.QuadPart >= *(_QWORD *)(v5 + 40) )
    {
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v5 + 288));
      v16 = (struct _FILE_OBJECT *)CcReferenceSharedCacheMapFileObject(v5);
      valid = CcSetValidData(v16);
      ObFastDereferenceObjectDeferDelete((signed __int64 *)(v5 + 96), (ULONG_PTR)v16, 0x63536343u);
      ExAcquireFastMutex((PKGUARDED_MUTEX)(v5 + 288));
      if ( valid < 0 )
      {
        if ( valid == -1073741670 || valid == -2147483626 || valid == -1073741740 )
          FlushedValidData = v23;
        else
          FlushedValidData = *(LARGE_INTEGER *)(v5 + 48);
      }
      else
      {
        FlushedValidData = v23;
        *(LARGE_INTEGER *)(v5 + 40) = v23;
      }
    }
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v5 + 288));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v6 + 768), &LockHandle);
  --*(_DWORD *)(v5 + 4);
  --*(_DWORD *)(v5 + 544);
  if ( *(_DWORD *)(v5 + 4) )
    goto LABEL_22;
  if ( valid != -1073741670 && valid != -2147483626 && valid != -1073741740 )
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    v12 = (struct _FILE_OBJECT *)CcReferenceSharedCacheMapFileObject(v5);
    FsRtlAcquireFileExclusive(v12);
    KeAcquireInStackQueuedSpinLock(&CcMasterLock, &v20);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v6 + 768), &LockHandle);
    v13 = *(_DWORD *)(v5 + 4);
    if ( !v13
      && (!*(_DWORD *)(v5 + 112)
       && (*(_QWORD *)(v5 + 40) == 0x7FFFFFFFFFFFFFFFLL
        || (*(_DWORD *)(v5 + 152) & 0x400) == 0
        || FlushedValidData.QuadPart >= *(_QWORD *)(v5 + 48))
       || !*(_QWORD *)(v5 + 8) && (*(_DWORD *)(v5 + 152) & 4) == 0) )
    {
      CcDeleteSharedCacheMap((PSLIST_ENTRY)v5, &v20, &LockHandle, v12);
      *((_QWORD *)v4 + 1) = 0LL;
      goto LABEL_16;
    }
    if ( *(_DWORD *)(v5 + 112) )
    {
      if ( (*(_DWORD *)(v5 + 152) & 0x10000) != 0 )
        CcCancelMmWaitForUninitializeCacheMap(v5);
    }
    else if ( !v13 )
    {
      CcInsertIntoDirtySharedCacheMapList(v5);
      v22 = 1;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    KeReleaseInStackQueuedSpinLock(&v20);
    FsRtlReleaseFile(v12);
    ObFastDereferenceObjectDeferDelete((signed __int64 *)(v5 + 96), (ULONG_PTR)v12, 0x63536343u);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v6 + 768), &LockHandle);
    goto LABEL_22;
  }
  if ( (*(_DWORD *)(v5 + 152) & 0x10000) != 0 )
    CcCancelMmWaitForUninitializeCacheMap(v5);
  if ( *(_DWORD *)(v5 + 112) )
  {
LABEL_22:
    v15 = v22;
    goto LABEL_23;
  }
  CcInsertIntoDirtySharedCacheMapList(v5);
  v15 = 1;
LABEL_23:
  if ( (*(_DWORD *)(v5 + 152) & 0x10000) != 0 && !*(_BYTE *)(a1 + 136) )
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    result = 0;
    *(_BYTE *)(a1 + 137) = 1;
    return result;
  }
  if ( *((_QWORD *)v4 + 1) != 35422LL )
    *(_DWORD *)(v5 + 152) &= ~0x20u;
  if ( v15 )
  {
    if ( CcEnablePerVolumeLazyWriter )
      v18 = (_BYTE *)(*(_QWORD *)(v5 + 600) + 986LL);
    else
      v18 = (_BYTE *)(*(_QWORD *)(v5 + 536) + 1050LL);
    *v18 = 1;
    if ( (*(_DWORD *)(v5 + 152) & 0x10000) != 0 )
    {
      LOBYTE(v11) = 1;
      LOBYTE(v10) = 1;
    }
    else
    {
      v11 = 0LL;
      v10 = 0LL;
    }
    CcScheduleLazyWriteScan(v6, v24, v10, v11);
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
LABEL_16:
  if ( v21 )
    KeSetEvent((PRKEVENT)(v3 + 32), 0, 0);
  return 1;
}
