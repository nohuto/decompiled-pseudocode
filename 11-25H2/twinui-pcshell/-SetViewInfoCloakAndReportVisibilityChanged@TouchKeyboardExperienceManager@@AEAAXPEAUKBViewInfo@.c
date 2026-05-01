/*
 * XREFs of ?SetViewInfoCloakAndReportVisibilityChanged@TouchKeyboardExperienceManager@@AEAAXPEAUKBViewInfo@@_N@Z @ 0x1800971F4
 * Callers:
 *     ?ShowView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@PEBUViewOptions@@@Z @ 0x1800961C8 (-ShowView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@PEBUViewOptions@@@Z.c)
 *     ?HideInputView@TouchKeyboardExperienceManager@@AEAAJI_N@Z @ 0x180097824 (-HideInputView@TouchKeyboardExperienceManager@@AEAAJI_N@Z.c)
 *     ?AnimateInputView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEAUHWND__@@_N@Z @ 0x180216DA8 (-AnimateInputView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEAUHWND__@@_N@Z.c)
 *     _lambda_ce5f0a13437f36dbd45420a359bd80e9_::operator() @ 0x18045E9CC (_lambda_ce5f0a13437f36dbd45420a359bd80e9_--operator().c)
 *     ?AnimateInputViewForSizeOrModeChange@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@_NPEBUtagRECT@@W4AnimationType@@PEBG@Z @ 0x18045FB90 (-AnimateInputViewForSizeOrModeChange@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@_NPEBU.c)
 *     ?SizeOrModeChangeFadeOutAnimationTimerCallback@TouchKeyboardExperienceManager@@CAJPEAX@Z @ 0x180464860 (-SizeOrModeChangeFadeOutAnimationTimerCallback@TouchKeyboardExperienceManager@@CAJPEAX@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180029A94 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z @ 0x18002A564 (--0-$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x1800A589C (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800AC1A4 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x1800AD16C (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180142B80 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?GetFirstViewType@KBViewInfo@@QEBAIXZ @ 0x18018A2F8 (-GetFirstViewType@KBViewInfo@@QEBAIXZ.c)
 *     ?ReportVisibility@?$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBW4ViewVisibility@Shell@UI@WindowsUdk@3@@Z @ 0x1801974C0 (-ReportVisibility@-$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@She.c)
 *     ??$_Find_lower_bound@W4BackgroundIdentifier@Themes@UI@Internal@Windows@winrt@@@?$_Tree@V?$_Tmap_traits@W4BackgroundIdentifier@Themes@UI@Internal@Windows@winrt@@_KU?$less@W4BackgroundIdentifier@Themes@UI@Internal@Windows@winrt@@@std@@V?$allocator@U?$pair@$$CBW4BackgroundIdentifier@Themes@UI@Internal@Windows@winrt@@_K@std@@@8@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBW4BackgroundIdentifier@Themes@UI@Internal@Windows@winrt@@_K@std@@PEAX@std@@@1@AEBW4BackgroundIdentifier@Themes@UI@Internal@Windows@winrt@@@Z @ 0x18021D468 (--$_Find_lower_bound@W4BackgroundIdentifier@Themes@UI@Internal@Windows@winrt@@@-$_Tree@V-$_Tmap_.c)
 *     ??B?$tip_test@V?$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEBA_NXZ @ 0x180295DEC (--B-$tip_test@V-$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEBA_NXZ.c)
 *     ?TryConvertCoreKeyboardViewTypeToShellView@TouchKeyboardExperienceManager@@AEAA?AV?$optional@W4ShellView@Shell@UI@WindowsUdk@winrt@@@std@@W4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@@Z @ 0x1802C27AC (-TryConvertCoreKeyboardViewTypeToShellView@TouchKeyboardExperienceManager@@AEAA-AV-$optional@W4S.c)
 *     ?complete@?$tip_test@V?$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@tip2@@@tip2@@QEAAXXZ @ 0x1802CFFBC (-complete@-$tip_test@V-$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@ti.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTests@@U12@@details@tip2@@@tip2@@QEAA@XZ @ 0x18045C6FC (--1-$test_data_control@V-$merged_data@U_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHost.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTests@@U12@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTests@@U12@@details@tip2@@@1@XZ @ 0x18045D1D8 (--C-$tip_test@V-$merged_data@U_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTes.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_TouchKeyboardButtonToShowTest@@@details@wil@@QEAA_NXZ @ 0x180468A78 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_TouchKeyboardButtonToShowTest@@@d.c)
 *     ?UpdateShellViewCoordinatorShellPreferences@TabTipAdapter@KeyboardHosting@@QEAAXW4ShellView@Shell@UI@WindowsUdk@winrt@@AEBUhstring@7@1@Z @ 0x180471AAC (-UpdateShellViewCoordinatorShellPreferences@TabTipAdapter@KeyboardHosting@@QEAAXW4ShellView@Shel.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall TouchKeyboardExperienceManager::SetViewInfoCloakAndReportVisibilityChanged(
        TouchKeyboardExperienceManager *this,
        struct KBViewInfo *a2,
        unsigned __int8 a3)
{
  int v3; // edi
  unsigned int FirstViewType; // eax
  __int64 v7; // rcx
  _QWORD *v8; // r10
  __int64 v9; // rbx
  void *v10; // rdx
  wil::details *v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rbx
  _BYTE *v14; // rcx
  _BYTE v15[8]; // [rsp+20h] [rbp-50h] BYREF
  RTL_SRWLOCK *v16; // [rsp+28h] [rbp-48h] BYREF
  _BYTE v17[8]; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v18[8]; // [rsp+38h] [rbp-38h] BYREF
  __int64 v19; // [rsp+40h] [rbp-30h] BYREF
  std::_Ref_count_base *v20; // [rsp+48h] [rbp-28h]
  _BYTE v21[16]; // [rsp+50h] [rbp-20h] BYREF
  __int64 v22; // [rsp+60h] [rbp-10h]
  unsigned int v23; // [rsp+A8h] [rbp+38h] BYREF
  char v24; // [rsp+ACh] [rbp+3Ch]
  int v25; // [rsp+B0h] [rbp+40h] BYREF
  char v26; // [rsp+B8h] [rbp+48h] BYREF

  v3 = a3;
  if ( *((_BYTE *)a2 + 34) != a3 )
  {
    FirstViewType = KBViewInfo::GetFirstViewType(a2);
    TouchKeyboardExperienceManager::TryConvertCoreKeyboardViewTypeToShellView(v7, &v23, FirstViewType);
    if ( v24 )
    {
      std::_Tree<std::_Tmap_traits<enum winrt::Windows::Internal::UI::Themes::BackgroundIdentifier,unsigned __int64,std::less<enum winrt::Windows::Internal::UI::Themes::BackgroundIdentifier>,std::allocator<std::pair<enum winrt::Windows::Internal::UI::Themes::BackgroundIdentifier const,unsigned __int64>>,0>>::_Find_lower_bound<enum winrt::Windows::Internal::UI::Themes::BackgroundIdentifier>(
        (char *)this + 256,
        v21,
        &v23);
      if ( !*(_BYTE *)(v22 + 25) && (signed int)v23 >= *(_DWORD *)(v22 + 32) && v22 != *v8 )
      {
        std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(
          &v19,
          (_QWORD *)(v22 + 40));
        v9 = v19;
        v25 = v3;
        winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinator<winrt::WindowsUdk::UI::Shell::IShellViewCoordinator>::ReportVisibility(
          v19 + 8,
          &v25);
        if ( (_BYTE)v3 )
        {
          if ( *(_BYTE *)(v9 + 64) )
          {
            v12 = *((_QWORD *)this + 73);
            winrt::hstring::hstring((winrt::hstring *)v15, &LocaleName);
            winrt::hstring::hstring((winrt::hstring *)&v26, &LocaleName);
            KeyboardHosting::TabTipAdapter::UpdateShellViewCoordinatorShellPreferences(v12, v23, &v26, v15);
            winrt::handle_type<winrt::impl::hstring_traits>::close(&v26);
            winrt::handle_type<winrt::impl::hstring_traits>::close(v15);
            *(_BYTE *)(v19 + 64) = 0;
          }
          v9 = v19;
        }
        else if ( *(_QWORD *)(v9 + 48) )
        {
          wil::AcquireSRWLockExclusive(&v16, v9 + 56);
          v11 = *(wil::details **)(v9 + 48);
          if ( v11 )
            wil::details::SetEvent(v11, v10);
          CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v16);
        }
        if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_TouchKeyboardButtonToShowTest>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_TouchKeyboardButtonToShowTest>::GetImpl'::`2'::impl) )
        {
          v13 = v9 + 72;
          if ( (unsigned __int8)tip2::tip_test<tip2::details::merged_data<_tip_SearchHomeRenderTest,_tip_SearchHomeRenderTest>>::operator bool(v13) )
          {
            if ( (_BYTE)v3 )
            {
              *(_BYTE *)(*(_QWORD *)tip2::tip_test<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2,KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2>>::operator->(
                                      v13,
                                      v18)
                       + 266LL) = 1;
              v14 = v18;
            }
            else
            {
              *(_BYTE *)(*(_QWORD *)tip2::tip_test<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2,KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2>>::operator->(
                                      v13,
                                      v17)
                       + 265LL) = 1;
              v14 = v17;
            }
            tip2::test_data_control<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2,KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2>>::~test_data_control<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2,KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2>>(v14);
            tip2::tip_test<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>>::complete(v13);
          }
        }
        if ( v20 )
          std::_Ref_count_base::_Decref(v20);
      }
    }
  }
  *((_BYTE *)a2 + 34) = v3;
}
