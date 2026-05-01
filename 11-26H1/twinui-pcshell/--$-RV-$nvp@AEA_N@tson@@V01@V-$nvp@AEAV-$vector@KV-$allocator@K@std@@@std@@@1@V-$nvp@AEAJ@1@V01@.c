/*
 * XREFs of ??$?RV?$nvp@AEA_N@tson@@V01@V?$nvp@AEAV?$vector@KV?$allocator@K@std@@@std@@@1@V?$nvp@AEAJ@1@V01@@input_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEA_N@1@0$$QEAV?$nvp@AEAV?$vector@KV?$allocator@K@std@@@std@@@1@$$QEAV?$nvp@AEAJ@1@0@Z @ 0x1805FEFF0
 * Callers:
 *     ??$serialize@Vinput_archive@tson@@@_tip_WinXMenuEnumerationTest@@QEAAXAEAVinput_archive@tson@@@Z @ 0x1806000EC (--$serialize@Vinput_archive@tson@@@_tip_WinXMenuEnumerationTest@@QEAAXAEAVinput_archive@tson@@@Z.c)
 * Callees:
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x1801770A8 (-search@input_archive@tson@@AEAA_NXZ.c)
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x1801771BC (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 *     ??$process@V?$nvp@AEA_N@tson@@V?$nvp@AEAV?$vector@KV?$allocator@K@std@@@std@@@2@V?$nvp@AEAJ@2@V12@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@$$QEAV?$nvp@AEAV?$vector@KV?$allocator@K@std@@@std@@@1@$$QEAV?$nvp@AEAJ@1@0@Z @ 0x1805FFF84 (--$process@V-$nvp@AEA_N@tson@@V-$nvp@AEAV-$vector@KV-$allocator@K@std@@@std@@@2@V-$nvp@AEAJ@2@V1.c)
 */

tson::input_archive *__fastcall tson::input_archive::operator()<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<std::vector<unsigned long> &>,tson::nvp<long &>,tson::nvp<bool &>>(
        tson::input_archive *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  char v6; // r10
  bool *v8; // rdi
  __int64 v9; // rdx
  char *v10; // rax
  char v11; // cl
  bool v12; // al

  v6 = *(_BYTE *)(a2 + 8);
  *((_QWORD *)this + 2) = *(_QWORD *)a2;
  *((_BYTE *)this + 24) = v6;
  v8 = *(bool **)(a2 + 16);
  if ( !tson::input_archive::search(this) )
  {
    v12 = 0;
    goto LABEL_6;
  }
  tson::input_archive::consume_expected_marker(this, 10, -2147023267);
  v9 = *(_QWORD *)this;
  v10 = *(char **)(*(_QWORD *)this + 8LL);
  if ( (unsigned __int64)v10 < *(_QWORD *)(*(_QWORD *)this + 16LL) )
  {
    v11 = *v10;
    *(_QWORD *)(v9 + 8) = v10 + 1;
    v12 = v11 != 0;
LABEL_6:
    *v8 = v12;
    goto LABEL_7;
  }
  *(_BYTE *)(v9 + 24) = 1;
LABEL_7:
  tson::input_archive::process<tson::nvp<bool &>,tson::nvp<std::vector<unsigned long> &>,tson::nvp<long &>,tson::nvp<bool &>>(
    this,
    a6);
  return this;
}
