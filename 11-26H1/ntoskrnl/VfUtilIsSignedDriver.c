/*
 * XREFs of VfUtilIsSignedDriver @ 0x1406407F8
 * Callers:
 *     ViMiscEnforceRule @ 0x140C3E430 (ViMiscEnforceRule.c)
 * Callees:
 *     VfUtilGetSigningLevel @ 0x140C218E0 (VfUtilGetSigningLevel.c)
 */

bool VfUtilIsSignedDriver()
{
  char SigningLevel; // al

  SigningLevel = VfUtilGetSigningLevel();
  return SigningLevel == 12 || SigningLevel == 8;
}
