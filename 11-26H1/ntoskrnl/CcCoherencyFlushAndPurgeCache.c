/*
 * XREFs of CcCoherencyFlushAndPurgeCache @ 0x14045DD80
 * Callers:
 *     <none>
 * Callees:
 *     CcFlushCachePriv @ 0x14039A060 (CcFlushCachePriv.c)
 *     CcPurgeCacheSection @ 0x14039D060 (CcPurgeCacheSection.c)
 *     MmTrimSection @ 0x14045DEB0 (MmTrimSection.c)
 *     MmOnlySystemCacheViewsPresent @ 0x14045E500 (MmOnlySystemCacheViewsPresent.c)
 */

void __stdcall CcCoherencyFlushAndPurgeCache(
        PSECTION_OBJECT_POINTERS SectionObjectPointer,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        PIO_STATUS_BLOCK IoStatus,
        ULONG Flags)
{
  char v5; // r14
  __int64 v6; // rsi
  bool v7; // r15
  ULONG v11; // r13d
  NTSTATUS v12; // eax

  v5 = 0;
  v6 = Length;
  v7 = 0;
  v11 = (Flags >> 1) & 1 | 2;
  if ( (Flags & 1) != 0 )
  {
    if ( (Flags & 4) != 0 || (unsigned __int8)MmOnlySystemCacheViewsPresent(SectionObjectPointer) )
    {
      IoStatus->Status = 0;
      goto LABEL_7;
    }
  }
  else
  {
    v11 = (Flags >> 1) & 1;
  }
  v12 = MmTrimSection(SectionObjectPointer, FileOffset, v6, v11);
  IoStatus->Status = v12;
  if ( v12 == 277 || v12 < 0 )
    v5 = 1;
LABEL_7:
  CcFlushCachePriv(SectionObjectPointer, (__int64)FileOffset, v6, 0LL, 0, (__int128 *)&IoStatus->0, 0LL);
  if ( IoStatus->Status >= 0 )
  {
    if ( (Flags & 1) == 0 )
      v7 = CcPurgeCacheSection(SectionObjectPointer, FileOffset, v6, 4u) == 0;
    if ( IoStatus->Status >= 0 && (v5 || v7) )
      IoStatus->Status = 277;
  }
}
