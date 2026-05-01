/*
 * XREFs of ??$process@V?$nvp@AEAW4AppInstallState@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@tson@@V?$nvp@AEAG@2@V32@V32@V32@V32@V32@V32@V32@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V42@V42@V?$nvp@AEA_N@2@V52@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAW4AppInstallState@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@1@$$QEAV?$nvp@AEAG@1@1111111$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@22$$QEAV?$nvp@AEA_N@1@3@Z @ 0x1805C6C74
 * Callers:
 *     ??$process@V?$nvp@AEAH@tson@@V12@V?$nvp@AEAW4AppInstallState@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@2@V?$nvp@AEAG@2@V42@V42@V42@V42@V42@V42@V42@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V52@V52@V?$nvp@AEA_N@2@V62@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAH@1@0$$QEAV?$nvp@AEAW4AppInstallState@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@1@$$QEAV?$nvp@AEAG@1@2222222$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@33$$QEAV?$nvp@AEA_N@1@4@Z @ 0x1805C63A8 (--$process@V-$nvp@AEAH@tson@@V12@V-$nvp@AEAW4AppInstallState@InstallControl@Preview@Store@Applic.c)
 * Callees:
 *     ??$process@V?$nvp@AEAG@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAG@1@@Z @ 0x1800DEA2C (--$process@V-$nvp@AEAG@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAG@1@@Z.c)
 *     ?save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1800DF188 (-save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocat.c)
 *     ?saveValue@output_archive@tson@@QEAAXK@Z @ 0x1800DF434 (-saveValue@output_archive@tson@@QEAAXK@Z.c)
 */

__int64 __fastcall tson::output_archive::process<tson::nvp<enum winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallState &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<std::wstring &>,tson::nvp<std::wstring &>,tson::nvp<std::wstring &>,tson::nvp<bool &>,tson::nvp<bool &>>(
        tson::output_archive *a1,
        __int64 a2,
        __int64 *a3,
        __int64 *a4,
        __int64 *a5,
        __int64 *a6,
        __int64 *a7,
        __int64 *a8,
        __int64 *a9,
        __int64 *a10,
        __int64 *a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15)
{
  char v15; // r10
  __int64 v19; // r8
  __int64 v20; // r8
  __int64 v21; // r8
  __int64 v22; // r8
  __int64 v23; // r8
  __int64 v24; // r8
  __int64 v25; // r8
  __int64 v26; // r8
  __int64 v27; // rax
  __int64 v28; // r8

  v15 = *(_BYTE *)(a2 + 8);
  *(_QWORD *)a1 = *(_QWORD *)a2;
  *((_BYTE *)a1 + 8) = v15;
  tson::output_archive::saveValue(a1, **(unsigned int **)(a2 + 16), (__int64)a3);
  tson::output_archive::process<tson::nvp<unsigned short &>>((__int64)a1, a3, v19);
  tson::output_archive::process<tson::nvp<unsigned short &>>((__int64)a1, a4, v20);
  tson::output_archive::process<tson::nvp<unsigned short &>>((__int64)a1, a5, v21);
  tson::output_archive::process<tson::nvp<unsigned short &>>((__int64)a1, a6, v22);
  tson::output_archive::process<tson::nvp<unsigned short &>>((__int64)a1, a7, v23);
  tson::output_archive::process<tson::nvp<unsigned short &>>((__int64)a1, a8, v24);
  tson::output_archive::process<tson::nvp<unsigned short &>>((__int64)a1, a9, v25);
  tson::output_archive::process<tson::nvp<unsigned short &>>((__int64)a1, a10, v26);
  v27 = *a11;
  *((_BYTE *)a1 + 8) = *((_BYTE *)a11 + 8);
  *(_QWORD *)a1 = v27;
  tson::save_nothrow((__int64)a1, (const void **)a11[2], v28);
  return tson::output_archive::process<tson::nvp<std::wstring &>,tson::nvp<std::wstring &>,tson::nvp<bool &>,tson::nvp<bool &>>(
           (__int64)a1,
           a12,
           a13,
           a14,
           a15);
}
