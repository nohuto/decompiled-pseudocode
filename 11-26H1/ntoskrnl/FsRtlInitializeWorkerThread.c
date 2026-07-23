/*
 * XREFs of FsRtlInitializeWorkerThread @ 0x140CBF314
 * Callers:
 *     FsRtlInitSystem @ 0x140CBEAB0 (FsRtlInitSystem.c)
 * Callees:
 *     KeInitializeQueue @ 0x1404C58F0 (KeInitializeQueue.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     PsCreateSystemThread @ 0x140A78D90 (PsCreateSystemThread.c)
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
    KeInitializeQueue((PRKQUEUE)&VslpReservedTransferLock.SchedulerApcFill5[64 * (unsigned __int64)i + 32], 0);
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
  LOWORD(VslpReservedTransferLock.PropagateBoostsEntry.Next) = 1;
  *(_QWORD *)VslpReservedTransferLock.PriorityFloorCounts = &VslpReservedTransferLock.IoSelfBoostsEntry;
  VslpReservedTransferLock.IoSelfBoostsEntry.Next = &VslpReservedTransferLock.IoSelfBoostsEntry;
  result = v0;
  BYTE2(VslpReservedTransferLock.PropagateBoostsEntry.Next) = 6;
  HIDWORD(VslpReservedTransferLock.PropagateBoostsEntry.Next) = 1;
  return result;
}
