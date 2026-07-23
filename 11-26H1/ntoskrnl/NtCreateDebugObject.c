/*
 * XREFs of NtCreateDebugObject @ 0x14078D140
 * Callers:
 *     DifNtCreateDebugObjectWrapper @ 0x140673CE0 (DifNtCreateDebugObjectWrapper.c)
 * Callees:
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     ObInsertObjectEx @ 0x140906FA0 (ObInsertObjectEx.c)
 *     ObCreateObjectEx @ 0x14092D760 (ObCreateObjectEx.c)
 */

NTSTATUS __cdecl NtCreateDebugObject(
        PHANDLE DebugObjectHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG Flags)
{
  ULONG v4; // r15d
  int v5; // ebx
  PHANDLE v7; // rdi
  char PreviousMode; // si
  NTSTATUS result; // eax
  PRKEVENT v10; // rbx
  bool v11; // r14
  _KPROCESS *Process; // rax
  __int16 v13; // ax
  NTSTATUS v14; // ebx
  void *v15; // [rsp+60h] [rbp-28h] BYREF
  PRKEVENT Event; // [rsp+68h] [rbp-20h]

  v4 = Flags;
  v5 = (int)ObjectAttributes;
  v7 = DebugObjectHandle;
  v15 = 0LL;
  Event = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
    RtlWriteULong64ToUser(DebugObjectHandle, 0LL);
  else
    *DebugObjectHandle = 0LL;
  if ( (v4 & 0xFFFFFFFE) != 0 )
    return -1073741811;
  LOBYTE(Flags) = PreviousMode;
  LOBYTE(DebugObjectHandle) = PreviousMode;
  result = ObCreateObjectEx((_DWORD)DebugObjectHandle, (_DWORD)DbgkDebugObjectType, v5, Flags);
  if ( result >= 0 )
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
    result = ObInsertObjectEx(v10, 0LL, DesiredAccess, 0LL, 0, 0LL, &v15);
    v14 = result;
    if ( result >= 0 )
    {
      if ( PreviousMode )
        RtlWriteULong64ToUser(v7, (__int64)v15);
      else
        *v7 = v15;
      return v14;
    }
  }
  return result;
}
