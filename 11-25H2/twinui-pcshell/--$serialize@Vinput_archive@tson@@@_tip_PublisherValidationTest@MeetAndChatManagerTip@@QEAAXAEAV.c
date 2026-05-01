/*
 * XREFs of ??$serialize@Vinput_archive@tson@@@_tip_PublisherValidationTest@MeetAndChatManagerTip@@QEAAXAEAVinput_archive@tson@@@Z @ 0x1805D42AC
 * Callers:
 *     ?deserialize@?$merged_data@U_tip_PublisherValidationTest@MeetAndChatManagerTip@@U12@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x1805D5C70 (-deserialize@-$merged_data@U_tip_PublisherValidationTest@MeetAndChatManagerTip@@U12@@details@tip.c)
 * Callees:
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V12@V12@V12@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@0000@Z @ 0x18032A3D0 (--$process@V-$nvp@AEA_N@tson@@V12@V12@V12@V12@@input_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@0000.c)
 */

char __fastcall MeetAndChatManagerTip::_tip_PublisherValidationTest::serialize<tson::input_archive>(
        __int64 a1,
        __int64 a2)
{
  const char *v3; // [rsp+30h] [rbp-29h] BYREF
  char v4; // [rsp+38h] [rbp-21h]
  __int64 v5; // [rsp+40h] [rbp-19h]
  const char *v6; // [rsp+48h] [rbp-11h] BYREF
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

  v4 = 7;
  v3 = "noAssoc";
  v7 = 12;
  v5 = a1 + 20;
  v10 = 15;
  v13 = 15;
  v6 = "trustedFound";
  v16 = 9;
  v8 = a1 + 19;
  v9 = "unpackagedFound";
  v11 = a1 + 18;
  v12 = "nonTrustedFound";
  v14 = a1 + 17;
  v15 = "undecided";
  v17 = a1 + 16;
  return tson::input_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>>(
           a2,
           (__int64)&v15,
           (__int64)&v12,
           (__int64)&v9,
           (__int64)&v6,
           (__int64 *)&v3);
}
