/*
 * XREFs of ??$MakeAndInitialize@VCAsyncSwitchItemController@@UISwitchItemController@@AEAPEAU2@@Details@WRL@Microsoft@@YAJPEAPEAUISwitchItemController@@AEAPEAU3@@Z @ 0x1804A74A0
 * Callers:
 *     ?RuntimeClassInitialize@CMultitaskingViewFrame@@QEAAJW4MultitaskingViewControlFlags@@AEBUMultitaskingViewConfig@@PEAUISwitchThumbnailDeviceManager@@PEAUIElementFactory@@PEAUISwitchItemController@@PEAUIVirtualDesktopElementFactory@@PEAUIFrameLevelAnimationCoordinator@@@Z @ 0x1804A9AF8 (-RuntimeClassInitialize@CMultitaskingViewFrame@@QEAAJW4MultitaskingViewControlFlags@@AEBUMultita.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180034A34 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x1800679E8 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UISwitchItemController@@@WRL@Microsoft@@QEAA@XZ @ 0x1804A7798 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UISwitchItemController@@@WRL@Microsoft.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CAsyncSwitchItemController,ISwitchItemController,ISwitchItemController * &>(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 *v4; // rax
  __int64 *v5; // rbx
  unsigned int v6; // edi
  __int64 *v8; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v4 = (__int64 *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  v8 = v4;
  if ( v4 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISwitchItemController>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISwitchItemController>(v4);
    *v5 = (__int64)&CAsyncSwitchItemController::`vftable';
    v5[2] = 0LL;
    v8 = 0LL;
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=(v5 + 2, *a2);
    v6 = (*(__int64 (__fastcall **)(__int64 *, GUID *, _QWORD *))*v5)(
           v5,
           &GUID_b6197d31_183c_4b40_942b_308a66f93fde,
           a1);
    (*(void (__fastcall **)(__int64 *))(*v5 + 16))(v5);
  }
  else
  {
    v6 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>((void **)&v8);
  return v6;
}
