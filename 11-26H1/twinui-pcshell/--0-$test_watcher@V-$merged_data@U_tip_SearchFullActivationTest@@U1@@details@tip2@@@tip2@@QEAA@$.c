/*
 * XREFs of ??0?$test_watcher@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@@tip2@@QEAA@$$T@Z @ 0x1802842F8
 * Callers:
 *     ?ActivationDeferralComplete@UndockedSearchAppExperienceManager@@AEAAX_N@Z @ 0x18023BEB4 (-ActivationDeferralComplete@UndockedSearchAppExperienceManager@@AEAAX_N@Z.c)
 *     ?Uncloak@UndockedSearchAppExperienceManager@@UEAAJXZ @ 0x18023FC70 (-Uncloak@UndockedSearchAppExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ??$tip_make_shared_nothrow@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@$$V@details@tip2@@YA?AV?$com_ptr_t@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x18028433C (--$tip_make_shared_nothrow@V-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@$$V@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall tip2::test_watcher<tip2::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>>::test_watcher<tip2::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>>(
        __int64 a1)
{
  *(_QWORD *)a1 = &tip2::test_watcher<tip2::details::merged_data<_tip_SetPhysicalDeviceAccessRegKeyTipTest,_tip_SetPhysicalDeviceAccessRegKeyTipTest>>::`vftable';
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = a1;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_DWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0LL;
  tip2::details::tip_make_shared_nothrow<tip2::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>,>(a1 + 48);
  return a1;
}
