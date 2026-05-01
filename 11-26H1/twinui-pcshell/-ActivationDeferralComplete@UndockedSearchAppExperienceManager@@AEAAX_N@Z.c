/*
 * XREFs of ?ActivationDeferralComplete@UndockedSearchAppExperienceManager@@AEAAX_N@Z @ 0x18023BEB4
 * Callers:
 *     ?OnMessageHandler@UndockedSearchAppExperienceManager@@AEAAJI_K_J@Z @ 0x18023CDB0 (-OnMessageHandler@UndockedSearchAppExperienceManager@@AEAAJI_K_J@Z.c)
 *     ?OnPrelaunchDeferralTimer@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x18023D0AC (-OnPrelaunchDeferralTimer@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?UnboostPriority@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x18001E5D0 (-UnboostPriority@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?reset@?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ @ 0x180034018 (-reset@-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ.c)
 *     ?CompleteFullActivationTest@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x180227810 (-CompleteFullActivationTest@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@@1@XZ @ 0x18027FF9C (--C-$tip_test@V-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@@tip2@@QEAA-AV-$t.c)
 *     ?watch_errors@?$tip_test@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_watcher@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@@2@XZ @ 0x18027FFC8 (-watch_errors@-$tip_test@V-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@@tip2@.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180281580 (--1-$test_data_control@V-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@@tip2@@Q.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1802815B8 (--1-$test_watcher@V-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@@tip2@@QEAA@X.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1802815E0 (--1-$com_ptr_t@V-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@Uerr_returncode_.c)
 *     ??0?$test_watcher@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@@tip2@@QEAA@$$T@Z @ 0x1802842F8 (--0-$test_watcher@V-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@@tip2@@QEAA@$.c)
 *     ??B?$tip_test@V?$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEBA_NXZ @ 0x1802A2788 (--B-$tip_test@V-$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEBA_NXZ.c)
 *     ??4?$com_ptr_t@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x1802A896C (--4-$com_ptr_t@V-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@Uerr_returncode_.c)
 *     ?StartDeferredSuspensionTimer@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1802C5254 (-StartDeferredSuspensionTimer@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_54322664@@@details@wil@@QEAA_NXZ @ 0x1803BAD9C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_54322664@@@details@wil@@QEAA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall UndockedSearchAppExperienceManager::ActivationDeferralComplete(
        UndockedSearchAppExperienceManager *this,
        char a2)
{
  __int64 v4; // rax
  char IsEnabled; // al
  __int64 *v6; // rdx
  _BYTE v7[48]; // [rsp+20h] [rbp-29h] BYREF
  __int64 v8; // [rsp+50h] [rbp+7h]
  _BYTE v9[72]; // [rsp+58h] [rbp+Fh] BYREF
  __int64 v10; // [rsp+B0h] [rbp+67h] BYREF
  __int64 v11; // [rsp+C0h] [rbp+77h] BYREF
  __int64 v12; // [rsp+C8h] [rbp+7Fh] BYREF

  tip2::test_watcher<tip2::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>>::test_watcher<tip2::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>>(v7);
  v10 = v8;
  if ( v8 )
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 344));
  tip2::test_watcher<tip2::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>>::~test_watcher<tip2::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>>(v7);
  if ( (unsigned __int8)tip2::tip_test<tip2::details::merged_data<_tip_SearchHomeRenderTest,_tip_SearchHomeRenderTest>>::operator bool((char *)this + 832) )
  {
    v4 = tip2::tip_test<tip2::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>>::watch_errors(
           (char *)this + 832,
           v9);
    wil::com_ptr_t<tip2::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>,wil::err_returncode_policy>::operator=(
      &v10,
      v4 + 48);
    tip2::test_watcher<tip2::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>>::~test_watcher<tip2::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>>(v9);
  }
  if ( a2 )
  {
    if ( (unsigned __int8)tip2::tip_test<tip2::details::merged_data<_tip_SearchHomeRenderTest,_tip_SearchHomeRenderTest>>::operator bool((char *)this + 832) )
    {
      *(_BYTE *)(*(_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>>::operator->(
                              (char *)this + 832,
                              &v11)
               + 338LL) = 1;
      tip2::test_data_control<tip2::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>>::~test_data_control<tip2::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>>(&v11);
    }
    IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_54322664>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_54322664>::GetImpl'::`2'::impl);
  }
  else
  {
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_54322664>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_54322664>::GetImpl'::`2'::impl) )
      goto LABEL_11;
    IsEnabled = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 11) + 32LL))(
                  *((_QWORD *)this + 11),
                  *((_QWORD *)this + 7));
  }
  if ( !IsEnabled )
    UndockedSearchAppExperienceManager::StartDeferredSuspensionTimer(this);
LABEL_11:
  UndockedSearchAppExperienceManager::UnboostPriority(this);
  v6 = (__int64 *)*((_QWORD *)this + 100);
  if ( v6 )
  {
    v12 = 0LL;
    v11 = *v6;
    *v6 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v11);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v12);
    std::shared_ptr<PeoplePaneViewInfo>::reset((_QWORD *)this + 100);
  }
  if ( (unsigned __int8)tip2::tip_test<tip2::details::merged_data<_tip_SearchHomeRenderTest,_tip_SearchHomeRenderTest>>::operator bool((char *)this + 832) )
    UndockedSearchAppExperienceManager::CompleteFullActivationTest((struct _TP_TIMER **)this);
  wil::com_ptr_t<tip2::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>,wil::err_returncode_policy>(&v10);
}
