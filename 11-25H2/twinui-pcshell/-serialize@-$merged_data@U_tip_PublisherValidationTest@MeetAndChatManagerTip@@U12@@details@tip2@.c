/*
 * XREFs of ?serialize@?$merged_data@U_tip_PublisherValidationTest@MeetAndChatManagerTip@@U12@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x1805D5EC0
 * Callers:
 *     <none>
 * Callees:
 *     ?startNode@output_archive@tson@@QEAAXXZ @ 0x1800DDF6C (-startNode@output_archive@tson@@QEAAXXZ.c)
 *     ?finishNode@output_archive@tson@@QEAAXXZ @ 0x1800DF23C (-finishNode@output_archive@tson@@QEAAXXZ.c)
 *     ??$serialize@Voutput_archive@tson@@@_tip_PublisherValidationTest@MeetAndChatManagerTip@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x1805D4368 (--$serialize@Voutput_archive@tson@@@_tip_PublisherValidationTest@MeetAndChatManagerTip@@QEAAXAEA.c)
 */

void __fastcall tip2::details::merged_data<MeetAndChatManagerTip::_tip_PublisherValidationTest,MeetAndChatManagerTip::_tip_PublisherValidationTest>::serialize(
        __int64 a1,
        tson::output_archive *a2,
        char a3)
{
  if ( (a3 & 2) != 0 )
  {
    *((_BYTE *)a2 + 8) = 7;
    *(_QWORD *)a2 = "metrics";
    tson::output_archive::startNode(a2);
    *(_DWORD *)(a1 + 184) = 0;
    tson::output_archive::finishNode(a2);
  }
  if ( (a3 & 1) != 0 )
  {
    *((_BYTE *)a2 + 8) = 4;
    *(_QWORD *)a2 = "test";
    tson::output_archive::startNode(a2);
    MeetAndChatManagerTip::_tip_PublisherValidationTest::serialize<tson::output_archive>(
      (a1 + 248) & -(__int64)(a1 != 0),
      (__int64)a2);
    tson::output_archive::finishNode(a2);
  }
}
