/*
 * XREFs of ??$process@V?$nvp@AEAJ@tson@@V12@V12@V12@V12@V12@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAJ@1@00000@Z @ 0x18053BF44
 * Callers:
 *     ??$process@V?$nvp@AEA_N@tson@@V?$nvp@AEAJ@2@V32@V32@V32@V32@V32@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@$$QEAV?$nvp@AEAJ@1@11111@Z @ 0x180590368 (--$process@V-$nvp@AEA_N@tson@@V-$nvp@AEAJ@2@V32@V32@V32@V32@V32@@input_archive@tson@@AEAAX$$QEAV.c)
 * Callees:
 *     ??$process@V?$nvp@AEAJ@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAJ@1@@Z @ 0x180326C24 (--$process@V-$nvp@AEAJ@tson@@@input_archive@tson@@AEAAX$$QEAV-$nvp@AEAJ@1@@Z.c)
 */

bool __fastcall tson::input_archive::process<tson::nvp<long &>,tson::nvp<long &>,tson::nvp<long &>,tson::nvp<long &>,tson::nvp<long &>,tson::nvp<long &>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  tson::input_archive::process<tson::nvp<long &>>(a1, a2);
  tson::input_archive::process<tson::nvp<long &>>(a1, a3);
  return tson::input_archive::process<tson::nvp<long &>,tson::nvp<long &>,tson::nvp<long &>,tson::nvp<long &>>(
           a1,
           a4,
           a5,
           a6,
           a7);
}
