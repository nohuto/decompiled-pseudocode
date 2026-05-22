/*
 * XREFs of ??$?RV?$nvp@AEAVtest_data_basic@tip2@@@tson@@@input_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAVtest_data_basic@tip2@@@1@@Z @ 0x180108658
 * Callers:
 *     ?deserialize@?$merged_data@U_tip_GamepadInterceptionUsageTipTest_attributes@@Vtest_data_basic@tip2@@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x18010A310 (-deserialize@-$merged_data@U_tip_GamepadInterceptionUsageTipTest_attributes@@Vtest_data_basic@ti.c)
 * Callees:
 *     ?finishNode@input_archive@tson@@QEAAXXZ @ 0x1800A3DC0 (-finishNode@input_archive@tson@@QEAAXXZ.c)
 *     ?startNode@input_archive@tson@@QEAAXXZ @ 0x1800A4C60 (-startNode@input_archive@tson@@QEAAXXZ.c)
 *     ??$serialize@Vinput_archive@tson@@@stored_flag_requirements@details@tip2@@QEAAXAEAVinput_archive@tson@@@Z @ 0x180109348 (--$serialize@Vinput_archive@tson@@@stored_flag_requirements@details@tip2@@QEAAXAEAVinput_archive.c)
 */

tson::input_archive *__fastcall tson::input_archive::operator()<tson::nvp<tip2::test_data_basic &>>(
        tson::input_archive *this,
        __int64 a2)
{
  char v2; // r8
  __int64 v4; // rdi

  v2 = *(_BYTE *)(a2 + 8);
  *((_QWORD *)this + 2) = *(_QWORD *)a2;
  *((_BYTE *)this + 24) = v2;
  v4 = *(_QWORD *)(a2 + 16);
  tson::input_archive::startNode(this);
  if ( (*(_DWORD *)(*(_QWORD *)v4 + 12LL) & 0x40000) != 0 )
    tip2::details::stored_flag_requirements::serialize<tson::input_archive>(v4 + 8, this);
  tson::input_archive::finishNode(this);
  return this;
}
