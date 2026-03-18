/*
 * XREFs of MiReAcquireOutSwappedProcessCommit @ 0x1406E4858
 * Callers:
 *     MmInSwapProcess @ 0x14048C3C4 (MmInSwapProcess.c)
 * Callees:
 *     KeFreezeProcess @ 0x140208E90 (KeFreezeProcess.c)
 *     ObfReferenceObjectWithTag @ 0x140278B30 (ObfReferenceObjectWithTag.c)
 *     MiLockWorkingSetExclusive @ 0x14027E5A0 (MiLockWorkingSetExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x14027E758 (MiUnlockWorkingSetExclusive.c)
 *     KeForceDetachProcess @ 0x1402C6C30 (KeForceDetachProcess.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     MiChargeCommit @ 0x1402F64A0 (MiChargeCommit.c)
 *     MiBeginProcessClean @ 0x140313D2C (MiBeginProcessClean.c)
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 *     _tlgKeywordOn @ 0x14044F850 (_tlgKeywordOn.c)
 *     KeForceAttachProcess @ 0x14045D2E0 (KeForceAttachProcess.c)
 *     MiLogOutswappedProcessCommitReacquire @ 0x1406E4514 (MiLogOutswappedProcessCommitReacquire.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiReAcquireOutSwappedProcessCommit(char *Object)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  char *v4; // rdi
  unsigned __int64 *v5; // r15
  struct _WORK_QUEUE_ITEM **v6; // r12
  unsigned int v7; // ebx
  __int64 v8; // r13
  int v9; // r14d
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rcx
  int v13; // r9d
  KIRQL v14; // al
  struct _WORK_QUEUE_ITEM *v15; // rax
  KIRQL v16; // dl
  struct _WORK_QUEUE_ITEM *v17; // rsi
  struct _KEVENT *Blink; // rcx
  int v20; // [rsp+60h] [rbp+8h]
  struct _KTHREAD *CurrentThread; // [rsp+68h] [rbp+10h]

  KeForceAttachProcess((_KPROCESS *)Object, 0LL, 0);
  v4 = Object + 1024;
  if ( (*((_DWORD *)Object + 302) & 0xF) == 1 )
  {
    v5 = (unsigned __int64 *)&unk_140E37808;
    v6 = (struct _WORK_QUEUE_ITEM **)&unk_140E37820;
  }
  else
  {
    v5 = (unsigned __int64 *)(Object + 1224);
    v6 = (struct _WORK_QUEUE_ITEM **)(Object + 1248);
  }
  v7 = 0;
  CurrentThread = KeGetCurrentThread();
  v8 = *v5;
  if ( dword_140FBE260 == 1 )
  {
    v9 = 1;
LABEL_9:
    if ( stru_140E36558.FirstArgument
      && *(_DWORD *)stru_140E36558.FirstArgument
      && tlgKeywordOn((__int64)stru_140E36558.FirstArgument, 4LL) )
    {
      MiLogOutswappedProcessCommitReacquire(v11, (__int64)Object, v8, 0, 0);
    }
    goto LABEL_19;
  }
  v10 = 1LL;
  if ( (*((_DWORD *)Object + 125) & 8) != 0 )
  {
    v9 = 0;
  }
  else
  {
    v9 = MiChargeCommit(*(ULONG **)(stru_140E2EB88.ThreadLock + 8LL * *((unsigned __int16 *)Object + 599)), *v5, 1u);
    if ( v9 )
      goto LABEL_9;
    v10 = 0LL;
  }
  if ( stru_140E36558.FirstArgument
    && *(_DWORD *)stru_140E36558.FirstArgument
    && tlgKeywordOn((__int64)stru_140E36558.FirstArgument, 4LL) )
  {
    MiLogOutswappedProcessCommitReacquire(v12, (__int64)Object, v8, v13, v10);
  }
  _InterlockedOr((volatile signed __int32 *)Object + 383, 0x100u);
  v14 = MiLockWorkingSetExclusive((__int64)(Object + 1024), v2, v10);
  Object[1211] = HIBYTE(*((_DWORD *)Object + 302)) | 0x30;
  MiUnlockWorkingSetExclusive((__int64)(Object + 1024), v14);
  MiBeginProcessClean((__int64)CurrentThread, (__int64)Object);
  KeFreezeProcess((__int64)Object, 0);
  ObfReferenceObjectWithTag(Object, 0x72506D4Du);
  v15 = *v6;
  v15->WorkerRoutine = (void (__fastcall *)(void *))MiReAcquireCommitFailWorker;
  v15->Parameter = Object;
  v15->List.Flink = 0LL;
LABEL_19:
  v16 = MiLockWorkingSetExclusive((__int64)(Object + 1024), v2, v3);
  v20 = *((_DWORD *)Object + 302);
  if ( (HIBYTE(v20) & 0x30) == 0x20 )
    Object[1211] = HIBYTE(v20) & 0xCF | 0x10;
  v17 = *v6;
  if ( v9 )
  {
    *v5 = 0LL;
    *v6 = 0LL;
  }
  MiUnlockWorkingSetExclusive((__int64)v4, v16);
  KeForceDetachProcess(0LL, 0);
  Blink = (struct _KEVENT *)v17[1].List.Blink;
  if ( Blink )
    KeSetEvent(Blink, 0, 0);
  if ( v9 )
  {
    ExFreePoolWithTag(v17, 0);
  }
  else
  {
    ExQueueWorkItem(v17, CriticalWorkQueue);
    return (unsigned int)-1073741523;
  }
  return v7;
}
