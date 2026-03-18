/*
 * XREFs of NtTerminateThread @ 0x1409574F0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1408FA680 (ObpReferenceObjectByHandleWithTag.c)
 *     PspTerminateThreadByPointer @ 0x1409575E0 (PspTerminateThreadByPointer.c)
 */

__int64 __fastcall NtTerminateThread(ULONG_PTR a1, unsigned int a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int v4; // ebx
  __int64 result; // rax
  PVOID Object; // [rsp+50h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  Object = 0LL;
  if ( !a1 )
  {
    if ( LODWORD(CurrentThread->ApcState.Process[1].CpuPartitionList.Blink) == 1 )
      return 3221225691LL;
    goto LABEL_3;
  }
  if ( a1 == -2LL )
  {
LABEL_3:
    LOBYTE(a3) = 1;
    PspTerminateThreadByPointer(CurrentThread, a2, a3);
    return v4;
  }
  result = ObpReferenceObjectByHandleWithTag(
             a1,
             1LL,
             PsThreadType,
             CurrentThread->PreviousMode,
             0x65547350u,
             &Object,
             0LL,
             0LL);
  v4 = result;
  if ( (int)result >= 0 )
  {
    if ( Object != CurrentThread )
    {
      v4 = PspTerminateThreadByPointer(Object, a2, 0LL);
      ObfDereferenceObjectWithTag(Object, 0x65547350u);
      return v4;
    }
    ObfDereferenceObjectWithTag(Object, 0x65547350u);
    goto LABEL_3;
  }
  return result;
}
