/*
 * XREFs of ??$serialize@Vinput_archive@tson@@@_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTests@@QEAAXAEAVinput_archive@tson@@@Z @ 0x18045AFD0
 * Callers:
 *     ?deserialize@?$merged_data@U_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTests@@U12@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x180468DB0 (-deserialize@-$merged_data@U_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTests.c)
 * Callees:
 *     ??$process@V?$nvp@AEA_N@tson@@V?$nvp@AEAH@2@V12@V12@V12@V12@V12@V12@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@$$QEAV?$nvp@AEAH@1@000000@Z @ 0x18045AC34 (--$process@V-$nvp@AEA_N@tson@@V-$nvp@AEAH@2@V12@V12@V12@V12@V12@V12@@input_archive@tson@@AEAAX$$.c)
 */

char __fastcall KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2::serialize<tson::input_archive>(
        __int64 a1,
        __int64 a2)
{
  const char *v3; // [rsp+50h] [rbp-B0h] BYREF
  char v4; // [rsp+58h] [rbp-A8h]
  __int64 v5; // [rsp+60h] [rbp-A0h]
  const char *v6; // [rsp+68h] [rbp-98h] BYREF
  char v7; // [rsp+70h] [rbp-90h]
  __int64 v8; // [rsp+78h] [rbp-88h]
  const char *v9; // [rsp+80h] [rbp-80h] BYREF
  char v10; // [rsp+88h] [rbp-78h]
  __int64 v11; // [rsp+90h] [rbp-70h]
  const char *v12; // [rsp+98h] [rbp-68h] BYREF
  char v13; // [rsp+A0h] [rbp-60h]
  __int64 v14; // [rsp+A8h] [rbp-58h]
  const char *v15; // [rsp+B0h] [rbp-50h] BYREF
  char v16; // [rsp+B8h] [rbp-48h]
  __int64 v17; // [rsp+C0h] [rbp-40h]
  const char *v18; // [rsp+C8h] [rbp-38h] BYREF
  char v19; // [rsp+D0h] [rbp-30h]
  __int64 v20; // [rsp+D8h] [rbp-28h]
  const char *v21; // [rsp+E0h] [rbp-20h] BYREF
  char v22; // [rsp+E8h] [rbp-18h]
  __int64 v23; // [rsp+F0h] [rbp-10h]
  const char *v24; // [rsp+F8h] [rbp-8h] BYREF
  char v25; // [rsp+100h] [rbp+0h]
  __int64 v26; // [rsp+108h] [rbp+8h]

  v4 = 25;
  v3 = "isOnScreenKeyboardVisible";
  v7 = 21;
  v5 = a1 + 27;
  v10 = 22;
  v6 = "mdmPolicyRejectedShow";
  v13 = 20;
  v8 = a1 + 26;
  v16 = 12;
  v9 = "refusedByTabTipAdapter";
  v11 = a1 + 25;
  v12 = "anotherShowRequested";
  v14 = a1 + 24;
  v15 = "isViewHidden";
  v17 = a1 + 18;
  v18 = "isViewVisible";
  v20 = a1 + 17;
  v21 = "keyboardViewType";
  v23 = a1 + 20;
  v24 = "wasViewInvalidAtBegining";
  v26 = a1 + 16;
  v19 = 13;
  v22 = 16;
  v25 = 24;
  return tson::input_archive::process<tson::nvp<bool &>,tson::nvp<int &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>>(
           a2,
           (__int64)&v24,
           (__int64 *)&v21,
           (__int64)&v18,
           (__int64)&v15,
           (__int64)&v12,
           (__int64)&v9,
           (__int64)&v6,
           (__int64 *)&v3);
}
