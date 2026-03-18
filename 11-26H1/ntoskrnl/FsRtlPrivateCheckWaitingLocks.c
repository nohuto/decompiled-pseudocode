/*
 * XREFs of FsRtlPrivateCheckWaitingLocks @ 0x1402BFAE8
 * Callers:
 *     FsRtlFastUnlockSingle @ 0x1402BE020 (FsRtlFastUnlockSingle.c)
 *     FsRtlFastUnlockSingleShared @ 0x1402BF550 (FsRtlFastUnlockSingleShared.c)
 *     FsRtlFastUnlockSingleExclusive @ 0x1402C18D0 (FsRtlFastUnlockSingleExclusive.c)
 *     FsRtlPrivateFastUnlockAll @ 0x1403B5AC4 (FsRtlPrivateFastUnlockAll.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x140278B30 (ObfReferenceObjectWithTag.c)
 *     KeAcquireQueuedSpinLock @ 0x1402B4690 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     FsRtlPrivateCheckForExclusiveLockAccess @ 0x1402BFFA4 (FsRtlPrivateCheckForExclusiveLockAccess.c)
 *     FsRtlPrivateInsertLock @ 0x1402C0850 (FsRtlPrivateInsertLock.c)
 *     FsRtlPrivateCheckForSharedLockAccess @ 0x1402C1EC0 (FsRtlPrivateCheckForSharedLockAccess.c)
 *     KeReleaseQueuedSpinLock @ 0x1402E2650 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExFreeToNPagedLookasideList @ 0x1403B5A60 (ExFreeToNPagedLookasideList.c)
 *     IoGetRequestorProcess @ 0x1403FD8F0 (IoGetRequestorProcess.c)
 *     FsRtlCompleteLockIrpReal @ 0x1403FD938 (FsRtlCompleteLockIrpReal.c)
 *     FsRtlPrivateRemoveLock @ 0x1405174BC (FsRtlPrivateRemoveLock.c)
 */

void __fastcall FsRtlPrivateCheckWaitingLocks(__int64 a1, KSPIN_LOCK *a2, KIRQL a3)
{
  _QWORD *v3; // rdi
  _QWORD *v4; // rsi
  __int64 v7; // r13
  __int64 v8; // rbx
  char v9; // al
  char v10; // r15
  char v11; // bl
  char v12; // cl
  char inserted; // bl
  __int128 v14; // [rsp+30h] [rbp-30h] BYREF
  PVOID Object[2]; // [rsp+40h] [rbp-20h]
  __int128 v16; // [rsp+50h] [rbp-10h]
  int v17; // [rsp+A8h] [rbp+48h] BYREF
  KIRQL NewIrql; // [rsp+B0h] [rbp+50h]
  __int64 v19; // [rsp+B8h] [rbp+58h]

  NewIrql = a3;
  v3 = (_QWORD *)a2[3];
  v4 = a2 + 3;
  v17 = 0;
  while ( v3 )
  {
    v7 = v3[3];
    v14 = 0LL;
    *(_OWORD *)Object = 0LL;
    v16 = 0LL;
    v8 = *(_QWORD *)(v7 + 184);
    v19 = v8;
    *(_QWORD *)&v14 = *(_QWORD *)(v8 + 24);
    *((_QWORD *)&v14 + 1) = **(_QWORD **)(v8 + 8);
    *((_QWORD *)&v16 + 1) = *((_QWORD *)&v14 + 1) + v14 - 1;
    Object[1] = *(PVOID *)(v8 + 48);
    *(_QWORD *)&v16 = IoGetRequestorProcess((PIRP)v7);
    HIDWORD(Object[0]) = *(_DWORD *)(v8 + 16);
    if ( (*(_BYTE *)(v8 + 2) & 2) != 0 )
    {
      LOBYTE(Object[0]) = 1;
      v9 = FsRtlPrivateCheckForExclusiveLockAccess(a2, &v14);
    }
    else
    {
      LOBYTE(Object[0]) = 0;
      v9 = FsRtlPrivateCheckForSharedLockAccess(a2, &v14);
    }
    v10 = v9;
    if ( !v9 )
      goto LABEL_13;
    *(_BYTE *)(v7 + 69) = KeAcquireQueuedSpinLock(7uLL);
    _InterlockedExchange64((volatile __int64 *)(v7 + 104), 0LL);
    v11 = *(_BYTE *)(v7 + 68);
    KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v7 + 69));
    v12 = 0;
    if ( !v11 )
      v12 = v10;
    if ( v12 )
    {
      inserted = FsRtlPrivateInsertLock(a1, *(_QWORD *)(v19 + 48), &v14);
      *v4 = *v3;
      if ( v3 == (_QWORD *)a2[4] )
        a2[4] = (KSPIN_LOCK)v4;
      KeReleaseSpinLock(a2, NewIrql);
      ObfReferenceObjectWithTag(Object[1], 0x746C6644u);
      FsRtlCompleteLockIrpReal(*(_QWORD *)(a1 + 8), v3[2], v7, inserted == 0 ? 0xC000009A : 0, &v17, Object[1]);
      if ( inserted )
      {
        if ( v17 < 0 )
          FsRtlPrivateRemoveLock(a1, &v14, 0LL);
      }
      ObfDereferenceObjectWithTag(Object[1], 0x746C6644u);
      NewIrql = KeAcquireSpinLockRaiseToDpc(a2);
      v4 = a2 + 3;
      ExFreeToNPagedLookasideList(&FsRtlWaitingLockLookasideList, v3);
    }
    else
    {
LABEL_13:
      v4 = v3;
    }
    v3 = (_QWORD *)*v4;
  }
}
