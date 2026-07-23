/*
 * XREFs of VfPoolInitPhase1 @ 0x140C3E60C
 * Callers:
 *     VfInitSystemNoRebootNeeded @ 0x140C265DC (VfInitSystemNoRebootNeeded.c)
 *     VerifierInitSystem @ 0x140CE4C2C (VerifierInitSystem.c)
 * Callees:
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     InitializeSListHead @ 0x140492D50 (InitializeSListHead.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     PsCreateSystemThread @ 0x140A78D90 (PsCreateSystemThread.c)
 */

NTSTATUS VfPoolInitPhase1()
{
  NTSTATUS result; // eax
  PVOID *p_Object; // rbx
  HANDLE v2; // rcx
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE ThreadHandle; // [rsp+90h] [rbp+20h] BYREF
  PVOID Object; // [rsp+98h] [rbp+28h] BYREF

  ThreadHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  if ( (VfRuleClasses & 0x400000) == 0 || (result = MmVerifierData, (MmVerifierData & 1) != 0) )
  {
    p_Object = &stru_140E27C48.WaitBlock[0].Object;
    do
    {
      KeInitializeEvent((PRKEVENT)p_Object - 1, SynchronizationEvent, 0);
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
                 ViPoolDelayFreeTrimThreadRoutine,
                 p_Object - 5);
      if ( result >= 0 )
      {
        Object = 0LL;
        ObReferenceObjectByHandle(ThreadHandle, 0, (POBJECT_TYPE)PsThreadType, 0, &Object, 0LL);
        v2 = ThreadHandle;
        *p_Object = Object;
        ZwClose(v2);
        InitializeSListHead((PSLIST_HEADER)(p_Object - 5));
        result = _InterlockedExchange((volatile __int32 *)p_Object + 2, 1);
      }
      p_Object += 8;
    }
    while ( (__int64)p_Object < (__int64)&stru_140E27C48.WaitBlockFill11[160] );
  }
  return result;
}
