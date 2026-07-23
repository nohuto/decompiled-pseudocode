/*
 * XREFs of CcSetParallelFlushFile @ 0x1404D1360
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 */

void __stdcall CcSetParallelFlushFile(PFILE_OBJECT FileObject, BOOLEAN EnableParallelFlush)
{
  PSECTION_OBJECT_POINTERS SectionObjectPointer; // rax
  _QWORD *SharedCacheMap; // rdi
  int v5; // eax
  unsigned int v6; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  SectionObjectPointer = FileObject->SectionObjectPointer;
  memset(&LockHandle, 0, sizeof(LockHandle));
  SharedCacheMap = SectionObjectPointer->SharedCacheMap;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(SharedCacheMap[67] + 768LL), &LockHandle);
  v5 = *((_DWORD *)SharedCacheMap + 38);
  if ( EnableParallelFlush )
    v6 = v5 | 0x40000;
  else
    v6 = v5 & 0xFFFBFFFF;
  *((_DWORD *)SharedCacheMap + 38) = v6;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
