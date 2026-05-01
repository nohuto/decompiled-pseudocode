/*
 * XREFs of ?serialize@?$merged_data@U_tip_InputSwitcherHideTest@@U1@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x18063A900
 * Callers:
 *     <none>
 * Callees:
 *     ?startNode@output_archive@tson@@QEAAXXZ @ 0x1800E00F0 (-startNode@output_archive@tson@@QEAAXXZ.c)
 *     ?finishNode@output_archive@tson@@QEAAXXZ @ 0x1800E0448 (-finishNode@output_archive@tson@@QEAAXXZ.c)
 *     ??$?RAEAU_tip_InputSwitcherHideTest@@@output_archive@tson@@QEAAAEAV01@AEAU_tip_InputSwitcherHideTest@@@Z @ 0x18063813C (--$-RAEAU_tip_InputSwitcherHideTest@@@output_archive@tson@@QEAAAEAV01@AEAU_tip_InputSwitcherHide.c)
 */

void __fastcall tip2::details::merged_data<_tip_InputSwitcherHideTest,_tip_InputSwitcherHideTest>::serialize(
        __int64 a1,
        tson::output_archive *a2,
        char a3)
{
  if ( (a3 & 2) != 0 )
  {
    *((_BYTE *)a2 + 8) = 7;
    *(_QWORD *)a2 = "metrics";
    tson::output_archive::startNode(a2);
    *(_DWORD *)(a1 + 184) = 0;
    tson::output_archive::finishNode(a2);
  }
  if ( (a3 & 1) != 0 )
  {
    *((_BYTE *)a2 + 8) = 4;
    *(_QWORD *)a2 = "test";
    tson::output_archive::operator()<_tip_InputSwitcherHideTest &>(a2, (a1 + 256) & -(__int64)(a1 != 0));
  }
}
