/*
 * XREFs of ??0?$merged_data@U_tip_DiscoverabilityManagerTipTest@@U1@@details@tip2@@QEAA@XZ @ 0x180619A48
 * Callers:
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_DiscoverabilityManagerTipTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_DiscoverabilityManagerTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x1802888F0 (-ensure_data@-$tip_test@V-$merged_data@U_tip_DiscoverabilityManagerTipTest@@U1@@details@tip2@@@t.c)
 * Callees:
 *     ??0_tip_DiscoverabilityManagerTipTest@@QEAA@XZ @ 0x180281CB8 (--0_tip_DiscoverabilityManagerTipTest@@QEAA@XZ.c)
 *     ??0?$shared_data@$00$0A@$0A@@details@tip2@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z @ 0x180282EC4 (--0-$shared_data@$00$0A@$0A@@details@tip2@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z.c)
 */

__int64 __fastcall tip2::details::merged_data<_tip_DiscoverabilityManagerTipTest,_tip_DiscoverabilityManagerTipTest>::merged_data<_tip_DiscoverabilityManagerTipTest,_tip_DiscoverabilityManagerTipTest>(
        __int64 a1)
{
  *(_QWORD *)a1 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  tip2::details::shared_data<1,0,0>::shared_data<1,0,0>(a1 + 8, a1);
  _tip_DiscoverabilityManagerTipTest::_tip_DiscoverabilityManagerTipTest((_tip_DiscoverabilityManagerTipTest *)(a1 + 256));
  *(_QWORD *)a1 = &tip2::details::merged_data<_tip_DiscoverabilityManagerTipTest,_tip_DiscoverabilityManagerTipTest>::`vftable';
  *(_DWORD *)(a1 + 328) = 1;
  *(_QWORD *)(a1 + 264) = a1 + 16;
  return a1;
}
