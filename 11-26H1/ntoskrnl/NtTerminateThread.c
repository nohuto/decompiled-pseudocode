/*
 * XREFs of NtTerminateThread @ 0x14094AF20
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14092A610 (ObpReferenceObjectByHandleWithTag.c)
 *     PspTerminateThreadByPointer @ 0x14094B010 (PspTerminateThreadByPointer.c)
 */

NTSTATUS __cdecl NtTerminateThread(HANDLE ThreadHandle, NTSTATUS ExitStatus)
{
  __int64 v2; // r8
  struct _KTHREAD *CurrentThread; // rsi
  NTSTATUS v4; // ebx
  NTSTATUS result; // eax
  PVOID Object; // [rsp+50h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  Object = 0LL;
  if ( !ThreadHandle )
  {
    if ( LODWORD(CurrentThread->ApcState.Process[1].CpuPartitionList.Blink) == 1 )
      return -1073741605;
    goto LABEL_3;
  }
  if ( ThreadHandle == (HANDLE)-2LL )
  {
LABEL_3:
    LOBYTE(v2) = 1;
    PspTerminateThreadByPointer(CurrentThread, (unsigned int)ExitStatus, v2);
    return v4;
  }
  result = ObpReferenceObjectByHandleWithTag(
             (ULONG_PTR)ThreadHandle,
             1,
             (__int64)PsThreadType,
             CurrentThread->PreviousMode,
             0x65547350u,
             &Object,
             0LL,
             0LL);
  v4 = result;
  if ( result >= 0 )
  {
    if ( Object != CurrentThread )
    {
      v4 = PspTerminateThreadByPointer(Object, (unsigned int)ExitStatus, 0LL);
      ObfDereferenceObjectWithTag(Object, 0x65547350u);
      return v4;
    }
    ObfDereferenceObjectWithTag(Object, 0x65547350u);
    goto LABEL_3;
  }
  return result;
}
