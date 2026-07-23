/*
 * XREFs of VfPendingInitPhase1 @ 0x140C35F38
 * Callers:
 *     VfIoPendingEntry @ 0x140649020 (VfIoPendingEntry.c)
 *     VfInitSystemNoRebootNeeded @ 0x140C265DC (VfInitSystemNoRebootNeeded.c)
 *     VerifierInitSystem @ 0x140CE4C2C (VerifierInitSystem.c)
 * Callees:
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     PsCreateSystemThread @ 0x140A78D90 (PsCreateSystemThread.c)
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

  result = 0;
  ThreadHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  if ( !ViPendingWorkersCount )
  {
    v1 = 0LL;
    v2 = (PVOID *)&ViPendingWorkers;
    do
    {
      KeInitializeEvent((PRKEVENT)((char *)&ViPendingWorkers + 48 * v1 + 16), SynchronizationEvent, 0);
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 512;
      ObjectAttributes.ObjectName = 0LL;
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
