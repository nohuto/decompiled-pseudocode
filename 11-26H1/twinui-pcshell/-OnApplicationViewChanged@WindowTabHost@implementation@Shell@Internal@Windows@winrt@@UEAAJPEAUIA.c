/*
 * XREFs of ?OnApplicationViewChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800479F0
 * Callers:
 *     <none>
 * Callees:
 *     ?SyncAllAppWindows@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_KXZ @ 0x180029B3C (-SyncAllAppWindows@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_KXZ.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180047CDC (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_WTMPublic@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800B9B04 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_WTMPublic@@@details@wil@@QEAAX_NW4Reporti.c)
 *     ?UpdateActivationTimestamps@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXPEAUHWND__@@0@Z @ 0x1800CD9F0 (-UpdateActivationTimestamps@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXPEAU.c)
 *     ?RemoveWindowTabDataModel@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_K@Z @ 0x1801812D0 (-RemoveWindowTabDataModel@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_K@Z.c)
 *     ?DelayedUpdateActivationTimestamp@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@_K@Z @ 0x1801D57DC (-DelayedUpdateActivationTimestamp@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEA.c)
 *     ?find@?$_Hash@V?$_Umap_traits@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@8@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@@2@AEB_K@Z @ 0x18057FA3C (-find@-$_Hash@V-$_Umap_traits@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@V-$_Uha.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::OnApplicationViewChanged(
        RTL_SRWLOCK *a1,
        ApplicationViewHelpers *a2,
        int a3)
{
  int v4; // r8d
  unsigned int v5; // esi
  __int64 v6; // rdx
  unsigned int WindowForView; // eax
  HWND v9; // rdi
  HWND PropW; // rax
  __int64 v11; // [rsp+20h] [rbp-18h] BYREF
  _BYTE v12[16]; // [rsp+28h] [rbp-10h] BYREF
  char v13; // [rsp+50h] [rbp+18h] BYREF

  if ( a3 )
  {
    v4 = a3 - 1;
    if ( v4 )
    {
      if ( v4 == 6 )
      {
        WindowForView = (unsigned int)ApplicationViewHelpers::GetWindowForView(a2, a2);
        winrt::Windows::Internal::Shell::implementation::WindowTabHost::DelayedUpdateActivationTimestamp(
          a1,
          &v13,
          WindowForView);
      }
    }
    else
    {
      v5 = (unsigned int)ApplicationViewHelpers::GetWindowForView(a2, a2);
      v11 = v5;
      AcquireSRWLockExclusive(a1 + 77);
      if ( *(PVOID *)std::_Hash<std::_Umap_traits<unsigned __int64,winrt::Windows::Internal::Shell::implementation::WindowData,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,winrt::Windows::Internal::Shell::implementation::WindowData>>,0>>::find(
                       &a1[78],
                       v12,
                       &v11) != a1[79].Ptr )
      {
        winrt::Windows::Internal::Shell::implementation::WindowTabHost::RemoveWindowTabDataModel(
          (winrt::Windows::Internal::Shell::implementation::WindowTabHost *)a1,
          v5);
        LOBYTE(v6) = 1;
        wil::details::FeatureImpl<__WilFeatureTraits_Feature_WTMPublic>::ReportUsage(
          &`wil::Feature<__WilFeatureTraits_Feature_WTMPublic>::GetImpl'::`2'::impl,
          v6);
        winrt::Windows::Internal::Shell::implementation::WindowTabHost::SyncAllAppWindows((winrt::Windows::Internal::Shell::implementation::WindowTabHost *)a1);
      }
      if ( a1 != (RTL_SRWLOCK *)-616LL )
        ReleaseSRWLockExclusive(a1 + 77);
    }
  }
  else
  {
    v9 = ApplicationViewHelpers::GetWindowForView(a2, a2);
    PropW = (HWND)GetPropW(v9, (LPCWSTR)0xA920);
    if ( PropW )
      winrt::Windows::Internal::Shell::implementation::WindowTabHost::UpdateActivationTimestamps(
        (winrt::Windows::Internal::Shell::implementation::WindowTabHost *)a1,
        v9,
        PropW);
  }
  return 0LL;
}
