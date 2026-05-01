/*
 * XREFs of ??$serialize@Voutput_archive@tson@@@_tip_SnapFlyoutShowTest@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x1800DD0C4
 * Callers:
 *     ?serialize@?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x180581080 (-serialize@-$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@EEAAXAEAVoutput_archive@tso.c)
 * Callees:
 *     ??$process@V?$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@@Z @ 0x1800DDAAC (--$process@V-$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@@Z.c)
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V12@V12@V12@V?$nvp@AEAW4SnapControlType@SnapComponent@Shell@Internal@Windows@winrt@@@2@V12@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@0000$$QEAV?$nvp@AEAW4SnapControlType@SnapComponent@Shell@Internal@Windows@winrt@@@1@0@Z @ 0x1802B3FA0 (--$process@V-$nvp@AEA_N@tson@@V12@V12@V12@V12@V-$nvp@AEAW4SnapControlType@SnapComponent@Shell@In.c)
 */

__int64 __fastcall _tip_SnapFlyoutShowTest::serialize<tson::output_archive>(__int64 a1, tson::output_archive *a2)
{
  const char *v4; // [rsp+40h] [rbp-C0h] BYREF
  char v5; // [rsp+48h] [rbp-B8h]
  __int64 v6; // [rsp+50h] [rbp-B0h]
  const char *v7; // [rsp+58h] [rbp-A8h] BYREF
  char v8; // [rsp+60h] [rbp-A0h]
  __int64 v9; // [rsp+68h] [rbp-98h]
  __int64 v10; // [rsp+70h] [rbp-90h] BYREF
  char v11; // [rsp+78h] [rbp-88h]
  __int64 v12; // [rsp+80h] [rbp-80h]
  __int64 v13; // [rsp+88h] [rbp-78h] BYREF
  char v14; // [rsp+90h] [rbp-70h]
  __int64 v15; // [rsp+98h] [rbp-68h]
  __int64 v16; // [rsp+A0h] [rbp-60h] BYREF
  char v17; // [rsp+A8h] [rbp-58h]
  __int64 v18; // [rsp+B0h] [rbp-50h]
  __int64 v19; // [rsp+B8h] [rbp-48h] BYREF
  char v20; // [rsp+C0h] [rbp-40h]
  __int64 v21; // [rsp+C8h] [rbp-38h]
  const char *v22; // [rsp+D0h] [rbp-30h]
  char v23; // [rsp+D8h] [rbp-28h]
  __int64 v24; // [rsp+E0h] [rbp-20h]
  const char *v25; // [rsp+E8h] [rbp-18h]
  char v26; // [rsp+F0h] [rbp-10h]
  __int64 v27; // [rsp+F8h] [rbp-8h]
  const char *v28; // [rsp+100h] [rbp+0h]
  char v29; // [rsp+108h] [rbp+8h]
  __int64 v30; // [rsp+110h] [rbp+10h]

  v11 = 13;
  v10 = (__int64)"instanceReady";
  v14 = 11;
  v12 = a1 + 16;
  v17 = 12;
  v13 = (__int64)"controlType";
  v15 = a1 + 28;
  v16 = (__int64)"threadCreate";
  v18 = a1 + 25;
  v19 = (__int64)"noMonitorInfo";
  v21 = a1 + 23;
  v22 = "controlFailedToLoad";
  v24 = a1 + 21;
  v25 = "threadFailedToStart";
  v27 = a1 + 22;
  v28 = "reused";
  v30 = a1 + 24;
  v7 = "shown";
  v9 = a1 + 17;
  v4 = "canceled";
  v6 = a1 + 18;
  v20 = 13;
  v23 = 19;
  v26 = 19;
  v29 = 6;
  v8 = 5;
  v5 = 8;
  tson::output_archive::process<tson::nvp<bool &>>(a2, &v4);
  tson::output_archive::process<tson::nvp<bool &>>(a2, &v7);
  return tson::output_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<enum winrt::Windows::Internal::Shell::SnapComponent::SnapControlType &>,tson::nvp<bool &>>(
           a2,
           (__int64)&v19,
           (__int64)&v16,
           (__int64)&v13,
           (__int64)&v10);
}
