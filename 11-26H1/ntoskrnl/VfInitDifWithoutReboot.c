/*
 * XREFs of VfInitDifWithoutReboot @ 0x140C21E44
 * Callers:
 *     VfVolatileSetDifRuleClass @ 0x140647B64 (VfVolatileSetDifRuleClass.c)
 * Callees:
 *     MmLockPagableDataSection @ 0x140ABB180 (MmLockPagableDataSection.c)
 */

__int64 VfInitDifWithoutReboot()
{
  if ( ViFullyInitialized )
    return 3221228670LL;
  ViCodeSectionHandle = MmLockPagableDataSection(VfInitVerifierComponents);
  ViDataSectionHandle = MmLockPagableDataSection(&ViLoadedDriversCount);
  *((_QWORD *)&ViVerifierDriverAddedThunkListHead + 1) = &ViVerifierDriverAddedThunkListHead;
  *(_QWORD *)&ViVerifierDriverAddedThunkListHead = &ViVerifierDriverAddedThunkListHead;
  *(&ViVerifierDriverAddedSpecialThunkListHead + 1) = &ViVerifierDriverAddedSpecialThunkListHead;
  ViVerifierDriverAddedSpecialThunkListHead = &ViVerifierDriverAddedSpecialThunkListHead;
  return 0LL;
}
