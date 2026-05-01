/*
 * XREFs of ??$MakeAndInitialize@VSwitchItemCloseAnimationCoordinator@@V1@AEAPEAUISwitchThumbnailFactory@@AEBU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAVSwitchItemCloseAnimationCoordinator@@AEAPEAUISwitchThumbnailFactory@@AEBU_GUID@@@Z @ 0x1804C4F38
 * Callers:
 *     ?SwitchItemCloseAnimationCoordinator_CreateInstance@@YAJPEAUISwitchThumbnailFactory@@AEBU_GUID@@PEAPEAX@Z @ 0x1804C5670 (-SwitchItemCloseAnimationCoordinator_CreateInstance@@YAJPEAUISwitchThumbnailFactory@@AEBU_GUID@@.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180034A34 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800532A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VItemAnimationCoordinatorBase@@@WRL@Microsoft@@QEAA@XZ @ 0x1804C4FF0 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VItemAnimationCoordinatorBase@@@WRL@Mi.c)
 *     ?InternalRelease@?$ComPtr@VSwitchItemCloseAnimationCoordinator@@@WRL@Microsoft@@IEAAKXZ @ 0x1804C550C (-InternalRelease@-$ComPtr@VSwitchItemCloseAnimationCoordinator@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@ItemAnimationCoordinatorBase@@QEAAJPEAUISwitchThumbnailFactory@@AEBU_GUID@@@Z @ 0x1804CE0F8 (-RuntimeClassInitialize@ItemAnimationCoordinatorBase@@QEAAJPEAUISwitchThumbnailFactory@@AEBU_GUI.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<SwitchItemCloseAnimationCoordinator,SwitchItemCloseAnimationCoordinator,ISwitchThumbnailFactory * &,_GUID const &>(
        _QWORD *a1,
        struct ISwitchThumbnailFactory **a2,
        const struct _GUID *a3)
{
  char *v6; // rax
  char *v7; // rbx
  int v8; // edi
  volatile int *v9; // rdx
  char *v11; // [rsp+40h] [rbp+8h] BYREF
  char *v12; // [rsp+58h] [rbp+20h] BYREF

  *a1 = 0LL;
  v6 = (char *)operator new(0xF8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  v12 = v6;
  if ( v6 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ItemAnimationCoordinatorBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ItemAnimationCoordinatorBase>(v6);
    *(_QWORD *)v7 = &SwitchItemCloseAnimationCoordinator::`vftable';
    v11 = v7;
    v12 = 0LL;
    v8 = ItemAnimationCoordinatorBase::RuntimeClassInitialize((ItemAnimationCoordinatorBase *)v7, *a2, a3);
    if ( v8 >= 0 )
    {
      Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v7 + 244), v9);
      *a1 = v7;
      Microsoft::WRL::ComPtr<SwitchItemCloseAnimationCoordinator>::InternalRelease(&v11);
      v8 = 0;
    }
    else
    {
      Microsoft::WRL::ComPtr<SwitchItemCloseAnimationCoordinator>::InternalRelease(&v11);
    }
  }
  else
  {
    v8 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>((void **)&v12);
  return (unsigned int)v8;
}
