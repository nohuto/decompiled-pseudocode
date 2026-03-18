/*
 * XREFs of HalpGetDisplayBiosInformation @ 0x140578820
 * Callers:
 *     HaliQuerySystemInformation @ 0x140BED8E0 (HaliQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 HalpGetDisplayBiosInformation()
{
  return 2 - (unsigned int)(HalpVideoBiosPresent != 0);
}
