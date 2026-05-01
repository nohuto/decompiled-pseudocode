/*
 * XREFs of ?s_CreateInstance@CSnappedWindow@@SAJPEAUIImmersiveMonitor@@PEAUIApplicationView@@AEBU_GUID@@PEAPEAX@Z @ 0x1800DAFDC
 * Callers:
 *     ?_EnumSnappedWindows@CSnappedWindowModel@@AEAAJW4SnappedWindowOcclusionModel@@AEBV?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x1800560EC (-_EnumSnappedWindows@CSnappedWindowModel@@AEAAJW4SnappedWindowOcclusionModel@@AEBV-$deque@UtagRE.c)
 *     ?UpdateMonitorDataFromPoint@SnapLayoutProvider@@AEAA_NAEBUCPoint@Geometry@@PEAUIApplicationView@@PEAUISnappedWindowModel@@@Z @ 0x1801BC44C (-UpdateMonitorDataFromPoint@SnapLayoutProvider@@AEAA_NAEBUCPoint@Geometry@@PEAUIApplicationView@.c)
 *     ?GetSnapRectForDesktopMode@SnapServiceProvider@@AEAAJPEAUIApplicationView@@W4SNAP_LOCATION@@PEAUCRect@Geometry@@@Z @ 0x180585CBC (-GetSnapRectForDesktopMode@SnapServiceProvider@@AEAAJPEAUIApplicationView@@W4SNAP_LOCATION@@PEAU.c)
 *     ?HandleHotkey@HotkeyHandler@@UEAAJIIW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@@Z @ 0x18058B250 (-HandleHotkey@HotkeyHandler@@UEAAJIIW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VCSnappedWindow@@V1@AEAPEAUIImmersiveMonitor@@AEAPEAUIApplicationView@@@Details@WRL@Microsoft@@YAJPEAPEAVCSnappedWindow@@AEAPEAUIImmersiveMonitor@@AEAPEAUIApplicationView@@@Z @ 0x1800D92B4 (--$MakeAndInitialize@VCSnappedWindow@@V1@AEAPEAUIImmersiveMonitor@@AEAPEAUIApplicationView@@@Det.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CSnappedWindow::s_CreateInstance(
        struct IImmersiveMonitor *a1,
        struct IApplicationView *a2,
        const struct _GUID *a3,
        void **a4)
{
  int v5; // eax
  unsigned int v6; // ebx
  CSnappedWindow *v7; // rcx
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IImmersiveMonitor *v11; // [rsp+30h] [rbp+8h] BYREF
  struct IApplicationView *v12; // [rsp+38h] [rbp+10h] BYREF
  CSnappedWindow *v13; // [rsp+40h] [rbp+18h] BYREF

  v12 = a2;
  v11 = a1;
  *a4 = 0LL;
  v13 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v13);
  v5 = Microsoft::WRL::Details::MakeAndInitialize<CSnappedWindow,CSnappedWindow,IImmersiveMonitor * &,IApplicationView * &>(
         &v13,
         &v11,
         &v12);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v8 = (**(__int64 (__fastcall ***)(CSnappedWindow *, GUID *, void **))v13)(
           v13,
           &GUID_4fe1cc33_a131_420c_9186_10076351de28,
           a4);
    v6 = v8;
    if ( v8 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xBB,
        (int)"pcshell\\twinui\\snapcomponent\\lib\\snappedwindow.cpp",
        (const char *)(unsigned int)v8);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v13);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBA,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snappedwindow.cpp",
      (const char *)(unsigned int)v5);
    v7 = v13;
    if ( v13 )
    {
      v13 = 0LL;
      (*(void (__fastcall **)(CSnappedWindow *))(*(_QWORD *)v7 + 16LL))(v7);
    }
  }
  return v6;
}
