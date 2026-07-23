/*
 * XREFs of MiDereferenceControlAreaFile @ 0x140263F30
 * Callers:
 *     MiCreateSectionCommon @ 0x14098AD7C (MiCreateSectionCommon.c)
 *     NtUnmapViewOfSectionEx @ 0x140994890 (NtUnmapViewOfSectionEx.c)
 *     MiUnmapVad @ 0x140994B10 (MiUnmapVad.c)
 *     MiUnmapViewOfSection @ 0x140994C10 (MiUnmapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x140994E40 (NtUnmapViewOfSection.c)
 *     MiUnmapViewOfSectionPrepare @ 0x1409950D0 (MiUnmapViewOfSectionPrepare.c)
 *     MiFillMapFileInfo @ 0x140997BA8 (MiFillMapFileInfo.c)
 *     MiParseComAndCetHeaders @ 0x14099D24C (MiParseComAndCetHeaders.c)
 *     MiLogRelocationFaults @ 0x14099D670 (MiLogRelocationFaults.c)
 *     MiMapImageInSystemSpace @ 0x14099D80C (MiMapImageInSystemSpace.c)
 *     MiParseImageLoadConfig @ 0x14099D9D0 (MiParseImageLoadConfig.c)
 *     MmIsFileMapped @ 0x1409BCA98 (MmIsFileMapped.c)
 *     MiCallImageNotify @ 0x1409E50E8 (MiCallImageNotify.c)
 *     NtAreMappedFilesTheSame @ 0x140A06AE0 (NtAreMappedFilesTheSame.c)
 *     MmExtendSection @ 0x140A65600 (MmExtendSection.c)
 *     MiCachedPageNotifyPf @ 0x140A69B20 (MiCachedPageNotifyPf.c)
 *     MmFlushVirtualMemory @ 0x140A69F30 (MmFlushVirtualMemory.c)
 *     MmSectionToSectionObjectPointers @ 0x140A74410 (MmSectionToSectionObjectPointers.c)
 *     MiConstructLoaderEntry @ 0x140AA535C (MiConstructLoaderEntry.c)
 *     MiAllowImageMap @ 0x140B2222C (MiAllowImageMap.c)
 *     MmGetFileNameForSection @ 0x140B28404 (MmGetFileNameForSection.c)
 *     MiLoadUserSymbols @ 0x140B560FC (MiLoadUserSymbols.c)
 *     MiMapImageForEnclaveUse @ 0x140B61ED8 (MiMapImageForEnclaveUse.c)
 *     MiAllocateFileExtents @ 0x140B62A58 (MiAllocateFileExtents.c)
 *     MmCreateSpecialImageSection @ 0x140B880EC (MmCreateSpecialImageSection.c)
 * Callees:
 *     ObpPushStackInfo @ 0x140264F60 (ObpPushStackInfo.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14027BDE0 (ObDereferenceObjectDeferDeleteWithTag.c)
 */

void __fastcall MiDereferenceControlAreaFile(__int64 a1, unsigned __int64 a2)
{
  signed __int64 v2; // rax
  signed __int64 v3; // rtt

  _m_prefetchw((const void *)(a1 + 64));
  v2 = *(_QWORD *)(a1 + 64);
  do
  {
    if ( (a2 ^ v2) >= 0xF )
    {
      ObDereferenceObjectDeferDeleteWithTag((PVOID)a2, 0x63536D4Du);
      return;
    }
    v3 = v2;
    v2 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 64), v2 + 1, v2);
  }
  while ( v3 != v2 );
  if ( ObpTraceFlags )
    ObpPushStackInfo(a2 - 48, 0xFFFFFFFFLL, 1666411853LL);
}
