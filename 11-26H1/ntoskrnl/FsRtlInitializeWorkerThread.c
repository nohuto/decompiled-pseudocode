/*
 * XREFs of FsRtlInitializeWorkerThread @ 0x140CB92D0
 * Callers:
 *     FsRtlInitSystem @ 0x140CB8A6C (FsRtlInitSystem.c)
 * Callees:
 *     KeInitializeQueue @ 0x1404CBEC0 (KeInitializeQueue.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     PsCreateSystemThread @ 0x140A03420 (PsCreateSystemThread.c)
 */

NTSTATUS FsRtlInitializeWorkerThread()
{
  NTSTATUS v0; // ebx
  unsigned int i; // edi
  NTSTATUS result; // eax
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE ThreadHandle; // [rsp+80h] [rbp+10h] BYREF

  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  v0 = 0;
  ThreadHandle = 0LL;
  memset(&ObjectAttributes.RootDirectory, 0, 40);
  for ( i = 0; i < 2; ++i )
  {
    KeInitializeQueue((PRKQUEUE)&VslpReservedTransferLock.SavedApcStateFill[64 * (unsigned __int64)i + 32], 0);
    result = PsCreateSystemThread(
               &ThreadHandle,
               0x1FFFFFu,
               &ObjectAttributes,
               0LL,
               0LL,
               (PKSTART_ROUTINE)FsRtlWorkerThread,
               (PVOID)i);
    v0 = result;
    if ( result < 0 )
      return result;
    ZwClose(ThreadHandle);
  }
  LOWORD(VslpReservedTransferLock.ThreadListEntry.Flink) = 1;
  VslpReservedTransferLock.MutantListHead.Flink = (struct _LIST_ENTRY *)&VslpReservedTransferLock.ThreadListEntry.Blink;
  VslpReservedTransferLock.ThreadListEntry.Blink = (struct _LIST_ENTRY *)&VslpReservedTransferLock.ThreadListEntry.Blink;
  result = v0;
  BYTE2(VslpReservedTransferLock.ThreadListEntry.Flink) = 6;
  HIDWORD(VslpReservedTransferLock.ThreadListEntry.Flink) = 1;
  return result;
}
