/*
 * XREFs of VfPendingInitPhase1 @ 0x140B81AD4
 * Callers:
 *     VfIoPendingEntry @ 0x140606370 (VfIoPendingEntry.c)
 *     VfInitSystemNoRebootNeeded @ 0x140B739A0 (VfInitSystemNoRebootNeeded.c)
 *     VerifierInitSystem @ 0x140C29ED8 (VerifierInitSystem.c)
 * Callees:
 *     KeInitializeEvent @ 0x140401B80 (KeInitializeEvent.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     PsCreateSystemThread @ 0x140A17730 (PsCreateSystemThread.c)
 */

NTSTATUS VfPendingInitPhase1()
{
  NTSTATUS result; // eax
  __int64 v1; // rdi
  PVOID *v2; // rsi
  HANDLE v3; // rcx
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE ThreadHandle; // [rsp+90h] [rbp+20h] BYREF
  PVOID Object; // [rsp+98h] [rbp+28h] BYREF

  ThreadHandle = 0LL;
  result = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  if ( !ViPendingWorkersCount )
  {
    v1 = 0LL;
    v2 = (PVOID *)&ViPendingWorkers;
    do
    {
      KeInitializeEvent((PRKEVENT)((char *)&ViPendingWorkers + 48 * v1 + 16), SynchronizationEvent, 0);
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.ObjectName = 0LL;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 512;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      result = PsCreateSystemThread(
                 &ThreadHandle,
                 0,
                 &ObjectAttributes,
                 0LL,
                 0LL,
                 ViPendingWorkerThread,
                 (char *)&ViPendingWorkers + 48 * v1);
      if ( result < 0 )
        break;
      Object = 0LL;
      ObReferenceObjectByHandle(ThreadHandle, 0, (POBJECT_TYPE)PsThreadType, 0, &Object, 0LL);
      v3 = ThreadHandle;
      *v2 = Object;
      result = ZwClose(v3);
      v1 = (unsigned int)(v1 + 1);
      v2 += 6;
    }
    while ( (unsigned int)v1 < 8 );
    _InterlockedExchange(&ViPendingWorkersCount, v1);
  }
  return result;
}
