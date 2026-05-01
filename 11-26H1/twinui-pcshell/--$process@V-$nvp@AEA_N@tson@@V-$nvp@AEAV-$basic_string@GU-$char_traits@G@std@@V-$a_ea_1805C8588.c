/*
 * XREFs of ??$process@V?$nvp@AEA_N@tson@@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V32@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@1@Z @ 0x1805C8588
 * Callers:
 *     ??$serialize@Voutput_archive@tson@@@_tip_RemoteSessionActivationTipTest@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x180657CFC (--$serialize@Voutput_archive@tson@@@_tip_RemoteSessionActivationTipTest@@QEAAXAEAVoutput_archive.c)
 * Callees:
 *     ?save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1800DF188 (-save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocat.c)
 *     ??$process@V?$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@@Z @ 0x1800DFC8C (--$process@V-$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@@Z.c)
 */

char __fastcall tson::output_archive::process<tson::nvp<bool &>,tson::nvp<std::wstring &>,tson::nvp<std::wstring &>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  char v7; // dl
  __int64 v8; // r8
  char v9; // dl
  __int64 v10; // r8

  tson::output_archive::process<tson::nvp<bool &>>(a1, a2);
  v7 = *(_BYTE *)(a3 + 8);
  *(_QWORD *)a1 = *(_QWORD *)a3;
  *(_BYTE *)(a1 + 8) = v7;
  tson::save_nothrow(a1, *(const void ***)(a3 + 16), v8);
  v9 = *(_BYTE *)(a4 + 8);
  *(_QWORD *)a1 = *(_QWORD *)a4;
  *(_BYTE *)(a1 + 8) = v9;
  return tson::save_nothrow(a1, *(const void ***)(a4 + 16), v10);
}
