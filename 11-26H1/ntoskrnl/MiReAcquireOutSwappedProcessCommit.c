/*
 * XREFs of MiReAcquireOutSwappedProcessCommit @ 0x1406E9508
 * Callers:
 *     MmInSwapProcess @ 0x140485F04 (MmInSwapProcess.c)
 * Callees:
 *     KeFreezeProcess @ 0x140208F70 (KeFreezeProcess.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     MiLockWorkingSetExclusive @ 0x14027DB10 (MiLockWorkingSetExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x14027DCC8 (MiUnlockWorkingSetExclusive.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     MiChargeCommit @ 0x1402D8520 (MiChargeCommit.c)
 *     KeForceDetachProcess @ 0x1403118D0 (KeForceDetachProcess.c)
 *     MiBeginProcessClean @ 0x140315D5C (MiBeginProcessClean.c)
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     KeForceAttachProcess @ 0x140456CE0 (KeForceAttachProcess.c)
 *     MiLogOutswappedProcessCommitReacquire @ 0x1406E91C4 (MiLogOutswappedProcessCommitReacquire.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
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
    v5 = (unsigned __int64 *)&unk_140E37988;
    v6 = (struct _WORK_QUEUE_ITEM **)&unk_140E379A0;
  }
  else
  {
    v5 = (unsigned __int64 *)(Object + 1224);
    v6 = (struct _WORK_QUEUE_ITEM **)(Object + 1248);
  }
  v7 = 0;
  CurrentThread = KeGetCurrentThread();
  v8 = *v5;
  if ( dword_140FBF260 == 1 )
  {
    v9 = 1;
LABEL_9:
    if ( stru_140E366D8.FirstArgument
      && *(_DWORD *)stru_140E366D8.FirstArgument
      && tlgKeywordOn((__int64)stru_140E366D8.FirstArgument, 4LL) )
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
    v9 = MiChargeCommit(*(ULONG **)(stru_140E2ED08.ThreadLock + 8LL * *((unsigned __int16 *)Object + 599)), *v5, 1u);
    if ( v9 )
      goto LABEL_9;
    v10 = 0LL;
  }
  if ( stru_140E366D8.FirstArgument
    && *(_DWORD *)stru_140E366D8.FirstArgument
    && tlgKeywordOn((__int64)stru_140E366D8.FirstArgument, 4LL) )
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
