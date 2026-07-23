/*
 * XREFs of FsRtlInsertPerFileObjectContext @ 0x14021ADC0
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlAcquireAutoExpandPushLockExclusive @ 0x14021AF74 (FsRtlAcquireAutoExpandPushLockExclusive.c)
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     ExpReleaseFannedOutPushLockExclusive @ 0x14021B298 (ExpReleaseFannedOutPushLockExclusive.c)
 *     IopAllocateFileObjectExtension @ 0x14021B6F0 (IopAllocateFileObjectExtension.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall FsRtlInsertPerFileObjectContext(PFILE_OBJECT FileObject, PFSRTL_PER_FILEOBJECT_CONTEXT Ptr)
{
  PVOID FileObjectExtension; // rbx
  signed __int64 *v5; // rbx
  signed __int64 *Pool2; // rax
  _QWORD *v7; // rax
  __int64 *v8; // rcx
  struct _LIST_ENTRY *v9; // rcx
  struct _LIST_ENTRY *v10; // rax
  PVOID v11; // rbx
  NTSTATUS result; // eax
  int v13; // eax
  signed __int64 v14; // rax
  signed __int64 v15; // rdx
  signed __int64 v16; // rtt
  char v17; // [rsp+30h] [rbp+8h] BYREF

  if ( !FileObject )
    return -1073741811;
  if ( FileObject->FileObjectExtension || (result = IopAllocateFileObjectExtension(FileObject, &v17, 0LL), result >= 0) )
  {
    FileObjectExtension = FileObject->FileObjectExtension;
    if ( FileObjectExtension )
      v5 = (signed __int64 *)*((_QWORD *)FileObjectExtension + 4);
    else
      v5 = 0LL;
    if ( !v5 )
    {
      Pool2 = (signed __int64 *)ExAllocatePool2(0x42uLL);
      v5 = Pool2;
      if ( !Pool2 )
        return -1073741670;
      Pool2[1] = 0LL;
      *Pool2 = 0LL;
      v7 = Pool2 + 2;
      v7[1] = v7;
      *v7 = v7;
      v8 = (__int64 *)FileObject->FileObjectExtension;
      if ( !v8 || v8 == qword_1400137E0 || _InterlockedCompareExchange64(v8 + 4, (signed __int64)v5, 0LL) )
      {
        ExFreePoolWithTag(v5, 0);
        if ( !FileObject->FileObjectExtension )
          return -1073741823;
        v11 = FileObject->FileObjectExtension;
        if ( !v11 )
          return -1073741823;
        v5 = (signed __int64 *)*((_QWORD *)v11 + 4);
        if ( !v5 )
          return -1073741823;
      }
    }
    FsRtlAcquireAutoExpandPushLockExclusive(v5);
    v9 = (struct _LIST_ENTRY *)v5[2];
    v10 = (struct _LIST_ENTRY *)(v5 + 2);
    if ( (signed __int64 *)v9->Blink != v5 + 2 )
      __fastfail(3u);
    Ptr->Links.Flink = v9;
    Ptr->Links.Blink = v10;
    v9->Blink = &Ptr->Links;
    v10->Flink = &Ptr->Links;
    v13 = *((_DWORD *)v5 + 2);
    if ( (v13 & 1) != 0 )
    {
      ExpReleaseFannedOutPushLockExclusive(v13 & 0xFFFFFFF8);
    }
    else if ( (*((_DWORD *)v5 + 3) & 0xF0000u) < 0xF0000 )
    {
      *((_DWORD *)v5 + 3) += 0x10000;
    }
    _m_prefetchw(v5);
    v14 = *v5;
    v15 = *v5 - 16;
    if ( (*v5 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v15 = 0LL;
    if ( (v14 & 2) != 0 || (v16 = *v5, v16 != _InterlockedCompareExchange64(v5, v15, v14)) )
      ExfReleasePushLock(v5, v15);
    KeAbPostRelease((struct _KTHREAD *)v5);
    KeLeaveCriticalRegionThread(KeGetCurrentThread());
    return 0;
  }
  return result;
}
