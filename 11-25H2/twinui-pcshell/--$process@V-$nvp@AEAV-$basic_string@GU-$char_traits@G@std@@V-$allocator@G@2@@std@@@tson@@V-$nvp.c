/*
 * XREFs of ??$process@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@tson@@V?$nvp@AEA_N@2@V32@V?$nvp@AEAJ@2@V12@V42@V12@V12@V32@V32@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@$$QEAV?$nvp@AEA_N@1@1$$QEAV?$nvp@AEAJ@1@020011@Z @ 0x1803A06F8
 * Callers:
 *     ??$serialize@Voutput_archive@tson@@@_tip_SearchWebProviderInstallTest@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x1803A3E50 (--$serialize@Voutput_archive@tson@@@_tip_SearchWebProviderInstallTest@@QEAAXAEAVoutput_archive@t.c)
 * Callees:
 *     ??$process@V?$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@@Z @ 0x1800DDAAC (--$process@V-$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@@Z.c)
 *     ?save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1800DE2F0 (-save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocat.c)
 *     ??$process@V?$nvp@AEAJ@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAJ@1@@Z @ 0x1800DE8C8 (--$process@V-$nvp@AEAJ@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAJ@1@@Z.c)
 */

char __fastcall tson::output_archive::process<tson::nvp<std::wstring &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<long &>,tson::nvp<std::wstring &>,tson::nvp<long &>,tson::nvp<std::wstring &>,tson::nvp<std::wstring &>,tson::nvp<bool &>,tson::nvp<bool &>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5,
        __int64 *a6,
        __int64 *a7,
        __int64 *a8,
        __int64 *a9,
        __int64 a10,
        __int64 a11)
{
  char v11; // r10
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // r8

  v11 = *(_BYTE *)(a2 + 8);
  *(_QWORD *)a1 = *(_QWORD *)a2;
  *(_BYTE *)(a1 + 8) = v11;
  tson::save_nothrow(a1, *(const void ***)(a2 + 16), a3);
  tson::output_archive::process<tson::nvp<bool &>>(a1, a3);
  tson::output_archive::process<tson::nvp<bool &>>(a1, a4);
  tson::output_archive::process<tson::nvp<long &>>(a1, a5);
  v15 = *a6;
  *(_BYTE *)(a1 + 8) = *((_BYTE *)a6 + 8);
  *(_QWORD *)a1 = v15;
  tson::save_nothrow(a1, (const void **)a6[2], v16);
  tson::output_archive::process<tson::nvp<long &>>(a1, a7);
  v17 = *a8;
  *(_BYTE *)(a1 + 8) = *((_BYTE *)a8 + 8);
  *(_QWORD *)a1 = v17;
  tson::save_nothrow(a1, (const void **)a8[2], v18);
  v19 = *a9;
  *(_BYTE *)(a1 + 8) = *((_BYTE *)a9 + 8);
  *(_QWORD *)a1 = v19;
  tson::save_nothrow(a1, (const void **)a9[2], v20);
  return tson::output_archive::process<tson::nvp<bool &>,tson::nvp<bool &>>(a1, a10, a11);
}
