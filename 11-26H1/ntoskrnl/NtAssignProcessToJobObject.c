/*
 * XREFs of NtAssignProcessToJobObject @ 0x140AC5B90
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1408FA680 (ObpReferenceObjectByHandleWithTag.c)
 *     PsAssignProcessToJobObject @ 0x140AC5CC0 (PsAssignProcessToJobObject.c)
 *     EtwTraceJobAssignProcess @ 0x140AC6388 (EtwTraceJobAssignProcess.c)
 */

__int64 __fastcall NtAssignProcessToJobObject(void *a1, ULONG_PTR a2)
{
  void *v2; // rbx
  KPROCESSOR_MODE PreviousMode; // r15
  NTSTATUS v5; // edi
  int v6; // eax
  PVOID Object; // [rsp+70h] [rbp+18h] BYREF
  __int64 v9; // [rsp+78h] [rbp+20h] BYREF

  v2 = 0LL;
  v9 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object = 0LL;
  v5 = ObReferenceObjectByHandle(a1, 1u, (POBJECT_TYPE)PsJobType, PreviousMode, &Object, 0LL);
  if ( v5 >= 0 )
  {
    if ( a2 == -7LL
      || (v6 = ObpReferenceObjectByHandleWithTag(a2, 257LL, PsProcessType, PreviousMode, 0x624A7350u, &v9, 0LL, 0LL),
          v2 = (void *)v9,
          v5 = v6,
          v6 >= 0) )
    {
      v5 = PsAssignProcessToJobObject(Object, (ULONG_PTR)v2);
    }
  }
  if ( (PerfGlobalGroupMask[0] & 0x80000) != 0 )
    EtwTraceJobAssignProcess(Object, v2, (unsigned int)v5);
  if ( v2 )
    ObfDereferenceObjectWithTag(v2, 0x624A7350u);
  if ( Object )
    ObfDereferenceObject(Object);
  return (unsigned int)v5;
}
