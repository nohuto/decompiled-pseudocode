/*
 * XREFs of ??$process@V?$nvp@AEAW4InstallTrigger@@@tson@@V?$nvp@AEA_N@2@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V32@V32@V?$nvp@AEAJ@2@V42@V52@V42@V42@V32@V32@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAW4InstallTrigger@@@1@$$QEAV?$nvp@AEA_N@1@$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@11$$QEAV?$nvp@AEAJ@1@232211@Z @ 0x1803A9A30
 * Callers:
 *     ??$serialize@Voutput_archive@tson@@@_tip_SearchWebProviderInstallTest@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x1803ACD0C (--$serialize@Voutput_archive@tson@@@_tip_SearchWebProviderInstallTest@@QEAAXAEAVoutput_archive@t.c)
 * Callees:
 *     ??$process@V?$nvp@AEAJ@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAJ@1@@Z @ 0x1800DF130 (--$process@V-$nvp@AEAJ@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAJ@1@@Z.c)
 *     ?save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1800DF188 (-save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocat.c)
 *     ?saveValue@output_archive@tson@@QEAAXK@Z @ 0x1800DF434 (-saveValue@output_archive@tson@@QEAAXK@Z.c)
 *     ??$process@V?$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@@Z @ 0x1800DFC8C (--$process@V-$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@@Z.c)
 */

__int64 __fastcall tson::output_archive::process<tson::nvp<enum InstallTrigger &>,tson::nvp<bool &>,tson::nvp<std::wstring &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<long &>,tson::nvp<std::wstring &>,tson::nvp<long &>,tson::nvp<std::wstring &>,tson::nvp<std::wstring &>,tson::nvp<bool &>,tson::nvp<bool &>>(
        tson::output_archive *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 *a7,
        __int64 *a8,
        __int64 *a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13)
{
  char v13; // r10
  char v17; // dl
  __int64 v18; // r8
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // r8

  v13 = *(_BYTE *)(a2 + 8);
  *(_QWORD *)a1 = *(_QWORD *)a2;
  *((_BYTE *)a1 + 8) = v13;
  tson::output_archive::saveValue(a1, **(unsigned int **)(a2 + 16), a3);
  tson::output_archive::process<tson::nvp<bool &>>((__int64)a1, a3);
  v17 = *(_BYTE *)(a4 + 8);
  *(_QWORD *)a1 = *(_QWORD *)a4;
  *((_BYTE *)a1 + 8) = v17;
  tson::save_nothrow((__int64)a1, *(const void ***)(a4 + 16), v18);
  tson::output_archive::process<tson::nvp<bool &>>((__int64)a1, a5);
  tson::output_archive::process<tson::nvp<bool &>>((__int64)a1, a6);
  tson::output_archive::process<tson::nvp<long &>>((__int64)a1, a7, v19);
  v20 = *a8;
  *((_BYTE *)a1 + 8) = *((_BYTE *)a8 + 8);
  *(_QWORD *)a1 = v20;
  tson::save_nothrow((__int64)a1, (const void **)a8[2], v21);
  tson::output_archive::process<tson::nvp<long &>>((__int64)a1, a9, v22);
  return tson::output_archive::process<tson::nvp<std::wstring &>,tson::nvp<std::wstring &>,tson::nvp<bool &>,tson::nvp<bool &>>(
           (__int64)a1,
           a10,
           a11,
           a12,
           a13);
}
