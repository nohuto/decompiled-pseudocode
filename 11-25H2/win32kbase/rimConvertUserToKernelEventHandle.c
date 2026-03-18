/*
 * XREFs of rimConvertUserToKernelEventHandle @ 0x14003557C
 * Callers:
 *     RIMReadInput @ 0x140034A90 (RIMReadInput.c)
 *     RIMRegisterForInputWithCallbacks @ 0x140154130 (RIMRegisterForInputWithCallbacks.c)
 *     rimObsAddInputObserver @ 0x1401F296C (rimObsAddInputObserver.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall rimConvertUserToKernelEventHandle(void *a1, void **a2)
{
  NTSTATUS v3; // eax
  PVOID v4; // rdi
  NTSTATUS v5; // ebx
  PVOID Object; // [rsp+70h] [rbp+18h] BYREF

  *a2 = 0LL;
  Object = 0LL;
  v3 = ObReferenceObjectByHandle(a1, 0x100000u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
  v4 = Object;
  v5 = v3;
  if ( v3 >= 0 )
  {
    v5 = ObOpenObjectByPointer(Object, 0x200u, 0LL, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 0, a2);
    if ( v5 < 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 904LL);
    ObfDereferenceObject(v4);
  }
  return (unsigned int)v5;
}
