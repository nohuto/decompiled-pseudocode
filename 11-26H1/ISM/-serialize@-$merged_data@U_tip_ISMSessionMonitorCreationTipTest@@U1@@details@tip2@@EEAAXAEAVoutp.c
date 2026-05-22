/*
 * XREFs of ?serialize@?$merged_data@U_tip_ISMSessionMonitorCreationTipTest@@U1@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x1800A4870
 * Callers:
 *     <none>
 * Callees:
 *     ??$?RV?$nvp@AEAU_tip_ISMSessionMonitorCreationTipTest@@@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAU_tip_ISMSessionMonitorCreationTipTest@@@1@@Z @ 0x1800A24B4 (--$-RV-$nvp@AEAU_tip_ISMSessionMonitorCreationTipTest@@@tson@@@output_archive@tson@@QEAAAEAV01@$.c)
 *     ?finishNode@output_archive@tson@@QEAAXXZ @ 0x1800A3E10 (-finishNode@output_archive@tson@@QEAAXXZ.c)
 *     ?startNode@output_archive@tson@@QEAAXXZ @ 0x1800A4C8C (-startNode@output_archive@tson@@QEAAXXZ.c)
 */

void __fastcall tip2::details::merged_data<_tip_ISMSessionMonitorCreationTipTest,_tip_ISMSessionMonitorCreationTipTest>::serialize(
        __int64 a1,
        tson::output_archive *a2,
        char a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  const char *v9; // [rsp+20h] [rbp-28h] BYREF
  char v10; // [rsp+28h] [rbp-20h]
  __int64 v11; // [rsp+30h] [rbp-18h]

  if ( (a3 & 2) != 0 )
  {
    *((_BYTE *)a2 + 8) = 7;
    *(_QWORD *)a2 = "metrics";
    tson::output_archive::startNode(a2);
    *(_DWORD *)(a1 + 184) = 0;
    tson::output_archive::finishNode(a2, v6, v7, v8);
  }
  if ( (a3 & 1) != 0 )
  {
    v10 = 4;
    v9 = "test";
    v11 = (a1 + 256) & -(__int64)(a1 != 0);
    tson::output_archive::operator()<tson::nvp<_tip_ISMSessionMonitorCreationTipTest &>>(a2, (__int64)&v9);
  }
}
