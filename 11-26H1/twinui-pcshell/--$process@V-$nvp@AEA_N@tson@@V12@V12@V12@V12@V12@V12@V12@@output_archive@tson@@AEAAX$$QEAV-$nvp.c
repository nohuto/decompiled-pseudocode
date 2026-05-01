/*
 * XREFs of ??$process@V?$nvp@AEA_N@tson@@V12@V12@V12@V12@V12@V12@V12@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@0000000@Z @ 0x18028F0E4
 * Callers:
 *     ??$serialize@Voutput_archive@tson@@@_tip_GuidedSnapAssistTest@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x18028EF4C (--$serialize@Voutput_archive@tson@@@_tip_GuidedSnapAssistTest@@QEAAXAEAVoutput_archive@tson@@@Z.c)
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V12@V12@V12@V12@V12@V12@V12@V12@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@000000000@Z @ 0x180466A98 (--$process@V-$nvp@AEA_N@tson@@V12@V12@V12@V12@V12@V12@V12@V12@V12@@output_archive@tson@@AEAAX$$Q.c)
 * Callees:
 *     ??$process@V?$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@@Z @ 0x1800DFC8C (--$process@V-$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@@Z.c)
 */

__int64 __fastcall tson::output_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  tson::output_archive::process<tson::nvp<bool &>>(a1, a2);
  tson::output_archive::process<tson::nvp<bool &>>(a1, a3);
  tson::output_archive::process<tson::nvp<bool &>>(a1, a4);
  tson::output_archive::process<tson::nvp<bool &>>(a1, a5);
  return tson::output_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>>(
           a1,
           a6,
           a7,
           a8,
           a9);
}
