/*
 * XREFs of HalSocGetAcpiTable @ 0x14059A7D4
 * Callers:
 *     HalpWdatDiscover @ 0x140599C24 (HalpWdatDiscover.c)
 *     HalpWdatInitialize @ 0x14059A020 (HalpWdatInitialize.c)
 *     HalpPmTimerDiscover @ 0x14059AD00 (HalpPmTimerDiscover.c)
 *     HalpHpetDiscover @ 0x14059B0A8 (HalpHpetDiscover.c)
 *     HalpApicTimerDiscover @ 0x14059B5D8 (HalpApicTimerDiscover.c)
 *     HalpIommuRegisterBuiltinPlugins @ 0x1405A2738 (HalpIommuRegisterBuiltinPlugins.c)
 *     HalpApicDiscover @ 0x1405A3BE4 (HalpApicDiscover.c)
 *     HalpPicDiscover @ 0x1405A4984 (HalpPicDiscover.c)
 *     HalpPciGetHpetInterruptSource @ 0x140CBB300 (HalpPciGetHpetInterruptSource.c)
 * Callees:
 *     HalpAcpiGetTable @ 0x140344B6C (HalpAcpiGetTable.c)
 */

__int64 __fastcall HalSocGetAcpiTable(int a1)
{
  if ( HalpTimerLoaderBlock || HalpPrebootMode )
    return HalpAcpiGetTable(HalpTimerLoaderBlock, a1, 0, 0);
  else
    return 0LL;
}
