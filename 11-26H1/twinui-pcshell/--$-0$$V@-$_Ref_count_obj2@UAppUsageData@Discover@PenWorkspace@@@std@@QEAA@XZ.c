/*
 * XREFs of ??$?0$$V@?$_Ref_count_obj2@UAppUsageData@Discover@PenWorkspace@@@std@@QEAA@XZ @ 0x1803EA790
 * Callers:
 *     ?LoadJsonDataFromDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEAUIJsonObject@Json@Data@Windows@@@Z @ 0x18002F490 (-LoadJsonDataFromDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEAUIJsonObject@Json@Data@Wind.c)
 *     ??$make_shared@UAppUsageData@Discover@PenWorkspace@@$$V@std@@YA?AV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@0@XZ @ 0x18022AE8C (--$make_shared@UAppUsageData@Discover@PenWorkspace@@$$V@std@@YA-AV-$shared_ptr@UAppUsageData@Dis.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x180034F0C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 */

__int64 __fastcall std::_Ref_count_obj2<PenWorkspace::Discover::AppUsageData>::_Ref_count_obj2<PenWorkspace::Discover::AppUsageData>(
        __int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj2<PenWorkspace::Discover::AppUsageData>::`vftable';
  v2 = a1 + 16;
  *(_OWORD *)v2 = 0LL;
  *(_OWORD *)(v2 + 16) = 0LL;
  *(_OWORD *)(v2 + 32) = 0LL;
  *(_QWORD *)(v2 + 48) = 0LL;
  std::wstring::wstring(v2);
  *(_DWORD *)(v3 + 32) = 0;
  *(_QWORD *)(v3 + 36) = 0LL;
  *(_BYTE *)(v3 + 44) = 0;
  InitializeSRWLock((PSRWLOCK)(v3 + 48));
  return a1;
}
