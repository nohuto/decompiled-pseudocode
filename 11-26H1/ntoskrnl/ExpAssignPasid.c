/*
 * XREFs of ExpAssignPasid @ 0x140840E98
 * Callers:
 *     ExpShareAddressSpaceWithDevice @ 0x1406D1A1C (ExpShareAddressSpaceWithDevice.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x140277800 (PsReferenceSiloContext.c)
 *     ExpFreeAsid @ 0x1406D16D4 (ExpFreeAsid.c)
 *     PsUpdateSvmProcessPasidAllThreads @ 0x1407F0584 (PsUpdateSvmProcessPasidAllThreads.c)
 *     ExIsSvmPasidMsrUpdateRequiredForProcess @ 0x140A04188 (ExIsSvmPasidMsrUpdateRequiredForProcess.c)
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
