/*
 * XREFs of ?Release@?$merged_data@U_tip_PublisherValidationTest@MeetAndChatManagerTip@@U12@@details@tip2@@AEAAKXZ @ 0x1805F9EF0
 * Callers:
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_PublisherValidationTest@MeetAndChatManagerTip@@U12@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_PublisherValidationTest@MeetAndChatManagerTip@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x180284730 (-ensure_data@-$tip_test@V-$merged_data@U_tip_PublisherValidationTest@MeetAndChatManagerTip@@U12@.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_PublisherValidationTest@MeetAndChatManagerTip@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18028491C (--1-$com_ptr_t@V-$merged_data@U_tip_PublisherValidationTest@MeetAndChatManagerTip@@U12@@details@.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_PublisherValidationTest@MeetAndChatManagerTip@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180284F04 (-reset@-$com_ptr_t@V-$merged_data@U_tip_PublisherValidationTest@MeetAndChatManagerTip@@U12@@deta.c)
 * Callees:
 *     ??1?$merged_data@U_tip_PublisherValidationTest@MeetAndChatManagerTip@@U12@@details@tip2@@QEAA@XZ @ 0x1805F9168 (--1-$merged_data@U_tip_PublisherValidationTest@MeetAndChatManagerTip@@U12@@details@tip2@@QEAA@XZ.c)
 */

__int64 __fastcall tip2::details::merged_data<MeetAndChatManagerTip::_tip_PublisherValidationTest,MeetAndChatManagerTip::_tip_PublisherValidationTest>::Release(
        volatile signed __int32 *pv)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement(pv + 70);
  if ( !v2 )
  {
    tip2::details::merged_data<MeetAndChatManagerTip::_tip_PublisherValidationTest,MeetAndChatManagerTip::_tip_PublisherValidationTest>::~merged_data<MeetAndChatManagerTip::_tip_PublisherValidationTest,MeetAndChatManagerTip::_tip_PublisherValidationTest>(pv);
    CoTaskMemFree((LPVOID)pv);
  }
  return v2;
}
