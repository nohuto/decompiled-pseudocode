/*
 * XREFs of ??$serialize@Vinput_archive@tson@@@_tip_TabTearOutEventTest@@QEAAXAEAVinput_archive@tson@@@Z @ 0x1805A6420
 * Callers:
 *     ?deserialize@?$merged_data@U_tip_TabTearOutEventTest@@U1@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x1805A9240 (-deserialize@-$merged_data@U_tip_TabTearOutEventTest@@U1@@details@tip2@@EEAAXAEAVinput_archive@t.c)
 * Callees:
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V12@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@00@Z @ 0x180176ECC (--$process@V-$nvp@AEA_N@tson@@V12@V12@@input_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@00@Z.c)
 *     ??$process@V?$nvp@AEAW4SnapRegionAnchorLocations@SnapLayoutHelpers@@@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAW4SnapRegionAnchorLocations@SnapLayoutHelpers@@@1@@Z @ 0x1803A9354 (--$process@V-$nvp@AEAW4SnapRegionAnchorLocations@SnapLayoutHelpers@@@tson@@@input_archive@tson@@.c)
 */

__int64 __fastcall _tip_TabTearOutEventTest::serialize<tson::input_archive>(__int64 a1, __int64 a2)
{
  const char *v4; // [rsp+20h] [rbp-29h] BYREF
  char v5; // [rsp+28h] [rbp-21h]
  __int64 v6; // [rsp+30h] [rbp-19h]
  const char *v7; // [rsp+38h] [rbp-11h] BYREF
  char v8; // [rsp+40h] [rbp-9h]
  __int64 v9; // [rsp+48h] [rbp-1h]
  const char *v10; // [rsp+50h] [rbp+7h] BYREF
  char v11; // [rsp+58h] [rbp+Fh]
  __int64 v12; // [rsp+60h] [rbp+17h]
  const char *v13; // [rsp+68h] [rbp+1Fh] BYREF
  char v14; // [rsp+70h] [rbp+27h]
  __int64 v15; // [rsp+78h] [rbp+2Fh]
  const char *v16; // [rsp+80h] [rbp+37h] BYREF
  char v17; // [rsp+88h] [rbp+3Fh]
  __int64 v18; // [rsp+90h] [rbp+47h]

  v11 = 11;
  v14 = 19;
  v10 = "interrupted";
  v17 = 19;
  v12 = a1 + 18;
  v13 = "snapAssistCompleted";
  v15 = a1 + 17;
  v16 = "snapAssistCancelled";
  v18 = a1 + 16;
  v7 = "endSnapRegion";
  v9 = a1 + 24;
  v4 = "startSnapRegion";
  v6 = a1 + 20;
  v8 = 13;
  v5 = 15;
  tson::input_archive::process<tson::nvp<enum SnapLayoutHelpers::SnapRegionAnchorLocations &>>(a2, (__int64)&v4);
  tson::input_archive::process<tson::nvp<enum SnapLayoutHelpers::SnapRegionAnchorLocations &>>(a2, (__int64)&v7);
  return tson::input_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>>(
           a2,
           (__int64)&v16,
           (__int64)&v13,
           (__int64 *)&v10);
}
