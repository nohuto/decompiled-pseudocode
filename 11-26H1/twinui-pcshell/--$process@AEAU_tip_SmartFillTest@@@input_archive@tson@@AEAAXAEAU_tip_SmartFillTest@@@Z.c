/*
 * XREFs of ??$process@AEAU_tip_SmartFillTest@@@input_archive@tson@@AEAAXAEAU_tip_SmartFillTest@@@Z @ 0x1805AAA34
 * Callers:
 *     ?deserialize@?$merged_data@U_tip_SmartFillTest@@U1@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x1805AD7B0 (-deserialize@-$merged_data@U_tip_SmartFillTest@@U1@@details@tip2@@EEAAXAEAVinput_archive@tson@@@.c)
 * Callees:
 *     ?startNode@input_archive@tson@@QEAAXXZ @ 0x180177078 (-startNode@input_archive@tson@@QEAAXXZ.c)
 *     ??$process@V?$nvp@AEAW4SnapRegionAnchorLocations@SnapLayoutHelpers@@@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAW4SnapRegionAnchorLocations@SnapLayoutHelpers@@@1@@Z @ 0x1803A9354 (--$process@V-$nvp@AEAW4SnapRegionAnchorLocations@SnapLayoutHelpers@@@tson@@@input_archive@tson@@.c)
 */

void __fastcall tson::input_archive::process<_tip_SmartFillTest &>(tson::input_archive *this, __int64 a2)
{
  const char *v4; // [rsp+20h] [rbp-50h] BYREF
  char v5; // [rsp+28h] [rbp-48h]
  __int64 v6; // [rsp+30h] [rbp-40h]
  const char *v7; // [rsp+38h] [rbp-38h] BYREF
  char v8; // [rsp+40h] [rbp-30h]
  __int64 v9; // [rsp+48h] [rbp-28h]
  const char *v10; // [rsp+50h] [rbp-20h] BYREF
  char v11; // [rsp+58h] [rbp-18h]
  __int64 v12; // [rsp+60h] [rbp-10h]

  tson::input_archive::startNode(this);
  v11 = 29;
  v10 = "fillToVerticalAnchorLocations";
  v8 = 31;
  v12 = a2 + 112;
  v5 = 15;
  v7 = "fillToHorizontalAnchorLocations";
  v9 = a2 + 88;
  v4 = "anchorLocations";
  v6 = a2 + 64;
  tson::input_archive::process<tson::nvp<enum SnapLayoutHelpers::SnapRegionAnchorLocations &>>(
    (__int64)this,
    (__int64)&v4);
  tson::input_archive::process<tson::nvp<enum SnapLayoutHelpers::SnapRegionAnchorLocations &>>(
    (__int64)this,
    (__int64)&v7);
  tson::input_archive::process<tson::nvp<enum SnapLayoutHelpers::SnapRegionAnchorLocations &>>(
    (__int64)this,
    (__int64)&v10);
  tson::input_archive::finishNode(this);
}
