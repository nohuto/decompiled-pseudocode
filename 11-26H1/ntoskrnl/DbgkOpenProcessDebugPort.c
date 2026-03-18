/*
 * XREFs of DbgkOpenProcessDebugPort @ 0x140987150
 * Callers:
 *     NtQueryInformationProcess @ 0x140A4A1F0 (NtQueryInformationProcess.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x140277800 (PsReferenceSiloContext.c)
 *     ExAcquireFastMutex @ 0x140278070 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 *     ObOpenObjectByPointer @ 0x14092AFF0 (ObOpenObjectByPointer.c)
 *     PsTestProtectedProcessIncompatibility @ 0x140985588 (PsTestProtectedProcessIncompatibility.c)
 */

__int64 __fastcall DbgkOpenProcessDebugPort(__int64 a1, KPROCESSOR_MODE a2, HANDLE *a3)
{
  void *v6; // rdi
  unsigned int v7; // ebx

  if ( !*(_QWORD *)(a1 + 776) )
    return (unsigned int)-1073740973;
  ExAcquireFastMutex((PKGUARDED_MUTEX)&EmpParseLock.152);
  v6 = *(void **)(a1 + 776);
  if ( v6 )
    PsReferenceSiloContext(*(void **)(a1 + 776));
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)&EmpParseLock.152);
  if ( v6 )
  {
    if ( PsTestProtectedProcessIncompatibility(a2, (__int64)KeGetCurrentThread()->ApcState.Process, a1) )
      v7 = -1073740014;
    else
      v7 = ObOpenObjectByPointer(v6, a2 == 0 ? 0x200 : 0, 0LL, 0x2000000u, DbgkDebugObjectType, a2, a3);
    ObfDereferenceObject(v6);
  }
  else
  {
    return (unsigned int)-1073740973;
  }
  return v7;
}
