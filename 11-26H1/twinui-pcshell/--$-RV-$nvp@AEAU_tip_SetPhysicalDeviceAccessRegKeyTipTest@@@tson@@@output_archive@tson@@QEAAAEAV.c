/*
 * XREFs of ??$?RV?$nvp@AEAU_tip_SetPhysicalDeviceAccessRegKeyTipTest@@@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAU_tip_SetPhysicalDeviceAccessRegKeyTipTest@@@1@@Z @ 0x18063C228
 * Callers:
 *     ?serialize@?$merged_data@U_tip_SetPhysicalDeviceAccessRegKeyTipTest@@U1@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x1806434A0 (-serialize@-$merged_data@U_tip_SetPhysicalDeviceAccessRegKeyTipTest@@U1@@details@tip2@@EEAAXAEAV.c)
 * Callees:
 *     ??$process@V?$nvp@AEA_N@tson@@V12@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@0@Z @ 0x1800DFC14 (--$process@V-$nvp@AEA_N@tson@@V12@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@0@Z.c)
 *     ?startNode@output_archive@tson@@QEAAXXZ @ 0x1800E00F0 (-startNode@output_archive@tson@@QEAAXXZ.c)
 *     ?finishNode@output_archive@tson@@QEAAXXZ @ 0x1800E0448 (-finishNode@output_archive@tson@@QEAAXXZ.c)
 */

tson::output_archive *__fastcall tson::output_archive::operator()<tson::nvp<_tip_SetPhysicalDeviceAccessRegKeyTipTest &>>(
        tson::output_archive *this,
        __int64 a2)
{
  char v2; // r8
  __int64 v4; // rbx
  const char *v6; // [rsp+20h] [rbp-38h] BYREF
  char v7; // [rsp+28h] [rbp-30h]
  __int64 v8; // [rsp+30h] [rbp-28h]
  const char *v9; // [rsp+38h] [rbp-20h] BYREF
  char v10; // [rsp+40h] [rbp-18h]
  __int64 v11; // [rsp+48h] [rbp-10h]

  v2 = *(_BYTE *)(a2 + 8);
  *(_QWORD *)this = *(_QWORD *)a2;
  *((_BYTE *)this + 8) = v2;
  v4 = *(_QWORD *)(a2 + 16);
  tson::output_archive::startNode(this);
  v7 = 28;
  v6 = "isPhysicalDeviceAccessKeySet";
  v10 = 32;
  v8 = v4 + 17;
  v9 = "isPhysicalDeviceAccessKeyCreated";
  v11 = v4 + 16;
  tson::output_archive::process<tson::nvp<bool &>,tson::nvp<bool &>>((__int64)this, (__int64)&v9, (__int64)&v6);
  tson::output_archive::finishNode(this);
  return this;
}
