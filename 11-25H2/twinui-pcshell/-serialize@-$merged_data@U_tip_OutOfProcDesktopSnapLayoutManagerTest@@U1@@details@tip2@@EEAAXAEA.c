/*
 * XREFs of ?serialize@?$merged_data@U_tip_OutOfProcDesktopSnapLayoutManagerTest@@U1@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x1805980D0
 * Callers:
 *     <none>
 * Callees:
 *     ?startNode@output_archive@tson@@QEAAXXZ @ 0x1800DDF6C (-startNode@output_archive@tson@@QEAAXXZ.c)
 *     ?finishNode@output_archive@tson@@QEAAXXZ @ 0x1800DF23C (-finishNode@output_archive@tson@@QEAAXXZ.c)
 *     ??$serialize@Voutput_archive@tson@@@_tip_OutOfProcDesktopSnapLayoutManagerTest@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x180594DA0 (--$serialize@Voutput_archive@tson@@@_tip_OutOfProcDesktopSnapLayoutManagerTest@@QEAAXAEAVoutput_.c)
 */

void __fastcall tip2::details::merged_data<_tip_OutOfProcDesktopSnapLayoutManagerTest,_tip_OutOfProcDesktopSnapLayoutManagerTest>::serialize(
        __int64 a1,
        tson::output_archive *a2,
        char a3)
{
  __int64 v6; // r8

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
    tson::output_archive::startNode(a2);
    _tip_OutOfProcDesktopSnapLayoutManagerTest::serialize<tson::output_archive>(
      (a1 + 248) & -(__int64)(a1 != 0),
      (__int64)a2,
      v6);
    tson::output_archive::finishNode(a2);
  }
}
