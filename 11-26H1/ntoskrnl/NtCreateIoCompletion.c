/*
 * XREFs of NtCreateIoCompletion @ 0x140AD1330
 * Callers:
 *     DifNtCreateIoCompletionWrapper @ 0x140674BF0 (DifNtCreateIoCompletionWrapper.c)
 * Callees:
 *     KeInitializeQueue @ 0x1404C58F0 (KeInitializeQueue.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     ObInsertObjectEx @ 0x140906FA0 (ObInsertObjectEx.c)
 *     ObCreateObjectEx @ 0x14092D760 (ObCreateObjectEx.c)
 */

NTSTATUS __cdecl NtCreateIoCompletion(
        PHANDLE IoCompletionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG Count)
{
  char PreviousMode; // si
  NTSTATUS inserted; // ebx
  PRKQUEUE v10; // rbx
  __int64 ULong64FromUser; // rax
  __int64 v13; // [rsp+20h] [rbp-58h]
  PRKQUEUE Queue; // [rsp+60h] [rbp-18h] BYREF
  void *v15; // [rsp+68h] [rbp-10h] BYREF

  v15 = 0LL;
  Queue = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ULong64FromUser = RtlReadULong64FromUser(IoCompletionHandle);
    RtlWriteULong64ToUser(IoCompletionHandle, ULong64FromUser);
  }
  inserted = ObCreateObjectEx(
               PreviousMode,
               IoCompletionObjectType,
               (__int64)ObjectAttributes,
               PreviousMode,
               v13,
               80,
               0,
               0,
               &Queue,
               0LL);
  if ( inserted >= 0 )
  {
    v10 = Queue;
    KeInitializeQueue(Queue, Count);
    *(_QWORD *)&v10[1].Header.Lock = 0LL;
    LOBYTE(v10[1].Header.WaitListHead.Flink) = 0;
    inserted = ObInsertObjectEx((char *)v10, 0LL, DesiredAccess, 0, 0, 0LL, &v15);
    LODWORD(Queue) = inserted;
    if ( inserted >= 0 )
    {
      if ( PreviousMode )
        RtlWriteULong64ToUser(IoCompletionHandle, (__int64)v15);
      else
        *IoCompletionHandle = v15;
    }
  }
  return inserted;
}
