/*
 * XREFs of ?ShouldIncludeView@AppViewDataSourceAdapter@@MEAA_NPEAUIApplicationView@@@Z @ 0x1800F20A0
 * Callers:
 *     ?InitializeAppViewItems@AppViewDataSourceAdapter@@AEAAXXZ @ 0x1800F1CE8 (-InitializeAppViewItems@AppViewDataSourceAdapter@@AEAAXXZ.c)
 * Callees:
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180047CDC (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_WTMPublic@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800B9B04 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_WTMPublic@@@details@wil@@QEAAX_NW4Reporti.c)
 *     ?IsTabWindowOwner@@YA_NPEAUIApplicationView@@@Z @ 0x1800F1CB8 (-IsTabWindowOwner@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?IsApplicationViewHolographic@HolographicViewHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x1800F21F4 (-IsApplicationViewHolographic@HolographicViewHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?ShouldIncludeView@AppViewDataSourceAdapterBase@@MEAA_NPEAUIApplicationView@@@Z @ 0x1800F2570 (-ShouldIncludeView@AppViewDataSourceAdapterBase@@MEAA_NPEAUIApplicationView@@@Z.c)
 *     ??$try_com_query@UIWin32ApplicationView@@AEAPEAUIApplicationView@@@wil@@YA?AV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@0@AEAPEAUIApplicationView@@@Z @ 0x1801BF714 (--$try_com_query@UIWin32ApplicationView@@AEAPEAUIApplicationView@@@wil@@YA-AV-$com_ptr_t@UIWin32.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ID45035559@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18027E234 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ID45035559@@@details@wil@@QEAAX_NW4Report.c)
 *     ?GetTabTearOutSupportedForWindow@?$consume_Windows_Internal_UI_Shell_IWindowTabExtension@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@@impl@winrt@@QEBA@_K@Z @ 0x1806C2524 (-GetTabTearOutSupportedForWindow@-$consume_Windows_Internal_UI_Shell_IWindowTabExtension@UIWindo.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall AppViewDataSourceAdapter::ShouldIncludeView(
        AppViewDataSourceAdapter *this,
        struct IApplicationView *a2)
{
  __int64 v4; // rdx
  struct IApplicationView *v5; // rdx
  int v6; // eax
  HWND WindowForView; // rax
  char v8; // r8
  struct IApplicationView *v10; // rdx
  HWND v11; // rax
  HANDLE PropW; // rax
  struct IApplicationView *v13; // [rsp+48h] [rbp+10h] BYREF
  int v14; // [rsp+50h] [rbp+18h] BYREF
  __int64 v15; // [rsp+58h] [rbp+20h] BYREF

  v13 = a2;
  if ( HolographicViewHelpers::IsApplicationViewHolographic(a2, a2) )
    return 0;
  LOBYTE(v4) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID45035559>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_ID45035559>::GetImpl'::`2'::impl,
    v4);
  if ( (*((_BYTE *)this + 184) & 8) == 0 )
  {
    wil::try_com_query<IWin32ApplicationView,IApplicationView * &>(&v15, &v13);
    if ( v15 )
    {
      v14 = 0;
      if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v15 + 40LL))(v15, &v14) >= 0 && v14 == 1 )
      {
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v15);
        return 0;
      }
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v15);
  }
  v6 = *((_DWORD *)this + 46);
  if ( (v6 & 2) == 0 )
  {
    if ( (v6 & 1) == 0
      || !IsTabWindowOwner((__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))a2, v5) )
    {
      return AppViewDataSourceAdapterBase::ShouldIncludeView(this, a2);
    }
    return 0;
  }
  WindowForView = (HWND)ApplicationViewHelpers::GetWindowForView(
                          (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))a2,
                          v5);
  if ( GetPropW(WindowForView, (LPCWSTR)0xA921) )
    return 0;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_WTMPublic>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_WTMPublic>::GetImpl'::`2'::impl,
    1u,
    v8);
  if ( *((_QWORD *)this + 30) )
  {
    v11 = (HWND)ApplicationViewHelpers::GetWindowForView(
                  (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))a2,
                  v10);
    if ( v11 )
    {
      PropW = GetPropW(v11, (LPCWSTR)0xA920);
      if ( PropW )
      {
        if ( !(unsigned __int8)winrt::impl::consume_Windows_Internal_UI_Shell_IWindowTabExtension<winrt::Windows::Internal::UI::Shell::IWindowTabExtension>::GetTabTearOutSupportedForWindow(
                                 (char *)this + 240,
                                 (unsigned int)PropW) )
          return 0;
      }
    }
  }
  return AppViewDataSourceAdapterBase::ShouldIncludeView(this, a2);
}
