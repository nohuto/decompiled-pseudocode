/*
 * XREFs of ?MoveSizeAttempted@TabletModeViewManager@@UEAAJPEAUIApplicationView@@W4MOVE_SIZE_TYPE@@@Z @ 0x18051FA00
 * Callers:
 *     <none>
 * Callees:
 *     ?IsTabletMode@TabletModeHelpers@@YA_NXZ @ 0x180059D70 (-IsTabletMode@TabletModeHelpers@@YA_NXZ.c)
 *     ?IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x1804BC920 (-IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?IsViewFullScreen@TabletModeViewManager@@AEAA_NPEAUIApplicationView@@@Z @ 0x18051F958 (-IsViewFullScreen@TabletModeViewManager@@AEAA_NPEAUIApplicationView@@@Z.c)
 *     ?ShowWindowArrangementView@TabletModeViewManager@@AEAAJPEAUIApplicationView@@PEAUIAppLayout@@PEAUtagRECT@@PEAUtagPOINT@@2W4SHOW_WINDOW_ARRANGEMENT_VIEW_MODE@@W4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@PEAUITabletModeInputSource@@@Z @ 0x18051FF74 (-ShowWindowArrangementView@TabletModeViewManager@@AEAAJPEAUIApplicationView@@PEAUIAppLayout@@PEA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall TabletModeViewManager::MoveSizeAttempted(
        TabletModeHelpers *a1,
        struct IApplicationView *a2,
        unsigned int a3)
{
  struct IApplicationView *v6; // rdx
  bool IsViewFullScreen; // al
  struct tagPOINT Point; // [rsp+78h] [rbp+20h] BYREF

  if ( TabletModeHelpers::IsTabletMode(a1, a2)
    && TabletModePositionerHelpers::IsOperableView(
         (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))a2,
         v6) )
  {
    if ( a3 == 2 )
      goto LABEL_8;
    if ( a3 == 3 || a3 == 4 )
    {
      Point = 0LL;
      GetPhysicalCursorPos(&Point);
      (*(void (__fastcall **)(TabletModeHelpers *, struct IApplicationView *, _QWORD, struct tagPOINT))(*(_QWORD *)a1 + 72LL))(
        a1,
        a2,
        a3,
        Point);
      return 0LL;
    }
    if ( a3 == 5 || a3 - 6 <= 1 )
    {
LABEL_8:
      IsViewFullScreen = TabletModeViewManager::IsViewFullScreen((IUnknown **)a1 - 11, a2);
      TabletModeViewManager::ShowWindowArrangementView(
        (char *)a1 - 88,
        a2,
        0LL,
        0LL,
        0LL,
        0LL,
        IsViewFullScreen,
        1,
        0LL);
    }
  }
  return 0LL;
}
