/*
 * XREFs of HalpAcpiGetFacsMapping @ 0x14057978C
 * Callers:
 *     HalAcpiGetFacsMappingDispatch @ 0x140579340 (HalAcpiGetFacsMappingDispatch.c)
 *     HaliInitPowerManagement @ 0x140785870 (HaliInitPowerManagement.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140278070 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 *     HalpAcpiGetTableWork @ 0x140342B6C (HalpAcpiGetTableWork.c)
 *     HalpAcpiCheckAndMapTable @ 0x140343370 (HalpAcpiCheckAndMapTable.c)
 *     DbgPrint @ 0x140396F60 (DbgPrint.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

__int64 __fastcall HalpAcpiGetFacsMapping(__int64 a1)
{
  __int64 TableWork; // rax
  int v3; // [rsp+50h] [rbp+8h] BYREF
  int v4; // [rsp+54h] [rbp+Ch]

  v4 = HIDWORD(a1);
  v3 = 0;
  ExAcquireFastMutex(&HalpAcpiTableCacheLock);
  if ( !HalpAcpiFacsMapping )
  {
    TableWork = HalpAcpiGetTableWork(0LL, 0x50434146u, 0LL, 0LL);
    if ( !TableWork )
    {
      DbgPrint("**** HalpAcpiGetFacsMapping: No FADT found.\n");
      KeBugCheckEx(0xA5u, 0x10009uLL, 0LL, 0LL, 0LL);
    }
    HalpAcpiFacsMapping = HalpAcpiCheckAndMapTable(
                            0LL,
                            *(unsigned int *)(TableWork + 36),
                            0x21u,
                            1396916550,
                            0LL,
                            0LL,
                            0,
                            &v3);
  }
  KeReleaseGuardedMutex(&HalpAcpiTableCacheLock);
  return HalpAcpiFacsMapping;
}
