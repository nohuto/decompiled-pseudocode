/*
 * XREFs of HalpRegisterSecondaryIcInterface @ 0x14059220C
 * Callers:
 *     HaliSetSystemInformation @ 0x14077965C (HaliSetSystemInformation.c)
 * Callees:
 *     HalpCreateSecondaryIcEntry @ 0x140591D4C (HalpCreateSecondaryIcEntry.c)
 *     HalpValidateInterface @ 0x140786E04 (HalpValidateInterface.c)
 */

__int64 HalpRegisterSecondaryIcInterface()
{
  __int64 v0; // r10

  if ( (unsigned __int8)HalpValidateInterface() )
    return HalpCreateSecondaryIcEntry(v0);
  else
    return 3221225485LL;
}
