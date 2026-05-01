/*
 * XREFs of ?reset@?$com_ptr_t@V?$merged_data@U_tip_LoadCustomVDWallpaperWithGesturePerfTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180563D44
 * Callers:
 *     ??1?$test_data_control@V?$merged_data@U_tip_LoadCustomVDWallpaperWithGesturePerfTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18055CA28 (--1-$test_data_control@V-$merged_data@U_tip_LoadCustomVDWallpaperWithGesturePerfTest@@U1@@detail.c)
 * Callees:
 *     ?Release@?$merged_data@U_tip_LoadCustomVDWallpaperWithGesturePerfTest@@U1@@details@tip2@@AEAAKXZ @ 0x180561E50 (-Release@-$merged_data@U_tip_LoadCustomVDWallpaperWithGesturePerfTest@@U1@@details@tip2@@AEAAKXZ.c)
 */

volatile signed __int32 *__fastcall wil::com_ptr_t<tip2::details::merged_data<_tip_LoadCustomVDWallpaperWithGesturePerfTest,_tip_LoadCustomVDWallpaperWithGesturePerfTest>,wil::err_returncode_policy>::reset(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *result; // rax

  result = *a1;
  *a1 = 0LL;
  if ( result )
    return (volatile signed __int32 *)tip2::details::merged_data<_tip_LoadCustomVDWallpaperWithGesturePerfTest,_tip_LoadCustomVDWallpaperWithGesturePerfTest>::Release(result);
  return result;
}
