/*
 * XREFs of ??1?$com_ptr_t@V?$merged_data@U_tip_LoadCustomVDWallpaperWithGesturePerfTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1802C5D7C
 * Callers:
 *     ??1VirtualDesktopGestureWindow@@UEAA@XZ @ 0x18016D648 (--1VirtualDesktopGestureWindow@@UEAA@XZ.c)
 *     ??1?$tip_test@V?$merged_data@U_tip_LoadCustomVDWallpaperWithGesturePerfTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1802C5D70 (--1-$tip_test@V-$merged_data@U_tip_LoadCustomVDWallpaperWithGesturePerfTest@@U1@@details@tip2@@@.c)
 *     ??$start_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_LoadCustomVDWallpaperWithGesturePerfTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x18055BF24 (--$start_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_LoadCustomVDWallpaperWithGesturePerfT.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_LoadCustomVDWallpaperWithGesturePerfTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18055CA28 (--1-$test_data_control@V-$merged_data@U_tip_LoadCustomVDWallpaperWithGesturePerfTest@@U1@@detail.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_LoadCustomVDWallpaperWithGesturePerfTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18055CA60 (--1-$test_watcher@V-$merged_data@U_tip_LoadCustomVDWallpaperWithGesturePerfTest@@U1@@details@tip.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_LoadCustomVDWallpaperWithGesturePerfTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_LoadCustomVDWallpaperWithGesturePerfTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x180563940 (-ensure_data@-$tip_test@V-$merged_data@U_tip_LoadCustomVDWallpaperWithGesturePerfTest@@U1@@detai.c)
 * Callees:
 *     ?Release@?$merged_data@U_tip_LoadCustomVDWallpaperWithGesturePerfTest@@U1@@details@tip2@@AEAAKXZ @ 0x180561E50 (-Release@-$merged_data@U_tip_LoadCustomVDWallpaperWithGesturePerfTest@@U1@@details@tip2@@AEAAKXZ.c)
 */

__int64 __fastcall wil::com_ptr_t<tip2::details::merged_data<_tip_LoadCustomVDWallpaperWithGesturePerfTest,_tip_LoadCustomVDWallpaperWithGesturePerfTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_LoadCustomVDWallpaperWithGesturePerfTest,_tip_LoadCustomVDWallpaperWithGesturePerfTest>,wil::err_returncode_policy>(
        void **a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return tip2::details::merged_data<_tip_LoadCustomVDWallpaperWithGesturePerfTest,_tip_LoadCustomVDWallpaperWithGesturePerfTest>::Release(v1);
  return result;
}
