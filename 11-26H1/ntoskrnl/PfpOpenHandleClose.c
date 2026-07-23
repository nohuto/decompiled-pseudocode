/*
 * XREFs of PfpOpenHandleClose @ 0x14098B268
 * Callers:
 *     PfpQueryFileExtentsRequest @ 0x1407C88FC (PfpQueryFileExtentsRequest.c)
 *     PfpPrefetchDirectoryStream @ 0x14097F5AC (PfpPrefetchDirectoryStream.c)
 *     PfpPrefetchRequestPerform @ 0x14098034C (PfpPrefetchRequestPerform.c)
 *     PfpPrefetchVolumesCleanup @ 0x140980830 (PfpPrefetchVolumesCleanup.c)
 *     PfpVolumeOpenAndVerify @ 0x1409809C8 (PfpVolumeOpenAndVerify.c)
 *     PfSnQueryVolumeInfo @ 0x140982310 (PfSnQueryVolumeInfo.c)
 *     PfSnOpenVolumesForPrefetch @ 0x140983B38 (PfSnOpenVolumesForPrefetch.c)
 *     PfSnCleanupPrefetchHeader @ 0x14098976C (PfSnCleanupPrefetchHeader.c)
 *     PfSnPopulateReadList @ 0x14098A100 (PfSnPopulateReadList.c)
 *     PfSnCleanupPrefetchSectionInfo @ 0x14098B194 (PfSnCleanupPrefetchSectionInfo.c)
 *     PfpPrefetchEntireDirectory @ 0x140A58878 (PfpPrefetchEntireDirectory.c)
 *     PfpFileBuildReadSupport @ 0x140A589EC (PfpFileBuildReadSupport.c)
 *     PfpReadSupportCleanup @ 0x140A58DF0 (PfpReadSupportCleanup.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
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
