/*
 * XREFs of ??$process@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@tson@@V?$nvp@AEAW4CloudPCState@Shell@Internal@Windows@winrt@@@2@V?$nvp@AEA_N@2@V42@V?$nvp@AEAH@2@V52@V42@V12@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@$$QEAV?$nvp@AEAW4CloudPCState@Shell@Internal@Windows@winrt@@@1@$$QEAV?$nvp@AEA_N@1@2$$QEAV?$nvp@AEAH@1@320@Z @ 0x1806474AC
 * Callers:
 *     ??$serialize@Voutput_archive@tson@@@_tip_SwitchToRemoteTipTest@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x180647F48 (--$serialize@Voutput_archive@tson@@@_tip_SwitchToRemoteTipTest@@QEAAXAEAVoutput_archive@tson@@@Z.c)
 * Callees:
 *     ?save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1800DF188 (-save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocat.c)
 *     ?saveValue@output_archive@tson@@QEAAXK@Z @ 0x1800DF434 (-saveValue@output_archive@tson@@QEAAXK@Z.c)
 *     ??$process@V?$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@@Z @ 0x1800DFC8C (--$process@V-$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@@Z.c)
 *     ??$?RAEAH@output_archive@tson@@QEAAAEAV01@AEAH@Z @ 0x180180E4C (--$-RAEAH@output_archive@tson@@QEAAAEAV01@AEAH@Z.c)
 */

char __fastcall tson::output_archive::process<tson::nvp<std::wstring &>,tson::nvp<enum winrt::Windows::Internal::Shell::CloudPCState &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<int &>,tson::nvp<int &>,tson::nvp<bool &>,tson::nvp<std::wstring &>>(
        tson::output_archive *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6,
        __int64 *a7,
        __int64 a8,
        __int64 a9)
{
  char v9; // r10
  char v13; // dl
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rax

  v9 = *(_BYTE *)(a2 + 8);
  *(_QWORD *)this = *(_QWORD *)a2;
  *((_BYTE *)this + 8) = v9;
  tson::save_nothrow((__int64)this, *(const void ***)(a2 + 16), a3);
  v13 = *(_BYTE *)(a3 + 8);
  *(_QWORD *)this = *(_QWORD *)a3;
  *((_BYTE *)this + 8) = v13;
  tson::output_archive::saveValue(this, **(unsigned int **)(a3 + 16), v14);
  tson::output_archive::process<tson::nvp<bool &>>((__int64)this, a4);
  tson::output_archive::process<tson::nvp<bool &>>((__int64)this, a5);
  v15 = *a6;
  *((_BYTE *)this + 8) = *((_BYTE *)a6 + 8);
  *(_QWORD *)this = v15;
  tson::output_archive::operator()<int &>((__int64)this, (int *)a6[2]);
  v16 = *a7;
  *((_BYTE *)this + 8) = *((_BYTE *)a7 + 8);
  *(_QWORD *)this = v16;
  tson::output_archive::operator()<int &>((__int64)this, (int *)a7[2]);
  return tson::output_archive::process<tson::nvp<bool &>,tson::nvp<std::wstring &>>((__int64)this, a8, a9);
}
