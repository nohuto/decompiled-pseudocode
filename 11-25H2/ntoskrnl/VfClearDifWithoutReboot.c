/*
 * XREFs of VfClearDifWithoutReboot @ 0x140B738B0
 * Callers:
 *     VfVolatileClearDifRuleClass @ 0x140608910 (VfVolatileClearDifRuleClass.c)
 *     VfVolatileSetDifRuleClass @ 0x140608AD4 (VfVolatileSetDifRuleClass.c)
 * Callees:
 *     MmUnlockPagableImageSection @ 0x14036DFD0 (MmUnlockPagableImageSection.c)
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
