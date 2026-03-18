/*
 * XREFs of FsRtlInsertPerFileObjectContext @ 0x140449480
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLock @ 0x1402E3120 (ExfReleasePushLock.c)
 *     FsRtlAcquireAutoExpandPushLockExclusive @ 0x140449634 (FsRtlAcquireAutoExpandPushLockExclusive.c)
 *     ExpReleaseFannedOutPushLockExclusive @ 0x140449868 (ExpReleaseFannedOutPushLockExclusive.c)
 *     IopAllocateFileObjectExtension @ 0x140449920 (IopAllocateFileObjectExtension.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall FsRtlInsertPerFileObjectContext(PFILE_OBJECT FileObject, PFSRTL_PER_FILEOBJECT_CONTEXT Ptr)
{
  _QWORD *FileObjectExtension; // rbx
  struct _LIST_ENTRY *v5; // rbx
  struct _LIST_ENTRY *Pool2; // rax
  struct _LIST_ENTRY *v7; // rax
  __int64 *v8; // rcx
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *v10; // rax
  _QWORD *v11; // rbx
  NTSTATUS result; // eax
  int Blink; // eax
  signed __int64 v14; // rax
  signed __int64 v15; // rdx
  struct _LIST_ENTRY *v16; // rtt
  __int64 v17; // rdx
  __int64 v18; // r8
  char v19; // [rsp+30h] [rbp+8h] BYREF

  if ( !FileObject )
    return -1073741811;
  if ( FileObject->FileObjectExtension || (result = IopAllocateFileObjectExtension(FileObject, &v19, 0LL), result >= 0) )
  {
    FileObjectExtension = FileObject->FileObjectExtension;
    if ( FileObjectExtension )
      v5 = (struct _LIST_ENTRY *)FileObjectExtension[4];
    else
      v5 = 0LL;
    if ( !v5 )
    {
      Pool2 = (struct _LIST_ENTRY *)ExAllocatePool2(0x42uLL);
      v5 = Pool2;
      if ( !Pool2 )
        return -1073741670;
      Pool2->Blink = 0LL;
      Pool2->Flink = 0LL;
      v7 = Pool2 + 1;
      v7->Blink = v7;
      v7->Flink = v7;
      v8 = (__int64 *)FileObject->FileObjectExtension;
      if ( !v8 || v8 == qword_140019060 || _InterlockedCompareExchange64(v8 + 4, (signed __int64)v5, 0LL) )
      {
        ExFreePoolWithTag(v5, 0);
        if ( !FileObject->FileObjectExtension )
          return -1073741823;
        v11 = FileObject->FileObjectExtension;
        if ( !v11 )
          return -1073741823;
        v5 = (struct _LIST_ENTRY *)v11[4];
        if ( !v5 )
          return -1073741823;
      }
    }
    FsRtlAcquireAutoExpandPushLockExclusive(v5);
    Flink = v5[1].Flink;
    v10 = v5 + 1;
    if ( Flink->Blink != &v5[1] )
      __fastfail(3u);
    Ptr->Links.Flink = Flink;
    Ptr->Links.Blink = v10;
    Flink->Blink = &Ptr->Links;
    v10->Flink = &Ptr->Links;
    Blink = (int)v5->Blink;
    if ( (Blink & 1) != 0 )
    {
      ExpReleaseFannedOutPushLockExclusive(Blink & 0xFFFFFFF8);
    }
    else if ( (HIDWORD(v5->Blink) & 0xF0000u) < 0xF0000 )
    {
      HIDWORD(v5->Blink) += 0x10000;
    }
    _m_prefetchw(v5);
    v14 = (signed __int64)v5->Flink;
    v15 = (signed __int64)&v5->Flink[-1];
    if ( ((unsigned __int64)v5->Flink & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v15 = 0LL;
    if ( (v14 & 2) != 0
      || (v16 = v5->Flink,
          v16 != (struct _LIST_ENTRY *)_InterlockedCompareExchange64((volatile signed __int64 *)v5, v15, v14)) )
    {
      ExfReleasePushLock(v5);
    }
    KeAbPostRelease((unsigned __int64)v5);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v17, v18);
    return 0;
  }
  return result;
}
