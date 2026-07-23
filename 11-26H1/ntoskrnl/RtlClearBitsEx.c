/*
 * XREFs of RtlClearBitsEx @ 0x140250900
 * Callers:
 *     IopLiveDumpDiscardVirtualAddressRange @ 0x140250300 (IopLiveDumpDiscardVirtualAddressRange.c)
 *     RtlFindSetBitsAndClearEx @ 0x1402503A0 (RtlFindSetBitsAndClearEx.c)
 *     MiGetHighestUltraLevel @ 0x140250780 (MiGetHighestUltraLevel.c)
 *     MiMakeSystemRangeAvailable @ 0x1402A3998 (MiMakeSystemRangeAvailable.c)
 *     MiCopyProtoPtes @ 0x1402A9430 (MiCopyProtoPtes.c)
 *     MiMoveDirtyBitsToPfns @ 0x14031B4A0 (MiMoveDirtyBitsToPfns.c)
 *     MiUpdateLargePageBitMap @ 0x1403CF324 (MiUpdateLargePageBitMap.c)
 *     MiReduceMappedFileReadBehind @ 0x1404ABF14 (MiReduceMappedFileReadBehind.c)
 *     MiReduceMappedFileReadAhead @ 0x1404ACCEC (MiReduceMappedFileReadAhead.c)
 *     ExpSaPageGroupFreeMemory @ 0x1404BBD00 (ExpSaPageGroupFreeMemory.c)
 *     RtlpHpFixedVsFree @ 0x1404D6ED0 (RtlpHpFixedVsFree.c)
 *     IopAddPageRangeToPageMaps @ 0x1404E25A0 (IopAddPageRangeToPageMaps.c)
 *     MiExtendDynamicBitMap @ 0x1404F924C (MiExtendDynamicBitMap.c)
 *     MiMarkSystemVaAllocated @ 0x1405044E8 (MiMarkSystemVaAllocated.c)
 *     IopRemovePageFromPageMap @ 0x1405CC704 (IopRemovePageFromPageMap.c)
 *     RtlShiftLeftBitMapEx @ 0x14061BE30 (RtlShiftLeftBitMapEx.c)
 *     MiClearPhysicalMemoryEverRemoved @ 0x1406ECA88 (MiClearPhysicalMemoryEverRemoved.c)
 *     MiHotRemoveHugeRange @ 0x1406F0BA4 (MiHotRemoveHugeRange.c)
 *     MiActOnMirrorHugeRangeBitmap @ 0x1406F41A0 (MiActOnMirrorHugeRangeBitmap.c)
 *     MiClearMirrorBitmaps @ 0x1406F42D4 (MiClearMirrorBitmaps.c)
 *     MiDeleteAweInfoPageRuns @ 0x140705CD0 (MiDeleteAweInfoPageRuns.c)
 *     MiActOnPartitionNodePages @ 0x14070C91C (MiActOnPartitionNodePages.c)
 *     MiAddRangeToPartitionTree @ 0x14070CED0 (MiAddRangeToPartitionTree.c)
 *     MiClearRangeInPartitionTree @ 0x14070D5EC (MiClearRangeInPartitionTree.c)
 *     MiRemovePartitionPages @ 0x14070E330 (MiRemovePartitionPages.c)
 *     MiApplyHotPatchToDriverDataPages @ 0x140874600 (MiApplyHotPatchToDriverDataPages.c)
 *     MiCreatePartitionPages @ 0x140881FEC (MiCreatePartitionPages.c)
 *     MiCopyToCfgBitMap @ 0x140999540 (MiCopyToCfgBitMap.c)
 *     MiObtainRelocationBits @ 0x14099C068 (MiObtainRelocationBits.c)
 *     MiFreeToSubAllocatedRegion @ 0x140A04984 (MiFreeToSubAllocatedRegion.c)
 *     MiReturnImageBase @ 0x140A85CA8 (MiReturnImageBase.c)
 *     MiMarkRetpolineBits @ 0x140B213C8 (MiMarkRetpolineBits.c)
 *     MiMirrorOmitPagesFromCopy @ 0x140C099DC (MiMirrorOmitPagesFromCopy.c)
 *     MiActOnMirrorBitmap @ 0x140C12CF8 (MiActOnMirrorBitmap.c)
 *     MiInitializeSystemImageRegion @ 0x140D06CC4 (MiInitializeSystemImageRegion.c)
 *     MiInitializeUltraSpace @ 0x140D07E90 (MiInitializeUltraSpace.c)
 * Callees:
 *     RtlSetVolatileMemory @ 0x140737C70 (RtlSetVolatileMemory.c)
 */

void __fastcall RtlClearBitsEx(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rbx
  __int64 v5; // rdx
  _BYTE *v6; // rsi
  char v7; // al

  if ( a3 )
  {
    v3 = a3;
    v5 = a2 & 7;
    v6 = (_BYTE *)(*(_QWORD *)(a1 + 8) + (a2 >> 3));
    if ( v5 + a3 <= 8 )
    {
      v7 = ~(byte_1400327C0[a3] << v5);
      goto LABEL_9;
    }
    if ( (_DWORD)v5 )
    {
      *v6++ &= byte_1400327C0[v5];
      v3 = a3 - (unsigned int)(8 - v5);
    }
    if ( v3 > 8 )
    {
      RtlSetVolatileMemory(v6, 0, v3 >> 3);
      v6 += v3 >> 3;
      v3 &= 7u;
    }
    if ( v3 )
    {
      v7 = byte_140018470[v3];
LABEL_9:
      *v6 &= v7;
    }
  }
}
