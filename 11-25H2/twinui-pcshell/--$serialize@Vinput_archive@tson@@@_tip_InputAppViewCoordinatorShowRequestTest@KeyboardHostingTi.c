/*
 * XREFs of ??$serialize@Vinput_archive@tson@@@_tip_InputAppViewCoordinatorShowRequestTest@KeyboardHostingTipTests@@QEAAXAEAVinput_archive@tson@@@Z @ 0x18045B0F4
 * Callers:
 *     ?deserialize@?$merged_data@U_tip_InputAppViewCoordinatorShowRequestTest@KeyboardHostingTipTests@@U12@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x180468E10 (-deserialize@-$merged_data@U_tip_InputAppViewCoordinatorShowRequestTest@KeyboardHostingTipTests@.c)
 * Callees:
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V12@V12@V12@V?$nvp@AEAH@2@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@0000$$QEAV?$nvp@AEAH@1@@Z @ 0x18045A60C (--$process@V-$nvp@AEA_N@tson@@V12@V12@V12@V12@V-$nvp@AEAH@2@@input_archive@tson@@AEAAX$$QEAV-$nv.c)
 */

__int64 __fastcall KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest::serialize<tson::input_archive>(
        __int64 a1,
        tson::input_archive *a2)
{
  __int64 v3; // [rsp+88h] [rbp+Fh] BYREF
  char v4; // [rsp+90h] [rbp+17h]
  __int64 v5; // [rsp+98h] [rbp+1Fh]
  __int64 v6; // [rsp+A0h] [rbp+27h] BYREF
  char v7; // [rsp+A8h] [rbp+2Fh]
  __int64 v8; // [rsp+B0h] [rbp+37h]
  __int64 v9; // [rsp+B8h] [rbp+3Fh] BYREF
  char v10; // [rsp+C0h] [rbp+47h]
  __int64 v11; // [rsp+C8h] [rbp+4Fh]

  v4 = 9;
  v7 = 18;
  v3 = (__int64)"isTimeout";
  v5 = a1 + 18;
  v6 = (__int64)"isViewInvalidAtEnd";
  v8 = a1 + 17;
  v9 = (__int64)"wasViewInvalidAtBegining";
  v11 = a1 + 16;
  v10 = 24;
  return tson::input_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<int &>>(
           a2,
           (__int64)&v9,
           &v6,
           (__int64)&v3);
}
