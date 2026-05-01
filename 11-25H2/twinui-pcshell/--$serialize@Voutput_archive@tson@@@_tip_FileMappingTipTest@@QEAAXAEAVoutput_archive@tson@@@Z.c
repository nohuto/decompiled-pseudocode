/*
 * XREFs of ??$serialize@Voutput_archive@tson@@@_tip_FileMappingTipTest@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x1806224AC
 * Callers:
 *     ?serialize@?$merged_data@U_tip_FileMappingTipTest@@U1@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x18062F070 (-serialize@-$merged_data@U_tip_FileMappingTipTest@@U1@@details@tip2@@EEAAXAEAVoutput_archive@tso.c)
 * Callees:
 *     ??$process@V?$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@@Z @ 0x1800DDAAC (--$process@V-$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@@Z.c)
 *     ??$process@V?$nvp@AEA_K@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_K@1@@Z @ 0x1802C1304 (--$process@V-$nvp@AEA_K@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEA_K@1@@Z.c)
 */

__int64 __fastcall _tip_FileMappingTipTest::serialize<tson::output_archive>(__int64 a1, __int64 a2)
{
  const char *v5; // [rsp+20h] [rbp-50h] BYREF
  char v6; // [rsp+28h] [rbp-48h]
  __int64 v7; // [rsp+30h] [rbp-40h]
  const char *v8; // [rsp+38h] [rbp-38h] BYREF
  char v9; // [rsp+40h] [rbp-30h]
  __int64 v10; // [rsp+48h] [rbp-28h]
  const char *v11; // [rsp+50h] [rbp-20h] BYREF
  char v12; // [rsp+58h] [rbp-18h]
  __int64 v13; // [rsp+60h] [rbp-10h]

  v12 = 15;
  v9 = 13;
  v11 = "updateTimestamp";
  v6 = 9;
  v13 = a1 + 32;
  v8 = "isValidBuffer";
  v10 = a1 + 24;
  v5 = "appWindow";
  v7 = a1 + 16;
  tson::output_archive::process<tson::nvp<unsigned __int64 &>>(a2, (__int64 *)&v5);
  tson::output_archive::process<tson::nvp<bool &>>(a2, (__int64)&v8);
  tson::output_archive::process<tson::nvp<unsigned __int64 &>>(a2, (__int64 *)&v11);
  *(_BYTE *)(a2 + 8) = 5;
  *(_QWORD *)a2 = "state";
  return tson::output_archive::operator()<int &>(a2, (int *)(a1 + 40));
}
