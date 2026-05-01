/*
 * XREFs of ??0VirtualDesktopGestureContext@@QEAA@UtagSIZE@@PEAUIVirtualDesktopManagerInternal@@PEAUISwitchThumbnailDeviceManager@@PEAUIApplicationViewCollection@@PEAUIImmersiveSettingsCache@@PEAUIImmersiveMonitorManager@@@Z @ 0x180538700
 * Callers:
 *     ?InitializeContext@VirtualDesktopGestureHandler@@AEAAJI@Z @ 0x18053D064 (-InitializeContext@VirtualDesktopGestureHandler@@AEAAJI@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

VirtualDesktopGestureContext *__fastcall VirtualDesktopGestureContext::VirtualDesktopGestureContext(
        VirtualDesktopGestureContext *this,
        struct tagSIZE a2,
        struct IVirtualDesktopManagerInternal *a3,
        struct ISwitchThumbnailDeviceManager *a4,
        struct IApplicationViewCollection *a5,
        struct IImmersiveSettingsCache *a6,
        struct IImmersiveMonitorManager *a7)
{
  VirtualDesktopGestureContext *result; // rax

  *(_QWORD *)this = a3;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)this);
  *((_QWORD *)this + 1) = a4;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)this + 1);
  *((_QWORD *)this + 2) = a5;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)this + 2);
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = a7;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)this + 4);
  *((_QWORD *)this + 5) = a6;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)this + 5);
  *((struct tagSIZE *)this + 6) = a2;
  *((_QWORD *)this + 7) = 0LL;
  *((_WORD *)this + 32) = 0;
  *((_BYTE *)this + 66) = 0;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_DWORD *)this + 41) = 0;
  *((_QWORD *)this + 21) = GetTickCount64();
  result = this;
  *((_DWORD *)this + 45) = 0;
  *((_QWORD *)this + 23) = 0LL;
  return result;
}
