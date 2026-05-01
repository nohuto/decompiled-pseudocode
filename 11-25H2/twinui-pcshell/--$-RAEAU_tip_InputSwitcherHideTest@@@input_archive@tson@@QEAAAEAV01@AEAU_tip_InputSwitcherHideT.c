/*
 * XREFs of ??$?RAEAU_tip_InputSwitcherHideTest@@@input_archive@tson@@QEAAAEAV01@AEAU_tip_InputSwitcherHideTest@@@Z @ 0x18061241C
 * Callers:
 *     ?deserialize@?$merged_data@U_tip_InputSwitcherHideTest@@U1@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x1806143A0 (-deserialize@-$merged_data@U_tip_InputSwitcherHideTest@@U1@@details@tip2@@EEAAXAEAVinput_archive.c)
 * Callees:
 *     ??$?RV?$nvp@AEA_N@tson@@V01@V01@@input_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEA_N@1@00@Z @ 0x1801851C0 (--$-RV-$nvp@AEA_N@tson@@V01@V01@@input_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@AEA_N@1@00@Z.c)
 *     ?startNode@input_archive@tson@@QEAAXXZ @ 0x1801852A0 (-startNode@input_archive@tson@@QEAAXXZ.c)
 *     ?finishNode@input_archive@tson@@QEAAXXZ @ 0x180185568 (-finishNode@input_archive@tson@@QEAAXXZ.c)
 */

tson::input_archive *__fastcall tson::input_archive::operator()<_tip_InputSwitcherHideTest &>(
        tson::input_archive *this,
        __int64 a2)
{
  const char *v5; // [rsp+20h] [rbp-50h] BYREF
  char v6; // [rsp+28h] [rbp-48h]
  __int64 v7; // [rsp+30h] [rbp-40h]
  const char *v8; // [rsp+38h] [rbp-38h] BYREF
  char v9; // [rsp+40h] [rbp-30h]
  __int64 v10; // [rsp+48h] [rbp-28h]
  const char *v11; // [rsp+50h] [rbp-20h] BYREF
  char v12; // [rsp+58h] [rbp-18h]
  __int64 v13; // [rsp+60h] [rbp-10h]

  tson::input_archive::startNode(this);
  v6 = 22;
  v5 = "controlCenterAvailable";
  v9 = 20;
  v7 = a2 + 18;
  v12 = 8;
  v8 = "controlCenterVisible";
  v10 = a2 + 17;
  v11 = "timedOut";
  v13 = a2 + 16;
  tson::input_archive::operator()<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>>(
    (__int64)this,
    (__int64)&v11,
    (__int64)&v8,
    (__int64 *)&v5);
  tson::input_archive::finishNode(this);
  return this;
}
