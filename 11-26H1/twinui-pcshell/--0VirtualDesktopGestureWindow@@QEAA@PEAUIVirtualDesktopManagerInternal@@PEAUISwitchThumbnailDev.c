/*
 * XREFs of ??0VirtualDesktopGestureWindow@@QEAA@PEAUIVirtualDesktopManagerInternal@@PEAUISwitchThumbnailDeviceManager@@PEAUIApplicationViewCollection@@PEAUIImmersiveSettingsCache@@AEBUtagRECT@@PEAUHMONITOR__@@@Z @ 0x18055C5CC
 * Callers:
 *     ??$Make@VVirtualDesktopGestureWindow@@PEAUIVirtualDesktopManagerInternal@@PEAUISwitchThumbnailDeviceManager@@PEAUIApplicationViewCollection@@PEAUIImmersiveSettingsCache@@AEAUCRect@Geometry@@AEAPEAUHMONITOR__@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VVirtualDesktopGestureWindow@@@12@$$QEAPEAUIVirtualDesktopManagerInternal@@$$QEAPEAUISwitchThumbnailDeviceManager@@$$QEAPEAUIApplicationViewCollection@@$$QEAPEAUIImmersiveSettingsCache@@AEAUCRect@Geometry@@AEAPEAUHMONITOR__@@@Z @ 0x1802AD720 (--$Make@VVirtualDesktopGestureWindow@@PEAUIVirtualDesktopManagerInternal@@PEAUISwitchThumbnailDe.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@QEAA@XZ @ 0x180072748 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=13
VirtualDesktopGestureWindow *__fastcall VirtualDesktopGestureWindow::VirtualDesktopGestureWindow(
        VirtualDesktopGestureWindow *this,
        struct IVirtualDesktopManagerInternal *a2,
        struct ISwitchThumbnailDeviceManager *a3,
        struct IApplicationViewCollection *a4,
        struct IImmersiveSettingsCache *a5,
        const struct tagRECT *a6,
        HMONITOR a7)
{
  int v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v14; // [rsp+58h] [rbp+10h] BYREF

  *(_QWORD *)this = &ObjectWithClassName::`vftable';
  *((_QWORD *)this + 1) = 0LL;
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>((_QWORD *)this + 2);
  *(_QWORD *)this = &VirtualDesktopGestureWindow::`vftable'{for `CWRLImpWndProc<VirtualDesktopGestureWindow>'};
  *((_QWORD *)this + 2) = &VirtualDesktopGestureWindow::`vftable'{for `Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>'};
  *((_QWORD *)this + 4) = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)this + 4);
  *((_QWORD *)this + 5) = a3;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)this + 5);
  *((_QWORD *)this + 6) = a4;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)this + 6);
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *(struct tagRECT *)((char *)this + 184) = *a6;
  *((_QWORD *)this + 25) = a7;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_BYTE *)this + 224) = 0;
  *((_DWORD *)this + 73) = 0;
  *((_QWORD *)this + 37) = GetTickCount64();
  *((_DWORD *)this + 76) = 0;
  *((_QWORD *)this + 39) = 0LL;
  *((_QWORD *)this + 40) = 0LL;
  v14 = 0;
  v11 = (*(__int64 (__fastcall **)(struct IImmersiveSettingsCache *, __int64, int *))(*(_QWORD *)a5 + 32LL))(
          a5,
          8LL,
          &v14);
  if ( v11 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x3B,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
      (const char *)(unsigned int)v11);
  *((_BYTE *)this + 222) = v14 == 0;
  return this;
}
