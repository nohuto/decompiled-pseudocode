/*
 * XREFs of ?reset@?$com_ptr_t@V?$merged_data@U_tip_PublisherValidationTest@MeetAndChatManagerTip@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180284F04
 * Callers:
 *     ??1?$test_data_control@V?$merged_data@U_tip_PublisherValidationTest@MeetAndChatManagerTip@@U12@@details@tip2@@@tip2@@QEAA@XZ @ 0x180284798 (--1-$test_data_control@V-$merged_data@U_tip_PublisherValidationTest@MeetAndChatManagerTip@@U12@@.c)
 *     ?ValidateTrusted@ProtocolLauncher@Utils@@CA?AV?$unique_ptr@VProtocolLauncher@Utils@@U?$default_delete@VProtocolLauncher@Utils@@@std@@@std@@$$QEAV34@V?$tip_test@V?$merged_data@U_tip_PublisherValidationTest@MeetAndChatManagerTip@@U12@@details@tip2@@@tip2@@@Z @ 0x1802847DC (-ValidateTrusted@ProtocolLauncher@Utils@@CA-AV-$unique_ptr@VProtocolLauncher@Utils@@U-$default_d.c)
 * Callees:
 *     ?Release@?$merged_data@U_tip_PublisherValidationTest@MeetAndChatManagerTip@@U12@@details@tip2@@AEAAKXZ @ 0x1805F9EF0 (-Release@-$merged_data@U_tip_PublisherValidationTest@MeetAndChatManagerTip@@U12@@details@tip2@@A.c)
 */

void *__fastcall wil::com_ptr_t<tip2::details::merged_data<MeetAndChatManagerTip::_tip_PublisherValidationTest,MeetAndChatManagerTip::_tip_PublisherValidationTest>,wil::err_returncode_policy>::reset(
        void **a1)
{
  void *result; // rax

  result = *a1;
  *a1 = 0LL;
  if ( result )
    return (void *)tip2::details::merged_data<MeetAndChatManagerTip::_tip_PublisherValidationTest,MeetAndChatManagerTip::_tip_PublisherValidationTest>::Release(result);
  return result;
}
