/*
 * XREFs of ??$process@V?$nvp@AEAV?$optional@_N@std@@@tson@@V12@V12@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAV?$optional@_N@std@@@1@00@Z @ 0x1805A2CFC
 * Callers:
 *     ??$process@V?$nvp@AEAG@tson@@V12@V12@V12@V12@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V32@V?$nvp@AEAV?$optional@_N@std@@@2@V42@V42@V?$nvp@AEA_N@2@V42@V42@V42@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAG@1@0000$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@1$$QEAV?$nvp@AEAV?$optional@_N@std@@@1@22$$QEAV?$nvp@AEA_N@1@222@Z @ 0x1805A2198 (--$process@V-$nvp@AEAG@tson@@V12@V12@V12@V12@V-$nvp@AEAV-$basic_string@GU-$char_tra_ea_1805A2198.c)
 *     ??$process@V?$nvp@AEAW4AppInstallState@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@tson@@V?$nvp@AEAG@2@V32@V32@V32@V32@V32@V32@V32@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V42@V?$nvp@AEAV?$optional@_N@std@@@2@V52@V52@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAW4AppInstallState@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@1@$$QEAV?$nvp@AEAG@1@1111111$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@2$$QEAV?$nvp@AEAV?$optional@_N@std@@@1@33@Z @ 0x1805A2FD8 (--$process@V-$nvp@AEAW4AppInstallState@InstallControl@Preview@Store@ApplicationMode_ea_1805A2FD8.c)
 * Callees:
 *     ??$process@V?$nvp@AEAV?$optional@_N@std@@@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAV?$optional@_N@std@@@1@@Z @ 0x1805A2C50 (--$process@V-$nvp@AEAV-$optional@_N@std@@@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAV-$opt.c)
 */

void __fastcall tson::output_archive::process<tson::nvp<std::optional<bool> &>,tson::nvp<std::optional<bool> &>,tson::nvp<std::optional<bool> &>>(
        tson::output_archive *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  tson::output_archive::process<tson::nvp<std::optional<bool> &>>(this, a2);
  tson::output_archive::process<tson::nvp<std::optional<bool> &>>(this, a3);
  tson::output_archive::process<tson::nvp<std::optional<bool> &>>(this, a4);
}
