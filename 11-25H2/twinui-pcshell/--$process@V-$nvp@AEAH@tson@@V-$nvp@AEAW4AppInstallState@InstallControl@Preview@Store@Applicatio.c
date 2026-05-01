/*
 * XREFs of ??$process@V?$nvp@AEAH@tson@@V?$nvp@AEAW4AppInstallState@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@2@V?$nvp@AEAG@2@V42@V42@V42@V42@V42@V42@V42@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V52@V52@V?$nvp@AEAV?$optional@_N@std@@@2@V?$nvp@AEA_N@2@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAH@1@$$QEAV?$nvp@AEAW4AppInstallState@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@1@$$QEAV?$nvp@AEAG@1@2222222$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@33$$QEAV?$nvp@AEAV?$optional@_N@std@@@1@$$QEAV?$nvp@AEA_N@1@@Z @ 0x1805A23A4
 * Callers:
 *     ??$?RV?$nvp@AEAH@tson@@V01@V?$nvp@AEAW4AppInstallState@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@1@V?$nvp@AEAG@1@V31@V31@V31@V31@V31@V31@V31@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@V41@V41@V?$nvp@AEAV?$optional@_N@std@@@1@V?$nvp@AEA_N@1@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAH@1@0$$QEAV?$nvp@AEAW4AppInstallState@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@1@$$QEAV?$nvp@AEAG@1@2222222$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@33$$QEAV?$nvp@AEAV?$optional@_N@std@@@1@$$QEAV?$nvp@AEA_N@1@@Z @ 0x18059F714 (--$-RV-$nvp@AEAH@tson@@V01@V-$nvp@AEAW4AppInstallState@InstallControl@Preview@Store@ApplicationM.c)
 * Callees:
 *     ?saveValue@output_archive@tson@@QEAAXK@Z @ 0x1800DE4B8 (-saveValue@output_archive@tson@@QEAAXK@Z.c)
 *     ??$process@V?$nvp@AEAG@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAG@1@@Z @ 0x1800DF4A8 (--$process@V-$nvp@AEAG@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAG@1@@Z.c)
 *     ??$?RAEAH@output_archive@tson@@QEAAAEAV01@AEAH@Z @ 0x1800DFF74 (--$-RAEAH@output_archive@tson@@QEAAAEAV01@AEAH@Z.c)
 *     ??$process@V?$nvp@AEAG@tson@@V12@V12@V12@V12@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V32@V32@V?$nvp@AEAV?$optional@_N@std@@@2@V?$nvp@AEA_N@2@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAG@1@0000$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@11$$QEAV?$nvp@AEAV?$optional@_N@std@@@1@$$QEAV?$nvp@AEA_N@1@@Z @ 0x1805A1FC4 (--$process@V-$nvp@AEAG@tson@@V12@V12@V12@V12@V-$nvp@AEAV-$basic_string@GU-$char_traits@G@std@@V-.c)
 */

char __fastcall tson::output_archive::process<tson::nvp<int &>,tson::nvp<enum winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallState &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<std::wstring &>,tson::nvp<std::wstring &>,tson::nvp<std::wstring &>,tson::nvp<std::optional<bool> &>,tson::nvp<bool &>>(
        tson::output_archive *this,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        __int64 *a5,
        __int64 *a6,
        __int64 *a7,
        __int64 *a8,
        __int64 *a9,
        __int64 *a10,
        __int64 *a11,
        __int64 *a12,
        __int64 *a13,
        __int64 *a14,
        __int64 a15,
        __int64 a16)
{
  char v16; // r10
  char v20; // dl
  __int64 v21; // r8

  v16 = *(_BYTE *)(a2 + 8);
  *(_QWORD *)this = *(_QWORD *)a2;
  *((_BYTE *)this + 8) = v16;
  tson::output_archive::operator()<int &>((__int64)this, *(int **)(a2 + 16));
  v20 = *(_BYTE *)(a3 + 8);
  *(_QWORD *)this = *(_QWORD *)a3;
  *((_BYTE *)this + 8) = v20;
  tson::output_archive::saveValue(this, **(unsigned int **)(a3 + 16), v21);
  tson::output_archive::process<tson::nvp<unsigned short &>>((__int64)this, a4);
  tson::output_archive::process<tson::nvp<unsigned short &>>((__int64)this, a5);
  tson::output_archive::process<tson::nvp<unsigned short &>>((__int64)this, a6);
  return tson::output_archive::process<tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<std::wstring &>,tson::nvp<std::wstring &>,tson::nvp<std::wstring &>,tson::nvp<std::optional<bool> &>,tson::nvp<bool &>>(
           this,
           a7,
           a8,
           a9,
           a10,
           a11,
           a12,
           a13,
           a14,
           a15,
           a16);
}
