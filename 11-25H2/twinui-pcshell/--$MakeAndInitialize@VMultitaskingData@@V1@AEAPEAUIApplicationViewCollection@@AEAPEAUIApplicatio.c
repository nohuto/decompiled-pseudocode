/*
 * XREFs of ??$MakeAndInitialize@VMultitaskingData@@V1@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewVisibilityDebouncedNotificationService@@AEAPEAUIVirtualDesktopThumbnailWindowFilter@@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUIVirtualDesktopPinnedApps@@AEAPEAUIVirtualDesktopNotificationService@@AEAPEAUIImmersiveSettingsCache@@AEAPEAUISnapServiceProvider@@AEAPEAUIApplicationViewIconLoader@@AEAW4SwitchItemFilterBehavior@@@Details@WRL@Microsoft@@YAJPEAPEAVMultitaskingData@@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewVisibilityDebouncedNotificationService@@AEAPEAUIVirtualDesktopThumbnailWindowFilter@@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUIVirtualDesktopPinnedApps@@AEAPEAUIVirtualDesktopNotificationService@@AEAPEAUIImmersiveSettingsCache@@AEAPEAUISnapServiceProvider@@AEAPEAUIApplicationViewIconLoader@@AEAW4SwitchItemFilterBehavior@@@Z @ 0x18049B17C
 * Callers:
 *     ?MultitaskingData_CreateInstance@@YAJPEAUIApplicationViewCollection@@PEAUIApplicationViewVisibilityDebouncedNotificationService@@PEAUIVirtualDesktopThumbnailWindowFilter@@PEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopPinnedApps@@PEAUIVirtualDesktopNotificationService@@PEAUIImmersiveSettingsCache@@PEAUISnapServiceProvider@@PEAUIApplicationViewIconLoader@@W4SwitchItemFilterBehavior@@AEBU_GUID@@PEAPEAX@Z @ 0x18049B590 (-MultitaskingData_CreateInstance@@YAJPEAUIApplicationViewCollection@@PEAUIApplicationViewVisibil.c)
 * Callees:
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIImmersiveApplication@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x1800231E8 (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIImmersiveApplication@.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180034A34 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800532A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VMultitaskingData@@@WRL@Microsoft@@IEAAKXZ @ 0x18049B568 (-InternalRelease@-$ComPtr@VMultitaskingData@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@MultitaskingData@@QEAAJPEAUIApplicationViewCollection@@PEAUIApplicationViewVisibilityDebouncedNotificationService@@PEAUIVirtualDesktopThumbnailWindowFilter@@PEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopPinnedApps@@PEAUIVirtualDesktopNotificationService@@PEAUIImmersiveSettingsCache@@PEAUISnapServiceProvider@@PEAUIApplicationViewIconLoader@@W4SwitchItemFilterBehavior@@@Z @ 0x18049B788 (-RuntimeClassInitialize@MultitaskingData@@QEAAJPEAUIApplicationViewCollection@@PEAUIApplicationV.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<MultitaskingData,MultitaskingData,IApplicationViewCollection * &,IApplicationViewVisibilityDebouncedNotificationService * &,IVirtualDesktopThumbnailWindowFilter * &,IVirtualDesktopManagerInternal * &,IVirtualDesktopPinnedApps * &,IVirtualDesktopNotificationService * &,IImmersiveSettingsCache * &,ISnapServiceProvider * &,IApplicationViewIconLoader * &,enum SwitchItemFilterBehavior &>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4,
        _QWORD *a5,
        _QWORD *a6,
        _QWORD *a7,
        _QWORD *a8,
        _QWORD *a9,
        _QWORD *a10,
        _DWORD *a11)
{
  _QWORD *v15; // rax
  _QWORD *v16; // rdi
  int v17; // ebx
  volatile int *v18; // rdx
  void *v20; // [rsp+60h] [rbp-28h] BYREF
  _QWORD *v21; // [rsp+90h] [rbp+8h] BYREF

  *a1 = 0LL;
  v15 = operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  v16 = v15;
  v20 = v15;
  if ( v15 )
  {
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IImmersiveApplication>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IImmersiveApplication>((__int64)v15);
    *v16 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IMultitaskingData>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *v16 = &MultitaskingData::`vftable';
    v16[2] = 0LL;
    v16[3] = 0LL;
    v16[4] = 0LL;
    v16[5] = 0LL;
    v16[6] = 0LL;
    v16[7] = 0LL;
    v16[8] = 0LL;
    v16[9] = 0LL;
    v16[10] = 0LL;
    v21 = v16;
    v20 = 0LL;
    v17 = MultitaskingData::RuntimeClassInitialize(v16, *a2, *a3, *a4, *a5, *a6, *a7, *a8, *a9, *a10, *a11);
    if ( v17 >= 0 )
    {
      Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)((char *)v16 + 12), v18);
      *a1 = v16;
      Microsoft::WRL::ComPtr<MultitaskingData>::InternalRelease(&v21);
      v17 = 0;
    }
    else
    {
      Microsoft::WRL::ComPtr<MultitaskingData>::InternalRelease(&v21);
    }
  }
  else
  {
    v17 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v20);
  return (unsigned int)v17;
}
