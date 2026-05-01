/*
 * XREFs of ??$serialize@Vinput_archive@tson@@@_tip_WinXMenuEnumerationTest@@QEAAXAEAVinput_archive@tson@@@Z @ 0x1806000EC
 * Callers:
 *     ?deserialize@?$merged_data@U_tip_WinXMenuEnumerationTest@@U1@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x180604420 (-deserialize@-$merged_data@U_tip_WinXMenuEnumerationTest@@U1@@details@tip2@@EEAAXAEAVinput_archi.c)
 * Callees:
 *     ??$?RV?$nvp@AEA_N@tson@@V01@V?$nvp@AEAV?$vector@KV?$allocator@K@std@@@std@@@1@V?$nvp@AEAJ@1@V01@@input_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEA_N@1@0$$QEAV?$nvp@AEAV?$vector@KV?$allocator@K@std@@@std@@@1@$$QEAV?$nvp@AEAJ@1@0@Z @ 0x1805FEFF0 (--$-RV-$nvp@AEA_N@tson@@V01@V-$nvp@AEAV-$vector@KV-$allocator@K@std@@@std@@@1@V-$nvp@AEAJ@1@V01@.c)
 */

tson::input_archive *__fastcall _tip_WinXMenuEnumerationTest::serialize<tson::input_archive>(
        __int64 a1,
        tson::input_archive *a2)
{
  __int64 v3; // [rsp+30h] [rbp-29h] BYREF
  char v4; // [rsp+38h] [rbp-21h]
  __int64 v5; // [rsp+40h] [rbp-19h]
  __int64 v6; // [rsp+48h] [rbp-11h] BYREF
  char v7; // [rsp+50h] [rbp-9h]
  __int64 v8; // [rsp+58h] [rbp-1h]
  const char *v9; // [rsp+60h] [rbp+7h] BYREF
  char v10; // [rsp+68h] [rbp+Fh]
  __int64 v11; // [rsp+70h] [rbp+17h]
  const char *v12; // [rsp+78h] [rbp+1Fh] BYREF
  char v13; // [rsp+80h] [rbp+27h]
  __int64 v14; // [rsp+88h] [rbp+2Fh]
  const char *v15; // [rsp+90h] [rbp+37h] BYREF
  char v16; // [rsp+98h] [rbp+3Fh]
  __int64 v17; // [rsp+A0h] [rbp+47h]

  v4 = 20;
  v3 = (__int64)"wasObsoleteLinkFound";
  v7 = 17;
  v5 = a1 + 52;
  v10 = 12;
  v13 = 17;
  v6 = (__int64)"enumerationResult";
  v16 = 32;
  v8 = a1 + 48;
  v9 = "missingItems";
  v11 = a1 + 24;
  v12 = "wereAllLinksFound";
  v14 = a1 + 17;
  v15 = "wasDefaultProfileLookupNecessary";
  v17 = a1 + 16;
  return tson::input_archive::operator()<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<std::vector<unsigned long> &>,tson::nvp<long &>,tson::nvp<bool &>>(
           a2,
           (__int64)&v15,
           (__int64)&v12,
           (__int64)&v9,
           (__int64)&v6,
           (__int64)&v3);
}
