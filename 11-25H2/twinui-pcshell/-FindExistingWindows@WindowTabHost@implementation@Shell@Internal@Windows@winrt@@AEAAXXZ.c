/*
 * XREFs of ?FindExistingWindows@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1800F3DF0
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::WindowTabHost::InitializeDataAsync$_ResumeCoro$1 @ 0x18055A320 (winrt--Windows--Internal--Shell--implementation--WindowTabHost--InitializeDataAsync$_ResumeCoro$.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x18005556C (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x180056C00 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationVi.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_WTMPublic@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18005FC84 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_WTMPublic@@@details@wil@@QEAAX_NW4Reporti.c)
 *     ?SyncAllAppWindows@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_KXZ @ 0x180061EFC (-SyncAllAppWindows@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_KXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateTabsForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAAX_K@Z @ 0x1800A9ADC (-UpdateTabsForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAAX_K@Z.c)
 *     ??0?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x1800F44C8 (--0-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@@det.c)
 *     ??9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800F5554 (--9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?GetCurrentPoint@?$consume_Windows_UI_Input_IPointerPointStatics@UIPointerPointStatics@Input@UI@Windows@winrt@@@impl@winrt@@QEBA@I@Z @ 0x18055A934 (-GetCurrentPoint@-$consume_Windows_UI_Input_IPointerPointStatics@UIPointerPointStatics@Input@UI@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::FindExistingWindows(RTL_SRWLOCK *this)
{
  __int64 *Ptr; // rcx
  __int64 v3; // rax
  int v4; // eax
  struct IApplicationView *v5; // rdx
  __int64 (__fastcall ***v6)(ApplicationViewHelpers *, GUID *, __int64 *); // rbx
  unsigned int WindowForView; // esi
  char v8; // r8
  __int64 v9; // r9
  __int64 v10; // [rsp+20h] [rbp-40h] BYREF
  unsigned int v11; // [rsp+28h] [rbp-38h]
  unsigned int v12; // [rsp+30h] [rbp-30h] BYREF
  ApplicationViewHelpers *v13; // [rsp+38h] [rbp-28h] BYREF
  __int64 *v14; // [rsp+40h] [rbp-20h]
  unsigned int v15; // [rsp+48h] [rbp-18h] BYREF
  __int64 v16; // [rsp+50h] [rbp-10h] BYREF
  __int64 *v17; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  __int64 v19; // [rsp+80h] [rbp+20h] BYREF
  RTL_SRWLOCK *v20; // [rsp+88h] [rbp+28h] BYREF
  ApplicationViewHelpers *v21; // [rsp+90h] [rbp+30h] BYREF

  v19 = 0LL;
  Ptr = (__int64 *)this[21].Ptr;
  v3 = *Ptr;
  v19 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v3 + 24))(Ptr, &v19);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x22B,
      (int)"pcshell\\twinui\\windowtabhost\\lib\\windowtabhost.cpp",
      (const char *)(unsigned int)v4,
      v10);
  details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>(
    &v10,
    v19);
  v12 = 0;
  v13 = 0LL;
  v14 = &v10;
  details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v12);
  v15 = v11;
  v16 = 0LL;
  v17 = &v10;
  details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v15);
  while ( v12 != v15 || v14 != v17 )
  {
    v6 = (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))v13;
    v21 = v13;
    if ( v13 )
      (*(void (__fastcall **)(ApplicationViewHelpers *))(*(_QWORD *)v13 + 8LL))(v13);
    WindowForView = ApplicationViewHelpers::GetWindowForView(v6, v5);
    winrt::impl::consume_Windows_UI_Input_IPointerPointStatics<winrt::Windows::UI::Input::IPointerPointStatics>::GetCurrentPoint(
      &this[18],
      &v20,
      WindowForView);
    v21 = 0LL;
    if ( (unsigned __int8)winrt::Windows::Foundation::operator!=(&v20, &v21) )
      winrt::Windows::Internal::Shell::implementation::WindowTabHost::UpdateTabsForWindow(
        (winrt::Windows::Internal::Shell::implementation::WindowTabHost *)this,
        (struct winrt::Windows::System::User *)WindowForView);
    if ( v20 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v20);
    if ( v6 )
      ((void (__fastcall *)(__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *)))(*v6)[2])(v6);
    ++v12;
    details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v12);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v16);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v13);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v10);
  AcquireSRWLockExclusive(this + 77);
  v20 = this + 77;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_WTMPublic>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_WTMPublic>::GetImpl'::`2'::impl,
    1u,
    v8,
    v9);
  winrt::Windows::Internal::Shell::implementation::WindowTabHost::SyncAllAppWindows((winrt::Windows::Internal::Shell::implementation::WindowTabHost *)this);
  if ( this != (RTL_SRWLOCK *)-616LL )
    ReleaseSRWLockExclusive(this + 77);
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
}
