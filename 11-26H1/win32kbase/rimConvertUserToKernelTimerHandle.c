/*
 * XREFs of rimConvertUserToKernelTimerHandle @ 0x14005DAAC
 * Callers:
 *     RIMRegisterForInputWithCallbacks @ 0x14005C740 (RIMRegisterForInputWithCallbacks.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall rimConvertUserToKernelTimerHandle(void *a1, void **a2)
{
  NTSTATUS v3; // eax
  PVOID v4; // rdi
  NTSTATUS v5; // ebx
  PVOID Object; // [rsp+70h] [rbp+18h] BYREF

  *a2 = 0LL;
  Object = 0LL;
  v3 = ObReferenceObjectByHandle(a1, 2u, ExTimerObjectType, 1, &Object, 0LL);
  v4 = Object;
  v5 = v3;
  if ( v3 < 0 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 936LL);
  }
  else
  {
    v5 = ObOpenObjectByPointer(Object, 0x200u, 0LL, 2u, ExTimerObjectType, 0, a2);
    if ( v5 < 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 948LL);
    ObfDereferenceObject(v4);
  }
  return (unsigned int)v5;
}
