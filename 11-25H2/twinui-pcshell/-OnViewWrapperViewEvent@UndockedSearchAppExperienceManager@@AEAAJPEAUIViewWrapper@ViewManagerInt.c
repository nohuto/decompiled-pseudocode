/*
 * XREFs of ?OnViewWrapperViewEvent@UndockedSearchAppExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x18024A260
 * Callers:
 *     <none>
 * Callees:
 *     ?OnViewCreated@UndockedSearchAppExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180012520 (-OnViewCreated@UndockedSearchAppExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shel.c)
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?OnViewConsolidationRequested@UndockedSearchAppExperienceManager@@QEAAJXZ @ 0x1800159CC (-OnViewConsolidationRequested@UndockedSearchAppExperienceManager@@QEAAJXZ.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18002EB20 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18006C670 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?copy_from_abi@winrt@@YAXAEAUIUnknown@Foundation@Windows@1@PEAX@Z @ 0x1800A9A00 (-copy_from_abi@winrt@@YAXAEAUIUnknown@Foundation@Windows@1@PEAX@Z.c)
 *     ??$UndockedSearchAppExperienceManager_OnViewWrapperViewEvent@AEAW4ViewEventType@ViewManagerInterop@Shell@Internal@Windows@@@SearchAppExperienceManagerTelemetry@@SAXAEAW4ViewEventType@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801F80CC (--$UndockedSearchAppExperienceManager_OnViewWrapperViewEvent@AEAW4ViewEventType@ViewManagerInter.c)
 *     ?UndockedSearchAppExperienceManager_OnWindowChanged@SearchAppExperienceManagerTelemetry@@SAXXZ @ 0x18022E084 (-UndockedSearchAppExperienceManager_OnWindowChanged@SearchAppExperienceManagerTelemetry@@SAXXZ.c)
 *     ??$InvokeAll@PEAVUndockedSearchAppExperienceManager@@UWindowId@UI@Windows@@@?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@UWindowId@UI@5@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVUndockedSearchAppExperienceManager@@UWindowId@UI@Windows@@@Z @ 0x180241220 (--$InvokeAll@PEAVUndockedSearchAppExperienceManager@@UWindowId@UI@Windows@@@-$EventSource@U-$ITy.c)
 *     ?OnViewRequestNavigate@UndockedSearchAppExperienceManager@@AEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180249D64 (-OnViewRequestNavigate@UndockedSearchAppExperienceManager@@AEAAJPEAUIPropertySet@Collections@Fou.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?VisibilityRevoked@?$consume_Windows_Internal_Shell_Desktop_ViewManagerInterop_IViewVisibilityOverride@UIViewVisibilityOverride@ViewManagerInterop@Desktop@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180351138 (-VisibilityRevoked@-$consume_Windows_Internal_Shell_Desktop_ViewManagerInterop_IViewVisibilityOv.c)
 *     ?OnViewDestroyed@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x1803ADFE4 (-OnViewDestroyed@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_46485871@@@details@wil@@QEAA_NXZ @ 0x1803B2380 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_46485871@@@details@wil@@QEAA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall UndockedSearchAppExperienceManager::OnViewWrapperViewEvent(
        ExperienceManagerUtils **this,
        struct IUnknown *a2,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *a3)
{
  int v6; // eax
  unsigned int v7; // esi
  __int64 v9; // rcx
  __int64 (__fastcall *v10)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, struct Windows::Foundation::Collections::IPropertySet **); // rbx
  int v11; // eax
  unsigned int v12; // ebx
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v13; // rdx
  __int64 v14; // rax
  void *v15; // r8
  int v16; // [rsp+20h] [rbp-20h] BYREF
  void (__fastcall ***v17)(_QWORD, void *, struct Windows::Foundation::Collections::IPropertySet **); // [rsp+28h] [rbp-18h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v18; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]

  v16 = 0;
  v6 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, int *))(*(_QWORD *)a3 + 48LL))(
         a3,
         &v16);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x718,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
      (const char *)(unsigned int)v6);
    return v7;
  }
  SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_OnViewWrapperViewEvent<enum Windows::Internal::Shell::ViewManagerInterop::ViewEventType &>(&v16);
  if ( v16 )
  {
    switch ( v16 )
    {
      case 2:
        v18 = 0LL;
        v10 = *(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, struct Windows::Foundation::Collections::IPropertySet **))(*(_QWORD *)a3 + 56LL);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v18);
        v11 = v10(a3, &v18);
        v12 = v11;
        if ( v11 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x725,
            (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
            (const char *)(unsigned int)v11);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v18);
          return v12;
        }
        UndockedSearchAppExperienceManager::OnViewRequestNavigate((UndockedSearchAppExperienceManager *)this, v18);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v18);
        break;
      case 35:
        UndockedSearchAppExperienceManager::OnViewConsolidationRequested((UndockedSearchAppExperienceManager *)this);
        break;
      case 4:
        if ( this[7] == (ExperienceManagerUtils *)a2 )
          UndockedSearchAppExperienceManager::OnViewDestroyed((UndockedSearchAppExperienceManager *)this);
        break;
      case 6:
        SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_OnWindowChanged(v9);
        if ( SHIsSameObject((struct IUnknown *)this[7], a2) )
        {
          v14 = ExperienceManagerUtils::WindowFromViewWrapper(this[7], v13);
          Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,Windows::UI::WindowId>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<UndockedSearchAppExperienceManager *,Windows::UI::WindowId>(
            (__int64)(this + 86),
            (__int64)this,
            v14);
        }
        break;
      default:
        if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_46485871>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_46485871>::GetImpl'::`2'::impl)
          && v16 == 7
          && a2 )
        {
          v17 = 0LL;
          winrt::copy_from_abi((winrt *)&v17, a2, v15);
          v18 = 0LL;
          if ( v17 )
          {
            (**v17)(
              v17,
              &winrt::impl::guid_v<winrt::Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewVisibilityOverride>,
              &v18);
            if ( v18 )
              *((_BYTE *)this + 898) = winrt::impl::consume_Windows_Internal_Shell_Desktop_ViewManagerInterop_IViewVisibilityOverride<winrt::Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewVisibilityOverride>::VisibilityRevoked(&v18);
          }
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v18);
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v17);
        }
        break;
    }
  }
  else
  {
    UndockedSearchAppExperienceManager::OnViewCreated(
      (UndockedSearchAppExperienceManager *)this,
      (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)a2);
  }
  return 0LL;
}
