/*
 * XREFs of NtSetContextThread @ 0x140AFA520
 * Callers:
 *     DifNtSetContextThreadWrapper @ 0x14068E8D0 (DifNtSetContextThreadWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     IoThreadToProcess @ 0x140469B20 (IoThreadToProcess.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     PspSetContextThreadInternal @ 0x1409E8B30 (PspSetContextThreadInternal.c)
 *     PspLogAuditSetContextThreadEvent @ 0x140AFA610 (PspLogAuditSetContextThreadEvent.c)
 */

NTSTATUS __cdecl NtSetContextThread(HANDLE ThreadHandle, PCONTEXT ThreadContext)
{
  struct _KTHREAD *CurrentThread; // rdi
  KPROCESSOR_MODE PreviousMode; // si
  int v5; // ebx
  PEPROCESS v7; // rax
  struct _KTHREAD *v8; // rdi
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  Object = 0LL;
  PreviousMode = CurrentThread->PreviousMode;
  v5 = ObReferenceObjectByHandle(ThreadHandle, 0x10u, (POBJECT_TYPE)PsThreadType, PreviousMode, &Object, 0LL);
  if ( v5 >= 0 )
  {
    v7 = IoThreadToProcess(CurrentThread);
    v8 = (struct _KTHREAD *)Object;
    if ( (v7[1].DirectoryTableBase & 0x20000) != 0 && v7 == IoThreadToProcess((PETHREAD)Object) )
    {
      v5 = -1073740278;
    }
    else if ( (v8->MiscFlags & 0x400) != 0 || *(_QWORD *)&v8[1].WaitBlockFill11[112] )
    {
      v5 = -1073741816;
    }
    else
    {
      v5 = PspSetContextThreadInternal(v8, ThreadContext, PreviousMode, PreviousMode, 1);
    }
    ObfDereferenceObject(v8);
  }
  PspLogAuditSetContextThreadEvent((unsigned int)v5);
  return v5;
}
