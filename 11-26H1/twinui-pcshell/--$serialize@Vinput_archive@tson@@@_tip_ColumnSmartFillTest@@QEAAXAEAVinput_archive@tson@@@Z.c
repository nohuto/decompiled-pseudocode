/*
 * XREFs of ??$serialize@Vinput_archive@tson@@@_tip_ColumnSmartFillTest@@QEAAXAEAVinput_archive@tson@@@Z @ 0x1805AAADC
 * Callers:
 *     ?deserialize@?$merged_data@U_tip_ColumnSmartFillTest@@U1@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x1805AD750 (-deserialize@-$merged_data@U_tip_ColumnSmartFillTest@@U1@@details@tip2@@EEAAXAEAVinput_archive@t.c)
 * Callees:
 *     ??$?RAEAH@input_archive@tson@@QEAAAEAV01@AEAH@Z @ 0x180463EC4 (--$-RAEAH@input_archive@tson@@QEAAAEAV01@AEAH@Z.c)
 *     ??$process@V?$nvp@AEAI@tson@@V?$nvp@AEAJ@2@V32@V32@V32@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAI@1@$$QEAV?$nvp@AEAJ@1@111@Z @ 0x180593F7C (--$process@V-$nvp@AEAI@tson@@V-$nvp@AEAJ@2@V32@V32@V32@@input_archive@tson@@AEAAX$$QEAV-$nvp@AEA.c)
 */

bool __fastcall _tip_ColumnSmartFillTest::serialize<tson::input_archive>(__int64 a1, __int64 a2)
{
  const char *v4; // [rsp+30h] [rbp-29h] BYREF
  char v5; // [rsp+38h] [rbp-21h]
  __int64 v6; // [rsp+40h] [rbp-19h]
  const char *v7; // [rsp+48h] [rbp-11h] BYREF
  char v8; // [rsp+50h] [rbp-9h]
  __int64 v9; // [rsp+58h] [rbp-1h]
  const char *v10; // [rsp+60h] [rbp+7h] BYREF
  char v11; // [rsp+68h] [rbp+Fh]
  __int64 v12; // [rsp+70h] [rbp+17h]
  const char *v13; // [rsp+78h] [rbp+1Fh] BYREF
  char v14; // [rsp+80h] [rbp+27h]
  __int64 v15; // [rsp+88h] [rbp+2Fh]
  const char *v16; // [rsp+90h] [rbp+37h] BYREF
  char v17; // [rsp+98h] [rbp+3Fh]
  __int64 v18; // [rsp+A0h] [rbp+47h]

  v5 = 15;
  v8 = 16;
  v11 = 14;
  v4 = "resultRect.left";
  v6 = a1 + 48;
  v7 = "resultRect.right";
  v9 = a1 + 56;
  v15 = a1 + 20;
  v10 = "workArea.right";
  v12 = a1 + 28;
  v14 = 13;
  v13 = "workArea.left";
  v16 = "dpi";
  v18 = a1 + 36;
  v17 = 3;
  *(_QWORD *)(a2 + 16) = "horizontalPosition";
  *(_BYTE *)(a2 + 24) = 18;
  tson::input_archive::operator()<int &>((tson::input_archive *)a2, (_DWORD *)(a1 + 16));
  return tson::input_archive::process<tson::nvp<unsigned int &>,tson::nvp<long &>,tson::nvp<long &>,tson::nvp<long &>,tson::nvp<long &>>(
           a2,
           (__int64)&v16,
           (__int64)&v13,
           (__int64)&v10,
           (__int64)&v7,
           (__int64)&v4);
}
