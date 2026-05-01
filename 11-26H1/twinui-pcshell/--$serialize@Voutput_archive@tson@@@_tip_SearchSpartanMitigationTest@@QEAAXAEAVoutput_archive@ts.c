/*
 * XREFs of ??$serialize@Voutput_archive@tson@@@_tip_SearchSpartanMitigationTest@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x1803ACC30
 * Callers:
 *     ?serialize@?$merged_data@U_tip_SearchSpartanMitigationTest@@U1@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x1803BD9C0 (-serialize@-$merged_data@U_tip_SearchSpartanMitigationTest@@U1@@details@tip2@@EEAAXAEAVoutput_ar.c)
 * Callees:
 *     ??$process@V?$nvp@AEAI@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAI@1@@Z @ 0x1800DF098 (--$process@V-$nvp@AEAI@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAI@1@@Z.c)
 *     ??$process@V?$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@@Z @ 0x1800DFC8C (--$process@V-$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@@Z.c)
 */

char __fastcall _tip_SearchSpartanMitigationTest::serialize<tson::output_archive>(__int64 a1, __int64 a2)
{
  __int64 v3; // r8
  const char *v5; // [rsp+20h] [rbp-29h] BYREF
  char v6; // [rsp+28h] [rbp-21h]
  __int64 v7; // [rsp+30h] [rbp-19h]
  const char *v8; // [rsp+38h] [rbp-11h] BYREF
  char v9; // [rsp+40h] [rbp-9h]
  __int64 v10; // [rsp+48h] [rbp-1h]
  const char *v11; // [rsp+50h] [rbp+7h] BYREF
  char v12; // [rsp+58h] [rbp+Fh]
  __int64 v13; // [rsp+60h] [rbp+17h]
  const char *v14; // [rsp+68h] [rbp+1Fh] BYREF
  char v15; // [rsp+70h] [rbp+27h]
  __int64 v16; // [rsp+78h] [rbp+2Fh]
  const char *v17; // [rsp+80h] [rbp+37h] BYREF
  char v18; // [rsp+88h] [rbp+3Fh]
  __int64 v19; // [rsp+90h] [rbp+47h]

  v18 = 27;
  v15 = 22;
  v17 = "notImpactedBySubdomainIssue";
  v12 = 19;
  v19 = a1 + 19;
  v14 = "appliedMitigationCount";
  v16 = a1 + 20;
  v11 = "reappliedMitigation";
  v13 = a1 + 16;
  v8 = "mitigationWorked";
  v10 = a1 + 17;
  v5 = "appliedMitigation";
  v7 = a1 + 18;
  v9 = 16;
  v6 = 17;
  tson::output_archive::process<tson::nvp<bool &>>(a2, (__int64)&v5);
  tson::output_archive::process<tson::nvp<bool &>>(a2, (__int64)&v8);
  tson::output_archive::process<tson::nvp<bool &>>(a2, (__int64)&v11);
  tson::output_archive::process<tson::nvp<unsigned int &>>(a2, (__int64 *)&v14, v3);
  return tson::output_archive::process<tson::nvp<bool &>>(a2, (__int64)&v17);
}
