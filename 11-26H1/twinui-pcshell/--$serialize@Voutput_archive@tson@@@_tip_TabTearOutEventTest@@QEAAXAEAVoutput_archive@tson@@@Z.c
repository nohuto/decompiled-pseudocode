/*
 * XREFs of ??$serialize@Voutput_archive@tson@@@_tip_TabTearOutEventTest@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x1805A64EC
 * Callers:
 *     ?serialize@?$merged_data@U_tip_TabTearOutEventTest@@U1@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x1805A9A40 (-serialize@-$merged_data@U_tip_TabTearOutEventTest@@U1@@details@tip2@@EEAAXAEAVoutput_archive@ts.c)
 * Callees:
 *     ?saveValue@output_archive@tson@@QEAAXK@Z @ 0x1800DF434 (-saveValue@output_archive@tson@@QEAAXK@Z.c)
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V12@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@00@Z @ 0x1800DFC44 (--$process@V-$nvp@AEA_N@tson@@V12@V12@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@00@Z.c)
 */

__int64 __fastcall _tip_TabTearOutEventTest::serialize<tson::output_archive>(
        __int64 a1,
        tson::output_archive *a2,
        __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  const char *v8; // [rsp+20h] [rbp-50h] BYREF
  char v9; // [rsp+28h] [rbp-48h]
  __int64 v10; // [rsp+30h] [rbp-40h]
  const char *v11; // [rsp+38h] [rbp-38h] BYREF
  char v12; // [rsp+40h] [rbp-30h]
  __int64 v13; // [rsp+48h] [rbp-28h]
  const char *v14; // [rsp+50h] [rbp-20h] BYREF
  char v15; // [rsp+58h] [rbp-18h]
  __int64 v16; // [rsp+60h] [rbp-10h]

  *((_BYTE *)a2 + 8) = 15;
  v9 = 11;
  v8 = "interrupted";
  v12 = 19;
  v10 = a1 + 18;
  v11 = "snapAssistCompleted";
  v13 = a1 + 17;
  v14 = "snapAssistCancelled";
  v16 = a1 + 16;
  *(_QWORD *)a2 = "startSnapRegion";
  v5 = *(unsigned int *)(a1 + 20);
  v15 = 19;
  tson::output_archive::saveValue(a2, v5, a3);
  *((_BYTE *)a2 + 8) = 13;
  *(_QWORD *)a2 = "endSnapRegion";
  tson::output_archive::saveValue(a2, *(unsigned int *)(a1 + 24), v6);
  return tson::output_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>>(
           (__int64)a2,
           (__int64)&v14,
           (__int64)&v11,
           (__int64)&v8);
}
