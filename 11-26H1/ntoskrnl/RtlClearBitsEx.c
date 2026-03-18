/*
 * XREFs of RtlClearBitsEx @ 0x14024EFA0
 * Callers:
 *     IopLiveDumpDiscardVirtualAddressRange @ 0x14024E9A0 (IopLiveDumpDiscardVirtualAddressRange.c)
 *     RtlFindSetBitsAndClearEx @ 0x14024EA40 (RtlFindSetBitsAndClearEx.c)
 *     MiGetHighestUltraLevel @ 0x14024EE20 (MiGetHighestUltraLevel.c)
 *     MiMakeSystemRangeAvailable @ 0x1402A4448 (MiMakeSystemRangeAvailable.c)
 *     MiCopyProtoPtes @ 0x1402AA020 (MiCopyProtoPtes.c)
 *     MiMoveDirtyBitsToPfns @ 0x140319470 (MiMoveDirtyBitsToPfns.c)
 *     MiUpdateLargePageBitMap @ 0x1403C5418 (MiUpdateLargePageBitMap.c)
 *     MiReduceMappedFileReadBehind @ 0x1404B1B98 (MiReduceMappedFileReadBehind.c)
 *     MiReduceMappedFileReadAhead @ 0x1404B3720 (MiReduceMappedFileReadAhead.c)
 *     ExpSaPageGroupFreeMemory @ 0x1404C24B0 (ExpSaPageGroupFreeMemory.c)
 *     RtlpHpFixedVsFree @ 0x1404DD7F0 (RtlpHpFixedVsFree.c)
 *     IopAddPageRangeToPageMaps @ 0x1404E9188 (IopAddPageRangeToPageMaps.c)
 *     MiExtendDynamicBitMap @ 0x1404FFA5C (MiExtendDynamicBitMap.c)
 *     MiMarkSystemVaAllocated @ 0x14050AA78 (MiMarkSystemVaAllocated.c)
 *     IopRemovePageFromPageMap @ 0x1405C9E34 (IopRemovePageFromPageMap.c)
 *     RtlShiftLeftBitMapEx @ 0x140618DE0 (RtlShiftLeftBitMapEx.c)
 *     MiClearPhysicalMemoryEverRemoved @ 0x1406E7DD8 (MiClearPhysicalMemoryEverRemoved.c)
 *     MiHotRemoveHugeRange @ 0x1406EBF04 (MiHotRemoveHugeRange.c)
 *     MiActOnMirrorHugeRangeBitmap @ 0x1406EF500 (MiActOnMirrorHugeRangeBitmap.c)
 *     MiClearMirrorBitmaps @ 0x1406EF634 (MiClearMirrorBitmaps.c)
 *     MiDeleteAweInfoPageRuns @ 0x140701000 (MiDeleteAweInfoPageRuns.c)
 *     MiActOnPartitionNodePages @ 0x140707C4C (MiActOnPartitionNodePages.c)
 *     MiAddRangeToPartitionTree @ 0x14070821C (MiAddRangeToPartitionTree.c)
 *     MiClearRangeInPartitionTree @ 0x140708938 (MiClearRangeInPartitionTree.c)
 *     MiRemovePartitionPages @ 0x14070967C (MiRemovePartitionPages.c)
 *     MiApplyHotPatchToDriverDataPages @ 0x14086E230 (MiApplyHotPatchToDriverDataPages.c)
 *     MiCreatePartitionPages @ 0x14087BBEC (MiCreatePartitionPages.c)
 *     MiFreeToSubAllocatedRegion @ 0x14095F0C4 (MiFreeToSubAllocatedRegion.c)
 *     MiCopyToCfgBitMap @ 0x1409C8560 (MiCopyToCfgBitMap.c)
 *     MiObtainRelocationBits @ 0x1409CB088 (MiObtainRelocationBits.c)
 *     MiReturnImageBase @ 0x140A7FE38 (MiReturnImageBase.c)
 *     MiMarkRetpolineBits @ 0x140B1F348 (MiMarkRetpolineBits.c)
 *     MiMirrorOmitPagesFromCopy @ 0x140C037CC (MiMirrorOmitPagesFromCopy.c)
 *     MiActOnMirrorBitmap @ 0x140C0CAE8 (MiActOnMirrorBitmap.c)
 *     MiInitializeSystemImageRegion @ 0x140D00924 (MiInitializeSystemImageRegion.c)
 *     MiInitializeUltraSpace @ 0x140D01AF0 (MiInitializeUltraSpace.c)
 * Callees:
 *     RtlSetVolatileMemory @ 0x1407330A0 (RtlSetVolatileMemory.c)
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
      v7 = ~(byte_140032340[a3] << v5);
      goto LABEL_9;
    }
    if ( (_DWORD)v5 )
    {
      *v6++ &= byte_140032340[v5];
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
      v7 = byte_140017F38[v3];
LABEL_9:
      *v6 &= v7;
    }
  }
}
