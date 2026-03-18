/*
 * XREFs of NtAlpcDisconnectPort @ 0x140AD44B0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     AlpcpDisconnectPort @ 0x1408EAF48 (AlpcpDisconnectPort.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall NtAlpcDisconnectPort(void *a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  int v4; // ebx
  __int64 v5; // r8
  struct _KLOCK_ENTRIES *v6; // r9
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( (a2 & 0xFFFFFFFE) != 0 )
  {
    v4 = -1073741811;
  }
  else
  {
    Object = 0LL;
    v4 = ObReferenceObjectByHandle(a1, 1u, AlpcPortObjectType, KeGetCurrentThread()->PreviousMode, &Object, 0LL);
    if ( v4 >= 0 )
    {
      v4 = AlpcpDisconnectPort((__int64)Object, a2, v5, v6);
      ObfDereferenceObject(Object);
    }
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v4;
}
