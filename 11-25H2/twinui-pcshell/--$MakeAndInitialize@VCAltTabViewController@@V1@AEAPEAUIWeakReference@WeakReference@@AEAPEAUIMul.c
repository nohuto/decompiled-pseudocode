/*
 * XREFs of ??$MakeAndInitialize@VCAltTabViewController@@V1@AEAPEAUIWeakReference@WeakReference@@AEAPEAUIMultitaskingViewManagerInternal@@AEAPEAUIApplicationViewSwitcher@@AEAPEAUIImmersiveAppCrusher@@AEAPEAUIApplicationViewCollection@@@Details@WRL@Microsoft@@YAJPEAPEAVCAltTabViewController@@AEAPEAUIWeakReference@WeakReference@@AEAPEAUIMultitaskingViewManagerInternal@@AEAPEAUIApplicationViewSwitcher@@AEAPEAUIImmersiveAppCrusher@@AEAPEAUIApplicationViewCollection@@@Z @ 0x1804A5198
 * Callers:
 *     ?CAltTabViewController_CreateInstance@@YAJPEAUIWeakReference@WeakReference@@PEAUIMultitaskingViewManagerInternal@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUIApplicationViewCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x1804A54F0 (-CAltTabViewController_CreateInstance@@YAJPEAUIWeakReference@WeakReference@@PEAUIMultitaskingVie.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180034A34 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800532A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCMultitaskingViewControllerBase@@@WRL@Microsoft@@QEAA@XZ @ 0x1804A52C8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCMultitaskingViewControllerBase@@@WRL.c)
 *     ?InternalRelease@?$ComPtr@VCAltTabViewController@@@WRL@Microsoft@@IEAAKXZ @ 0x1804A55A4 (-InternalRelease@-$ComPtr@VCAltTabViewController@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@CAltTabViewController@@QEAAJPEAUIWeakReference@WeakReference@@PEAUIMultitaskingViewManagerInternal@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUIApplicationViewCollection@@@Z @ 0x1804A57C0 (-RuntimeClassInitialize@CAltTabViewController@@QEAAJPEAUIWeakReference@WeakReference@@PEAUIMulti.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CAltTabViewController,CAltTabViewController,WeakReference::IWeakReference * &,IMultitaskingViewManagerInternal * &,IApplicationViewSwitcher * &,IImmersiveAppCrusher * &,IApplicationViewCollection * &>(
        _QWORD *a1,
        struct IWeakReference **a2,
        struct IMultitaskingViewManagerInternal **a3,
        struct IApplicationViewSwitcher **a4,
        struct IImmersiveAppCrusher **a5,
        struct IApplicationViewCollection **a6)
{
  void *v10; // rax
  _QWORD *v11; // rbx
  int v12; // edi
  struct IApplicationViewSwitcher *v13; // r9
  struct IMultitaskingViewManagerInternal *v14; // r8
  volatile int *v15; // rdx
  void *v17; // [rsp+30h] [rbp-28h] BYREF
  _QWORD *v18; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v10 = operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
  v17 = v10;
  v11 = v10;
  if ( v10 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CMultitaskingViewControllerBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CMultitaskingViewControllerBase>(v10);
    v17 = 0LL;
    *v11 = &CAltTabViewController::`vftable'{for `IMultitaskingViewController'};
    v11[1] = &CAltTabViewController::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IFrameInteractionEvents,ISwitchItemController,IDismissAnimationController>'};
    v11[2] = &CAltTabViewController::`vftable'{for `ISwitchItemController'};
    v11[3] = &CPPIAllUpViewController::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IDismissAnimationController>'};
    v11[15] = 0LL;
    v11[16] = 0LL;
    v13 = *a4;
    v14 = *a3;
    v18 = v11;
    v12 = CAltTabViewController::RuntimeClassInitialize((CAltTabViewController *)v11, *a2, v14, v13, *a5, *a6);
    if ( v12 >= 0 )
    {
      Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)((char *)v11 + 116), v15);
      *a1 = v11;
      Microsoft::WRL::ComPtr<CAltTabViewController>::InternalRelease(&v18);
      v12 = 0;
    }
    else
    {
      Microsoft::WRL::ComPtr<CAltTabViewController>::InternalRelease(&v18);
    }
  }
  else
  {
    v12 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v17);
  return (unsigned int)v12;
}
