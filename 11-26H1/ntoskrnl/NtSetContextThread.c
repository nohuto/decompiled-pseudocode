/*
 * XREFs of NtSetContextThread @ 0x140AF7E80
 * Callers:
 *     DifNtSetContextThreadWrapper @ 0x14068ACF0 (DifNtSetContextThreadWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     IoThreadToProcess @ 0x1404703A0 (IoThreadToProcess.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 *     PspSetContextThreadInternal @ 0x1409EC360 (PspSetContextThreadInternal.c)
 *     PspLogAuditSetContextThreadEvent @ 0x140AF7F70 (PspLogAuditSetContextThreadEvent.c)
 */

__int64 __fastcall NtSetContextThread(void *a1, __int64 a2)
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
  v5 = ObReferenceObjectByHandle(a1, 0x10u, (POBJECT_TYPE)PsThreadType, PreviousMode, &Object, 0LL);
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
      v5 = PspSetContextThreadInternal(v8, a2, PreviousMode, PreviousMode, 1);
    }
    ObfDereferenceObject(v8);
  }
  PspLogAuditSetContextThreadEvent((unsigned int)v5);
  return (unsigned int)v5;
}
