/*
 * XREFs of NtAssignProcessToJobObject @ 0x140AC7800
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14092A610 (ObpReferenceObjectByHandleWithTag.c)
 *     PsAssignProcessToJobObject @ 0x140AC7930 (PsAssignProcessToJobObject.c)
 *     EtwTraceJobAssignProcess @ 0x140AC7F7C (EtwTraceJobAssignProcess.c)
 */

NTSTATUS __cdecl NtAssignProcessToJobObject(HANDLE JobHandle, HANDLE ProcessHandle)
{
  void *v2; // rbx
  KPROCESSOR_MODE PreviousMode; // r15
  int v5; // edi
  int v6; // eax
  PVOID Object; // [rsp+70h] [rbp+18h] BYREF
  __int64 v9; // [rsp+78h] [rbp+20h] BYREF

  v2 = 0LL;
  v9 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object = 0LL;
  v5 = ObReferenceObjectByHandle(JobHandle, 1u, (POBJECT_TYPE)PsJobType, PreviousMode, &Object, 0LL);
  if ( v5 >= 0 )
  {
    if ( ProcessHandle == (HANDLE)-7LL
      || (v6 = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
                 257,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x624A7350u,
                 &v9,
                 0LL,
                 0LL),
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
  return v5;
}
