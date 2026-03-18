/*
 * XREFs of FsRtlIsNtstatusExpected @ 0x1402E2870
 * Callers:
 *     CcMapAndCopyInToCache @ 0x14026D270 (CcMapAndCopyInToCache.c)
 *     CcGetVacbMiss @ 0x1402E1EA0 (CcGetVacbMiss.c)
 *     CcPerformReadAhead @ 0x140386E18 (CcPerformReadAhead.c)
 *     CcAsyncReadPrefetch @ 0x140388A0C (CcAsyncReadPrefetch.c)
 *     CcSetFileSizesEx @ 0x14039E300 (CcSetFileSizesEx.c)
 *     CcInitializeCacheMapInternal @ 0x1403E1230 (CcInitializeCacheMapInternal.c)
 *     CcAcquireByteRangeForWrite @ 0x1403E2360 (CcAcquireByteRangeForWrite.c)
 *     CcMdlWriteComplete2 @ 0x14040F680 (CcMdlWriteComplete2.c)
 *     CcCopyBytesToUserBuffer @ 0x14046BC40 (CcCopyBytesToUserBuffer.c)
 *     FsRtlCancelNotify @ 0x1404A3F80 (FsRtlCancelNotify.c)
 *     FsRtlNormalizeNtstatus @ 0x1404B6BC0 (FsRtlNormalizeNtstatus.c)
 *     CcLockSystemCacheBuffer @ 0x14052625C (CcLockSystemCacheBuffer.c)
 *     FsRtlPrepareMdlWriteDev @ 0x14078DB20 (FsRtlPrepareMdlWriteDev.c)
 *     RawDispatch @ 0x140A35180 (RawDispatch.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x140A85820 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     FsRtlCopyRead @ 0x140AAF910 (FsRtlCopyRead.c)
 *     FsRtlCopyWrite @ 0x140ABE620 (FsRtlCopyWrite.c)
 *     FsRtlNotifyFilterReportChange @ 0x140AF6420 (FsRtlNotifyFilterReportChange.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall FsRtlIsNtstatusExpected(NTSTATUS Exception)
{
  if ( Exception <= -1073741753 )
    return Exception != -1073741753
        && Exception != -2147483647
        && Exception != -2147483646
        && Exception != -2147483645
        && Exception != -1073741819
        && Exception != -1073741795
        && Exception != -1073741754;
  if ( Exception == -1073741684
    || Exception == -1073741676
    || Exception == -1073741674
    || Exception == -1073741654
    || Exception == -1073740791 )
  {
    return 0;
  }
  return Exception != -1073740768;
}
