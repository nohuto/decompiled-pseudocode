/*
 * XREFs of HalpBlkInitializeVirtualAddressSpace @ 0x140CB2FF8
 * Callers:
 *     HalpBlkInitSystem @ 0x140CB4528 (HalpBlkInitSystem.c)
 * Callees:
 *     HalpUnmapVirtualAddress @ 0x140509DE0 (HalpUnmapVirtualAddress.c)
 *     HalpBlkAddVirtualMapping @ 0x140CB2B28 (HalpBlkAddVirtualMapping.c)
 *     HalpBlkAllocateShadowCode @ 0x140CB2E08 (HalpBlkAllocateShadowCode.c)
 *     HalpBlkAllocateShadowData @ 0x140CB2EDC (HalpBlkAllocateShadowData.c)
 *     HalpBlkInitializePageTables @ 0x140CB2F6C (HalpBlkInitializePageTables.c)
 */

__int64 HalpBlkInitializeVirtualAddressSpace()
{
  int ShadowCode; // ebx

  ShadowCode = HalpBlkInitializePageTables();
  if ( ShadowCode >= 0 )
  {
    ShadowCode = HalpBlkAllocateShadowCode();
    if ( ShadowCode >= 0 )
    {
      ShadowCode = HalpBlkAllocateShadowData();
      if ( ShadowCode >= 0 )
      {
        ShadowCode = 0;
        if ( !HalpApicX2Mode && !HalpApicUsingMsrs )
        {
          if ( !HalpLocalApic )
          {
            ShadowCode = -1073741810;
            goto LABEL_12;
          }
          ShadowCode = HalpBlkAddVirtualMapping(
                         HalpBlkRootPageTablePa,
                         HalpLocalApicPhysical.QuadPart,
                         HalpLocalApic,
                         0,
                         4);
        }
        if ( ShadowCode >= 0 )
        {
          ShadowCode = HalpBlkAddVirtualMapping(
                         HalpBlkRootPageTablePa,
                         *(__int64 *)HalpDeviceBlockUnblockPushLock.PriorityFloorCounts,
                         *(unsigned __int64 *)&HalpDeviceBlockUnblockPushLock.PriorityFloorCounts[8],
                         1,
                         4);
          if ( ShadowCode >= 0 )
            ShadowCode = HalpBlkAddVirtualMapping(
                           HalpBlkTiledMemoryMapPa,
                           *(__int64 *)HalpDeviceBlockUnblockPushLock.PriorityFloorCounts,
                           *(unsigned __int64 *)HalpDeviceBlockUnblockPushLock.PriorityFloorCounts,
                           1,
                           64);
        }
      }
    }
  }
LABEL_12:
  if ( HalpBlkPageTableVaWindow )
  {
    HalpUnmapVirtualAddress(HalpBlkPageTableVaWindow, 1LL, 1);
    HalpBlkPageTableVaWindow = 0LL;
  }
  return (unsigned int)ShadowCode;
}
