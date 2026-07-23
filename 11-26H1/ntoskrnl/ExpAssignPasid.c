/*
 * XREFs of ExpAssignPasid @ 0x1408470D8
 * Callers:
 *     ExpShareAddressSpaceWithDevice @ 0x1406D5A4C (ExpShareAddressSpaceWithDevice.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     ExpFreeAsid @ 0x1406D5704 (ExpFreeAsid.c)
 *     PsUpdateSvmProcessPasidAllThreads @ 0x1407F60E4 (PsUpdateSvmProcessPasidAllThreads.c)
 *     ExIsSvmPasidMsrUpdateRequiredForProcess @ 0x140A7BF00 (ExIsSvmPasidMsrUpdateRequiredForProcess.c)
 */

__int64 __fastcall ExpAssignPasid(volatile signed __int32 *Object, signed __int32 a2)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  struct _KLOCK_ENTRIES *v8; // r9

  PsReferenceSiloContext((void *)Object);
  if ( _InterlockedCompareExchange(Object + 384, a2, 0) )
  {
    ExpFreeAsid(a2 - 1, (void *)Object);
    ObfDereferenceObject((PVOID)Object);
    return 0LL;
  }
  else
  {
    if ( (unsigned __int8)ExIsSvmPasidMsrUpdateRequiredForProcess(Object) )
      PsUpdateSvmProcessPasidAllThreads(v6, v5, v7, v8);
    return 1LL;
  }
}
