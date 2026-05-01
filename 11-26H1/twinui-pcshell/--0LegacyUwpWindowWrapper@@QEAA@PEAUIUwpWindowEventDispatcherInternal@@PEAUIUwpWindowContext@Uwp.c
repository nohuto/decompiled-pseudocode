/*
 * XREFs of ??0LegacyUwpWindowWrapper@@QEAA@PEAUIUwpWindowEventDispatcherInternal@@PEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUHSTRING__@@W4AppModelKind@WindowManagement@ApplicationModel@56@UUwpWindowContextId@3456@PEAUIWindow@9ApplicationModel@56@UWindowId@9ApplicationModel@56@PEBGW4WindowCreatedType@@_K@Z @ 0x180432D48
 * Callers:
 *     ??$Make@VLegacyUwpWindowWrapper@@PEAVUwpWindowEventDispatcher@@PEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUHSTRING__@@AEAW4AppModelKind@WindowManagement@ApplicationModel@67@AEAUUwpWindowContextId@4567@PEAUIWindow@WindowManagement@ApplicationModel@67@AEAUWindowId@WindowManagement@ApplicationModel@67@AEAY0DF@$$CBGAEAW4WindowCreatedType@@H@Details@WRL@Microsoft@@YA?AV?$ComPtr@VLegacyUwpWindowWrapper@@@12@$$QEAPEAVUwpWindowEventDispatcher@@$$QEAPEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@$$QEAPEAUHSTRING__@@AEAW4AppModelKind@WindowManagement@ApplicationModel@89@AEAUUwpWindowContextId@6789@$$QEAPEAUIWindow@WindowManagement@ApplicationModel@89@AEAUWindowId@WindowManagement@ApplicationModel@89@AEAY0DF@$$CBGAEAW4WindowCreatedType@@$$QEAH@Z @ 0x18029BF3C (--$Make@VLegacyUwpWindowWrapper@@PEAVUwpWindowEventDispatcher@@PEAUIUwpWindowContext@UwpWindowLi.c)
 *     ??$Make@VLegacyUwpWindowWrapper@@PEAVUwpWindowEventDispatcher@@PEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUHSTRING__@@AEBW4AppModelKind@WindowManagement@ApplicationModel@67@AEAUUwpWindowContextId@4567@PEAUIWindow@WindowManagement@ApplicationModel@67@AEAUWindowId@WindowManagement@ApplicationModel@67@PEBGW4WindowCreatedType@@AEA_K@Details@WRL@Microsoft@@YA?AV?$ComPtr@VLegacyUwpWindowWrapper@@@12@$$QEAPEAVUwpWindowEventDispatcher@@$$QEAPEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@$$QEAPEAUHSTRING__@@AEBW4AppModelKind@WindowManagement@ApplicationModel@89@AEAUUwpWindowContextId@6789@$$QEAPEAUIWindow@WindowManagement@ApplicationModel@89@AEAUWindowId@WindowManagement@ApplicationModel@89@$$QEAPEBG$$QEAW4WindowCreatedType@@AEA_K@Z @ 0x18029C118 (--$Make@VLegacyUwpWindowWrapper@@PEAVUwpWindowEventDispatcher@@PEAUIUwpWindowContex_ea_18029C118.c)
 * Callees:
 *     ?Initialize@UwpWindowWrapperBase@@QEAAJPEAUIUwpWindowEventDispatcherInternal@@PEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUHSTRING__@@W4AppModelKind@WindowManagement@ApplicationModel@67@UUwpWindowContextId@4567@PEAUIWindow@WindowManagement@ApplicationModel@67@UWindowId@WindowManagement@ApplicationModel@67@PEBGW4WindowCreatedType@@_K@Z @ 0x1800ED4B0 (-Initialize@UwpWindowWrapperBase@@QEAAJPEAUIUwpWindowEventDispatcherInternal@@PEAUIUwpWindowCont.c)
 *     ??$WindowEventDispatcher_CreatedLegacyWindowWrapper@PEBGPEBGAEAI@ViewManagerInteropTraceLogging@@SAX$$QEAPEBG0AEAI@Z @ 0x18042BEA4 (--$WindowEventDispatcher_CreatedLegacyWindowWrapper@PEBGPEBGAEAI@ViewManagerInteropTraceLogging@.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VUwpWindowWrapperBase@@UILegacyViewWrapper@@@WRL@Microsoft@@QEAA@XZ @ 0x180432C64 (--0-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@VUwpWindowWrapperBase@@UILegacyViewWra.c)
 *     ?LoadQuirksForApp@LegacyUwpWindowWrapper@@AEAAJXZ @ 0x1804332D4 (-LoadQuirksForApp@LegacyUwpWindowWrapper@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall LegacyUwpWindowWrapper::LegacyUwpWindowWrapper(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        __int64 a7,
        int a8,
        __int64 a9,
        int a10,
        __int64 a11)
{
  int v16; // [rsp+20h] [rbp-58h]
  int v17; // [rsp+28h] [rbp-50h]
  int v18; // [rsp+38h] [rbp-40h]
  int v19; // [rsp+48h] [rbp-30h]
  PCWSTR v20; // [rsp+60h] [rbp-18h] BYREF
  PCWSTR StringRawBuffer; // [rsp+80h] [rbp+8h] BYREF

  StringRawBuffer = (PCWSTR)a1;
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,UwpWindowWrapperBase,ILegacyViewWrapper>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,UwpWindowWrapperBase,ILegacyViewWrapper>((_QWORD *)a1);
  *(_QWORD *)a1 = &LegacyUwpWindowWrapper::`vftable';
  *(_QWORD *)(a1 + 8) = &LegacyUwpWindowWrapper::`vftable'{for `INtUserViewWrapper'};
  *(_QWORD *)(a1 + 16) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,UwpWindowWrapperBase,ILegacyViewWrapper>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Shell::ViewManagerInterop::IViewWrapper,Microsoft::WRL::ChainInterfaces<IUwpWindowWrapperInternal,Windows::Internal::Shell::ViewManagerInterop::IWindowWrapper,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewVisibilityOverride,Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewWrapperDesktopExtension,Windows::Internal::Shell::ViewManagerInterop::IViewResourcePolicies,Windows::Internal::Shell::ViewManagerInterop::IClientWindowState,Windows::Internal::Shell::ViewManagerInterop::IViewRecoveryState,IFramedViewWrapper,Microsoft::WRL::FtmBase>'};
  *(_QWORD *)(a1 + 24) = &LegacyUwpWindowWrapper::`vftable'{for `Microsoft::WRL::ChainInterfaces<IUwpWindowWrapperInternal,Windows::Internal::Shell::ViewManagerInterop::IWindowWrapper,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>'};
  *(_QWORD *)(a1 + 32) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,UwpWindowWrapperBase,ILegacyViewWrapper>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewVisibilityOverride,Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewWrapperDesktopExtension,Windows::Internal::Shell::ViewManagerInterop::IViewResourcePolicies,Windows::Internal::Shell::ViewManagerInterop::IClientWindowState,Windows::Internal::Shell::ViewManagerInterop::IViewRecoveryState,IFramedViewWrapper,Microsoft::WRL::FtmBase>'};
  *(_QWORD *)(a1 + 40) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,UwpWindowWrapperBase,ILegacyViewWrapper>::`vftable'{for `Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewWrapperDesktopExtension'};
  *(_QWORD *)(a1 + 48) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,UwpWindowWrapperBase,ILegacyViewWrapper>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Shell::ViewManagerInterop::IViewResourcePolicies,Windows::Internal::Shell::ViewManagerInterop::IClientWindowState,Windows::Internal::Shell::ViewManagerInterop::IViewRecoveryState,IFramedViewWrapper,Microsoft::WRL::FtmBase>'};
  *(_QWORD *)(a1 + 56) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,UwpWindowWrapperBase,ILegacyViewWrapper>::`vftable'{for `Windows::Internal::Shell::ViewManagerInterop::IClientWindowState'};
  *(_QWORD *)(a1 + 64) = &LegacyUwpWindowWrapper::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Shell::ViewManagerInterop::IViewRecoveryState,IFramedViewWrapper,Microsoft::WRL::FtmBase>'};
  *(_QWORD *)(a1 + 72) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,UwpWindowWrapperBase,ILegacyViewWrapper>::`vftable'{for `IFramedViewWrapper'};
  *(_QWORD *)(a1 + 80) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,UwpWindowWrapperBase,ILegacyViewWrapper>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *(_QWORD *)(a1 + 568) = &LegacyUwpWindowWrapper::`vftable'{for `IWeakReferenceSource'};
  *(_QWORD *)(a1 + 576) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,UwpWindowWrapperBase,ILegacyViewWrapper>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ILegacyViewWrapper>'};
  *(_WORD *)(a1 + 600) = 0;
  *(_QWORD *)(a1 + 608) = 0LL;
  *(_DWORD *)(a1 + 616) = 1;
  *(_QWORD *)(a1 + 624) = 1LL;
  *(_QWORD *)(a1 + 632) = 0LL;
  v19 = a10;
  v18 = a8;
  v17 = a6;
  v16 = a5;
  UwpWindowWrapperBase::Initialize(a1 + 8, a2, a3, a4, v16, v17, a7, v18, a9, v19, a11);
  LegacyUwpWindowWrapper::LoadQuirksForApp((LegacyUwpWindowWrapper *)a1);
  StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(a1 + 328), 0LL);
  v20 = WindowsGetStringRawBuffer(*(HSTRING *)(a1 + 320), 0LL);
  ViewManagerInteropTraceLogging::WindowEventDispatcher_CreatedLegacyWindowWrapper<unsigned short const *,unsigned short const *,unsigned int &>(
    &v20,
    &StringRawBuffer,
    (unsigned int *)(a1 + 360));
  return a1;
}
