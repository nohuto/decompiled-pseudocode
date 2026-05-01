/*
 * XREFs of ?deserialize@?$merged_data@U_tip_IrisContentLoadedTest@MeetAndChatManagerTip@@U12@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x1805D3660
 * Callers:
 *     <none>
 * Callees:
 *     ?startNode@input_archive@tson@@QEAAXXZ @ 0x1801852A0 (-startNode@input_archive@tson@@QEAAXXZ.c)
 *     ??$serialize@Vinput_archive@tson@@@_tip_IrisContentLoadedTest@MeetAndChatManagerTip@@QEAAXAEAVinput_archive@tson@@@Z @ 0x1805CE8E4 (--$serialize@Vinput_archive@tson@@@_tip_IrisContentLoadedTest@MeetAndChatManagerTip@@QEAAXAEAVin.c)
 */

void __fastcall tip2::details::merged_data<MeetAndChatManagerTip::_tip_IrisContentLoadedTest,MeetAndChatManagerTip::_tip_IrisContentLoadedTest>::deserialize(
        __int64 a1,
        __int64 a2)
{
  *(_BYTE *)(a2 + 24) = 4;
  *(_QWORD *)(a2 + 16) = "test";
  tson::input_archive::startNode((tson::input_archive *)a2);
  MeetAndChatManagerTip::_tip_IrisContentLoadedTest::serialize<tson::input_archive>(
    (a1 + 248) & -(__int64)(a1 != 0),
    (tson::input_archive *)a2);
  tson::input_archive::finishNode((tson::input_archive *)a2);
}
