/*
 * XREFs of VfClearDifWithoutReboot @ 0x140C21DBC
 * Callers:
 *     VfVolatileClearDifRuleClass @ 0x140647964 (VfVolatileClearDifRuleClass.c)
 *     VfVolatileSetDifRuleClass @ 0x140647B64 (VfVolatileSetDifRuleClass.c)
 * Callees:
 *     MmUnlockPagableImageSection @ 0x140366CB0 (MmUnlockPagableImageSection.c)
 */

void VfClearDifWithoutReboot()
{
  if ( ViCodeSectionHandle )
  {
    MmUnlockPagableImageSection(ViCodeSectionHandle);
    ViCodeSectionHandle = 0LL;
  }
  if ( ViDataSectionHandle )
  {
    MmUnlockPagableImageSection(ViDataSectionHandle);
    ViDataSectionHandle = 0LL;
  }
  ViVerifierDriverAddedThunkListHead = 0LL;
  *(_OWORD *)&ViVerifierDriverAddedSpecialThunkListHead = 0LL;
  if ( ViFullyInitialized )
  {
    if ( (VfOptionFlags & 0x800) != 0 )
    {
      ViFullyInitialized = 0;
      VfOptionFlags = 0;
    }
  }
}
