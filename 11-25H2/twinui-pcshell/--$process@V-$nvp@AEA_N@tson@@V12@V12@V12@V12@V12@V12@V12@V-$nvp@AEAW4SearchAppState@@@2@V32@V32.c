/*
 * XREFs of ??$process@V?$nvp@AEA_N@tson@@V12@V12@V12@V12@V12@V12@V12@V?$nvp@AEAW4SearchAppState@@@2@V32@V32@V32@V12@V12@V12@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@0000000$$QEAV?$nvp@AEAW4SearchAppState@@@1@111000$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@@Z @ 0x180218D34
 * Callers:
 *     ??$serialize@Voutput_archive@tson@@@_tip_SearchHideTest@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x1800DF99C (--$serialize@Voutput_archive@tson@@@_tip_SearchHideTest@@QEAAXAEAVoutput_archive@tson@@@Z.c)
 * Callees:
 *     ??$process@V?$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@@Z @ 0x1800DDAAC (--$process@V-$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@@Z.c)
 *     ?saveValue@output_archive@tson@@QEAAXK@Z @ 0x1800DE4B8 (-saveValue@output_archive@tson@@QEAAXK@Z.c)
 */

char __fastcall tson::output_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<enum SearchAppState &>,tson::nvp<enum SearchAppState &>,tson::nvp<enum SearchAppState &>,tson::nvp<enum SearchAppState &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<std::wstring &>>(
        tson::output_archive *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 *a10,
        __int64 *a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        __int64 *a17)
{
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // r8

  tson::output_archive::process<tson::nvp<bool &>>((__int64)this, a2);
  tson::output_archive::process<tson::nvp<bool &>>((__int64)this, a3);
  tson::output_archive::process<tson::nvp<bool &>>((__int64)this, a4);
  tson::output_archive::process<tson::nvp<bool &>>((__int64)this, a5);
  tson::output_archive::process<tson::nvp<bool &>>((__int64)this, a6);
  tson::output_archive::process<tson::nvp<bool &>>((__int64)this, a7);
  tson::output_archive::process<tson::nvp<bool &>>((__int64)this, a8);
  tson::output_archive::process<tson::nvp<bool &>>((__int64)this, a9);
  v20 = *a10;
  *((_BYTE *)this + 8) = *((_BYTE *)a10 + 8);
  *(_QWORD *)this = v20;
  tson::output_archive::saveValue(this, *(unsigned int *)a10[2], v21);
  v22 = *a11;
  *((_BYTE *)this + 8) = *((_BYTE *)a11 + 8);
  *(_QWORD *)this = v22;
  tson::output_archive::saveValue(this, *(unsigned int *)a11[2], v23);
  return tson::output_archive::process<tson::nvp<enum SearchAppState &>,tson::nvp<enum SearchAppState &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<std::wstring &>>(
           this,
           a12,
           a13,
           a14,
           a15,
           a16,
           a17);
}
