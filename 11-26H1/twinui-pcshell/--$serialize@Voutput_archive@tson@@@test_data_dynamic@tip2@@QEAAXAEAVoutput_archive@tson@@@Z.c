/*
 * XREFs of ??$serialize@Voutput_archive@tson@@@test_data_dynamic@tip2@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x1803ACF48
 * Callers:
 *     ?serialize@?$merged_data@U_tip_tip_test_dynamic_attributes@tip2@@Vtest_data_dynamic@2@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x1803BDB40 (-serialize@-$merged_data@U_tip_tip_test_dynamic_attributes@tip2@@Vtest_data_dynamic@2@@details@t.c)
 * Callees:
 *     ??$process@V?$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@@Z @ 0x1800DFC8C (--$process@V-$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@@Z.c)
 *     ??$serialize@Voutput_archive@tson@@@stored_flag_requirements@details@tip2@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x1803ACEBC (--$serialize@Voutput_archive@tson@@@stored_flag_requirements@details@tip2@@QEAAXAEAVoutput_archi.c)
 *     ?serialize_properties@test_data_dynamic@tip2@@AEAAXAEAVoutput_archive@tson@@@Z @ 0x1803BDE58 (-serialize_properties@test_data_dynamic@tip2@@AEAAXAEAVoutput_archive@tson@@@Z.c)
 */

void __fastcall tip2::test_data_dynamic::serialize<tson::output_archive>(
        tip2::test_data_dynamic *this,
        struct tson::output_archive *a2)
{
  int v4; // esi
  int v5; // ebp
  const char *v6; // [rsp+20h] [rbp-28h] BYREF
  char v7; // [rsp+28h] [rbp-20h]
  char *v8; // [rsp+30h] [rbp-18h]

  v4 = *(_DWORD *)(*(_QWORD *)this + 12LL) & 0x60000;
  v5 = *(_DWORD *)(*(_QWORD *)this + 12LL) & 0x10000;
  if ( (v5 || v4 == 393216) && (*(_DWORD *)(*(_QWORD *)this + 12LL) & 0x40000) != 0 )
    tip2::details::stored_flag_requirements::serialize<tson::output_archive>((__int64)this + 8, a2);
  if ( v5 )
  {
    v7 = 6;
    v6 = "req_cb";
    v8 = (char *)this + 184;
    tson::output_archive::process<tson::nvp<bool &>>((__int64)a2, (__int64)&v6);
  }
  else if ( v4 != 393216 )
  {
    tip2::test_data_dynamic::serialize_properties(this, a2);
  }
}
