/*
 * XREFs of FsRtlIsNtstatusExpected @ 0x1402C4930
 * Callers:
 *     CcMapAndCopyInToCache @ 0x14026C7E0 (CcMapAndCopyInToCache.c)
 *     CcGetVacbMiss @ 0x1402C3F60 (CcGetVacbMiss.c)
 *     CcPerformReadAhead @ 0x140388BC8 (CcPerformReadAhead.c)
 *     CcAsyncReadPrefetch @ 0x14038A7BC (CcAsyncReadPrefetch.c)
 *     CcSetFileSizesEx @ 0x1403A0060 (CcSetFileSizesEx.c)
 *     CcInitializeCacheMapInternal @ 0x1403E4420 (CcInitializeCacheMapInternal.c)
 *     CcAcquireByteRangeForWrite @ 0x1403E5550 (CcAcquireByteRangeForWrite.c)
 *     FsRtlCancelNotify @ 0x1403FB5E0 (FsRtlCancelNotify.c)
 *     CcMdlWriteComplete2 @ 0x14040EDA0 (CcMdlWriteComplete2.c)
 *     CcCopyBytesToUserBuffer @ 0x1404653C0 (CcCopyBytesToUserBuffer.c)
 *     FsRtlNormalizeNtstatus @ 0x1404B0010 (FsRtlNormalizeNtstatus.c)
 *     CcLockSystemCacheBuffer @ 0x1405288CC (CcLockSystemCacheBuffer.c)
 *     FsRtlPrepareMdlWriteDev @ 0x140790650 (FsRtlPrepareMdlWriteDev.c)
 *     RawDispatch @ 0x140919E90 (RawDispatch.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x140A8A420 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     FsRtlCopyRead @ 0x140AAD560 (FsRtlCopyRead.c)
 *     FsRtlCopyWrite @ 0x140AC06C0 (FsRtlCopyWrite.c)
 *     FsRtlNotifyFilterReportChange @ 0x140AF8AC0 (FsRtlNotifyFilterReportChange.c)
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
