/*
 * XREFs of ??$MakeAndInitialize@VVirtualDesktopSwitchAnimator@@V1@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopAnimationSyncNotificationServicePrivate@@AEAPEAUIMultitaskingViewVisibilityService@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopSwitchAnimator@@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopAnimationSyncNotificationServicePrivate@@AEAPEAUIMultitaskingViewVisibilityService@@@Z @ 0x1801DBEF0
 * Callers:
 *     ?VirtualDesktopSwitchAnimator_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopAnimationSyncNotificationServicePrivate@@PEAUIMultitaskingViewVisibilityService@@AEBU_GUID@@PEAPEAX@Z @ 0x1801DBDFC (-VirtualDesktopSwitchAnimator_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtual.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180034A34 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800532A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VAltEscHotkeyHandler@@@WRL@Microsoft@@IEAAKXZ @ 0x1801DBEC8 (-InternalRelease@-$ComPtr@VAltEscHotkeyHandler@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0VirtualDesktopSwitchAnimator@@QEAA@XZ @ 0x1805434D0 (--0VirtualDesktopSwitchAnimator@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@VirtualDesktopSwitchAnimator@@QEAAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopAnimationSyncNotificationServicePrivate@@PEAUIMultitaskingViewVisibilityService@@@Z @ 0x1805442E0 (-RuntimeClassInitialize@VirtualDesktopSwitchAnimator@@QEAAJPEAUIVirtualDesktopManagerPrivate@@PE.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopSwitchAnimator,VirtualDesktopSwitchAnimator,IVirtualDesktopManagerPrivate * &,IVirtualDesktopAnimationSyncNotificationServicePrivate * &,IMultitaskingViewVisibilityService * &>(
        volatile signed __int64 **a1,
        struct IVirtualDesktopManagerPrivate **a2,
        struct IVirtualDesktopAnimationSyncNotificationServicePrivate **a3,
        struct IMultitaskingViewVisibilityService **a4)
{
  VirtualDesktopSwitchAnimator *v8; // rax
  volatile signed __int64 *v10; // rbx
  volatile int *v11; // rdx
  int v12; // edi
  signed __int64 v13; // rax
  signed __int64 v14; // rtt
  void *v15; // [rsp+20h] [rbp-28h] BYREF
  void *v16; // [rsp+50h] [rbp+8h] BYREF

  *a1 = 0LL;
  v8 = (VirtualDesktopSwitchAnimator *)operator new(0xE8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v16 = v8;
  if ( !v8 )
    return 2147942414LL;
  v10 = (volatile signed __int64 *)VirtualDesktopSwitchAnimator::VirtualDesktopSwitchAnimator(v8);
  v16 = (void *)v10;
  v15 = 0LL;
  v12 = VirtualDesktopSwitchAnimator::RuntimeClassInitialize((VirtualDesktopSwitchAnimator *)v10, *a2, *a3, *a4);
  if ( v12 >= 0 )
  {
    if ( v10 )
    {
      v13 = *((_QWORD *)v10 + 5);
      while ( v13 >= 0 )
      {
        if ( (_DWORD)v13 != 0x7FFFFFFF )
        {
          v14 = v13;
          v13 = _InterlockedCompareExchange64(v10 + 5, v13 + 1, v13);
          if ( v14 != v13 )
            continue;
        }
        goto LABEL_11;
      }
      Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v13 + 16), v11);
    }
LABEL_11:
    *a1 = v10;
    v12 = 0;
  }
  Microsoft::WRL::ComPtr<AltEscHotkeyHandler>::InternalRelease((__int64 *)&v16);
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v15);
  return (unsigned int)v12;
}
