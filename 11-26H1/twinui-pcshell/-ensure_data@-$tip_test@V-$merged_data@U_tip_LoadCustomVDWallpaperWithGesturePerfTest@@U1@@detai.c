/*
 * XREFs of ?ensure_data@?$tip_test@V?$merged_data@U_tip_LoadCustomVDWallpaperWithGesturePerfTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_LoadCustomVDWallpaperWithGesturePerfTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x180563940
 * Callers:
 *     ??$start_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_LoadCustomVDWallpaperWithGesturePerfTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x18055BF24 (--$start_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_LoadCustomVDWallpaperWithGesturePerfT.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_LoadCustomVDWallpaperWithGesturePerfTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_LoadCustomVDWallpaperWithGesturePerfTest@@U1@@details@tip2@@@1@XZ @ 0x18055CC58 (--C-$tip_test@V-$merged_data@U_tip_LoadCustomVDWallpaperWithGesturePerfTest@@U1@@details@tip2@@@.c)
 * Callees:
 *     ?FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x18027FD64 (-FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_LoadCustomVDWallpaperWithGesturePerfTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1802C5D7C (--1-$com_ptr_t@V-$merged_data@U_tip_LoadCustomVDWallpaperWithGesturePerfTest@@U1@@details@tip2@@.c)
 *     ??0?$merged_data@U_tip_LoadCustomVDWallpaperWithGesturePerfTest@@U1@@details@tip2@@QEAA@XZ @ 0x18055C3E8 (--0-$merged_data@U_tip_LoadCustomVDWallpaperWithGesturePerfTest@@U1@@details@tip2@@QEAA@XZ.c)
 *     ?Release@?$merged_data@U_tip_LoadCustomVDWallpaperWithGesturePerfTest@@U1@@details@tip2@@AEAAKXZ @ 0x180561E50 (-Release@-$merged_data@U_tip_LoadCustomVDWallpaperWithGesturePerfTest@@U1@@details@tip2@@AEAAKXZ.c)
 */

volatile signed __int32 **__fastcall tip2::tip_test<tip2::details::merged_data<_tip_LoadCustomVDWallpaperWithGesturePerfTest,_tip_LoadCustomVDWallpaperWithGesturePerfTest>>::ensure_data(
        volatile signed __int32 **a1)
{
  LPVOID v2; // rax
  wil::details::in1diag3 *v3; // rcx
  __int64 CustomVDWallpaperWithGesturePerf; // rax
  volatile signed __int32 *v5; // rcx
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  if ( !*a1 )
  {
    v2 = CoTaskMemAlloc(0x120uLL);
    if ( !v2 )
      wil::details::in1diag3::FailFastImmediate_Unexpected(v3);
    CustomVDWallpaperWithGesturePerf = tip2::details::merged_data<_tip_LoadCustomVDWallpaperWithGesturePerfTest,_tip_LoadCustomVDWallpaperWithGesturePerfTest>::merged_data<_tip_LoadCustomVDWallpaperWithGesturePerfTest,_tip_LoadCustomVDWallpaperWithGesturePerfTest>((__int64)v2);
    v5 = *a1;
    v7 = 0LL;
    *a1 = (volatile signed __int32 *)CustomVDWallpaperWithGesturePerf;
    if ( v5 )
      tip2::details::merged_data<_tip_LoadCustomVDWallpaperWithGesturePerfTest,_tip_LoadCustomVDWallpaperWithGesturePerfTest>::Release(v5);
    wil::com_ptr_t<tip2::details::merged_data<_tip_LoadCustomVDWallpaperWithGesturePerfTest,_tip_LoadCustomVDWallpaperWithGesturePerfTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_LoadCustomVDWallpaperWithGesturePerfTest,_tip_LoadCustomVDWallpaperWithGesturePerfTest>,wil::err_returncode_policy>(&v7);
  }
  return a1;
}
