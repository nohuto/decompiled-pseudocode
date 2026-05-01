/*
 * XREFs of ??C?$tip_test@V?$merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@U1@@details@tip2@@@1@XZ @ 0x1806590B4
 * Callers:
 *     _lambda_d6825c428197dee9c36f361ea1d02b0a_::operator() @ 0x180659884 (_lambda_d6825c428197dee9c36f361ea1d02b0a_--operator().c)
 * Callees:
 *     ??0?$test_data_control@V?$merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@U1@@details@tip2@@@tip2@@IEAA@AEBV?$com_ptr_t@V?$merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x180658770 (--0-$test_data_control@V-$merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@U1@@details@tip2.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x18065D138 (-ensure_data@-$tip_test@V-$merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@U1@@details@tip.c)
 */

__int64 *__fastcall tip2::tip_test<tip2::details::merged_data<_tip_RemoteSessionOnStateChangedTipTest,_tip_RemoteSessionOnStateChangedTipTest>>::operator->(
        __int64 a1,
        __int64 *a2)
{
  __int64 *v3; // rax

  v3 = (__int64 *)tip2::tip_test<tip2::details::merged_data<_tip_RemoteSessionOnStateChangedTipTest,_tip_RemoteSessionOnStateChangedTipTest>>::ensure_data();
  tip2::test_data_control<tip2::details::merged_data<_tip_RemoteSessionOnStateChangedTipTest,_tip_RemoteSessionOnStateChangedTipTest>>::test_data_control<tip2::details::merged_data<_tip_RemoteSessionOnStateChangedTipTest,_tip_RemoteSessionOnStateChangedTipTest>>(
    a2,
    v3);
  return a2;
}
