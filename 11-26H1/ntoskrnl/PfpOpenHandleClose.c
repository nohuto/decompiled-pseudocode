/*
 * XREFs of PfpOpenHandleClose @ 0x1409BA288
 * Callers:
 *     PfpQueryFileExtentsRequest @ 0x1407C589C (PfpQueryFileExtentsRequest.c)
 *     PfpPrefetchDirectoryStream @ 0x1409AE4F8 (PfpPrefetchDirectoryStream.c)
 *     PfpPrefetchRequestPerform @ 0x1409AF298 (PfpPrefetchRequestPerform.c)
 *     PfpPrefetchVolumesCleanup @ 0x1409AF77C (PfpPrefetchVolumesCleanup.c)
 *     PfpVolumeOpenAndVerify @ 0x1409AF914 (PfpVolumeOpenAndVerify.c)
 *     PfSnQueryVolumeInfo @ 0x1409B1250 (PfSnQueryVolumeInfo.c)
 *     PfSnOpenVolumesForPrefetch @ 0x1409B2A78 (PfSnOpenVolumesForPrefetch.c)
 *     PfSnCleanupPrefetchHeader @ 0x1409B878C (PfSnCleanupPrefetchHeader.c)
 *     PfSnPopulateReadList @ 0x1409B9120 (PfSnPopulateReadList.c)
 *     PfSnCleanupPrefetchSectionInfo @ 0x1409BA1B4 (PfSnCleanupPrefetchSectionInfo.c)
 *     PfpPrefetchEntireDirectory @ 0x140A4F588 (PfpPrefetchEntireDirectory.c)
 *     PfpFileBuildReadSupport @ 0x140A4F6FC (PfpFileBuildReadSupport.c)
 *     PfpReadSupportCleanup @ 0x140A4FB00 (PfpReadSupportCleanup.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PfpOpenHandleClose(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _QWORD v4[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( !_bittest64((const signed __int64 *)(a1 + 24), 0x24u) )
  {
    v4[1] = *(_QWORD *)a1;
    v4[2] = *(_QWORD *)(a1 + 8);
    v4[3] = *(_QWORD *)(a1 + 16);
    v4[0] = a2 + 40;
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 84));
    guard_dispatch_icall_no_overrides((__int64)v4, a2);
  }
  result = 0x800000000LL;
  *(_QWORD *)(a1 + 24) |= 0x800000000uLL;
  return result;
}
