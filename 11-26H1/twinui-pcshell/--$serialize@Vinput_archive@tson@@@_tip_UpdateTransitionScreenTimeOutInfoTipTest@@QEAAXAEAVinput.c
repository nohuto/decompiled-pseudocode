/*
 * XREFs of ??$serialize@Vinput_archive@tson@@@_tip_UpdateTransitionScreenTimeOutInfoTipTest@@QEAAXAEAVinput_archive@tson@@@Z @ 0x180647CEC
 * Callers:
 *     ?deserialize@?$merged_data@U_tip_UpdateTransitionScreenTimeOutInfoTipTest@@U1@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x1806537B0 (-deserialize@-$merged_data@U_tip_UpdateTransitionScreenTimeOutInfoTipTest@@U1@@details@tip2@@EEA.c)
 * Callees:
 *     ??$process@V?$nvp@AEAG@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAG@1@@Z @ 0x180326B5C (--$process@V-$nvp@AEAG@tson@@@input_archive@tson@@AEAAX$$QEAV-$nvp@AEAG@1@@Z.c)
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V?$nvp@AEAW4CloudPCState@Shell@Internal@Windows@winrt@@@2@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@0$$QEAV?$nvp@AEAW4CloudPCState@Shell@Internal@Windows@winrt@@@1@@Z @ 0x180647624 (--$process@V-$nvp@AEA_N@tson@@V12@V-$nvp@AEAW4CloudPCState@Shell@Internal@Windows@winrt@@@2@@inp.c)
 */

char __fastcall _tip_UpdateTransitionScreenTimeOutInfoTipTest::serialize<tson::input_archive>(
        __int64 a1,
        tson::input_archive *a2)
{
  const char *v4; // [rsp+20h] [rbp-60h] BYREF
  char v5; // [rsp+28h] [rbp-58h]
  __int64 v6; // [rsp+30h] [rbp-50h]
  const char *v7; // [rsp+38h] [rbp-48h] BYREF
  char v8; // [rsp+40h] [rbp-40h]
  __int64 v9; // [rsp+48h] [rbp-38h]
  const char *v10; // [rsp+50h] [rbp-30h] BYREF
  char v11; // [rsp+58h] [rbp-28h]
  __int64 v12; // [rsp+60h] [rbp-20h]
  const char *v13; // [rsp+68h] [rbp-18h] BYREF
  char v14; // [rsp+70h] [rbp-10h]
  __int64 v15; // [rsp+78h] [rbp-8h]

  v8 = 5;
  v11 = 23;
  v7 = "state";
  v14 = 26;
  v9 = a1 + 20;
  v10 = "isTransitionScreenShown";
  v12 = a1 + 18;
  v13 = "isTransitionScreenNotified";
  v15 = a1 + 19;
  v4 = "newTimeOut";
  v6 = a1 + 16;
  v5 = 10;
  tson::input_archive::process<tson::nvp<unsigned short &>>((__int64)a2, (__int64)&v4);
  return tson::input_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<enum winrt::Windows::Internal::Shell::CloudPCState &>>(
           a2,
           (__int64)&v13,
           (__int64 *)&v10,
           (__int64)&v7);
}
