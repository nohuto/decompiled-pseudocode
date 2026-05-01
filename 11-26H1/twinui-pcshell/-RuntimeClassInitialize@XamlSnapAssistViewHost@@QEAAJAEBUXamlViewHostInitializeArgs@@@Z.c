/*
 * XREFs of ?RuntimeClassInitialize@XamlSnapAssistViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z @ 0x1806A9D4C
 * Callers:
 *     ??$MakeAndInitialize@VXamlSnapAssistViewHost@@V1@AEBUXamlViewHostInitializeArgs@@@Details@WRL@Microsoft@@YAJPEAPEAVXamlSnapAssistViewHost@@AEBUXamlViewHostInitializeArgs@@@Z @ 0x1802B1BB0 (--$MakeAndInitialize@VXamlSnapAssistViewHost@@V1@AEBUXamlViewHostInitializeArgs@@@Details@WRL@Mi.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180052CE8 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180054B64 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ @ 0x180084674 (-InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ.c)
 *     ?__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z @ 0x18009B288 (-__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z.c)
 *     ??$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@@YAXPE$ADVItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x18009D964 (--$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@Composabl.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_WTMPublic@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800B9B04 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_WTMPublic@@@details@wil@@QEAAX_NW4Reporti.c)
 *     ?AppViewDataSourceAdapter_CreateInstance@@YAJW4DesktopSwitcherDataSourceScopeOptions@@PEAUIApplicationViewCollection@@PEAUIApplicationViewIconLoader@@PEAUIImmersiveShellHookService@@PEAUIInspectable@@4PEAPEAUIAppViewDataSourceAdapter@@@Z @ 0x180156940 (-AppViewDataSourceAdapter_CreateInstance@@YAJW4DesktopSwitcherDataSourceScopeOptions@@PEAUIAppli.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x1801A2AD0 (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     ??0DesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@QE$AAA@XZ @ 0x18021B034 (--0DesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@QE$AAA@XZ.c)
 *     ??$convert_from_abi@UISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@@wil@@YA?AUISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@PEAUIUnknown@@@Z @ 0x1804AB0E0 (--$convert_from_abi@UISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@.c)
 *     EventRegistrationHelpers::EventListener_IVirtualDesktopNotificationService_IVirtualDesktopNotification_VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration___::Register_1 @ 0x1806A9BC8 (EventRegistrationHelpers--EventListener_IVirtualDesktopNotificationService_IVirtual_ea_1806A9BC8.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall XamlSnapAssistViewHost::RuntimeClassInitialize(
        XamlSnapAssistViewHost *this,
        const struct XamlViewHostInitializeArgs *a2)
{
  CObjectWithThreadUseDetection *v4; // rcx
  int inited; // eax
  __int64 v6; // rdx
  __int64 v7; // r8
  void **v8; // r9
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 (__fastcall ***v11)(_QWORD, __int64, __int64 *); // rbx
  __int64 v12; // r14
  int v13; // ebx
  char v14; // r8
  __int64 **v15; // r14
  int Instance; // eax
  __int64 *v17; // rcx
  __int64 v18; // rax
  int v19; // eax
  __int64 *v20; // rax
  __int64 v21; // rdx
  const char *v22; // r9
  __int64 result; // rax
  int v24; // [rsp+20h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  struct IUnknown *v26; // [rsp+70h] [rbp+8h] BYREF
  __int64 (__fastcall ***v27)(_QWORD, __int64, __int64 *); // [rsp+80h] [rbp+18h] BYREF
  __int64 v28; // [rsp+88h] [rbp+20h] BYREF

  v4 = (XamlSnapAssistViewHost *)((char *)this + 32);
  try
  {
    inited = CObjectWithThreadUseDetection::InitApartmentId(v4);
    if ( inited < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xC0,
        (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlsnapassistviewhost.cpp",
        (const char *)(unsigned int)inited,
        v24);
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 11, *(_QWORD *)a2);
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 12, *((_QWORD *)a2 + 5));
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 32, *((_QWORD *)a2 + 6));
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 33, *((_QWORD *)a2 + 4));
    v9 = *((_QWORD *)a2 + 9);
    v10 = *((_QWORD *)this + 24);
    *((_QWORD *)this + 24) = v9;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    v27 = 0LL;
    v11 = (__int64 (__fastcall ***)(_QWORD, __int64, __int64 *))Windows::Internal::Shell::Multitasking::Desktop::DesktopThumbnailDevice::DesktopThumbnailDevice(
                                                                  v9,
                                                                  v6,
                                                                  v7,
                                                                  v8);
    v27 = v11;
    v12 = __abi_winrt_cast_to(
            0,
            v11,
            (__int64)&_uuidof__AUIDesktopThumbnailDevice_Desktop_Multitasking_Shell_Internal_Windows__);
    v28 = v12;
    __abi_winrt_ptr_assign((_QWORD *)this + 31, v12);
    __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v12);
    __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>((__int64)v11);
    v27 = (__int64 (__fastcall ***)(_QWORD, __int64, __int64 *))*((_QWORD *)this + 31);
    v13 = (int)v27;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v27);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_WTMPublic>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_WTMPublic>::GetImpl'::`2'::impl,
      1u,
      v14);
    v15 = (__int64 **)((char *)this + 280);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 35);
    Instance = AppViewDataSourceAdapter_CreateInstance(3, *((_QWORD *)a2 + 2), *((_QWORD *)a2 + 7));
    if ( Instance < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xD1,
        (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlsnapassistviewhost.cpp",
        (const char *)(unsigned int)Instance,
        v13);
    v26 = 0LL;
    v17 = *v15;
    v18 = **v15;
    v26 = 0LL;
    v19 = (*(__int64 (__fastcall **)(__int64 *, GUID *, struct IUnknown **))(v18 + 24))(
            v17,
            &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
            &v26);
    if ( v19 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xD4,
        (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlsnapassistviewhost.cpp",
        (const char *)(unsigned int)v19,
        v13);
    v20 = (__int64 *)wil::convert_from_abi<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataSource>(
                       (winrt *)&v28,
                       v26);
    winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this + 29, v20);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v28);
    v21 = *((_QWORD *)a2 + 13);
    if ( v21 )
      EventRegistrationHelpers::EventListener_IVirtualDesktopNotificationService_IVirtualDesktopNotification_VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration___::Register_1(
        (_QWORD *)this + 82,
        v21);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v26);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v27);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xDE,
                           (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlsnapassistviewhost.cpp",
                           v22);
  }
  return result;
}
