/*
 * XREFs of ??$?RV?$nvp@AEAU_tip_ISMSessionMonitorCreationTipTest@@@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAU_tip_ISMSessionMonitorCreationTipTest@@@1@@Z @ 0x1800A24B4
 * Callers:
 *     ?serialize@?$merged_data@U_tip_ISMSessionMonitorCreationTipTest@@U1@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x1800A4870 (-serialize@-$merged_data@U_tip_ISMSessionMonitorCreationTipTest@@U1@@details@tip2@@EEAAXAEAVoutp.c)
 * Callees:
 *     ??$?RAEA_N@output_archive@tson@@QEAAAEAV01@AEA_N@Z @ 0x1800A22A0 (--$-RAEA_N@output_archive@tson@@QEAAAEAV01@AEA_N@Z.c)
 *     ??$process@V?$nvp@AEAJ@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAJ@1@@Z @ 0x1800A2910 (--$process@V-$nvp@AEAJ@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAJ@1@@Z.c)
 *     ?finishNode@output_archive@tson@@QEAAXXZ @ 0x1800A3E10 (-finishNode@output_archive@tson@@QEAAXXZ.c)
 *     ?startNode@output_archive@tson@@QEAAXXZ @ 0x1800A4C8C (-startNode@output_archive@tson@@QEAAXXZ.c)
 */

tson::output_archive *__fastcall tson::output_archive::operator()<tson::nvp<_tip_ISMSessionMonitorCreationTipTest &>>(
        tson::output_archive *this,
        __int64 a2)
{
  char v2; // r8
  __int64 v4; // rbx
  __int64 v5; // r8
  __int64 v6; // r8
  const char *v8; // [rsp+20h] [rbp-28h] BYREF
  char v9; // [rsp+28h] [rbp-20h]
  __int64 v10; // [rsp+30h] [rbp-18h]

  v2 = *(_BYTE *)(a2 + 8);
  *(_QWORD *)this = *(_QWORD *)a2;
  *((_BYTE *)this + 8) = v2;
  v4 = *(_QWORD *)(a2 + 16);
  tson::output_archive::startNode(this);
  v9 = 9;
  v8 = "errorCode";
  *((_BYTE *)this + 8) = 10;
  v10 = v4 + 20;
  *(_QWORD *)this = "waitFailed";
  tson::output_archive::operator()<bool &>((__int64)this, (char *)(v4 + 16), v5);
  *((_BYTE *)this + 8) = 14;
  *(_QWORD *)this = "fallbackFailed";
  tson::output_archive::operator()<bool &>((__int64)this, (char *)(v4 + 17), v6);
  tson::output_archive::process<tson::nvp<long &>>(this, &v8);
  tson::output_archive::finishNode(this);
  return this;
}
