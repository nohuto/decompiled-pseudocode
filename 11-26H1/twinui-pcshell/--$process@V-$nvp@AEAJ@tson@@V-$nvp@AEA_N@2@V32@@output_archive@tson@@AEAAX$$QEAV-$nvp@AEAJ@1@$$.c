/*
 * XREFs of ??$process@V?$nvp@AEAJ@tson@@V?$nvp@AEA_N@2@V32@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAJ@1@$$QEAV?$nvp@AEA_N@1@1@Z @ 0x18048B30C
 * Callers:
 *     ??$serialize@Voutput_archive@tson@@@_tip_EyeControllerAppLaunchTest@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x18048B5D0 (--$serialize@Voutput_archive@tson@@@_tip_EyeControllerAppLaunchTest@@QEAAXAEAVoutput_archive@tso.c)
 *     ??$serialize@Voutput_archive@tson@@@_tip_OutOfProcDesktopSnapLayoutManagerTest@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x1805B8F60 (--$serialize@Voutput_archive@tson@@@_tip_OutOfProcDesktopSnapLayoutManagerTest@@QEAAXAEAVoutput_.c)
 * Callees:
 *     ??$process@V?$nvp@AEAJ@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAJ@1@@Z @ 0x1800DF130 (--$process@V-$nvp@AEAJ@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAJ@1@@Z.c)
 */

__int64 __fastcall tson::output_archive::process<tson::nvp<long &>,tson::nvp<bool &>,tson::nvp<bool &>>(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4)
{
  tson::output_archive::process<tson::nvp<long &>>(a1, a2, a3);
  return tson::output_archive::process<tson::nvp<bool &>,tson::nvp<bool &>>(a1, a3, a4);
}
