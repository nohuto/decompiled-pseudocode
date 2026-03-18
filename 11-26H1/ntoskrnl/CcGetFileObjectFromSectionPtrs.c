/*
 * XREFs of CcGetFileObjectFromSectionPtrs @ 0x1404D1340
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1402B4730 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1402B98C0 (KeReleaseInStackQueuedSpinLock.c)
 */

PFILE_OBJECT __stdcall CcGetFileObjectFromSectionPtrs(PSECTION_OBJECT_POINTERS SectionObjectPointer)
{
  struct _FILE_OBJECT *v2; // rdi
  _QWORD *SharedCacheMap; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
  SharedCacheMap = SectionObjectPointer->SharedCacheMap;
  if ( SharedCacheMap )
  {
    v2 = (struct _FILE_OBJECT *)(SharedCacheMap[12] & 0xFFFFFFFFFFFFFFF0uLL);
    *((_DWORD *)SharedCacheMap + 38) |= 0x100000u;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v2;
}
