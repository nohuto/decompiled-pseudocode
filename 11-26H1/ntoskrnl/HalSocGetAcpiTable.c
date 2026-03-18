/*
 * XREFs of HalSocGetAcpiTable @ 0x140598054
 * Callers:
 *     HalpWdatDiscover @ 0x1405974A4 (HalpWdatDiscover.c)
 *     HalpWdatInitialize @ 0x1405978A0 (HalpWdatInitialize.c)
 *     HalpPmTimerDiscover @ 0x140598580 (HalpPmTimerDiscover.c)
 *     HalpHpetDiscover @ 0x140598928 (HalpHpetDiscover.c)
 *     HalpApicTimerDiscover @ 0x140598E58 (HalpApicTimerDiscover.c)
 *     HalpIommuRegisterBuiltinPlugins @ 0x14059FF48 (HalpIommuRegisterBuiltinPlugins.c)
 *     HalpApicDiscover @ 0x1405A13D4 (HalpApicDiscover.c)
 *     HalpPicDiscover @ 0x1405A2174 (HalpPicDiscover.c)
 *     HalpPciGetHpetInterruptSource @ 0x140CB52C0 (HalpPciGetHpetInterruptSource.c)
 * Callees:
 *     HalpAcpiGetTable @ 0x140342AEC (HalpAcpiGetTable.c)
 */

__int64 __fastcall HalSocGetAcpiTable(int a1)
{
  if ( HalpTimerLoaderBlock || HalpPrebootMode )
    return HalpAcpiGetTable(HalpTimerLoaderBlock, a1, 0, 0);
  else
    return 0LL;
}
