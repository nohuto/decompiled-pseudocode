/*
 * XREFs of NtAlpcDisconnectPort @ 0x140AD1910
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     AlpcpDisconnectPort @ 0x1408F1508 (AlpcpDisconnectPort.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtAlpcDisconnectPort(HANDLE PortHandle, ULONG Flags)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v4; // ebx
  __int64 v5; // r8
  struct _KLOCK_ENTRIES *v6; // r9
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( (Flags & 0xFFFFFFFE) != 0 )
  {
    v4 = -1073741811;
  }
  else
  {
    Object = 0LL;
    v4 = ObReferenceObjectByHandle(PortHandle, 1u, AlpcPortObjectType, KeGetCurrentThread()->PreviousMode, &Object, 0LL);
    if ( v4 >= 0 )
    {
      v4 = AlpcpDisconnectPort((__int64)Object, Flags, v5, v6);
      ObfDereferenceObject(Object);
    }
  }
  KeLeaveCriticalRegion();
  return v4;
}
