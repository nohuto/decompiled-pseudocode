/*
 * XREFs of ??$serialize@Voutput_archive@tson@@@_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTests@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x1804678AC
 * Callers:
 *     ?serialize@?$merged_data@U_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTests@@U12@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x180475D10 (-serialize@-$merged_data@U_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTests@@.c)
 * Callees:
 *     ??$process@V?$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@@Z @ 0x1800DFC8C (--$process@V-$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@@Z.c)
 *     ??$?RAEAH@output_archive@tson@@QEAAAEAV01@AEAH@Z @ 0x180180E4C (--$-RAEAH@output_archive@tson@@QEAAAEAV01@AEAH@Z.c)
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V12@V12@V12@V12@V12@V12@V12@V12@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@000000000@Z @ 0x180466A98 (--$process@V-$nvp@AEA_N@tson@@V12@V12@V12@V12@V12@V12@V12@V12@V12@@output_archive@tson@@AEAAX$$Q.c)
 */

__int64 __fastcall KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2::serialize<tson::output_archive>(
        __int64 a1,
        __int64 a2)
{
  const char *v5; // [rsp+60h] [rbp-A0h] BYREF
  char v6; // [rsp+68h] [rbp-98h]
  __int64 v7; // [rsp+70h] [rbp-90h]
  const char *v8; // [rsp+78h] [rbp-88h] BYREF
  char v9; // [rsp+80h] [rbp-80h]
  __int64 v10; // [rsp+88h] [rbp-78h]
  const char *v11; // [rsp+90h] [rbp-70h] BYREF
  char v12; // [rsp+98h] [rbp-68h]
  __int64 v13; // [rsp+A0h] [rbp-60h]
  const char *v14; // [rsp+A8h] [rbp-58h] BYREF
  char v15; // [rsp+B0h] [rbp-50h]
  __int64 v16; // [rsp+B8h] [rbp-48h]
  const char *v17; // [rsp+C0h] [rbp-40h] BYREF
  char v18; // [rsp+C8h] [rbp-38h]
  __int64 v19; // [rsp+D0h] [rbp-30h]
  const char *v20; // [rsp+D8h] [rbp-28h] BYREF
  char v21; // [rsp+E0h] [rbp-20h]
  __int64 v22; // [rsp+E8h] [rbp-18h]
  const char *v23; // [rsp+F0h] [rbp-10h] BYREF
  char v24; // [rsp+F8h] [rbp-8h]
  __int64 v25; // [rsp+100h] [rbp+0h]
  const char *v26; // [rsp+108h] [rbp+8h] BYREF
  char v27; // [rsp+110h] [rbp+10h]
  __int64 v28; // [rsp+118h] [rbp+18h]
  const char *v29; // [rsp+120h] [rbp+20h] BYREF
  char v30; // [rsp+128h] [rbp+28h]
  __int64 v31; // [rsp+130h] [rbp+30h]
  const char *v32; // [rsp+138h] [rbp+38h] BYREF
  char v33; // [rsp+140h] [rbp+40h]
  __int64 v34; // [rsp+148h] [rbp+48h]
  const char *v35; // [rsp+150h] [rbp+50h] BYREF
  char v36; // [rsp+158h] [rbp+58h]
  __int64 v37; // [rsp+160h] [rbp+60h]

  v9 = 21;
  v8 = "isInputAppActiveValid";
  v12 = 16;
  v10 = a1 + 34;
  v15 = 25;
  v11 = "isInputAppActive";
  v18 = 21;
  v13 = a1 + 33;
  v14 = "isOnScreenKeyboardVisible";
  v16 = a1 + 31;
  v17 = "mdmPolicyRejectedShow";
  v19 = a1 + 30;
  v20 = "refusedByTabTipAdapter";
  v22 = a1 + 29;
  v23 = "anotherShowRequested";
  v25 = a1 + 28;
  v26 = "isViewHiddenValid";
  v28 = a1 + 20;
  v29 = "isViewHidden";
  v31 = a1 + 19;
  v32 = "isViewVisibleValid";
  v34 = a1 + 18;
  v35 = "isViewVisible";
  v37 = a1 + 17;
  v5 = "wasViewInvalidAtBegining";
  v7 = a1 + 16;
  v21 = 22;
  v24 = 20;
  v27 = 17;
  v30 = 12;
  v33 = 18;
  v36 = 13;
  v6 = 24;
  tson::output_archive::process<tson::nvp<bool &>>(a2, (__int64)&v5);
  *(_BYTE *)(a2 + 8) = 16;
  *(_QWORD *)a2 = "keyboardViewType";
  tson::output_archive::operator()<int &>(a2, (int *)(a1 + 24));
  return tson::output_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>>(
           a2,
           (__int64)&v35,
           (__int64)&v32,
           (__int64)&v29,
           (__int64)&v26,
           (__int64)&v23,
           (__int64)&v20,
           (__int64)&v17,
           (__int64)&v14,
           (__int64)&v11,
           (__int64)&v8);
}
