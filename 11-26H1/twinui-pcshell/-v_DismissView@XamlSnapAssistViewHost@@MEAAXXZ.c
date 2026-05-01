/*
 * XREFs of ?v_DismissView@XamlSnapAssistViewHost@@MEAAXXZ @ 0x1801B0420
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuity@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18006CF04 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuity@@@details@wil@.c)
 *     ??$convert_from_abi@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@winrt@@@wil@@YA?AUISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@winrt@@PEAUIUnknown@@@Z @ 0x1801B05F4 (--$convert_from_abi@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@winrt@@@wil@@YA-.c)
 *     ?complete@?$tip_test@V?$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@details@tip2@@@tip2@@QEAAXXZ @ 0x18027EED0 (-complete@-$tip_test@V-$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@d.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?is_running@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x18028B488 (-is_running@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ??0?$vector@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$allocator@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1802A3690 (--0-$vector@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V-$allocator@UWi.c)
 *     ??$_Emplace_one_at_back@PEAUHWND__@@@?$vector@PEAUHWND__@@V?$allocator@PEAUHWND__@@@std@@@std@@AEAAAEAPEAUHWND__@@$$QEAPEAU2@@Z @ 0x1802C3428 (--$_Emplace_one_at_back@PEAUHWND__@@@-$vector@PEAUHWND__@@V-$allocator@PEAUHWND__@@@std@@@std@@A.c)
 *     ?SnapAssistCompleted@?$consume_Windows_Internal_Shell_WindowSnapping_ISnapAssistCallback2@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBW4SnapAssistUsage@WindowSnapping@Shell@Internal@Windows@3@U?$array_view@$$CB_K@3@@Z @ 0x1805BCE08 (-SnapAssistCompleted@-$consume_Windows_Internal_Shell_WindowSnapping_ISnapAssistCallback2@UISnap.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall XamlSnapAssistViewHost::v_DismissView(XamlSnapAssistViewHost *this, __int64 a2, char a3)
{
  _QWORD *v4; // rdx
  unsigned int *v5; // rbx
  unsigned int *v6; // rsi
  std::_Ref_count_base *v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  _QWORD *v10; // rbx
  char v11; // [rsp+20h] [rbp-50h] BYREF
  unsigned int *v12; // [rsp+30h] [rbp-40h] BYREF
  unsigned int *v13; // [rsp+38h] [rbp-38h]
  __int64 v14; // [rsp+40h] [rbp-30h]
  __int128 v15; // [rsp+50h] [rbp-20h] BYREF
  __int64 v16; // [rsp+60h] [rbp-10h]
  int v17; // [rsp+90h] [rbp+20h] BYREF
  __int64 v18; // [rsp+98h] [rbp+28h] BYREF
  __int64 v19; // [rsp+A0h] [rbp+30h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::GetImpl'::`2'::impl,
    1u,
    a3);
  v17 = 0;
  v4 = (_QWORD *)*((_QWORD *)this + 88);
  if ( (__int64)(v4[1] - *v4) >> 3 )
    v17 = 2 - (v4[6] != v4[7]);
  v15 = 0LL;
  v16 = 0LL;
  std::vector<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId>::vector<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId>(
    &v12,
    v4 + 3);
  v6 = v13;
  v5 = v12;
  if ( v12 != v13 )
  {
    do
    {
      v19 = *v5;
      std::vector<HWND__ *>::_Emplace_one_at_back<HWND__ *>(&v15, &v19);
      ++v5;
    }
    while ( v5 != v6 );
    v5 = v12;
  }
  if ( v5 )
    std::_Deallocate<16>(v5, (v14 - (_QWORD)v5) & 0xFFFFFFFFFFFFFFFCuLL);
  wil::convert_from_abi<winrt::Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2>(
    &v18,
    *((_QWORD *)this + 33));
  v12 = (unsigned int *)v15;
  LODWORD(v13) = (__int64)(*((_QWORD *)&v15 + 1) - v15) >> 3;
  winrt::impl::consume_Windows_Internal_Shell_WindowSnapping_ISnapAssistCallback2<winrt::Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2>::SnapAssistCompleted(
    &v18,
    &v17,
    &v12);
  *((_QWORD *)this + 88) = 0LL;
  v7 = (std::_Ref_count_base *)*((_QWORD *)this + 89);
  *((_QWORD *)this + 89) = 0LL;
  if ( v7 )
    std::_Ref_count_base::_Decref(v7);
  if ( v18 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v18);
  if ( (_QWORD)v15 )
    std::_Deallocate<16>(v15, (v16 - v15) & 0xFFFFFFFFFFFFFFF8uLL);
  v8 = *((_QWORD *)this + 79);
  if ( v8 && (unsigned __int8)tip2::details::shared_data<0,0,0>::is_running(v8 + 8) )
    tip2::tip_test<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppActivationTest,KeyboardHostingTipTests::_tip_InputAppActivationTest>>::complete((char *)this + 632);
  v9 = *((_QWORD *)this + 29);
  if ( v9 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    *((_QWORD *)this + 29) = 0LL;
  }
  v10 = (_QWORD *)((char *)this + 288);
  if ( (char *)this + 288 != &v11 )
  {
    if ( *v10 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)this + 36);
    *v10 = 0LL;
  }
  *((_BYTE *)this + 296) = 0;
}
