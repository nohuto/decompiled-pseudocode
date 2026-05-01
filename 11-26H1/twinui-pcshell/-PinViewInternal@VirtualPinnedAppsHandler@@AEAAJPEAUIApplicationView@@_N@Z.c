/*
 * XREFs of ?PinViewInternal@VirtualPinnedAppsHandler@@AEAAJPEAUIApplicationView@@_N@Z @ 0x1802A7F6C
 * Callers:
 *     ?ViewAddedInternal@VirtualPinnedAppsHandler@@UEAAJPEAUIApplicationView@@@Z @ 0x1801C3FD0 (-ViewAddedInternal@VirtualPinnedAppsHandler@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?ViewAppIdChangedInternal@VirtualPinnedAppsHandler@@UEAAJPEAUIApplicationView@@@Z @ 0x18022F200 (-ViewAppIdChangedInternal@VirtualPinnedAppsHandler@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?PinAppID@VirtualPinnedAppsHandler@@UEAAJPEBG@Z @ 0x180564130 (-PinAppID@VirtualPinnedAppsHandler@@UEAAJPEBG@Z.c)
 *     ?PinView@VirtualPinnedAppsHandler@@UEAAJPEAUIApplicationView@@@Z @ 0x180564490 (-PinView@VirtualPinnedAppsHandler@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?PinViewInternal@VirtualPinnedAppsHandler@@UEAAJPEAUIApplicationView@@@Z @ 0x1805646A0 (-PinViewInternal@VirtualPinnedAppsHandler@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?SetViewCollectionInternal@VirtualPinnedAppsHandler@@UEAAJPEAUIApplicationViewCollection@@@Z @ 0x1805648C0 (-SetViewCollectionInternal@VirtualPinnedAppsHandler@@UEAAJPEAUIApplicationViewCollection@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PinViewNoGroupPropagateInternal@VirtualPinnedAppsHandler@@AEAAJPEAUIApplicationView@@_N@Z @ 0x1802A7FAC (-PinViewNoGroupPropagateInternal@VirtualPinnedAppsHandler@@AEAAJPEAUIApplicationView@@_N@Z.c)
 */

__int64 __fastcall VirtualPinnedAppsHandler::PinViewInternal(
        VirtualPinnedAppsHandler *this,
        struct IApplicationView *a2,
        bool a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = VirtualPinnedAppsHandler::PinViewNoGroupPropagateInternal(this, a2, a3);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x5A,
    (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
    (const char *)(unsigned int)v3);
  return v4;
}
