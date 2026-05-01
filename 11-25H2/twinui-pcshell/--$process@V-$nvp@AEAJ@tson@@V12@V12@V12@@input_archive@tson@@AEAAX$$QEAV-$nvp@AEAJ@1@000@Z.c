/*
 * XREFs of ??$process@V?$nvp@AEAJ@tson@@V12@V12@V12@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAJ@1@000@Z @ 0x1805191A8
 * Callers:
 *     ??$process@V?$nvp@AEAJ@tson@@V12@V12@V12@V12@V12@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAJ@1@00000@Z @ 0x180519200 (--$process@V-$nvp@AEAJ@tson@@V12@V12@V12@V12@V12@@input_archive@tson@@AEAAX$$QEAV-$nvp@AEAJ@1@00.c)
 *     ??$process@V?$nvp@AEAI@tson@@V?$nvp@AEAJ@2@V32@V32@V32@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAI@1@$$QEAV?$nvp@AEAJ@1@111@Z @ 0x18057071C (--$process@V-$nvp@AEAI@tson@@V-$nvp@AEAJ@2@V32@V32@V32@@input_archive@tson@@AEAAX$$QEAV-$nvp@AEA.c)
 * Callees:
 *     ??$process@V?$nvp@AEAJ@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAJ@1@@Z @ 0x18032A0F4 (--$process@V-$nvp@AEAJ@tson@@@input_archive@tson@@AEAAX$$QEAV-$nvp@AEAJ@1@@Z.c)
 */

bool __fastcall tson::input_archive::process<tson::nvp<long &>,tson::nvp<long &>,tson::nvp<long &>,tson::nvp<long &>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  tson::input_archive::process<tson::nvp<long &>>(a1, a2);
  tson::input_archive::process<tson::nvp<long &>>(a1, a3);
  tson::input_archive::process<tson::nvp<long &>>(a1, a4);
  return tson::input_archive::process<tson::nvp<long &>>(a1, a5);
}
