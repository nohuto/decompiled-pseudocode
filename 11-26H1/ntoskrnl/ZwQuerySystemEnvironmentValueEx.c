/*
 * XREFs of ZwQuerySystemEnvironmentValueEx @ 0x1407261B0
 * Callers:
 *     DifZwQuerySystemEnvironmentValueExWrapper @ 0x1406B4190 (DifZwQuerySystemEnvironmentValueExWrapper.c)
 *     SepRmVerifyLsaProtectionLevel @ 0x14080FFC8 (SepRmVerifyLsaProtectionLevel.c)
 *     BiDeleteEfiVariable @ 0x1409D1B5C (BiDeleteEfiVariable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQuerySystemEnvironmentValueEx(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
