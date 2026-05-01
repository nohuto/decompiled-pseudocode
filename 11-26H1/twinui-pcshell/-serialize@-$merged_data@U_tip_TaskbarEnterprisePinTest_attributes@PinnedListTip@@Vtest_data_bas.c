/*
 * XREFs of ?serialize@?$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_basic@tip2@@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x18069B190
 * Callers:
 *     <none>
 * Callees:
 *     ?startNode@output_archive@tson@@QEAAXXZ @ 0x1800E00F0 (-startNode@output_archive@tson@@QEAAXXZ.c)
 *     ?finishNode@output_archive@tson@@QEAAXXZ @ 0x1800E0448 (-finishNode@output_archive@tson@@QEAAXXZ.c)
 *     ??$serialize@Voutput_archive@tson@@@stored_flag_requirements@details@tip2@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x1803ACEBC (--$serialize@Voutput_archive@tson@@@stored_flag_requirements@details@tip2@@QEAAXAEAVoutput_archi.c)
 */

void __fastcall tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>::serialize(
        __int64 a1,
        tson::output_archive *a2,
        char a3)
{
  __int64 v6; // rsi

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
    v6 = (a1 + 256) & -(__int64)(a1 != 0);
    *(_QWORD *)a2 = "test";
    tson::output_archive::startNode(a2);
    if ( (*(_DWORD *)(*(_QWORD *)v6 + 12LL) & 0x40000) != 0 )
      tip2::details::stored_flag_requirements::serialize<tson::output_archive>(v6 + 8, a2);
    tson::output_archive::finishNode(a2);
  }
}
