/*
 * XREFs of ExtEnvFreeMemory @ 0x140597DF0
 * Callers:
 *     IommuUnmapDevice @ 0x14059CDA0 (IommuUnmapDevice.c)
 *     IvtFreeScalableModePasidTables @ 0x1405A65F4 (IvtFreeScalableModePasidTables.c)
 *     IvtSetDeviceSvmCapabilities @ 0x1405A7980 (IvtSetDeviceSvmCapabilities.c)
 *     HsaAllocateRemappingTableEntry @ 0x1405A8C60 (HsaAllocateRemappingTableEntry.c)
 *     HsaCreateDevice @ 0x1405A9390 (HsaCreateDevice.c)
 *     HsaDeleteDevice @ 0x1405A9480 (HsaDeleteDevice.c)
 *     HsaFreePasidTables @ 0x1405A9840 (HsaFreePasidTables.c)
 *     HsaFreeRemappingTableEntry @ 0x1405A9970 (HsaFreeRemappingTableEntry.c)
 *     HsaSetDeviceSvmCapabilities @ 0x1405AA8D0 (HsaSetDeviceSvmCapabilities.c)
 *     HalpIvtProcessDrhdEntry @ 0x1405AEAE8 (HalpIvtProcessDrhdEntry.c)
 *     IvtAllocateDevice @ 0x1405AF3CC (IvtAllocateDevice.c)
 *     IvtCreateDevice @ 0x1405AF480 (IvtCreateDevice.c)
 *     IvtDeleteDevice @ 0x1405AF530 (IvtDeleteDevice.c)
 *     HalpIvtCreateReservedDevice @ 0x1405AF660 (HalpIvtCreateReservedDevice.c)
 *     DmrFreeRmrrTree @ 0x1405B0374 (DmrFreeRmrrTree.c)
 * Callees:
 *     HalpMmAllocCtxFree @ 0x140359004 (HalpMmAllocCtxFree.c)
 *     HalpMmIsInsideHalVa @ 0x14057DF48 (HalpMmIsInsideHalVa.c)
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
