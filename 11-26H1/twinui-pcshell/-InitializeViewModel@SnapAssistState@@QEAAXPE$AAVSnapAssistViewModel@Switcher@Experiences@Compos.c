/*
 * XREFs of ?InitializeViewModel@SnapAssistState@@QEAAXPE$AAVSnapAssistViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@PE$AAVSwitchItemListViewModelArgs@3456@@Z @ 0x1806C0010
 * Callers:
 *     ?CreateSnapAssistControl@XamlSnapAssistViewHost@@AEAAPE$AAVSnapAssist@Switcher@Experiences@ComposableShell@WindowsInternal@@AEBURect@Foundation@Windows@winrt@@PEAUIImmersiveMonitor@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x18009B7CC (-CreateSnapAssistControl@XamlSnapAssistViewHost@@AEAAPE$AAVSnapAssist@Switcher@Experiences@Compo.c)
 * Callees:
 *     ?__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z @ 0x18009B288 (-__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z.c)
 *     ??$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@@YAXPE$ADVItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x18009D964 (--$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@Composabl.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x1801A2AD0 (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     ?AddRegionToViewModel@SnapAssistState@@AEAAXPE$AAVSnapAssistViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@AEBUSnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@Z @ 0x180224F5C (-AddRegionToViewModel@SnapAssistState@@AEAAXPE$AAVSnapAssistViewModel@Switcher@Experiences@Compo.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18027F8D0 (--1-$test_watcher@V-$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18027F904 (--1-$test_data_control@V-$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA@.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@1@XZ @ 0x18027FB80 (--C-$tip_test@V-$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA-AV-$test_.c)
 *     ?watch_errors@?$tip_test@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_watcher@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@2@XZ @ 0x18027FC1C (-watch_errors@-$tip_test@V-$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEA.c)
 *     ?get@VirtualDesktopList@__IVirtualDesktopBarElementPublicNonVirtuals@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAPE$AAVVirtualDesktopListView@3456@XZ @ 0x1802C1018 (-get@VirtualDesktopList@__IVirtualDesktopBarElementPublicNonVirtuals@Switcher@Experiences@Compos.c)
 *     ??$_Emplace_one_at_back@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@?$vector@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$allocator@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@std@@AEAAAEAUWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@$$QEAU234567@@Z @ 0x1802C1D34 (--$_Emplace_one_at_back@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@-$v.c)
 *     _CxxThrowException_0 @ 0x1802C9ED8 (_CxxThrowException_0.c)
 *     ?current@slim_source_location@impl@winrt@@SA?AU123@IQEBD0@Z @ 0x1802D7924 (-current@slim_source_location@impl@winrt@@SA-AU123@IQEBD0@Z.c)
 *     ?get@Size@IBindableVector@Interop@Xaml@UI@Windows@@UE$AAAIXZ @ 0x1806BB4A8 (-get@Size@IBindableVector@Interop@Xaml@UI@Windows@@UE$AAAIXZ.c)
 *     ??0hresult_illegal_state_change@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x1806BFE30 (--0hresult_illegal_state_change@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z.c)
 *     memmove_0 @ 0x1806CCBD4 (memmove_0.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall SnapAssistState::InitializeViewModel(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 (__fastcall ***v6)(_QWORD, __int64, __int64 *); // rsi
  __int64 *v7; // rbx
  int v8; // edi
  _DWORD *v9; // rdi
  _DWORD *i; // rbx
  char *v11; // rdx
  _DWORD *j; // rdi
  char *k; // rax
  size_t v14; // rbx
  __int64 v15; // rbx
  const struct winrt::impl::slim_source_location *v16; // rax
  LPARAM lParam[3]; // [rsp+20h] [rbp-39h] BYREF
  _BYTE v18[24]; // [rsp+38h] [rbp-21h] BYREF
  _BYTE v19[64]; // [rsp+50h] [rbp-9h] BYREF
  __int64 (__fastcall ***v20)(_QWORD, __int64, __int64 *); // [rsp+C0h] [rbp+67h] BYREF
  __int64 *v21; // [rsp+D8h] [rbp+7Fh]

  tip2::tip_test<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>::watch_errors(
    a1 + 200,
    (__int64)v19);
  v6 = (__int64 (__fastcall ***)(_QWORD, __int64, __int64 *))WindowsInternal::ComposableShell::Experiences::Switcher::__IVirtualDesktopBarElementPublicNonVirtuals::VirtualDesktopList::get(a2);
  v20 = v6;
  v7 = (__int64 *)__abi_winrt_cast_to(0, v6, (__int64)&_uuidof__AUIBindableVector_Interop_Xaml_UI_Windows__);
  v21 = v7;
  v8 = Windows::UI::Xaml::Interop::IBindableVector::Size::get(v7);
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>((__int64)v7);
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>((__int64)v6);
  if ( v8 )
  {
    v16 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current((__int64)v18);
    winrt::hresult_illegal_state_change::hresult_illegal_state_change(
      (winrt::hresult_illegal_state_change *)lParam,
      v16);
    throw (winrt::hresult_illegal_state_change *)lParam;
  }
  __abi_winrt_ptr_assign((_QWORD *)(a1 + 168), a3);
  v9 = *(_DWORD **)(a1 + 56);
  for ( i = *(_DWORD **)(a1 + 48); i != v9; i += 8 )
  {
    SnapAssistState::AddRegionToViewModel((float *)a1, a2, (__int64)i);
    if ( i[6] == 2 )
    {
      LODWORD(v20) = *i;
      std::vector<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId>::_Emplace_one_at_back<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId>(
        (_QWORD *)(a1 + 96),
        (int *)&v20);
    }
  }
  v20 = *(__int64 (__fastcall ****)(_QWORD, __int64, __int64 *))(a1 + 160);
  lParam[0] = a1 + 96;
  lParam[1] = (LPARAM)&v20;
  EnumWindows(
    (WNDENUMPROC)EnumWindowsHelpers::LambdaEnumWindowsProc__lambda_e153033c267a3414dd193f619d51719c___,
    (LPARAM)lParam);
  v11 = *(char **)(a1 + 56);
  for ( j = *(_DWORD **)(a1 + 48); j != (_DWORD *)v11 && j[6] != 2; j += 8 )
    ;
  if ( j != (_DWORD *)v11 )
  {
    for ( k = (char *)(j + 8); k != v11; k += 32 )
    {
      if ( *((_DWORD *)k + 6) != 2 )
      {
        *(_OWORD *)j = *(_OWORD *)k;
        *((_OWORD *)j + 1) = *((_OWORD *)k + 1);
        j += 8;
      }
    }
    if ( j != (_DWORD *)v11 )
    {
      v14 = *(_QWORD *)(a1 + 56) - (_QWORD)v11;
      memmove_0(j, v11, v14);
      *(_QWORD *)(a1 + 56) = (char *)j + v14;
    }
  }
  v15 = (__int64)(*(_QWORD *)(a1 + 56) - *(_QWORD *)(a1 + 48)) >> 5;
  *(_DWORD *)(*(_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>::operator->(
                           a1 + 200,
                           (__int64)&v20)
            + 272LL) = v15;
  tip2::test_data_control<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>::~test_data_control<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>((__int64 *)&v20);
  tip2::test_watcher<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>::~test_watcher<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>((__int64)v19);
}
