/*
 * XREFs of ?GetTabletModeViewManager@TabletModeViewManagerProxy@@AEAAJPEAPEAUITabletModeViewManager@@@Z @ 0x18049E3E8
 * Callers:
 *     ?BeginDragVisualHandoff@TabletModeViewManagerProxy@@UEAAJPEAUIApplicationView@@PEAUtagRECT@@PEAUtagPOINT@@PEAUITabletModeInputSource@@@Z @ 0x18049E210 (-BeginDragVisualHandoff@TabletModeViewManagerProxy@@UEAAJPEAUIApplicationView@@PEAUtagRECT@@PEAU.c)
 *     ?CreateWindowArrangementViewForDrag@TabletModeViewManagerProxy@@UEAAJPEAUIApplicationView@@PEAPEAUIUnknown@@@Z @ 0x18049E2C0 (-CreateWindowArrangementViewForDrag@TabletModeViewManagerProxy@@UEAAJPEAUIApplicationView@@PEAPE.c)
 *     ?EndDragVisualHandoff@TabletModeViewManagerProxy@@UEAAJPEAUIApplicationView@@@Z @ 0x18049E360 (-EndDragVisualHandoff@TabletModeViewManagerProxy@@UEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall TabletModeViewManagerProxy::GetTabletModeViewManager(
        TabletModeViewManagerProxy *this,
        struct ITabletModeViewManager **a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a2 = 0LL;
  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, GUID *, GUID *, struct ITabletModeViewManager **))(**((_QWORD **)this + 3) + 72LL))(
         *((_QWORD *)this + 3),
         0LL,
         &GUID_373e56cf_0a1b_4b4a_a1a4_a46b25ffd7e3,
         &GUID_373e56cf_0a1b_4b4a_a1a4_a46b25ffd7e3,
         a2);
  v3 = v2;
  if ( v2 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x65,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\tabletmodeviewmanagerproxy.cpp",
      (const char *)(unsigned int)v2);
  return v3;
}
