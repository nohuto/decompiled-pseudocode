/*
 * XREFs of ??1?$merged_data@U_tip_PublisherValidationTest@MeetAndChatManagerTip@@U12@@details@tip2@@QEAA@XZ @ 0x1805D46C8
 * Callers:
 *     ?Release@?$merged_data@U_tip_PublisherValidationTest@MeetAndChatManagerTip@@U12@@details@tip2@@AEAAKXZ @ 0x1805D5440 (-Release@-$merged_data@U_tip_PublisherValidationTest@MeetAndChatManagerTip@@U12@@details@tip2@@A.c)
 * Callees:
 *     ?on_destroy@?$shared_data@$0A@$0A@$0A@@details@tip2@@IEAAXXZ @ 0x18028A898 (-on_destroy@-$shared_data@$0A@$0A@$0A@@details@tip2@@IEAAXXZ.c)
 */

void __fastcall tip2::details::merged_data<MeetAndChatManagerTip::_tip_PublisherValidationTest,MeetAndChatManagerTip::_tip_PublisherValidationTest>::~merged_data<MeetAndChatManagerTip::_tip_PublisherValidationTest,MeetAndChatManagerTip::_tip_PublisherValidationTest>(
        _QWORD *a1)
{
  __int64 v1; // rbx

  v1 = (__int64)(a1 + 1);
  *a1 = &tip2::details::merged_data<MeetAndChatManagerTip::_tip_PublisherValidationTest,MeetAndChatManagerTip::_tip_PublisherValidationTest>::`vftable';
  tip2::details::shared_data<0,0,0>::on_destroy((__int64)(a1 + 1));
  tip2::details::shared_data<0,0,1>::~shared_data<0,0,1>(v1);
}
