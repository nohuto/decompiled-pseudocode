/*
 * XREFs of NtCreateIoCompletion @ 0x140ACF000
 * Callers:
 *     DifNtCreateIoCompletionWrapper @ 0x140671010 (DifNtCreateIoCompletionWrapper.c)
 * Callees:
 *     KeInitializeQueue @ 0x1404CBEC0 (KeInitializeQueue.c)
 *     RtlReadULong64FromUser @ 0x14077F554 (RtlReadULong64FromUser.c)
 *     RtlWriteULong64ToUser @ 0x14077F758 (RtlWriteULong64ToUser.c)
 *     ObCreateObjectEx @ 0x1408FD7D0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x14092B470 (ObInsertObjectEx.c)
 */

__int64 __fastcall NtCreateIoCompletion(_QWORD *a1, unsigned int a2, __int64 a3, ULONG a4)
{
  char PreviousMode; // si
  int inserted; // ebx
  PRKQUEUE v10; // rbx
  __int64 ULong64FromUser; // rax
  __int64 v13; // [rsp+20h] [rbp-58h]
  PRKQUEUE Queue; // [rsp+60h] [rbp-18h] BYREF
  __int64 v15; // [rsp+68h] [rbp-10h] BYREF

  v15 = 0LL;
  Queue = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ULong64FromUser = RtlReadULong64FromUser(a1);
    RtlWriteULong64ToUser(a1, ULong64FromUser);
  }
  inserted = ObCreateObjectEx(PreviousMode, IoCompletionObjectType, a3, PreviousMode, v13, 80, 0, 0, &Queue, 0LL);
  if ( inserted >= 0 )
  {
    v10 = Queue;
    KeInitializeQueue(Queue, a4);
    *(_QWORD *)&v10[1].Header.Lock = 0LL;
    LOBYTE(v10[1].Header.WaitListHead.Flink) = 0;
    inserted = ObInsertObjectEx((char *)v10, 0LL, a2, 0, 0, 0LL, &v15);
    LODWORD(Queue) = inserted;
    if ( inserted >= 0 )
    {
      if ( PreviousMode )
        RtlWriteULong64ToUser(a1, v15);
      else
        *a1 = v15;
    }
  }
  return (unsigned int)inserted;
}
