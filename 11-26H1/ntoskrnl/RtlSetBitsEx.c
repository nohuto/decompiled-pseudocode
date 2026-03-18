/*
 * XREFs of RtlSetBitsEx @ 0x14036F510
 * Callers:
 *     MiObtainDynamicVa @ 0x1402A4DF8 (MiObtainDynamicVa.c)
 *     MiCheckProcessorPteCache @ 0x14035EA80 (MiCheckProcessorPteCache.c)
 *     MiBuildMdlForMappedFileFault @ 0x14036EBF0 (MiBuildMdlForMappedFileFault.c)
 *     MiUpdateLargePageBitMap @ 0x1403C5418 (MiUpdateLargePageBitMap.c)
 *     MiGetPrototypePteRanges @ 0x14044BB34 (MiGetPrototypePteRanges.c)
 *     MiMirrorAddPagesToBrownList @ 0x14048C10C (MiMirrorAddPagesToBrownList.c)
 *     RtlFindClearBitsAndSetEx @ 0x140499760 (RtlFindClearBitsAndSetEx.c)
 *     MiReduceMappedFileReadBehind @ 0x1404B1B98 (MiReduceMappedFileReadBehind.c)
 *     MiReduceMappedFileReadAhead @ 0x1404B3720 (MiReduceMappedFileReadAhead.c)
 *     RtlpHpFixedVsAllocate @ 0x1404D8460 (RtlpHpFixedVsAllocate.c)
 *     RtlpHpFixedHeapCreate @ 0x1404E3BF0 (RtlpHpFixedHeapCreate.c)
 *     IopAddPageRangeToPageMaps @ 0x1404E9188 (IopAddPageRangeToPageMaps.c)
 *     MiCreateFileOnlyImageFixupExtents @ 0x140507310 (MiCreateFileOnlyImageFixupExtents.c)
 *     MiMarkSystemVaAllocated @ 0x14050AA78 (MiMarkSystemVaAllocated.c)
 *     IopLiveDumpMirrorPhysicalMemoryCallback @ 0x1405D0970 (IopLiveDumpMirrorPhysicalMemoryCallback.c)
 *     IopLiveDumpPopulateBitmapForDump @ 0x1405D10C0 (IopLiveDumpPopulateBitmapForDump.c)
 *     MiPhysicalMemoryEverRemoved @ 0x1406E9EF4 (MiPhysicalMemoryEverRemoved.c)
 *     MiAddPartitionHugeRange @ 0x1406EB048 (MiAddPartitionHugeRange.c)
 *     MiActOnMirrorHugeRangeBitmap @ 0x1406EF500 (MiActOnMirrorHugeRangeBitmap.c)
 *     MiAddRangeToPartitionTree @ 0x14070821C (MiAddRangeToPartitionTree.c)
 *     MiIdentifyImageDiscardablePages @ 0x140870424 (MiIdentifyImageDiscardablePages.c)
 *     MiIdentifyPatchImageDataPages @ 0x140870540 (MiIdentifyPatchImageDataPages.c)
 *     MiPatchDataPagesCallback @ 0x140873410 (MiPatchDataPagesCallback.c)
 *     MiSetVadBits @ 0x1409C6230 (MiSetVadBits.c)
 *     MiCopyToCfgBitMap @ 0x1409C8560 (MiCopyToCfgBitMap.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x1409C9790 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MiObtainRelocationBits @ 0x1409CB088 (MiObtainRelocationBits.c)
 *     MiFreeInitializationCode @ 0x140AC9178 (MiFreeInitializationCode.c)
 *     MiMarkRetpolineBits @ 0x140B1F348 (MiMarkRetpolineBits.c)
 *     MiAddPostHibernateZeroPagesToBitmap @ 0x140C007C4 (MiAddPostHibernateZeroPagesToBitmap.c)
 *     MiActOnMirrorBitmap @ 0x140C0CAE8 (MiActOnMirrorBitmap.c)
 * Callees:
 *     RtlSetVolatileMemory @ 0x1407330A0 (RtlSetVolatileMemory.c)
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
        *v6++ |= byte_140017F38[v5];
        v3 = a3 - result;
      }
      if ( v3 > 8 )
      {
        result = (unsigned __int64)RtlSetVolatileMemory(v6, 255, v3 >> 3);
        v6 += v3 >> 3;
        v3 &= 7u;
      }
      if ( v3 )
        *v6 |= byte_140032340[v3];
    }
    else
    {
      result = (unsigned __int8)byte_140032340[a3];
      LOBYTE(result) = *v6 | ((_BYTE)result << v5);
      *v6 = result;
    }
  }
  return result;
}
