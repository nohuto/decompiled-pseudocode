/*
 * XREFs of ??$Make@VVirtualDesktopHotKeyWindow@@PEAUIVirtualDesktopManagerPrivate@@PEAUISwitchThumbnailDeviceManager@@PEAUIApplicationViewCollection@@PEAUIImmersiveSettingsCache@@AEAUCRect@Geometry@@AEAPEAUHMONITOR__@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VVirtualDesktopHotKeyWindow@@@12@$$QEAPEAUIVirtualDesktopManagerPrivate@@$$QEAPEAUISwitchThumbnailDeviceManager@@$$QEAPEAUIApplicationViewCollection@@$$QEAPEAUIImmersiveSettingsCache@@AEAUCRect@Geometry@@AEAPEAUHMONITOR__@@@Z @ 0x1805433E8
 * Callers:
 *     ?AnimateOperation2@VirtualDesktopSwitchAnimator@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchDirection@@W4VirtualDesktopSwitchType@@@Z @ 0x180543760 (-AnimateOperation2@VirtualDesktopSwitchAnimator@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitc.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180034A34 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0VirtualDesktopHotKeyWindow@@QEAA@PEAUIVirtualDesktopManagerInternal@@PEAUISwitchThumbnailDeviceManager@@PEAUIApplicationViewCollection@@PEAUIImmersiveSettingsCache@@AEBUtagRECT@@PEAUHMONITOR__@@@Z @ 0x180545A80 (--0VirtualDesktopHotKeyWindow@@QEAA@PEAUIVirtualDesktopManagerInternal@@PEAUISwitchThumbnailDevi.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::Make<VirtualDesktopHotKeyWindow,IVirtualDesktopManagerPrivate *,ISwitchThumbnailDeviceManager *,IApplicationViewCollection *,IImmersiveSettingsCache *,Geometry::CRect &,HMONITOR__ * &>(
        __int64 a1,
        struct IVirtualDesktopManagerInternal **a2,
        struct ISwitchThumbnailDeviceManager **a3,
        struct IApplicationViewCollection **a4,
        struct IImmersiveSettingsCache **a5,
        struct tagRECT *a6,
        HMONITOR *a7)
{
  void *v11; // rax
  VirtualDesktopHotKeyWindow *v12; // rdi
  void *v14[3]; // [rsp+48h] [rbp-20h] BYREF

  *(_QWORD *)a1 = 0LL;
  v11 = operator new(0x148uLL, (const struct std::nothrow_t *)&std::nothrow);
  v14[0] = v11;
  v14[1] = v11;
  if ( v11 )
  {
    v14[2] = v11;
    v12 = VirtualDesktopHotKeyWindow::VirtualDesktopHotKeyWindow(
            (VirtualDesktopHotKeyWindow *)v11,
            *a2,
            *a3,
            *a4,
            *a5,
            a6,
            *a7);
    if ( *(_QWORD *)a1 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)a1 + 16LL) + 16LL))(*(_QWORD *)a1 + 16LL);
    *(_QWORD *)a1 = v12;
    v14[0] = 0LL;
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(v14);
  return a1;
}
