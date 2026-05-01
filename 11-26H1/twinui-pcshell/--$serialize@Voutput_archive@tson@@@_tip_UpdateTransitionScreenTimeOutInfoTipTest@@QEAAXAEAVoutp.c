/*
 * XREFs of ??$serialize@Voutput_archive@tson@@@_tip_UpdateTransitionScreenTimeOutInfoTipTest@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x180648090
 * Callers:
 *     ?serialize@?$merged_data@U_tip_UpdateTransitionScreenTimeOutInfoTipTest@@U1@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x180654E10 (-serialize@-$merged_data@U_tip_UpdateTransitionScreenTimeOutInfoTipTest@@U1@@details@tip2@@EEAAX.c)
 * Callees:
 *     ??$process@V?$nvp@AEAG@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAG@1@@Z @ 0x1800DEA2C (--$process@V-$nvp@AEAG@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAG@1@@Z.c)
 *     ??$process@V?$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@@Z @ 0x1800DFC8C (--$process@V-$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@@Z.c)
 */

void __fastcall _tip_UpdateTransitionScreenTimeOutInfoTipTest::serialize<tson::output_archive>(
        __int64 a1,
        tson::output_archive *a2,
        __int64 a3)
{
  __int64 v5; // r8
  const char *v6; // [rsp+20h] [rbp-50h] BYREF
  char v7; // [rsp+28h] [rbp-48h]
  __int64 v8; // [rsp+30h] [rbp-40h]
  const char *v9; // [rsp+38h] [rbp-38h] BYREF
  char v10; // [rsp+40h] [rbp-30h]
  __int64 v11; // [rsp+48h] [rbp-28h]
  const char *v12; // [rsp+50h] [rbp-20h] BYREF
  char v13; // [rsp+58h] [rbp-18h]
  __int64 v14; // [rsp+60h] [rbp-10h]

  v13 = 23;
  v10 = 26;
  v12 = "isTransitionScreenShown";
  v7 = 10;
  v14 = a1 + 18;
  v9 = "isTransitionScreenNotified";
  v11 = a1 + 19;
  v6 = "newTimeOut";
  v8 = a1 + 16;
  tson::output_archive::process<tson::nvp<unsigned short &>>((__int64)a2, (__int64 *)&v6, a3);
  tson::output_archive::process<tson::nvp<bool &>>((__int64)a2, (__int64)&v9);
  tson::output_archive::process<tson::nvp<bool &>>((__int64)a2, (__int64)&v12);
  *((_BYTE *)a2 + 8) = 5;
  *(_QWORD *)a2 = "state";
  tson::output_archive::saveValue(a2, *(unsigned int *)(a1 + 20), v5);
}
