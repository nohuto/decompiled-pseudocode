/*
 * XREFs of ??$process@V?$nvp@AEAI@tson@@V?$nvp@AEAJ@2@V32@V32@V32@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAI@1@$$QEAV?$nvp@AEAJ@1@111@Z @ 0x18057076C
 * Callers:
 *     ??$serialize@Voutput_archive@tson@@@_tip_TouchEdgeGestureTest@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x180570CB4 (--$serialize@Voutput_archive@tson@@@_tip_TouchEdgeGestureTest@@QEAAXAEAVoutput_archive@tson@@@Z.c)
 *     ??$serialize@Voutput_archive@tson@@@_tip_ColumnSmartFillTest@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x180586C54 (--$serialize@Voutput_archive@tson@@@_tip_ColumnSmartFillTest@@QEAAXAEAVoutput_archive@tson@@@Z.c)
 * Callees:
 *     ??$process@V?$nvp@AEAI@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAI@1@@Z @ 0x1800DE920 (--$process@V-$nvp@AEAI@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAI@1@@Z.c)
 */

char __fastcall tson::output_archive::process<tson::nvp<unsigned int &>,tson::nvp<long &>,tson::nvp<long &>,tson::nvp<long &>,tson::nvp<long &>>(
        __int64 a1,
        __int64 *a2,
        __int64 *a3,
        __int64 *a4,
        __int64 *a5,
        __int64 *a6)
{
  tson::output_archive::process<tson::nvp<unsigned int &>>(a1, a2);
  return tson::output_archive::process<tson::nvp<long &>,tson::nvp<long &>,tson::nvp<long &>,tson::nvp<long &>>(
           a1,
           a3,
           a4,
           a5,
           a6);
}
