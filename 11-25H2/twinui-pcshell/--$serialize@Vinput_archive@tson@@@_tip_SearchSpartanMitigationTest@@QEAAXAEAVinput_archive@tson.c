/*
 * XREFs of ??$serialize@Vinput_archive@tson@@@_tip_SearchSpartanMitigationTest@@QEAAXAEAVinput_archive@tson@@@Z @ 0x1803A3B08
 * Callers:
 *     ?deserialize@?$merged_data@U_tip_SearchSpartanMitigationTest@@U1@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x1803B2EE0 (-deserialize@-$merged_data@U_tip_SearchSpartanMitigationTest@@U1@@details@tip2@@EEAAXAEAVinput_a.c)
 * Callees:
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V12@V?$nvp@AEAI@2@V12@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@00$$QEAV?$nvp@AEAI@1@0@Z @ 0x1803A2570 (--$process@V-$nvp@AEA_N@tson@@V12@V12@V-$nvp@AEAI@2@V12@@input_archive@tson@@AEAAX$$QEAV-$nvp@AE.c)
 */

__int64 __fastcall _tip_SearchSpartanMitigationTest::serialize<tson::input_archive>(
        __int64 a1,
        tson::input_archive *a2)
{
  __int64 v3; // [rsp+78h] [rbp+1Fh] BYREF
  char v4; // [rsp+80h] [rbp+27h]
  __int64 v5; // [rsp+88h] [rbp+2Fh]
  __int64 v6; // [rsp+90h] [rbp+37h] BYREF
  char v7; // [rsp+98h] [rbp+3Fh]
  __int64 v8; // [rsp+A0h] [rbp+47h]

  v4 = 16;
  v7 = 17;
  v3 = (__int64)"mitigationWorked";
  v5 = a1 + 17;
  v6 = (__int64)"appliedMitigation";
  v8 = a1 + 18;
  return tson::input_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<unsigned int &>,tson::nvp<bool &>>(
           a2,
           (__int64)&v6,
           &v3);
}
