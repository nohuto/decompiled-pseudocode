/*
 * XREFs of ?serialize@?$merged_data@U_tip_tip_test_dynamic_attributes@tip2@@Vtest_data_dynamic@2@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x1803BDB40
 * Callers:
 *     <none>
 * Callees:
 *     ?startNode@output_archive@tson@@QEAAXXZ @ 0x1800E00F0 (-startNode@output_archive@tson@@QEAAXXZ.c)
 *     ?finishNode@output_archive@tson@@QEAAXXZ @ 0x1800E0448 (-finishNode@output_archive@tson@@QEAAXXZ.c)
 *     ??$?RV?$nvp@AEAU?$test_data_metrics@Vtest_data_dynamic@tip2@@@details@tip2@@@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAU?$test_data_metrics@Vtest_data_dynamic@tip2@@@details@tip2@@@1@@Z @ 0x1803A6D00 (--$-RV-$nvp@AEAU-$test_data_metrics@Vtest_data_dynamic@tip2@@@details@tip2@@@tson@@@output_archi.c)
 *     ??$serialize@Voutput_archive@tson@@@test_data_dynamic@tip2@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x1803ACF48 (--$serialize@Voutput_archive@tson@@@test_data_dynamic@tip2@@QEAAXAEAVoutput_archive@tson@@@Z.c)
 */

void __fastcall tip2::details::merged_data<tip2::_tip_tip_test_dynamic_attributes,tip2::test_data_dynamic>::serialize(
        __int64 a1,
        tson::output_archive *a2,
        char a3)
{
  _QWORD v6[2]; // [rsp+20h] [rbp-38h] BYREF
  const char *v7; // [rsp+30h] [rbp-28h] BYREF
  char v8; // [rsp+38h] [rbp-20h]
  _QWORD *v9; // [rsp+40h] [rbp-18h]

  if ( (a3 & 2) != 0 )
  {
    if ( a1 )
      v6[0] = a1 + 256;
    else
      v6[0] = 0LL;
    v8 = 7;
    v6[1] = a1 + 184;
    v7 = "metrics";
    v9 = v6;
    tson::output_archive::operator()<tson::nvp<tip2::details::test_data_metrics<tip2::test_data_dynamic> &>>(
      a2,
      (__int64)&v7);
  }
  if ( (a3 & 1) != 0 )
  {
    *((_BYTE *)a2 + 8) = 4;
    *(_QWORD *)a2 = "test";
    tson::output_archive::startNode(a2);
    tip2::test_data_dynamic::serialize<tson::output_archive>(
      (tip2::test_data_dynamic *)((a1 + 256) & -(__int64)(a1 != 0)),
      a2);
    tson::output_archive::finishNode(a2);
  }
}
