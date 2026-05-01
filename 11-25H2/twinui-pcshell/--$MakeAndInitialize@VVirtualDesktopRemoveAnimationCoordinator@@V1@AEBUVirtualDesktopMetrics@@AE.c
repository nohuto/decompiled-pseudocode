/*
 * XREFs of ??$MakeAndInitialize@VVirtualDesktopRemoveAnimationCoordinator@@V1@AEBUVirtualDesktopMetrics@@AEAHAEAPEAUISwitchThumbnailFactory@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopRemoveAnimationCoordinator@@AEBUVirtualDesktopMetrics@@AEAHAEAPEAUISwitchThumbnailFactory@@@Z @ 0x1804CF628
 * Callers:
 *     ?VirtualDesktopRemoveAnimationCoordinator_CreateInstance@@YAJPEAUISwitchThumbnailFactory@@AEBUVirtualDesktopMetrics@@HAEBU_GUID@@PEAPEAX@Z @ 0x1804CFC10 (-VirtualDesktopRemoveAnimationCoordinator_CreateInstance@@YAJPEAUISwitchThumbnailFactory@@AEBUVi.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180034A34 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800532A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VSwitchItemCloseAnimationCoordinator@@@WRL@Microsoft@@IEAAKXZ @ 0x1804C550C (-InternalRelease@-$ComPtr@VSwitchItemCloseAnimationCoordinator@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0VirtualDesktopRemoveAnimationCoordinator@@QEAA@XZ @ 0x1804CF6F0 (--0VirtualDesktopRemoveAnimationCoordinator@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@VirtualDesktopRemoveAnimationCoordinator@@QEAAJAEBUVirtualDesktopMetrics@@HPEAUISwitchThumbnailFactory@@@Z @ 0x1804CFAE8 (-RuntimeClassInitialize@VirtualDesktopRemoveAnimationCoordinator@@QEAAJAEBUVirtualDesktopMetrics.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopRemoveAnimationCoordinator,VirtualDesktopRemoveAnimationCoordinator,VirtualDesktopMetrics const &,int &,ISwitchThumbnailFactory * &>(
        VirtualDesktopRemoveAnimationCoordinator **a1,
        const struct VirtualDesktopMetrics *a2,
        int *a3,
        struct ISwitchThumbnailFactory **a4)
{
  void *v8; // rax
  int v9; // edi
  VirtualDesktopRemoveAnimationCoordinator *v10; // rbx
  volatile int *v11; // rdx
  void *v13; // [rsp+20h] [rbp-28h] BYREF
  VirtualDesktopRemoveAnimationCoordinator *v14; // [rsp+50h] [rbp+8h] BYREF

  *a1 = 0LL;
  v8 = operator new(0x2F0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v13 = v8;
  v14 = (VirtualDesktopRemoveAnimationCoordinator *)v8;
  if ( v8 )
  {
    v10 = VirtualDesktopRemoveAnimationCoordinator::VirtualDesktopRemoveAnimationCoordinator((VirtualDesktopRemoveAnimationCoordinator *)v8);
    v14 = v10;
    v13 = 0LL;
    v9 = VirtualDesktopRemoveAnimationCoordinator::RuntimeClassInitialize(v10, a2, *a3, *a4);
    if ( v9 >= 0 )
    {
      if ( v10 )
        Microsoft::WRL::Details::SafeUnknownIncrementReference(
          (VirtualDesktopRemoveAnimationCoordinator *)((char *)v10 + 244),
          v11);
      *a1 = v10;
      Microsoft::WRL::ComPtr<SwitchItemCloseAnimationCoordinator>::InternalRelease((__int64 *)&v14);
      v9 = 0;
    }
    else
    {
      Microsoft::WRL::ComPtr<SwitchItemCloseAnimationCoordinator>::InternalRelease((__int64 *)&v14);
    }
  }
  else
  {
    v9 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v13);
  return (unsigned int)v9;
}
