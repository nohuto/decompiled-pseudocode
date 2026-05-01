/*
 * XREFs of ??$process@V?$nvp@AEAJ@tson@@V?$nvp@AEA_N@2@V32@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAJ@1@$$QEAV?$nvp@AEA_N@1@1@Z @ 0x18047A888
 * Callers:
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V?$nvp@AEAJ@2@V12@V12@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@0$$QEAV?$nvp@AEAJ@1@00@Z @ 0x18047A9BC (--$process@V-$nvp@AEA_N@tson@@V12@V-$nvp@AEAJ@2@V12@V12@@input_archive@tson@@AEAAX$$QEAV-$nvp@AE.c)
 *     ??$serialize@Vinput_archive@tson@@@_tip_OutOfProcDesktopSnapLayoutManagerTest@@QEAAXAEAVinput_archive@tson@@@Z @ 0x180594C94 (--$serialize@Vinput_archive@tson@@@_tip_OutOfProcDesktopSnapLayoutManagerTest@@QEAAXAEAVinput_ar.c)
 * Callees:
 *     ??$process@V?$nvp@AEAJ@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAJ@1@@Z @ 0x18032A0F4 (--$process@V-$nvp@AEAJ@tson@@@input_archive@tson@@AEAAX$$QEAV-$nvp@AEAJ@1@@Z.c)
 */

char __fastcall tson::input_archive::process<tson::nvp<long &>,tson::nvp<bool &>,tson::nvp<bool &>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  tson::input_archive::process<tson::nvp<long &>>(a1, a2);
  return tson::input_archive::process<tson::nvp<bool &>,tson::nvp<bool &>>(a1, a3, a4);
}
