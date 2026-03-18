/*
 * XREFs of MiDereferenceControlAreaFile @ 0x1402649C0
 * Callers:
 *     NtAreMappedFilesTheSame @ 0x140961230 (NtAreMappedFilesTheSame.c)
 *     MmIsFileMapped @ 0x1409706E8 (MmIsFileMapped.c)
 *     MiCreateSectionCommon @ 0x1409B9D9C (MiCreateSectionCommon.c)
 *     NtUnmapViewOfSectionEx @ 0x1409C38B0 (NtUnmapViewOfSectionEx.c)
 *     MiUnmapVad @ 0x1409C3B30 (MiUnmapVad.c)
 *     MiUnmapViewOfSection @ 0x1409C3C30 (MiUnmapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1409C3E60 (NtUnmapViewOfSection.c)
 *     MiUnmapViewOfSectionPrepare @ 0x1409C40F0 (MiUnmapViewOfSectionPrepare.c)
 *     MiFillMapFileInfo @ 0x1409C6BC8 (MiFillMapFileInfo.c)
 *     MiParseComAndCetHeaders @ 0x1409CC26C (MiParseComAndCetHeaders.c)
 *     MiLogRelocationFaults @ 0x1409CC690 (MiLogRelocationFaults.c)
 *     MiMapImageInSystemSpace @ 0x1409CC82C (MiMapImageInSystemSpace.c)
 *     MiParseImageLoadConfig @ 0x1409CC9F0 (MiParseImageLoadConfig.c)
 *     MmExtendSection @ 0x140A58080 (MmExtendSection.c)
 *     MiCachedPageNotifyPf @ 0x140A5CB60 (MiCachedPageNotifyPf.c)
 *     MmFlushVirtualMemory @ 0x140A5CF70 (MmFlushVirtualMemory.c)
 *     MmSectionToSectionObjectPointers @ 0x140A67440 (MmSectionToSectionObjectPointers.c)
 *     MiCallImageNotify @ 0x140A790C8 (MiCallImageNotify.c)
 *     MiConstructLoaderEntry @ 0x140AA8F54 (MiConstructLoaderEntry.c)
 *     MiAllowImageMap @ 0x140B1FE0C (MiAllowImageMap.c)
 *     MmGetFileNameForSection @ 0x140B261A4 (MmGetFileNameForSection.c)
 *     MiLoadUserSymbols @ 0x140B5385C (MiLoadUserSymbols.c)
 *     MiMapImageForEnclaveUse @ 0x140B5ED58 (MiMapImageForEnclaveUse.c)
 *     MiAllocateFileExtents @ 0x140B5F8D8 (MiAllocateFileExtents.c)
 *     MmCreateSpecialImageSection @ 0x140B7F20C (MmCreateSpecialImageSection.c)
 * Callees:
 *     ObpPushStackInfo @ 0x1402659F0 (ObpPushStackInfo.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14027C870 (ObDereferenceObjectDeferDeleteWithTag.c)
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
