/*
 * XREFs of ?SetVisibleButtons@ApplicationViewTitlebarConfiguration@@UEAAJW4TITLE_BAR_BUTTONS@@0@Z @ 0x180117340
 * Callers:
 *     ?CloneTitleBarConfiguration@@YA?AV?$com_ptr_t@UIApplicationViewTitlebarConfiguration@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x180116634 (-CloneTitleBarConfiguration@@YA-AV-$com_ptr_t@UIApplicationViewTitlebarConfiguration@@Uerr_excep.c)
 *     ?_CreateTitlebarConfiguration@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x180116E14 (-_CreateTitlebarConfiguration@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplication.c)
 *     ?CreateTitlebarConfiguration@FullScreenPositionerHelpers@@YAJPEAUIApplicationView@@_NPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x180325254 (-CreateTitlebarConfiguration@FullScreenPositionerHelpers@@YAJPEAUIApplicationView@@_NPEAPEAUIApp.c)
 *     ?_CreateTitlebarConfiguration@SurfaceHubPositioner@@AEAAJPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1804DBD1C (-_CreateTitlebarConfiguration@SurfaceHubPositioner@@AEAAJPEAPEAUIApplicationViewTitlebarConfigur.c)
 *     ?CreateTitlebarConfiguration@KioskPositioner@@AEAA?AV?$com_ptr_t@UIApplicationViewTitlebarConfiguration@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x1804DDD60 (-CreateTitlebarConfiguration@KioskPositioner@@AEAA-AV-$com_ptr_t@UIApplicationViewTitlebarConfig.c)
 *     ?CreateTitlebarConfiguration@GamingPosturePositioner@@AEAA?AV?$com_ptr_t@UIApplicationViewTitlebarConfiguration@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x1804E2390 (-CreateTitlebarConfiguration@GamingPosturePositioner@@AEAA-AV-$com_ptr_t@UIApplicationViewTitleb.c)
 *     ?CreateTitlebarConfiguration@TabletModePositioner@@CAJPEAUIApplicationView@@PEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1804F6108 (-CreateTitlebarConfiguration@TabletModePositioner@@CAJPEAUIApplicationView@@PEAPEAUIApplicationV.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall ApplicationViewTitlebarConfiguration::SetVisibleButtons(__int64 a1, int a2, int a3)
{
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    *(_DWORD *)(a1 + 60) = a2;
    result = 0LL;
    *(_DWORD *)(a1 + 64) = a3;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x170,
      (int)"onecoreuap\\internal\\shell\\inc\\private\\applicationviewoperationhelpers.h",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  return result;
}
