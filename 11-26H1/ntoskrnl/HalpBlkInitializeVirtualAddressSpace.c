/*
 * XREFs of HalpBlkInitializeVirtualAddressSpace @ 0x140CB9038
 * Callers:
 *     HalpBlkInitSystem @ 0x140CBA568 (HalpBlkInitSystem.c)
 * Callees:
 *     HalpUnmapVirtualAddress @ 0x140503890 (HalpUnmapVirtualAddress.c)
 *     HalpBlkAddVirtualMapping @ 0x140CB8B68 (HalpBlkAddVirtualMapping.c)
 *     HalpBlkAllocateShadowCode @ 0x140CB8E48 (HalpBlkAllocateShadowCode.c)
 *     HalpBlkAllocateShadowData @ 0x140CB8F1C (HalpBlkAllocateShadowData.c)
 *     HalpBlkInitializePageTables @ 0x140CB8FAC (HalpBlkInitializePageTables.c)
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
                         *(__int64 *)&HalpDeviceBlockUnblockPushLock.AbWaitEntryCount,
                         (unsigned __int64)HalpDeviceBlockUnblockPushLock.SchedulerSharedSystemSlot,
                         1,
                         4);
          if ( ShadowCode >= 0 )
            ShadowCode = HalpBlkAddVirtualMapping(
                           HalpBlkTiledMemoryMapPa,
                           *(__int64 *)&HalpDeviceBlockUnblockPushLock.AbWaitEntryCount,
                           *(unsigned __int64 *)&HalpDeviceBlockUnblockPushLock.AbWaitEntryCount,
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
