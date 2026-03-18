/*
 * XREFs of PspCriticalProcessDeathBlamedThreadTryGet @ 0x1407FAA68
 * Callers:
 *     PspCatchCriticalBreak @ 0x1407FA818 (PspCatchCriticalBreak.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140216B70 (PsGetServerSiloGlobals.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectByPointerWithTag @ 0x14043DAF0 (ObReferenceObjectByPointerWithTag.c)
 *     IoThreadToProcess @ 0x1404703A0 (IoThreadToProcess.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     PsLookupThreadByThreadId @ 0x140A10B70 (PsLookupThreadByThreadId.c)
 */

__int64 __fastcall PspCriticalProcessDeathBlamedThreadTryGet(__int64 a1, PETHREAD *a2)
{
  char *ServerSiloGlobals; // rax
  NTSTATUS v5; // eax
  PETHREAD CurrentThread; // rbx
  unsigned int v7; // edi
  PEPROCESS v8; // rax
  PETHREAD Thread; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v11[48]; // [rsp+40h] [rbp-68h] BYREF
  struct _LIST_ENTRY *v12; // [rsp+70h] [rbp-38h]
  __int64 v13; // [rsp+78h] [rbp-30h]
  HANDLE ThreadId; // [rsp+80h] [rbp-28h]

  memset_0(v11, 0, 0x48uLL);
  ServerSiloGlobals = (char *)PsGetServerSiloGlobals(a1);
  RtlCopyVolatileMemory(v11, ServerSiloGlobals + 1368, 0x48uLL);
  Thread = 0LL;
  if ( v13 && v12 && ThreadId )
  {
    v5 = PsLookupThreadByThreadId(ThreadId, &Thread);
    CurrentThread = Thread;
    if ( v5 < 0 )
    {
      v7 = 2;
      goto LABEL_15;
    }
    v8 = IoThreadToProcess(Thread);
    if ( v8[3].CycleTime != v13 || v8[1].Header.WaitListHead.Flink != v12 )
    {
      v7 = 1;
      goto LABEL_15;
    }
    if ( (HIDWORD(v8[1].DirectoryTableBase) & 0x2008) != 0x2008 )
    {
      v7 = 3;
      goto LABEL_15;
    }
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    ObReferenceObjectByPointerWithTag(CurrentThread, 0x1FFFFFu, (POBJECT_TYPE)PsThreadType, 0, 0x644D7350u);
  }
  if ( IoThreadToProcess(CurrentThread)[1].ReadyTime )
  {
    v7 = 7;
  }
  else
  {
    v7 = 0;
    *a2 = CurrentThread;
    CurrentThread = 0LL;
  }
LABEL_15:
  if ( CurrentThread )
    ObfDereferenceObjectWithTag(CurrentThread, 0x644D7350u);
  return v7;
}
