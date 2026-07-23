/*
 * XREFs of HalpAcpiGetFacsMapping @ 0x14057BCBC
 * Callers:
 *     HalAcpiGetFacsMappingDispatch @ 0x14057B870 (HalAcpiGetFacsMappingDispatch.c)
 *     HaliInitPowerManagement @ 0x1407883A0 (HaliInitPowerManagement.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     HalpAcpiGetTableWork @ 0x140344BEC (HalpAcpiGetTableWork.c)
 *     HalpAcpiCheckAndMapTable @ 0x1403453F0 (HalpAcpiCheckAndMapTable.c)
 *     DbgPrint @ 0x140398CE0 (DbgPrint.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
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
