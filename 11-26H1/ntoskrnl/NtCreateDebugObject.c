/*
 * XREFs of NtCreateDebugObject @ 0x14078A610
 * Callers:
 *     DifNtCreateDebugObjectWrapper @ 0x140670100 (DifNtCreateDebugObjectWrapper.c)
 * Callees:
 *     KeInitializeEvent @ 0x140466F30 (KeInitializeEvent.c)
 *     RtlWriteULong64ToUser @ 0x14077F758 (RtlWriteULong64ToUser.c)
 *     ObCreateObjectEx @ 0x1408FD7D0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x14092B470 (ObInsertObjectEx.c)
 */

__int64 __fastcall NtCreateDebugObject(_QWORD *a1, unsigned int a2, int a3, int a4)
{
  int v4; // r15d
  _QWORD *v7; // rdi
  char PreviousMode; // si
  __int64 result; // rax
  PRKEVENT v10; // rbx
  bool v11; // r14
  _KPROCESS *Process; // rax
  __int16 v13; // ax
  unsigned int v14; // ebx
  __int64 v15; // [rsp+60h] [rbp-28h] BYREF
  PRKEVENT Event; // [rsp+68h] [rbp-20h]

  v4 = a4;
  v7 = a1;
  v15 = 0LL;
  Event = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
    RtlWriteULong64ToUser(a1, 0LL);
  else
    *a1 = 0LL;
  if ( (v4 & 0xFFFFFFFE) != 0 )
    return 3221225485LL;
  LOBYTE(a4) = PreviousMode;
  LOBYTE(a1) = PreviousMode;
  result = ObCreateObjectEx((_DWORD)a1, (_DWORD)DbgkDebugObjectType, a3, a4);
  if ( (int)result >= 0 )
  {
    v10 = Event;
    v11 = 1;
    Event[1].Header.LockNV = 1;
    v10[1].Header.WaitListHead.Flink = 0LL;
    LODWORD(v10[1].Header.WaitListHead.Blink) = 0;
    KeInitializeEvent(v10 + 2, SynchronizationEvent, 0);
    v10[3].Header.WaitListHead.Blink = &v10[3].Header.WaitListHead;
    v10[3].Header.WaitListHead.Flink = &v10[3].Header.WaitListHead;
    KeInitializeEvent(v10, NotificationEvent, 0);
    v10[4].Header.LockNV = 2 * (v4 & 1);
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( Process[1].ReadyTime )
    {
      v13 = WORD2(Process[3].PerProcessorCycleTimes);
      if ( v13 != 332 )
        v11 = v13 == 452;
      if ( v11 )
        v10[4].Header.LockNV |= 4u;
    }
    result = ObInsertObjectEx(v10, 0LL, a2, 0LL, 0, 0LL, &v15);
    v14 = result;
    if ( (int)result >= 0 )
    {
      if ( PreviousMode )
        RtlWriteULong64ToUser(v7, v15);
      else
        *v7 = v15;
      return v14;
    }
  }
  return result;
}
