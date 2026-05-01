/*
 * XREFs of ??$serialize@Voutput_archive@tson@@@_tip_UpdateTransitionScreenTimeOutInfoTipTest@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x1806226A8
 * Callers:
 *     ?serialize@?$merged_data@U_tip_UpdateTransitionScreenTimeOutInfoTipTest@@U1@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x18062F250 (-serialize@-$merged_data@U_tip_UpdateTransitionScreenTimeOutInfoTipTest@@U1@@details@tip2@@EEAAX.c)
 * Callees:
 *     ??$process@V?$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@@Z @ 0x1800DDAAC (--$process@V-$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@@Z.c)
 *     ??$process@V?$nvp@AEAG@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAG@1@@Z @ 0x1800DF4A8 (--$process@V-$nvp@AEAG@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAG@1@@Z.c)
 */

void __fastcall _tip_UpdateTransitionScreenTimeOutInfoTipTest::serialize<tson::output_archive>(
        __int64 a1,
        tson::output_archive *a2)
{
  __int64 v4; // r8
  const char *v5; // [rsp+20h] [rbp-50h] BYREF
  char v6; // [rsp+28h] [rbp-48h]
  __int64 v7; // [rsp+30h] [rbp-40h]
  const char *v8; // [rsp+38h] [rbp-38h] BYREF
  char v9; // [rsp+40h] [rbp-30h]
  __int64 v10; // [rsp+48h] [rbp-28h]
  const char *v11; // [rsp+50h] [rbp-20h] BYREF
  char v12; // [rsp+58h] [rbp-18h]
  __int64 v13; // [rsp+60h] [rbp-10h]

  v12 = 23;
  v9 = 26;
  v11 = "isTransitionScreenShown";
  v6 = 10;
  v13 = a1 + 18;
  v8 = "isTransitionScreenNotified";
  v10 = a1 + 19;
  v5 = "newTimeOut";
  v7 = a1 + 16;
  tson::output_archive::process<tson::nvp<unsigned short &>>((__int64)a2, (__int64 *)&v5);
  tson::output_archive::process<tson::nvp<bool &>>((__int64)a2, (__int64)&v8);
  tson::output_archive::process<tson::nvp<bool &>>((__int64)a2, (__int64)&v11);
  *((_BYTE *)a2 + 8) = 5;
  *(_QWORD *)a2 = "state";
  tson::output_archive::saveValue(a2, *(unsigned int *)(a1 + 20), v4);
}
