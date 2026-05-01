/*
 * XREFs of ??$serialize@Vinput_archive@tson@@@_tip_EyeControllerAppLaunchTest@@QEAAXAEAVinput_archive@tson@@@Z @ 0x18047AAB0
 * Callers:
 *     ?deserialize@?$merged_data@U_tip_EyeControllerAppLaunchTest@@U1@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x18047E1D0 (-deserialize@-$merged_data@U_tip_EyeControllerAppLaunchTest@@U1@@details@tip2@@EEAAXAEAVinput_ar.c)
 * Callees:
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V12@V?$nvp@AEAJ@2@V12@V12@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@00$$QEAV?$nvp@AEAJ@1@00@Z @ 0x18047A908 (--$process@V-$nvp@AEA_N@tson@@V12@V12@V-$nvp@AEAJ@2@V12@V12@@input_archive@tson@@AEAAX$$QEAV-$nv.c)
 */

__int64 __fastcall _tip_EyeControllerAppLaunchTest::serialize<tson::input_archive>(__int64 a1, tson::input_archive *a2)
{
  __int64 v3; // [rsp+40h] [rbp-39h] BYREF
  char v4; // [rsp+48h] [rbp-31h]
  __int64 v5; // [rsp+50h] [rbp-29h]
  __int64 v6; // [rsp+58h] [rbp-21h] BYREF
  char v7; // [rsp+60h] [rbp-19h]
  __int64 v8; // [rsp+68h] [rbp-11h]
  __int64 v9; // [rsp+70h] [rbp-9h] BYREF
  char v10; // [rsp+78h] [rbp-1h]
  __int64 v11; // [rsp+80h] [rbp+7h]
  const char *v12; // [rsp+88h] [rbp+Fh] BYREF
  char v13; // [rsp+90h] [rbp+17h]
  __int64 v14; // [rsp+98h] [rbp+1Fh]
  const char *v15; // [rsp+A0h] [rbp+27h] BYREF
  char v16; // [rsp+A8h] [rbp+2Fh]
  __int64 v17; // [rsp+B0h] [rbp+37h]
  const char *v18; // [rsp+B8h] [rbp+3Fh] BYREF
  char v19; // [rsp+C0h] [rbp+47h]
  __int64 v20; // [rsp+C8h] [rbp+4Fh]

  v4 = 27;
  v3 = (__int64)"noTestRunningOnViewCreation";
  v7 = 11;
  v5 = a1 + 25;
  v10 = 16;
  v6 = (__int64)"viewCreated";
  v13 = 16;
  v8 = a1 + 24;
  v16 = 22;
  v9 = (__int64)"activationResult";
  v11 = a1 + 20;
  v12 = "activationCalled";
  v14 = a1 + 18;
  v15 = "failedBeforeActivation";
  v17 = a1 + 17;
  v18 = "initialized";
  v20 = a1 + 16;
  v19 = 11;
  return tson::input_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<long &>,tson::nvp<bool &>,tson::nvp<bool &>>(
           a2,
           (__int64)&v18,
           (__int64)&v15,
           (__int64)&v12,
           (__int64)&v9,
           (__int64)&v6,
           (__int64)&v3);
}
