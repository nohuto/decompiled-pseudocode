/*
 * XREFs of ??$MakeAndInitialize@VVirtualDesktopAddAnimationCoordinator@@V1@AEAHAEAPEAUISwitchThumbnailFactory@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopAddAnimationCoordinator@@AEAHAEAPEAUISwitchThumbnailFactory@@@Z @ 0x1804CEE64
 * Callers:
 *     ?VirtualDesktopAddAnimationCoordinator_CreateInstance@@YAJPEAUISwitchThumbnailFactory@@HAEBU_GUID@@PEAPEAX@Z @ 0x1804CF558 (-VirtualDesktopAddAnimationCoordinator_CreateInstance@@YAJPEAUISwitchThumbnailFactory@@HAEBU_GUI.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180034A34 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800532A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VItemAnimationCoordinatorBase@@@WRL@Microsoft@@QEAA@XZ @ 0x1804C4FF0 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VItemAnimationCoordinatorBase@@@WRL@Mi.c)
 *     ?InternalRelease@?$ComPtr@VSwitchItemCloseAnimationCoordinator@@@WRL@Microsoft@@IEAAKXZ @ 0x1804C550C (-InternalRelease@-$ComPtr@VSwitchItemCloseAnimationCoordinator@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@ItemAnimationCoordinatorBase@@QEAAJPEAUISwitchThumbnailFactory@@AEBU_GUID@@@Z @ 0x1804CE0F8 (-RuntimeClassInitialize@ItemAnimationCoordinatorBase@@QEAAJPEAUISwitchThumbnailFactory@@AEBU_GUI.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopAddAnimationCoordinator,VirtualDesktopAddAnimationCoordinator,int &,ISwitchThumbnailFactory * &>(
        _QWORD *a1,
        _DWORD *a2,
        struct ISwitchThumbnailFactory **a3)
{
  _DWORD *v6; // rax
  _DWORD *v7; // rbx
  unsigned int v8; // edi
  struct ISwitchThumbnailFactory *v9; // rdx
  int v10; // eax
  volatile int *v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  _DWORD *v14; // [rsp+40h] [rbp+8h] BYREF
  void *v15; // [rsp+58h] [rbp+20h] BYREF

  *a1 = 0LL;
  v6 = operator new(0x100uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  v15 = v6;
  if ( v6 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ItemAnimationCoordinatorBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ItemAnimationCoordinatorBase>((__int64)v6);
    *(_QWORD *)v7 = &VirtualDesktopAddAnimationCoordinator::`vftable';
    v7[62] = 0;
    v14 = v7;
    v15 = 0LL;
    v9 = *a3;
    v7[62] = *a2;
    v10 = ItemAnimationCoordinatorBase::RuntimeClassInitialize((ItemAnimationCoordinatorBase *)v7, v9, &stru_180787890);
    v8 = v10;
    if ( v10 >= 0 )
    {
      Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v7 + 61), v11);
      *a1 = v7;
      Microsoft::WRL::ComPtr<SwitchItemCloseAnimationCoordinator>::InternalRelease((__int64 *)&v14);
      v8 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8A,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopaddanimationcoordinator.cpp",
        (const char *)(unsigned int)v10);
      Microsoft::WRL::ComPtr<SwitchItemCloseAnimationCoordinator>::InternalRelease((__int64 *)&v14);
    }
  }
  else
  {
    v8 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v15);
  return v8;
}
