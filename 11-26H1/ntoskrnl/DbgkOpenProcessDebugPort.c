/*
 * XREFs of DbgkOpenProcessDebugPort @ 0x140948E50
 * Callers:
 *     NtQueryInformationProcess @ 0x140A534E0 (NtQueryInformationProcess.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     ObOpenObjectByPointer @ 0x140906B20 (ObOpenObjectByPointer.c)
 *     PsTestProtectedProcessIncompatibility @ 0x140947588 (PsTestProtectedProcessIncompatibility.c)
 */

__int64 __fastcall DbgkOpenProcessDebugPort(__int64 a1, KPROCESSOR_MODE a2, HANDLE *a3)
{
  void *v6; // rdi
  unsigned int v7; // ebx

  if ( !*(_QWORD *)(a1 + 776) )
    return (unsigned int)-1073740973;
  ExAcquireFastMutex((PKGUARDED_MUTEX)&EmpParseLock.ApcStateFill[8]);
  v6 = *(void **)(a1 + 776);
  if ( v6 )
    PsReferenceSiloContext(*(void **)(a1 + 776));
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)&EmpParseLock.ApcStateFill[8]);
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
