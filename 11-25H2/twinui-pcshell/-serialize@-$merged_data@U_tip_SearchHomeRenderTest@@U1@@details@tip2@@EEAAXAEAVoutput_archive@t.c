/*
 * XREFs of ?serialize@?$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x1803B4500
 * Callers:
 *     <none>
 * Callees:
 *     ?startNode@output_archive@tson@@QEAAXXZ @ 0x1800DDF6C (-startNode@output_archive@tson@@QEAAXXZ.c)
 *     ?finishNode@output_archive@tson@@QEAAXXZ @ 0x1800DF23C (-finishNode@output_archive@tson@@QEAAXXZ.c)
 *     ??$process@AEAU_tip_SearchHomeRenderTest@@@output_archive@tson@@AEAAXAEAU_tip_SearchHomeRenderTest@@@Z @ 0x1803A0650 (--$process@AEAU_tip_SearchHomeRenderTest@@@output_archive@tson@@AEAAXAEAU_tip_SearchHomeRenderTe.c)
 */

void __fastcall tip2::details::merged_data<_tip_SearchHomeRenderTest,_tip_SearchHomeRenderTest>::serialize(
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
    tson::output_archive::process<_tip_SearchHomeRenderTest &>(a2, (a1 + 248) & -(__int64)(a1 != 0));
  }
}
