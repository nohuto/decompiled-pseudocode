/*
 * XREFs of NtRegisterThreadTerminatePort @ 0x140B009C0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

NTSTATUS __cdecl NtRegisterThreadTerminatePort(HANDLE PortHandle)
{
  struct _KTHREAD *CurrentThread; // rbx
  NTSTATUS result; // eax
  void **Pool2; // rax
  void **v4; // rcx
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  Object = 0LL;
  result = ObReferenceObjectByHandle(PortHandle, 1u, LpcPortObjectType, CurrentThread->PreviousMode, &Object, 0LL);
  if ( result >= 0 )
  {
    Pool2 = (void **)ExAllocatePool2(0x101uLL);
    v4 = Pool2;
    if ( Pool2 )
    {
      Pool2[1] = Object;
      *Pool2 = CurrentThread[1].InitialStack;
      result = 0;
      CurrentThread[1].InitialStack = v4;
    }
    else
    {
      ObfDereferenceObject(Object);
      return -1073741670;
    }
  }
  return result;
}
