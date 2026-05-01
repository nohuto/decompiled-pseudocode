/*
 * XREFs of ??$process@V?$nvp@AEA_N@tson@@V12@V12@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@00@Z @ 0x1801DE540
 * Callers:
 *     ??$serialize@Voutput_archive@tson@@@_tip_TabTearOutEventTest@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x180582800 (--$serialize@Voutput_archive@tson@@@_tip_TabTearOutEventTest@@QEAAXAEAVoutput_archive@tson@@@Z.c)
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V12@V12@V?$nvp@AEAI@2@V?$nvp@AEAH@2@V12@V?$nvp@AEAW4keyPressType@@@2@V12@V12@V12@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@0$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@00$$QEAV?$nvp@AEAI@1@$$QEAV?$nvp@AEAH@1@0$$QEAV?$nvp@AEAW4keyPressType@@@1@000@Z @ 0x1805FC7CC (--$process@V-$nvp@AEA_N@tson@@V12@V-$nvp@AEAV-$basic_string@GU-$char_traits@G@std@@_ea_1805FC7CC.c)
 * Callees:
 *     ??$process@V?$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@@Z @ 0x1800DDAAC (--$process@V-$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@@Z.c)
 */

char __fastcall tson::output_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  tson::output_archive::process<tson::nvp<bool &>>(a1, a2);
  tson::output_archive::process<tson::nvp<bool &>>(a1, a3);
  return tson::output_archive::process<tson::nvp<bool &>>(a1, a4);
}
