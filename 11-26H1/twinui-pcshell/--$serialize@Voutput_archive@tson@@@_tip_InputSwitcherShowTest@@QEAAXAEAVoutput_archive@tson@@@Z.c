/*
 * XREFs of ??$serialize@Voutput_archive@tson@@@_tip_InputSwitcherShowTest@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x180638D00
 * Callers:
 *     ?serialize@?$merged_data@U_tip_InputSwitcherShowTest@@U1@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x18063A9A0 (-serialize@-$merged_data@U_tip_InputSwitcherShowTest@@U1@@details@tip2@@EEAAXAEAVoutput_archive@.c)
 * Callees:
 *     ?saveValue@output_archive@tson@@QEAAXK@Z @ 0x1800DF434 (-saveValue@output_archive@tson@@QEAAXK@Z.c)
 *     ??$process@V?$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@@Z @ 0x1800DFC8C (--$process@V-$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@@Z.c)
 */

char __fastcall _tip_InputSwitcherShowTest::serialize<tson::output_archive>(__int64 a1, tson::output_archive *a2)
{
  __int64 v4; // r8
  const char *v6; // [rsp+20h] [rbp-39h] BYREF
  char v7; // [rsp+28h] [rbp-31h]
  __int64 v8; // [rsp+30h] [rbp-29h]
  const char *v9; // [rsp+38h] [rbp-21h] BYREF
  char v10; // [rsp+40h] [rbp-19h]
  __int64 v11; // [rsp+48h] [rbp-11h]
  const char *v12; // [rsp+50h] [rbp-9h] BYREF
  char v13; // [rsp+58h] [rbp-1h]
  __int64 v14; // [rsp+60h] [rbp+7h]
  const char *v15; // [rsp+68h] [rbp+Fh] BYREF
  char v16; // [rsp+70h] [rbp+17h]
  __int64 v17; // [rsp+78h] [rbp+1Fh]
  const char *v18; // [rsp+80h] [rbp+27h] BYREF
  char v19; // [rsp+88h] [rbp+2Fh]
  __int64 v20; // [rsp+90h] [rbp+37h]
  const char *v21; // [rsp+98h] [rbp+3Fh] BYREF
  char v22; // [rsp+A0h] [rbp+47h]
  __int64 v23; // [rsp+A8h] [rbp+4Fh]

  v22 = 20;
  v21 = "controlCenterVisible";
  v19 = 12;
  v23 = a1 + 21;
  v16 = 11;
  v18 = "showComplete";
  v13 = 7;
  v20 = a1 + 20;
  v15 = "showSuccess";
  v17 = a1 + 19;
  v12 = "canShow";
  v14 = a1 + 18;
  v9 = "controlCenterAvailable";
  v11 = a1 + 17;
  v6 = "timedOut";
  v8 = a1 + 16;
  v10 = 22;
  v7 = 8;
  tson::output_archive::process<tson::nvp<bool &>>((__int64)a2, (__int64)&v6);
  tson::output_archive::process<tson::nvp<bool &>>((__int64)a2, (__int64)&v9);
  tson::output_archive::process<tson::nvp<bool &>>((__int64)a2, (__int64)&v12);
  tson::output_archive::process<tson::nvp<bool &>>((__int64)a2, (__int64)&v15);
  tson::output_archive::process<tson::nvp<bool &>>((__int64)a2, (__int64)&v18);
  *((_BYTE *)a2 + 8) = 8;
  *(_QWORD *)a2 = "showKind";
  tson::output_archive::saveValue(a2, *(unsigned int *)(a1 + 24), v4);
  return tson::output_archive::process<tson::nvp<bool &>>((__int64)a2, (__int64)&v21);
}
