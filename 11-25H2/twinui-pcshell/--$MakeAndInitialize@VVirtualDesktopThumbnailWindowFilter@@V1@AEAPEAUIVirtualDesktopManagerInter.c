/*
 * XREFs of ??$MakeAndInitialize@VVirtualDesktopThumbnailWindowFilter@@V1@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUITabletModeController@@AEAPEAUIVirtualDesktopNotificationService@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopThumbnailWindowFilter@@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUITabletModeController@@AEAPEAUIVirtualDesktopNotificationService@@@Z @ 0x18049A43C
 * Callers:
 *     ?VirtualDesktopThumbnailWindowFilter_CreateInstance@@YAJPEAUIVirtualDesktopManagerInternal@@PEAUITabletModeController@@PEAUIVirtualDesktopNotificationService@@AEBU_GUID@@PEAPEAX@Z @ 0x18049AF90 (-VirtualDesktopThumbnailWindowFilter_CreateInstance@@YAJPEAUIVirtualDesktopManagerInternal@@PEAU.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180034A34 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800532A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x1800679E8 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0VirtualDesktopThumbnailWindowFilter@@QEAA@XZ @ 0x18049A670 (--0VirtualDesktopThumbnailWindowFilter@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VVirtualDesktopThumbnailWindowFilter@@@WRL@Microsoft@@IEAAKXZ @ 0x18049AAF8 (-InternalRelease@-$ComPtr@VVirtualDesktopThumbnailWindowFilter@@@WRL@Microsoft@@IEAAKXZ.c)
 *     EventRegistrationHelpers::EventListener_IVirtualDesktopNotificationService_IVirtualDesktopNotification_VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration___::Register @ 0x18049ABB0 (EventRegistrationHelpers--EventListener_IVirtualDesktopNotificationService_IVirtual_ea_18049ABB0.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopThumbnailWindowFilter,VirtualDesktopThumbnailWindowFilter,IVirtualDesktopManagerInternal * &,ITabletModeController * &,IVirtualDesktopNotificationService * &>(
        __int64 **a1,
        __int64 *a2,
        __int64 *a3,
        __int64 *a4)
{
  VirtualDesktopThumbnailWindowFilter *v8; // rax
  unsigned int v9; // ebx
  __int64 *v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rbx
  int v13; // eax
  volatile int *v14; // rdx
  int v16[2]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  void *v18; // [rsp+50h] [rbp+8h] BYREF

  *a1 = 0LL;
  v8 = (VirtualDesktopThumbnailWindowFilter *)operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
  *(_QWORD *)v16 = v8;
  v18 = v8;
  if ( v8 )
  {
    v10 = (__int64 *)VirtualDesktopThumbnailWindowFilter::VirtualDesktopThumbnailWindowFilter(v8);
    v18 = v10;
    *(_QWORD *)v16 = 0LL;
    v11 = *a4;
    v12 = *a3;
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=(v10 + 3, *a2);
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=(v10 + 4, v12);
    v13 = EventRegistrationHelpers::EventListener_IVirtualDesktopNotificationService_IVirtualDesktopNotification_VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration___::Register(
            v10 + 6,
            v11);
    v9 = v13;
    if ( v13 >= 0 )
    {
      if ( v10 )
        Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)((char *)v10 + 20), v14);
      *a1 = v10;
      Microsoft::WRL::ComPtr<VirtualDesktopThumbnailWindowFilter>::InternalRelease(&v18);
      v9 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x7E,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopthumbnailwindowfilter.cpp",
        (const char *)(unsigned int)v13);
      Microsoft::WRL::ComPtr<VirtualDesktopThumbnailWindowFilter>::InternalRelease(&v18);
    }
  }
  else
  {
    v9 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>((void **)v16);
  return v9;
}
