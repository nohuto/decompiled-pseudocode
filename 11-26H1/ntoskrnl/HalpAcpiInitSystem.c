/*
 * XREFs of HalpAcpiInitSystem @ 0x140BF1270
 * Callers:
 *     <none>
 * Callees:
 *     HalpNumaSwapP0NodeToFront @ 0x140594ED0 (HalpNumaSwapP0NodeToFront.c)
 *     HalpAcpiPrmCacheInit @ 0x140CB3914 (HalpAcpiPrmCacheInit.c)
 *     HalpAcpiPrmFwBufferInit @ 0x140CB3BD4 (HalpAcpiPrmFwBufferInit.c)
 *     HalpAcpiDetectPiix4 @ 0x140CB52E4 (HalpAcpiDetectPiix4.c)
 *     HalpAcpiInitDiscard @ 0x140CB5358 (HalpAcpiInitDiscard.c)
 *     HalpAcpiPopulateTableCache @ 0x140CB538C (HalpAcpiPopulateTableCache.c)
 *     HalpAuditAcpiTables @ 0x140CB9EA0 (HalpAuditAcpiTables.c)
 */

__int64 __fastcall HalpAcpiInitSystem(int a1, __int64 a2, void *a3)
{
  unsigned int v3; // ebx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  __int64 result; // rax

  v3 = 0;
  v5 = a1 - 7;
  if ( !v5 )
  {
    HalpDeviceBlockUnblockPushLock.WaitBlock[0].Object = a3;
    HalpAcpiInitDiscard(a3);
    HalpAcpiPrmFwBufferInit(a3);
    return v3;
  }
  v6 = v5 - 5;
  if ( !v6 )
  {
    HalpNumaSwapP0NodeToFront();
    return v3;
  }
  v7 = v6 - 5;
  if ( !v7 )
  {
    HalpAuditAcpiTables(a3);
    return v3;
  }
  v8 = v7 - 6;
  if ( !v8 )
  {
    result = HalpAcpiPrmCacheInit();
    if ( (int)result < 0 )
      return result;
    return (unsigned int)HalpAcpiPopulateTableCache();
  }
  v9 = v8 - 1;
  if ( v9 )
  {
    if ( v9 == 4 )
      return (unsigned int)HalpAcpiDetectPiix4();
  }
  else
  {
    HalpDeviceBlockUnblockPushLock.WaitBlock[0].Object = 0LL;
  }
  return v3;
}
