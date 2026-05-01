/*
 * XREFs of ??$serialize@Vinput_archive@tson@@@_tip_EyeControllerAppLaunchTest@@QEAAXAEAVinput_archive@tson@@@Z @ 0x18048B4F4
 * Callers:
 *     ?deserialize@?$merged_data@U_tip_EyeControllerAppLaunchTest@@U1@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x18048EC00 (-deserialize@-$merged_data@U_tip_EyeControllerAppLaunchTest@@U1@@details@tip2@@EEAAXAEAVinput_ar.c)
 * Callees:
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V12@V?$nvp@AEAJ@2@V12@V12@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@00$$QEAV?$nvp@AEAJ@1@00@Z @ 0x18048B34C (--$process@V-$nvp@AEA_N@tson@@V12@V12@V-$nvp@AEAJ@2@V12@V12@@input_archive@tson@@AEAAX$$QEAV-$nv.c)
 */

__int64 __fastcall _tip_EyeControllerAppLaunchTest::serialize<tson::input_archive>(__int64 a1, tson::input_archive *a2)
{
  const char *v3; // [rsp+88h] [rbp+Fh] BYREF
  char v4; // [rsp+90h] [rbp+17h]
  __int64 v5; // [rsp+98h] [rbp+1Fh]
  const char *v6; // [rsp+A0h] [rbp+27h] BYREF
  char v7; // [rsp+A8h] [rbp+2Fh]
  __int64 v8; // [rsp+B0h] [rbp+37h]
  const char *v9; // [rsp+B8h] [rbp+3Fh] BYREF
  char v10; // [rsp+C0h] [rbp+47h]
  __int64 v11; // [rsp+C8h] [rbp+4Fh]

  v4 = 16;
  v7 = 22;
  v3 = "activationCalled";
  v5 = a1 + 18;
  v6 = "failedBeforeActivation";
  v8 = a1 + 17;
  v9 = "initialized";
  v11 = a1 + 16;
  v10 = 11;
  return tson::input_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<long &>,tson::nvp<bool &>,tson::nvp<bool &>>(
           a2,
           (__int64)&v9,
           (__int64)&v6,
           (__int64)&v3);
}
