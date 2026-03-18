/*
 * XREFs of VfUtilIsSignedDriver @ 0x140604348
 * Callers:
 *     ViMiscEnforceRule @ 0x140B8F4A0 (ViMiscEnforceRule.c)
 * Callees:
 *     VfUtilGetSigningLevel @ 0x140B733E0 (VfUtilGetSigningLevel.c)
 */

bool VfUtilIsSignedDriver()
{
  char SigningLevel; // al

  SigningLevel = VfUtilGetSigningLevel();
  return SigningLevel == 12 || SigningLevel == 8;
}
