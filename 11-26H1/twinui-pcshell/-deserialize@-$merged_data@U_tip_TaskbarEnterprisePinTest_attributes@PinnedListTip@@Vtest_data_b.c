/*
 * XREFs of ?deserialize@?$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_basic@tip2@@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x18069A5D0
 * Callers:
 *     <none>
 * Callees:
 *     ?startNode@input_archive@tson@@QEAAXXZ @ 0x180177078 (-startNode@input_archive@tson@@QEAAXXZ.c)
 *     ??$serialize@Vinput_archive@tson@@@stored_flag_requirements@details@tip2@@QEAAXAEAVinput_archive@tson@@@Z @ 0x1803ACAF8 (--$serialize@Vinput_archive@tson@@@stored_flag_requirements@details@tip2@@QEAAXAEAVinput_archive.c)
 */

void __fastcall tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>::deserialize(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rdi

  *(_BYTE *)(a2 + 24) = 4;
  v3 = (a1 + 256) & -(__int64)(a1 != 0);
  *(_QWORD *)(a2 + 16) = "test";
  tson::input_archive::startNode((tson::input_archive *)a2);
  if ( (*(_DWORD *)(*(_QWORD *)v3 + 12LL) & 0x40000) != 0 )
    tip2::details::stored_flag_requirements::serialize<tson::input_archive>(v3 + 8, (tson *)a2);
  tson::input_archive::finishNode((tson::input_archive *)a2);
}
