/*
 * XREFs of ?EndDragVisualHandoff@TabletModeViewManagerProxy@@UEAAJPEAUIApplicationView@@@Z @ 0x18049E360
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetTabletModeViewManager@TabletModeViewManagerProxy@@AEAAJPEAPEAUITabletModeViewManager@@@Z @ 0x18049E3E8 (-GetTabletModeViewManager@TabletModeViewManagerProxy@@AEAAJPEAPEAUITabletModeViewManager@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TabletModeViewManagerProxy::EndDragVisualHandoff(
        TabletModeViewManagerProxy *this,
        struct IApplicationView *a2)
{
  int TabletModeViewManager; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct ITabletModeViewManager *v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v8);
  TabletModeViewManager = TabletModeViewManagerProxy::GetTabletModeViewManager(
                            (TabletModeViewManagerProxy *)((char *)this - 8),
                            &v8);
  v5 = TabletModeViewManager;
  if ( TabletModeViewManager >= 0 )
    v5 = (*(__int64 (__fastcall **)(struct ITabletModeViewManager *, struct IApplicationView *))(*(_QWORD *)v8 + 48LL))(
           v8,
           a2);
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x42,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\tabletmodeviewmanagerproxy.cpp",
      (const char *)(unsigned int)TabletModeViewManager);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v8);
  return v5;
}
