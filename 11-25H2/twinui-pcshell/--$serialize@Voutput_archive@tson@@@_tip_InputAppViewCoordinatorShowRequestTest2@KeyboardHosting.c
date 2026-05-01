/*
 * XREFs of ??$serialize@Voutput_archive@tson@@@_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTests@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x18045B3B4
 * Callers:
 *     ?serialize@?$merged_data@U_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTests@@U12@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x180469F20 (-serialize@-$merged_data@U_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTests@@.c)
 * Callees:
 *     ??$process@V?$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@@Z @ 0x1800DDAAC (--$process@V-$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@@Z.c)
 *     ??$?RAEAH@output_archive@tson@@QEAAAEAV01@AEAH@Z @ 0x1800DFF74 (--$-RAEAH@output_archive@tson@@QEAAAEAV01@AEAH@Z.c)
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V12@V12@V12@V12@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@00000@Z @ 0x1802CA454 (--$process@V-$nvp@AEA_N@tson@@V12@V12@V12@V12@V12@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1.c)
 */

__int64 __fastcall KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2::serialize<tson::output_archive>(
        __int64 a1,
        __int64 a2)
{
  const char *v5; // [rsp+40h] [rbp-59h] BYREF
  char v6; // [rsp+48h] [rbp-51h]
  __int64 v7; // [rsp+50h] [rbp-49h]
  const char *v8; // [rsp+58h] [rbp-41h] BYREF
  char v9; // [rsp+60h] [rbp-39h]
  __int64 v10; // [rsp+68h] [rbp-31h]
  const char *v11; // [rsp+70h] [rbp-29h] BYREF
  char v12; // [rsp+78h] [rbp-21h]
  __int64 v13; // [rsp+80h] [rbp-19h]
  const char *v14; // [rsp+88h] [rbp-11h] BYREF
  char v15; // [rsp+90h] [rbp-9h]
  __int64 v16; // [rsp+98h] [rbp-1h]
  const char *v17; // [rsp+A0h] [rbp+7h] BYREF
  char v18; // [rsp+A8h] [rbp+Fh]
  __int64 v19; // [rsp+B0h] [rbp+17h]
  const char *v20; // [rsp+B8h] [rbp+1Fh] BYREF
  char v21; // [rsp+C0h] [rbp+27h]
  __int64 v22; // [rsp+C8h] [rbp+2Fh]
  const char *v23; // [rsp+D0h] [rbp+37h] BYREF
  char v24; // [rsp+D8h] [rbp+3Fh]
  __int64 v25; // [rsp+E0h] [rbp+47h]

  v9 = 25;
  v8 = "isOnScreenKeyboardVisible";
  v12 = 21;
  v10 = a1 + 27;
  v15 = 22;
  v11 = "mdmPolicyRejectedShow";
  v18 = 20;
  v13 = a1 + 26;
  v14 = "refusedByTabTipAdapter";
  v16 = a1 + 25;
  v17 = "anotherShowRequested";
  v19 = a1 + 24;
  v20 = "isViewHidden";
  v22 = a1 + 18;
  v23 = "isViewVisible";
  v25 = a1 + 17;
  v5 = "wasViewInvalidAtBegining";
  v7 = a1 + 16;
  v21 = 12;
  v24 = 13;
  v6 = 24;
  tson::output_archive::process<tson::nvp<bool &>>(a2, (__int64)&v5);
  *(_BYTE *)(a2 + 8) = 16;
  *(_QWORD *)a2 = "keyboardViewType";
  tson::output_archive::operator()<int &>(a2, (int *)(a1 + 20));
  return tson::output_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>>(
           a2,
           (__int64)&v23,
           (__int64)&v20,
           (int)&v17,
           (__int64)&v14,
           (__int64)&v11,
           (__int64)&v8);
}
