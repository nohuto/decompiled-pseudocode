/*
 * XREFs of ??$serialize@Voutput_archive@tson@@@_tip_InputAppViewCoordinatorShowRequestTest@KeyboardHostingTipTests@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x18045B4E4
 * Callers:
 *     ?serialize@?$merged_data@U_tip_InputAppViewCoordinatorShowRequestTest@KeyboardHostingTipTests@@U12@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x180469FC0 (-serialize@-$merged_data@U_tip_InputAppViewCoordinatorShowRequestTest@KeyboardHostingTipTests@@U.c)
 * Callees:
 *     ??$process@V?$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@@Z @ 0x1800DDAAC (--$process@V-$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@@Z.c)
 *     ??$process@V?$nvp@AEA_N@tson@@V?$nvp@AEAH@2@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@$$QEAV?$nvp@AEAH@1@@Z @ 0x1802C7698 (--$process@V-$nvp@AEA_N@tson@@V-$nvp@AEAH@2@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@$$QEA.c)
 */

__int64 __fastcall KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest::serialize<tson::output_archive>(
        __int64 a1,
        __int64 a2)
{
  const char *v4; // [rsp+20h] [rbp-39h] BYREF
  char v5; // [rsp+28h] [rbp-31h]
  __int64 v6; // [rsp+30h] [rbp-29h]
  const char *v7; // [rsp+38h] [rbp-21h] BYREF
  char v8; // [rsp+40h] [rbp-19h]
  __int64 v9; // [rsp+48h] [rbp-11h]
  const char *v10; // [rsp+50h] [rbp-9h] BYREF
  char v11; // [rsp+58h] [rbp-1h]
  __int64 v12; // [rsp+60h] [rbp+7h]
  const char *v13; // [rsp+68h] [rbp+Fh] BYREF
  char v14; // [rsp+70h] [rbp+17h]
  __int64 v15; // [rsp+78h] [rbp+1Fh]
  const char *v16; // [rsp+80h] [rbp+27h] BYREF
  char v17; // [rsp+88h] [rbp+2Fh]
  __int64 v18; // [rsp+90h] [rbp+37h]
  const char *v19; // [rsp+98h] [rbp+3Fh] BYREF
  char v20; // [rsp+A0h] [rbp+47h]
  __int64 v21; // [rsp+A8h] [rbp+4Fh]

  v17 = 16;
  v16 = "keyboardViewType";
  v20 = 14;
  v18 = a1 + 24;
  v14 = 9;
  v19 = "isCloakedValid";
  v21 = a1 + 20;
  v13 = "isCloaked";
  v15 = a1 + 19;
  v10 = "isTimeout";
  v12 = a1 + 18;
  v7 = "isViewInvalidAtEnd";
  v9 = a1 + 17;
  v4 = "wasViewInvalidAtBegining";
  v6 = a1 + 16;
  v11 = 9;
  v8 = 18;
  v5 = 24;
  tson::output_archive::process<tson::nvp<bool &>>(a2, (__int64)&v4);
  tson::output_archive::process<tson::nvp<bool &>>(a2, (__int64)&v7);
  tson::output_archive::process<tson::nvp<bool &>>(a2, (__int64)&v10);
  tson::output_archive::process<tson::nvp<bool &>>(a2, (__int64)&v13);
  return tson::output_archive::process<tson::nvp<bool &>,tson::nvp<int &>>(a2, (__int64)&v19, (__int64)&v16);
}
