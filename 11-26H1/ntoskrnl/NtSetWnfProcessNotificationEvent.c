/*
 * XREFs of NtSetWnfProcessNotificationEvent @ 0x140ABC3F0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     ExpWnfCreateProcessContext @ 0x140ABC4C4 (ExpWnfCreateProcessContext.c)
 */

NTSTATUS __cdecl NtSetWnfProcessNotificationEvent(HANDLE NotificationEvent)
{
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // rcx
  volatile signed __int64 *v4; // rdi
  int v5; // ebx
  PVOID v6; // rcx
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  Process = KeGetCurrentThread()->ApcState.Process;
  v4 = *(volatile signed __int64 **)&Process[3].BasePriority;
  Object = (PVOID)v4;
  if ( !v4 )
  {
    v5 = ExpWnfCreateProcessContext(Process, &Object);
    if ( v5 < 0 )
      goto LABEL_5;
    v4 = (volatile signed __int64 *)Object;
  }
  Object = 0LL;
  v5 = ObReferenceObjectByHandle(NotificationEvent, 2u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
  if ( v5 >= 0 )
  {
    v6 = Object;
    if ( _InterlockedCompareExchange64(v4 + 16, (signed __int64)Object, 0LL) )
    {
      ObfDereferenceObject(v6);
      v5 = -1073740008;
    }
    else
    {
      v5 = 0;
    }
  }
LABEL_5:
  KeLeaveCriticalRegion();
  return v5;
}
