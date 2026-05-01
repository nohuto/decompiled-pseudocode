/*
 * XREFs of ??C?$tip_test@V?$merged_data@U_tip_PublisherValidationTest@MeetAndChatManagerTip@@U12@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_PublisherValidationTest@MeetAndChatManagerTip@@U12@@details@tip2@@@1@XZ @ 0x180288D30
 * Callers:
 *     ?ValidateTrusted@ProtocolLauncher@Utils@@CA?AV?$unique_ptr@VProtocolLauncher@Utils@@U?$default_delete@VProtocolLauncher@Utils@@@std@@@std@@$$QEAV34@V?$tip_test@V?$merged_data@U_tip_PublisherValidationTest@MeetAndChatManagerTip@@U12@@details@tip2@@@tip2@@@Z @ 0x180288814 (-ValidateTrusted@ProtocolLauncher@Utils@@CA-AV-$unique_ptr@VProtocolLauncher@Utils@@U-$default_d.c)
 * Callees:
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_PublisherValidationTest@MeetAndChatManagerTip@@U12@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_PublisherValidationTest@MeetAndChatManagerTip@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x180288DAC (-ensure_data@-$tip_test@V-$merged_data@U_tip_PublisherValidationTest@MeetAndChatManagerTip@@U12@.c)
 *     ??0?$test_data_control@V?$merged_data@U_tip_PublisherValidationTest@MeetAndChatManagerTip@@U12@@details@tip2@@@tip2@@IEAA@AEBV?$com_ptr_t@V?$merged_data@U_tip_PublisherValidationTest@MeetAndChatManagerTip@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1802891F0 (--0-$test_data_control@V-$merged_data@U_tip_PublisherValidationTest@MeetAndChatManagerTip@@U12@@.c)
 */

__int64 __fastcall tip2::tip_test<tip2::details::merged_data<MeetAndChatManagerTip::_tip_PublisherValidationTest,MeetAndChatManagerTip::_tip_PublisherValidationTest>>::operator->(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rax

  v3 = tip2::tip_test<tip2::details::merged_data<MeetAndChatManagerTip::_tip_PublisherValidationTest,MeetAndChatManagerTip::_tip_PublisherValidationTest>>::ensure_data(a1);
  tip2::test_data_control<tip2::details::merged_data<MeetAndChatManagerTip::_tip_PublisherValidationTest,MeetAndChatManagerTip::_tip_PublisherValidationTest>>::test_data_control<tip2::details::merged_data<MeetAndChatManagerTip::_tip_PublisherValidationTest,MeetAndChatManagerTip::_tip_PublisherValidationTest>>(
    a2,
    v3);
  return a2;
}
