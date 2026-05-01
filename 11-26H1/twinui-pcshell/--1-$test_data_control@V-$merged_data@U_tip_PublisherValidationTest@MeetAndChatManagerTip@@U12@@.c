/*
 * XREFs of ??1?$test_data_control@V?$merged_data@U_tip_PublisherValidationTest@MeetAndChatManagerTip@@U12@@details@tip2@@@tip2@@QEAA@XZ @ 0x180284798
 * Callers:
 *     ?TryGetForUriScheme@ProtocolLauncher@Utils@@SA?AV?$unique_ptr@VProtocolLauncher@Utils@@U?$default_delete@VProtocolLauncher@Utils@@@std@@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@4@@Z @ 0x18027AF9C (-TryGetForUriScheme@ProtocolLauncher@Utils@@SA-AV-$unique_ptr@VProtocolLauncher@Utils@@U-$defaul.c)
 *     ?ValidateTrusted@ProtocolLauncher@Utils@@CA?AV?$unique_ptr@VProtocolLauncher@Utils@@U?$default_delete@VProtocolLauncher@Utils@@@std@@@std@@$$QEAV34@V?$tip_test@V?$merged_data@U_tip_PublisherValidationTest@MeetAndChatManagerTip@@U12@@details@tip2@@@tip2@@@Z @ 0x1802847DC (-ValidateTrusted@ProtocolLauncher@Utils@@CA-AV-$unique_ptr@VProtocolLauncher@Utils@@U-$default_d.c)
 * Callees:
 *     ?end_update@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ @ 0x18028262C (-end_update@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_PublisherValidationTest@MeetAndChatManagerTip@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180284F04 (-reset@-$com_ptr_t@V-$merged_data@U_tip_PublisherValidationTest@MeetAndChatManagerTip@@U12@@deta.c)
 */

__int64 __fastcall tip2::test_data_control<tip2::details::merged_data<MeetAndChatManagerTip::_tip_PublisherValidationTest,MeetAndChatManagerTip::_tip_PublisherValidationTest>>::~test_data_control<tip2::details::merged_data<MeetAndChatManagerTip::_tip_PublisherValidationTest,MeetAndChatManagerTip::_tip_PublisherValidationTest>>(
        __int64 *a1)
{
  __int64 v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    tip2::details::shared_data<0,0,0>::end_update(v2 + 8);
    wil::com_ptr_t<tip2::details::merged_data<MeetAndChatManagerTip::_tip_PublisherValidationTest,MeetAndChatManagerTip::_tip_PublisherValidationTest>,wil::err_returncode_policy>::reset(a1);
  }
  return wil::com_ptr_t<tip2::details::merged_data<MeetAndChatManagerTip::_tip_PublisherValidationTest,MeetAndChatManagerTip::_tip_PublisherValidationTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<MeetAndChatManagerTip::_tip_PublisherValidationTest,MeetAndChatManagerTip::_tip_PublisherValidationTest>,wil::err_returncode_policy>(a1);
}
