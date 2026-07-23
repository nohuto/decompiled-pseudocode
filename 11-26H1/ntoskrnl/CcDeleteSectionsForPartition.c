/*
 * XREFs of CcDeleteSectionsForPartition @ 0x1405B4C80
 * Callers:
 *     CcReapPrivateVolumeCachemap @ 0x14038BB90 (CcReapPrivateVolumeCachemap.c)
 *     CcExitPartition @ 0x1405B4ED4 (CcExitPartition.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1402461A0 (KeDelayExecutionThread.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     CcDeleteSharedCacheMap @ 0x14039D950 (CcDeleteSharedCacheMap.c)
 *     CcGetPrivateVolumeCacheMap @ 0x14039DEA0 (CcGetPrivateVolumeCacheMap.c)
 *     MmGetControlAreaPartition @ 0x14039EF6C (MmGetControlAreaPartition.c)
 *     CcScheduleLazyWriteScan @ 0x1403E3830 (CcScheduleLazyWriteScan.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

void __fastcall CcDeleteSectionsForPartition(_QWORD **a1, __int64 a2)
{
  char v2; // si
  char v5; // di
  _QWORD *i; // rcx
  __int64 v7; // rbx
  int v8; // eax
  __int64 v9; // rax
  _BYTE *PrivateVolumeCacheMap; // rax
  struct _KLOCK_QUEUE_HANDLE v11; // [rsp+30h] [rbp-50h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-38h] BYREF
  __int128 Object; // [rsp+60h] [rbp-20h] BYREF
  __int128 v14; // [rsp+70h] [rbp-10h] BYREF

  memset(&v11, 0, sizeof(v11));
  v2 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  Object = 0LL;
  v14 = 0LL;
LABEL_2:
  v5 = 0;
LABEL_3:
  if ( v5 )
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    v5 = 0;
  }
  if ( v2 )
  {
    v2 = 0;
    KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
    v5 = 1;
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a2 + 768), &v11);
  for ( i = *a1; i != a1; i = (_QWORD *)*i )
  {
    v7 = (__int64)(i - 17);
    if ( (i[2] & 0x800) == 0 )
    {
      if ( MmGetControlAreaPartition(*(_QWORD *)((*(_QWORD *)(v7 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x28)) != *(_QWORD *)(a2 + 8) )
        KeBugCheckEx(0x34u, 0x3BDuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
      if ( *(_QWORD *)(v7 + 232) != v7 + 232 )
        goto LABEL_15;
      v8 = *(_DWORD *)(v7 + 152);
      if ( (v8 & 0x8000) != 0 )
      {
        *(_DWORD *)(v7 + 152) = v8 & 0xFFFF7FFF;
LABEL_15:
        KeReleaseInStackQueuedSpinLock(&v11);
        KeDelayExecutionThread(0, 0, &Cc5Milliseconds);
        goto LABEL_3;
      }
      if ( (v8 & 0x20) != 0 || *(_DWORD *)(v7 + 4) || *(_DWORD *)(v7 + 112) )
      {
        *(_DWORD *)(v7 + 152) = v8 | 0x10000;
        *((_QWORD *)&v14 + 1) = &v14;
        *(_QWORD *)&v14 = &v14;
        WORD4(Object) = 0;
        BYTE10(Object) = 6;
        HIDWORD(Object) = 0;
        *(_QWORD *)&Object = *(_QWORD *)(v7 + 280);
        PrivateVolumeCacheMap = (_BYTE *)CcGetPrivateVolumeCacheMap(v7);
        *(_QWORD *)(v7 + 280) = (char *)&Object + 1;
        CcScheduleLazyWriteScan((_BYTE *)a2, PrivateVolumeCacheMap, 1, 1);
        KeReleaseInStackQueuedSpinLock(&v11);
        KeWaitForSingleObject((char *)&Object + 8, Executive, 0, 0, 0LL);
        goto LABEL_3;
      }
      v9 = *(_QWORD *)(v7 + 600);
      if ( v9 && *(_DWORD *)(v9 + 4) == 1 && !v5 )
      {
        v2 = 1;
        KeReleaseInStackQueuedSpinLock(&v11);
        goto LABEL_3;
      }
      CcDeleteSharedCacheMap(
        (PSLIST_ENTRY)v7,
        (PKLOCK_QUEUE_HANDLE)((unsigned __int64)&LockHandle & -(__int64)(v5 != 0)),
        &v11,
        0,
        0LL);
      goto LABEL_2;
    }
  }
  if ( v5 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  KeReleaseInStackQueuedSpinLock(&v11);
}
