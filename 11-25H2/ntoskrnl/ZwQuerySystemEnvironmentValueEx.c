/*
 * XREFs of ZwQuerySystemEnvironmentValueEx @ 0x14069DEE0
 * Callers:
 *     SepRmVerifyLsaProtectionLevel @ 0x14077F988 (SepRmVerifyLsaProtectionLevel.c)
 *     BiDeleteEfiVariable @ 0x140A25CC8 (BiDeleteEfiVariable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQuerySystemEnvironmentValueEx(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
