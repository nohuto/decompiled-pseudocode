/*
 * XREFs of VfUtilIsSignedDriver @ 0x1406443D8
 * Callers:
 *     ViMiscEnforceRule @ 0x140C44440 (ViMiscEnforceRule.c)
 * Callees:
 *     VfUtilGetSigningLevel @ 0x140C278F0 (VfUtilGetSigningLevel.c)
 */

bool VfUtilIsSignedDriver()
{
  char SigningLevel; // al

  SigningLevel = VfUtilGetSigningLevel();
  return SigningLevel == 12 || SigningLevel == 8;
}
