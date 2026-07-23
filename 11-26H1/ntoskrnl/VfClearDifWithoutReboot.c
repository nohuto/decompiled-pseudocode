/*
 * XREFs of VfClearDifWithoutReboot @ 0x140C27DCC
 * Callers:
 *     VfVolatileClearDifRuleClass @ 0x14064B544 (VfVolatileClearDifRuleClass.c)
 *     VfVolatileSetDifRuleClass @ 0x14064B744 (VfVolatileSetDifRuleClass.c)
 * Callees:
 *     MmUnlockPagableImageSection @ 0x140368A50 (MmUnlockPagableImageSection.c)
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
