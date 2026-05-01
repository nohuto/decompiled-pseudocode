/*
 * XREFs of ??$process@V?$nvp@AEAI@tson@@V?$nvp@AEAJ@2@V32@V32@V32@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAI@1@$$QEAV?$nvp@AEAJ@1@111@Z @ 0x180593F7C
 * Callers:
 *     ??$process@V?$nvp@AEA_N@tson@@V?$nvp@AEAI@2@V32@V?$nvp@AEAJ@2@V42@V42@V42@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@$$QEAV?$nvp@AEAI@1@1$$QEAV?$nvp@AEAJ@1@222@Z @ 0x18059429C (--$process@V-$nvp@AEA_N@tson@@V-$nvp@AEAI@2@V32@V-$nvp@AEAJ@2@V42@V42@V42@@input_archive@tson@@A.c)
 *     ??$serialize@Vinput_archive@tson@@@_tip_ColumnSmartFillTest@@QEAAXAEAVinput_archive@tson@@@Z @ 0x1805AAADC (--$serialize@Vinput_archive@tson@@@_tip_ColumnSmartFillTest@@QEAAXAEAVinput_archive@tson@@@Z.c)
 * Callees:
 *     ??$process@V?$nvp@AEAI@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAI@1@@Z @ 0x180326BC0 (--$process@V-$nvp@AEAI@tson@@@input_archive@tson@@AEAAX$$QEAV-$nvp@AEAI@1@@Z.c)
 */

bool __fastcall tson::input_archive::process<tson::nvp<unsigned int &>,tson::nvp<long &>,tson::nvp<long &>,tson::nvp<long &>,tson::nvp<long &>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  tson::input_archive::process<tson::nvp<unsigned int &>>(a1, a2);
  return tson::input_archive::process<tson::nvp<long &>,tson::nvp<long &>,tson::nvp<long &>,tson::nvp<long &>>(
           a1,
           a3,
           a4,
           a5,
           a6);
}
