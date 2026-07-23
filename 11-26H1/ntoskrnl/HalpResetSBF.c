/*
 * XREFs of HalpResetSBF @ 0x140BEF17C
 * Callers:
 *     HalpEndOfBoot @ 0x14078A1C0 (HalpEndOfBoot.c)
 *     HalpAcpiPostSleep @ 0x140BF2AA0 (HalpAcpiPostSleep.c)
 * Callees:
 *     HalReadBootRegister @ 0x140BF5168 (HalReadBootRegister.c)
 *     HalWriteBootRegister @ 0x140BF51AC (HalWriteBootRegister.c)
 */

void HalpResetSBF()
{
  __int64 v0; // rcx
  char v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( HalpSimpleBootFlagTable )
  {
    if ( !(unsigned int)HalReadBootRegister(&v1) )
    {
      LOBYTE(v0) = v1 & 0xF9;
      HalWriteBootRegister(v0);
    }
  }
}
