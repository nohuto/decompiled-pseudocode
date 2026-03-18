/*
 * XREFs of HalpRegisterSecondaryIcInterface @ 0x14058FA8C
 * Callers:
 *     HaliSetSystemInformation @ 0x1407767B4 (HaliSetSystemInformation.c)
 * Callees:
 *     HalpCreateSecondaryIcEntry @ 0x14058F5CC (HalpCreateSecondaryIcEntry.c)
 *     HalpValidateInterface @ 0x1407842D0 (HalpValidateInterface.c)
 */

__int64 HalpRegisterSecondaryIcInterface()
{
  __int64 v0; // r10

  if ( (unsigned __int8)HalpValidateInterface() )
    return HalpCreateSecondaryIcEntry(v0);
  else
    return 3221225485LL;
}
