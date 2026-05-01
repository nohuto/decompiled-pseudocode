/*
 * XREFs of ??$process@V?$nvp@AEA_N@tson@@V12@V12@V12@V12@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@0000$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@@Z @ 0x1805A4104
 * Callers:
 *     ??$serialize@Voutput_archive@tson@@@_tip_ToggleDashboardUsingSwipe@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x1805A66C0 (--$serialize@Voutput_archive@tson@@@_tip_ToggleDashboardUsingSwipe@@QEAAXAEAVoutput_archive@tson.c)
 *     ??$serialize@Voutput_archive@tson@@@_tip_DeactivateRemoteDesktopTipTest@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x1806223AC (--$serialize@Voutput_archive@tson@@@_tip_DeactivateRemoteDesktopTipTest@@QEAAXAEAVoutput_archive.c)
 * Callees:
 *     ??$process@V?$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@@Z @ 0x1800DDAAC (--$process@V-$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@@Z.c)
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V12@V12@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@000$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@@Z @ 0x1805A4208 (--$process@V-$nvp@AEA_N@tson@@V12@V12@V12@V-$nvp@AEAV-$basic_string@GU-$char_traits_ea_1805A4208.c)
 */

__int64 __fastcall tson::output_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<std::wstring &>>(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  int v9; // ebx

  v9 = a1;
  tson::output_archive::process<tson::nvp<bool &>>(a1, a2);
  return tson::output_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<std::wstring &>>(
           v9,
           a3,
           a4,
           a5,
           a6,
           a7);
}
