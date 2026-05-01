/*
 * XREFs of ??$make_shared@UAppUsageData@Discover@PenWorkspace@@$$V@std@@YA?AV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@0@XZ @ 0x18022AE8C
 * Callers:
 *     ?PrependDefaultApp@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEBGAEAU_FILETIME@@@Z @ 0x1803ECCC0 (-PrependDefaultApp@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEBGAEAU_FILETIME@@@Z.c)
 *     ?TrackProcess@RecentAppsCache@Discover@PenWorkspace@@AEAAJKAEBU_FILETIME@@@Z @ 0x1803ED4D0 (-TrackProcess@RecentAppsCache@Discover@PenWorkspace@@AEAAJKAEBU_FILETIME@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     ??$?0$$V@?$_Ref_count_obj2@UAppUsageData@Discover@PenWorkspace@@@std@@QEAA@XZ @ 0x1803EA790 (--$-0$$V@-$_Ref_count_obj2@UAppUsageData@Discover@PenWorkspace@@@std@@QEAA@XZ.c)
 */

__int64 *__fastcall std::make_shared<PenWorkspace::Discover::AppUsageData,>(__int64 *a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 *result; // rax
  void *v5; // [rsp+40h] [rbp+8h]

  v5 = operator new(0x48uLL);
  v2 = std::_Ref_count_obj2<PenWorkspace::Discover::AppUsageData>::_Ref_count_obj2<PenWorkspace::Discover::AppUsageData>(v5);
  a1[1] = v2;
  v3 = v2 + 16;
  result = a1;
  *a1 = v3;
  return result;
}
