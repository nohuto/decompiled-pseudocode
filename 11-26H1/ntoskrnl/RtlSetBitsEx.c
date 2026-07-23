/*
 * XREFs of RtlSetBitsEx @ 0x1403712C0
 * Callers:
 *     MiObtainDynamicVa @ 0x1402A4348 (MiObtainDynamicVa.c)
 *     MiCheckProcessorPteCache @ 0x140360820 (MiCheckProcessorPteCache.c)
 *     MiBuildMdlForMappedFileFault @ 0x140370990 (MiBuildMdlForMappedFileFault.c)
 *     MiUpdateLargePageBitMap @ 0x1403CF324 (MiUpdateLargePageBitMap.c)
 *     MiGetPrototypePteRanges @ 0x140443C58 (MiGetPrototypePteRanges.c)
 *     MiMirrorAddPagesToBrownList @ 0x140485C4C (MiMirrorAddPagesToBrownList.c)
 *     RtlFindClearBitsAndSetEx @ 0x1404932B0 (RtlFindClearBitsAndSetEx.c)
 *     MiReduceMappedFileReadBehind @ 0x1404ABF14 (MiReduceMappedFileReadBehind.c)
 *     MiReduceMappedFileReadAhead @ 0x1404ACCEC (MiReduceMappedFileReadAhead.c)
 *     RtlpHpFixedVsAllocate @ 0x1404D1C30 (RtlpHpFixedVsAllocate.c)
 *     RtlpHpFixedHeapCreate @ 0x1404DD190 (RtlpHpFixedHeapCreate.c)
 *     IopAddPageRangeToPageMaps @ 0x1404E25A0 (IopAddPageRangeToPageMaps.c)
 *     MiCreateFileOnlyImageFixupExtents @ 0x140500CE0 (MiCreateFileOnlyImageFixupExtents.c)
 *     MiMarkSystemVaAllocated @ 0x1405044E8 (MiMarkSystemVaAllocated.c)
 *     IopLiveDumpMirrorPhysicalMemoryCallback @ 0x1405D3180 (IopLiveDumpMirrorPhysicalMemoryCallback.c)
 *     IopLiveDumpPopulateBitmapForDump @ 0x1405D38C0 (IopLiveDumpPopulateBitmapForDump.c)
 *     MiPhysicalMemoryEverRemoved @ 0x1406EEB94 (MiPhysicalMemoryEverRemoved.c)
 *     MiAddPartitionHugeRange @ 0x1406EFCE8 (MiAddPartitionHugeRange.c)
 *     MiActOnMirrorHugeRangeBitmap @ 0x1406F41A0 (MiActOnMirrorHugeRangeBitmap.c)
 *     MiAddRangeToPartitionTree @ 0x14070CED0 (MiAddRangeToPartitionTree.c)
 *     MiIdentifyImageDiscardablePages @ 0x140876784 (MiIdentifyImageDiscardablePages.c)
 *     MiIdentifyPatchImageDataPages @ 0x1408768A0 (MiIdentifyPatchImageDataPages.c)
 *     MiPatchDataPagesCallback @ 0x140879770 (MiPatchDataPagesCallback.c)
 *     MiSetVadBits @ 0x140997210 (MiSetVadBits.c)
 *     MiCopyToCfgBitMap @ 0x140999540 (MiCopyToCfgBitMap.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x14099A770 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MiObtainRelocationBits @ 0x14099C068 (MiObtainRelocationBits.c)
 *     MiFreeInitializationCode @ 0x140ACB290 (MiFreeInitializationCode.c)
 *     MiMarkRetpolineBits @ 0x140B213C8 (MiMarkRetpolineBits.c)
 *     MiAddPostHibernateZeroPagesToBitmap @ 0x140C069D4 (MiAddPostHibernateZeroPagesToBitmap.c)
 *     MiActOnMirrorBitmap @ 0x140C12CF8 (MiActOnMirrorBitmap.c)
 * Callees:
 *     RtlSetVolatileMemory @ 0x140737C70 (RtlSetVolatileMemory.c)
 */

unsigned __int64 __fastcall RtlSetBitsEx(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rsi
  __int64 v5; // rdx
  _BYTE *v6; // rbx
  unsigned __int64 result; // rax

  if ( a3 )
  {
    v3 = a3;
    v5 = a2 & 7;
    v6 = (_BYTE *)(*(_QWORD *)(a1 + 8) + (a2 >> 3));
    result = v5 + a3;
    if ( v5 + a3 > 8 )
    {
      if ( (_DWORD)v5 )
      {
        result = (unsigned int)(8 - v5);
        *v6++ |= byte_140018470[v5];
        v3 = a3 - result;
      }
      if ( v3 > 8 )
      {
        result = (unsigned __int64)RtlSetVolatileMemory(v6, 255, v3 >> 3);
        v6 += v3 >> 3;
        v3 &= 7u;
      }
      if ( v3 )
        *v6 |= byte_1400327C0[v3];
    }
    else
    {
      result = (unsigned __int8)byte_1400327C0[a3];
      LOBYTE(result) = *v6 | ((_BYTE)result << v5);
      *v6 = result;
    }
  }
  return result;
}
