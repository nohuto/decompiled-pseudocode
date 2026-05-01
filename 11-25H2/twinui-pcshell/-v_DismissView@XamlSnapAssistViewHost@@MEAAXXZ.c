/*
 * XREFs of ?v_DismissView@XamlSnapAssistViewHost@@MEAAXXZ @ 0x1800F69F0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180029A94 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180029B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@V?$allocator@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@std@@@std@@AEAAXXZ @ 0x18002A054 (-_Tidy@-$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?__private_IsEnabledPreCheck@?$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuity@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1800BCE18 (-__private_IsEnabledPreCheck@-$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuit.c)
 *     ??$convert_from_abi@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@winrt@@@wil@@YA?AUISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@winrt@@PEAUIUnknown@@@Z @ 0x1800F6BF0 (--$convert_from_abi@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@winrt@@@wil@@YA-.c)
 *     ?complete@?$tip_test@V?$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@details@tip2@@@tip2@@QEAAXXZ @ 0x180289BA0 (-complete@-$tip_test@V-$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@d.c)
 *     ?is_running@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x1802941C0 (-is_running@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ??1?$_Tidy_guard@V?$vector@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$allocator@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@std@@@std@@QEAA@XZ @ 0x1802CEB74 (--1-$_Tidy_guard@V-$vector@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V.c)
 *     ?SnapAssistCompleted@?$consume_Windows_Internal_Shell_WindowSnapping_ISnapAssistCallback2@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBW4SnapAssistUsage@WindowSnapping@Shell@Internal@Windows@3@U?$array_view@$$CB_K@3@@Z @ 0x180598B78 (-SnapAssistCompleted@-$consume_Windows_Internal_Shell_WindowSnapping_ISnapAssistCallback2@UISnap.c)
 *     ?_Buy_nonzero@?$vector@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$allocator@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@std@@AEAAX_K@Z @ 0x180599764 (-_Buy_nonzero@-$vector@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V-$al.c)
 *     ??$_Emplace_one_at_back@_K@?$vector@_KV?$allocator@_K@std@@@std@@AEAAAEA_K$$QEA_K@Z @ 0x18059E968 (--$_Emplace_one_at_back@_K@-$vector@_KV-$allocator@_K@std@@@std@@AEAAAEA_K$$QEA_K@Z.c)
 *     memmove_0 @ 0x1806A4B18 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall XamlSnapAssistViewHost::v_DismissView(XamlSnapAssistViewHost *this, char a2)
{
  _QWORD *v3; // r15
  __int64 v4; // rsi
  char *v5; // rdi
  const void *v6; // rdx
  signed __int64 v7; // rbx
  unsigned int *v8; // rdi
  unsigned int *v9; // rbx
  void *v10; // rbx
  std::_Ref_count_base *v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  _QWORD *v14; // rbx
  char v15; // [rsp+20h] [rbp-50h] BYREF
  void *v16[2]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v17; // [rsp+40h] [rbp-30h]
  __int128 v18; // [rsp+50h] [rbp-20h] BYREF
  __int64 v19; // [rsp+60h] [rbp-10h]
  int v20; // [rsp+A0h] [rbp+30h] BYREF
  __int64 v21; // [rsp+A8h] [rbp+38h] BYREF
  __int64 v22; // [rsp+B0h] [rbp+40h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::__private_IsEnabledPreCheck(
    `wil::Feature<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::GetImpl'::`2'::impl,
    a2);
  v20 = 0;
  v3 = (_QWORD *)*((_QWORD *)this + 88);
  if ( (__int64)(v3[1] - *v3) >> 3 )
    v20 = 2 - (v3[6] != v3[7]);
  v18 = 0LL;
  v4 = 0LL;
  v19 = 0LL;
  *(_OWORD *)v16 = 0LL;
  v17 = 0LL;
  if ( (__int64)(v3[4] - v3[3]) >> 2 )
  {
    std::vector<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId>::_Buy_nonzero(v16);
    v5 = (char *)v16[0];
    v6 = (const void *)v3[3];
    v7 = v3[4] - (_QWORD)v6;
    memmove_0(v16[0], v6, v7);
    v16[1] = &v5[4 * (v7 >> 2)];
    v22 = 0LL;
    std::_Tidy_guard<std::vector<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId>>::~_Tidy_guard<std::vector<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId>>(&v22);
  }
  v8 = (unsigned int *)v16[1];
  v9 = (unsigned int *)v16[0];
  if ( v16[0] != v16[1] )
  {
    do
    {
      v22 = *v9;
      std::vector<unsigned __int64>::_Emplace_one_at_back<unsigned __int64>(&v18, &v22);
      ++v9;
    }
    while ( v9 != v8 );
    v4 = v19;
  }
  std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>::_Tidy((__int64)v16);
  wil::convert_from_abi<winrt::Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2>(
    &v21,
    *((_QWORD *)this + 33));
  v10 = (void *)v18;
  v16[0] = (void *)v18;
  LODWORD(v16[1]) = (__int64)(*((_QWORD *)&v18 + 1) - v18) >> 3;
  winrt::impl::consume_Windows_Internal_Shell_WindowSnapping_ISnapAssistCallback2<winrt::Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2>::SnapAssistCompleted(
    &v21,
    &v20,
    v16);
  *((_QWORD *)this + 88) = 0LL;
  v11 = (std::_Ref_count_base *)*((_QWORD *)this + 89);
  *((_QWORD *)this + 89) = 0LL;
  if ( v11 )
    std::_Ref_count_base::_Decref(v11);
  if ( v21 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v21);
  if ( v10 )
    std::_Deallocate<16,0>(v10, (const struct std::nothrow_t *)((v4 - (_QWORD)v10) & 0xFFFFFFFFFFFFFFF8uLL));
  v12 = *((_QWORD *)this + 79);
  if ( v12 && (unsigned __int8)tip2::details::shared_data<0,0,0>::is_running(v12 + 8) )
    tip2::tip_test<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppActivationTest,KeyboardHostingTipTests::_tip_InputAppActivationTest>>::complete((char *)this + 632);
  v13 = *((_QWORD *)this + 29);
  if ( v13 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    *((_QWORD *)this + 29) = 0LL;
  }
  v14 = (_QWORD *)((char *)this + 288);
  if ( (char *)this + 288 != &v15 )
  {
    if ( *v14 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)this + 36);
    *v14 = 0LL;
  }
  *((_BYTE *)this + 296) = 0;
}
