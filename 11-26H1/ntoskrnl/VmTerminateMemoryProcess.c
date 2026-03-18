/*
 * XREFs of VmTerminateMemoryProcess @ 0x14081C140
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     PsTerminateMinimalProcess @ 0x1407FA5A8 (PsTerminateMinimalProcess.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall VmTerminateMemoryProcess(void *a1, int a2)
{
  NTSTATUS result; // eax
  __int64 v4; // r8
  struct _KLOCK_ENTRIES *v5; // r9
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF

  Object = 0LL;
  result = ObReferenceObjectByHandle(a1, 0, (POBJECT_TYPE)PsProcessType, 0, &Object, 0LL);
  if ( result >= 0 )
  {
    PsTerminateMinimalProcess((PRKPROCESS)Object, a2, v4, v5);
    ObfDereferenceObject(Object);
    return 0;
  }
  return result;
}
