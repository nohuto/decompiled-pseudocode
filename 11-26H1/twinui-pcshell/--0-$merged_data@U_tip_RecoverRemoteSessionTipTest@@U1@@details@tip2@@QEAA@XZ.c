/*
 * XREFs of ??0?$merged_data@U_tip_RecoverRemoteSessionTipTest@@U1@@details@tip2@@QEAA@XZ @ 0x18063E9C4
 * Callers:
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_RecoverRemoteSessionTipTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_RecoverRemoteSessionTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x180295D88 (-ensure_data@-$tip_test@V-$merged_data@U_tip_RecoverRemoteSessionTipTest@@U1@@details@tip2@@@tip.c)
 * Callees:
 *     ??0?$shared_data@$00$0A@$0A@@details@tip2@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z @ 0x180282EC4 (--0-$shared_data@$00$0A@$0A@@details@tip2@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z.c)
 *     ??0_tip_RecoverRemoteSessionTipTest@@QEAA@XZ @ 0x1802842B8 (--0_tip_RecoverRemoteSessionTipTest@@QEAA@XZ.c)
 */

__int64 __fastcall tip2::details::merged_data<_tip_RecoverRemoteSessionTipTest,_tip_RecoverRemoteSessionTipTest>::merged_data<_tip_RecoverRemoteSessionTipTest,_tip_RecoverRemoteSessionTipTest>(
        __int64 a1)
{
  __int64 result; // rax

  *(_QWORD *)a1 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  tip2::details::shared_data<1,0,0>::shared_data<1,0,0>(a1 + 8, a1);
  _tip_RecoverRemoteSessionTipTest::_tip_RecoverRemoteSessionTipTest((_tip_RecoverRemoteSessionTipTest *)(a1 + 256));
  *(_DWORD *)(a1 + 376) = 1;
  *(_QWORD *)(a1 + 264) = a1 + 16;
  result = a1;
  *(_QWORD *)a1 = &tip2::details::merged_data<_tip_RecoverRemoteSessionTipTest,_tip_RecoverRemoteSessionTipTest>::`vftable';
  return result;
}
