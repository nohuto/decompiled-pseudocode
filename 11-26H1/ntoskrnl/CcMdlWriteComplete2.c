/*
 * XREFs of CcMdlWriteComplete2 @ 0x14040EDA0
 * Callers:
 *     CcMdlWriteComplete @ 0x140B0BE50 (CcMdlWriteComplete.c)
 *     FsRtlMdlWriteCompleteDev @ 0x140B25CF0 (FsRtlMdlWriteCompleteDev.c)
 * Callees:
 *     FsRtlIsNtstatusExpected @ 0x1402C4930 (FsRtlIsNtstatusExpected.c)
 *     RtlRaiseStatus @ 0x1402CA4E0 (RtlRaiseStatus.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     MmFlushSection @ 0x14039C7A0 (MmFlushSection.c)
 *     CcSetDirtyInMask @ 0x14039F350 (CcSetDirtyInMask.c)
 *     CcDecrementOpenCount @ 0x1403A04AC (CcDecrementOpenCount.c)
 *     IoFreeMdl @ 0x1403A0EF0 (IoFreeMdl.c)
 *     MmUnlockPages @ 0x140410330 (MmUnlockPages.c)
 */

void __fastcall CcMdlWriteComplete2(__int64 a1, struct _KTHREAD **a2, struct _MDL *a3)
{
  struct _KTHREAD *v3; // rbx
  CSHORT MdlFlags; // bp
  __int64 v6; // rax
  struct _MDL *v7; // r14
  NTSTATUS v8; // esi
  struct _MDL *v9; // rdi
  __int16 v10; // bp
  __int64 v11; // r15
  struct _MDL *Next; // r12
  __int64 ByteCount; // r8
  __int64 v14; // rax
  struct _MDL *v15; // rbx
  BOOLEAN IsNtstatusExpected; // al
  NTSTATUS v17; // ecx
  __int128 v18; // [rsp+30h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-48h] BYREF
  struct _KTHREAD *v20; // [rsp+90h] [rbp+8h] BYREF

  v3 = *a2;
  MdlFlags = a3->MdlFlags;
  v20 = *a2;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v6 = *(_QWORD *)(a1 + 40);
  v7 = a3;
  v18 = 0LL;
  v8 = 0;
  v9 = a3;
  v10 = MdlFlags & 2;
  v11 = *(_QWORD *)(v6 + 8);
  do
  {
    Next = v9->Next;
    if ( v10 )
      MmUnlockPages(v9);
    ByteCount = v9->ByteCount;
    if ( (*(_DWORD *)(a1 + 80) & 0x10) != 0 )
    {
      MmFlushSection(*(_QWORD *)(a1 + 40), &v20, ByteCount, 0LL, &v18, 1);
      if ( (int)v18 < 0 )
        v8 = v18;
    }
    else
    {
      CcSetDirtyInMask(v11, (__int64 *)&v20, ByteCount, 0LL);
    }
    v14 = v9->ByteCount;
    v9 = Next;
    v3 = (struct _KTHREAD *)((char *)v3 + v14);
    v20 = v3;
  }
  while ( Next );
  if ( v10 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(v11 + 536) + 768LL), &LockHandle);
    CcDecrementOpenCount(v11);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  if ( v8 < 0 )
  {
    IsNtstatusExpected = FsRtlIsNtstatusExpected(v8);
    v17 = -1073741591;
    if ( IsNtstatusExpected )
      v17 = v8;
    RtlRaiseStatus(v17);
  }
  do
  {
    v15 = v7->Next;
    IoFreeMdl(v7);
    v7 = v15;
  }
  while ( v15 );
}
