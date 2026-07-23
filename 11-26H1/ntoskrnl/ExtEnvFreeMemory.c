/*
 * XREFs of ExtEnvFreeMemory @ 0x14059A570
 * Callers:
 *     IommuUnmapDevice @ 0x14059F520 (IommuUnmapDevice.c)
 *     IvtFreeScalableModePasidTables @ 0x1405A8E04 (IvtFreeScalableModePasidTables.c)
 *     IvtSetDeviceSvmCapabilities @ 0x1405AA190 (IvtSetDeviceSvmCapabilities.c)
 *     HsaAllocateRemappingTableEntry @ 0x1405AB470 (HsaAllocateRemappingTableEntry.c)
 *     HsaCreateDevice @ 0x1405ABBA0 (HsaCreateDevice.c)
 *     HsaDeleteDevice @ 0x1405ABC90 (HsaDeleteDevice.c)
 *     HsaFreePasidTables @ 0x1405AC050 (HsaFreePasidTables.c)
 *     HsaFreeRemappingTableEntry @ 0x1405AC180 (HsaFreeRemappingTableEntry.c)
 *     HsaSetDeviceSvmCapabilities @ 0x1405AD0E0 (HsaSetDeviceSvmCapabilities.c)
 *     HalpIvtProcessDrhdEntry @ 0x1405B12F8 (HalpIvtProcessDrhdEntry.c)
 *     IvtAllocateDevice @ 0x1405B1BDC (IvtAllocateDevice.c)
 *     IvtCreateDevice @ 0x1405B1C90 (IvtCreateDevice.c)
 *     IvtDeleteDevice @ 0x1405B1D40 (IvtDeleteDevice.c)
 *     HalpIvtCreateReservedDevice @ 0x1405B1E70 (HalpIvtCreateReservedDevice.c)
 *     DmrFreeRmrrTree @ 0x1405B2B84 (DmrFreeRmrrTree.c)
 * Callees:
 *     HalpMmAllocCtxFree @ 0x14035ADA4 (HalpMmAllocCtxFree.c)
 *     HalpMmIsInsideHalVa @ 0x140580468 (HalpMmIsInsideHalVa.c)
 */

void __fastcall ExtEnvFreeMemory(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // r10
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = a1;
  LOBYTE(v4) = 0;
  if ( (int)HalpMmIsInsideHalVa(a2, (bool *)&v4) >= 0 && !(_BYTE)v4 )
    HalpMmAllocCtxFree(v2, v3);
}
