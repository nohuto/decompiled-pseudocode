/*
 * XREFs of CcInitPerVolumeParameters @ 0x1405B32BC
 * Callers:
 *     CcInitializeCacheManager @ 0x140C7F4E8 (CcInitializeCacheManager.c)
 * Callees:
 *     DbgPrintEx @ 0x140397530 (DbgPrintEx.c)
 */

__int64 CcInitPerVolumeParameters()
{
  char v0; // al
  __int64 result; // rax

  CcEnablePerVolumeLazyWriter = 1;
  CcEnableAsyncLazywrite = 1;
  if ( CcEnablePerVolumeLazyWriterOverride )
  {
    v0 = 1;
    if ( CcEnablePerVolumeLazyWriterOverride == 1 )
      v0 = 1;
  }
  else
  {
    CcEnablePerVolumeLazyWriter = 0;
    v0 = 0;
  }
  if ( CcEnableAsyncLazywriteOverride )
  {
    if ( CcEnableAsyncLazywriteOverride == 1 && !v0 )
      DbgPrintEx(
        0x7Fu,
        2u,
        "CcInitPerVolumeParameters: Setting EnableAsyncLazywrite requires per-Volume Lazywriter is to be enabled!\n");
  }
  else
  {
    CcEnableAsyncLazywrite = 0;
  }
  if ( CcEnableAsyncLazywriteMultiOverride )
  {
    if ( CcEnableAsyncLazywriteMultiOverride == 1 )
    {
      if ( CcEnablePerVolumeLazyWriter && CcEnableAsyncLazywrite )
        CcEnableAsyncLazywriteMulti = 1;
      else
        DbgPrintEx(
          0x7Fu,
          2u,
          "CcInitPerVolumeParameters: Setting EnableAsyncLazywriteMulti requires per-Volume Lazywriter and (simple) Async"
          " Lazywriter to be enabled!\n");
    }
  }
  else
  {
    CcEnableAsyncLazywriteMulti = 0;
  }
  result = (unsigned int)(LODWORD(ExSaPageGroupDescriptorArrayLock.ThreadListEntry.Flink) - 1);
  *(_QWORD *)&EmpParseLock.PriorityFloorSummary = -600000000LL;
  *(_DWORD *)&EmpParseLock.PriorityFloorCounts[28] = 16;
  if ( (unsigned int)result > 0x32 )
    result = 50LL;
  *(_DWORD *)&EmpParseLock.PriorityFloorCounts[20] = 8;
  *(_DWORD *)&EmpParseLock.PriorityFloorCounts[24] = result;
  return result;
}
