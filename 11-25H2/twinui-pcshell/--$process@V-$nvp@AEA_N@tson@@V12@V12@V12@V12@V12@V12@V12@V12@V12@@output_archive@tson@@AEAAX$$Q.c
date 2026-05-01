/*
 * XREFs of ??$process@V?$nvp@AEA_N@tson@@V12@V12@V12@V12@V12@V12@V12@V12@V12@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@000000000@Z @ 0x18032A894
 * Callers:
 *     ??$?RV?$nvp@AEA_N@tson@@V01@V01@V01@V01@V01@V01@V01@V01@V01@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEA_N@1@000000000@Z @ 0x180328FFC (--$-RV-$nvp@AEA_N@tson@@V01@V01@V01@V01@V01@V01@V01@V01@V01@@output_archive@tson@@QEAAAEAV01@$$Q.c)
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V12@V12@V12@V12@V12@V12@V12@V12@V12@V12@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@00000000000@Z @ 0x1805A38F0 (--$process@V-$nvp@AEA_N@tson@@V12@V12@V12@V12@V12@V12@V12@V12@V12@V12@V12@@output_archive@tson@@.c)
 * Callees:
 *     ??$process@V?$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@@Z @ 0x1800DDAAC (--$process@V-$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@@Z.c)
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V12@V12@V12@V12@V12@V12@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@0000000@Z @ 0x180298FCC (--$process@V-$nvp@AEA_N@tson@@V12@V12@V12@V12@V12@V12@V12@@output_archive@tson@@AEAAX$$QEAV-$nvp.c)
 */

__int64 __fastcall tson::output_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11)
{
  tson::output_archive::process<tson::nvp<bool &>>(a1, a2);
  tson::output_archive::process<tson::nvp<bool &>>(a1, a3);
  return tson::output_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>>(
           a1,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11);
}
