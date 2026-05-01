/*
 * XREFs of ??$?RAEAU_tip_MakePhysicalDeviceAccessKeyVolatileTipTest@@@output_archive@tson@@QEAAAEAV01@AEAU_tip_MakePhysicalDeviceAccessKeyVolatileTipTest@@@Z @ 0x180616268
 * Callers:
 *     ?serialize@?$merged_data@U_tip_MakePhysicalDeviceAccessKeyVolatileTipTest@@U1@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x18061D8D0 (-serialize@-$merged_data@U_tip_MakePhysicalDeviceAccessKeyVolatileTipTest@@U1@@details@tip2@@EEA.c)
 * Callees:
 *     ??$?RV?$nvp@AEA_N@tson@@V01@V01@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEA_N@1@00@Z @ 0x1800DD21C (--$-RV-$nvp@AEA_N@tson@@V01@V01@@output_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@AEA_N@1@00@Z.c)
 *     ?startNode@output_archive@tson@@QEAAXXZ @ 0x1800DDF6C (-startNode@output_archive@tson@@QEAAXXZ.c)
 *     ?finishNode@output_archive@tson@@QEAAXXZ @ 0x1800DF23C (-finishNode@output_archive@tson@@QEAAXXZ.c)
 */

tson::output_archive *__fastcall tson::output_archive::operator()<_tip_MakePhysicalDeviceAccessKeyVolatileTipTest &>(
        tson::output_archive *this,
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

  tson::output_archive::startNode(this);
  v6 = 28;
  v5 = "isPhysicalDeviceAccessKeySet";
  v9 = 32;
  v7 = a2 + 18;
  v12 = 32;
  v8 = "isPhysicalDeviceAccessKeyCreated";
  v10 = a2 + 17;
  v11 = "isPhysicalDeviceAccessKeyDeleted";
  v13 = a2 + 16;
  tson::output_archive::operator()<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>>(
    (__int64)this,
    (__int64)&v11,
    (__int64)&v8,
    (__int64)&v5);
  tson::output_archive::finishNode(this);
  return this;
}
