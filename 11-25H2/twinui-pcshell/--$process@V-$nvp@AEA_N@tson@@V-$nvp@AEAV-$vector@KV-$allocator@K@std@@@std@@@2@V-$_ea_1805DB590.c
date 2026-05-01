/*
 * XREFs of ??$process@V?$nvp@AEA_N@tson@@V?$nvp@AEAV?$vector@KV?$allocator@K@std@@@std@@@2@V?$nvp@AEAJ@2@V12@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@$$QEAV?$nvp@AEAV?$vector@KV?$allocator@K@std@@@std@@@1@$$QEAV?$nvp@AEAJ@1@0@Z @ 0x1805DB590
 * Callers:
 *     ??$serialize@Voutput_archive@tson@@@_tip_WinXMenuEnumerationTest@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x1805DB6F0 (--$serialize@Voutput_archive@tson@@@_tip_WinXMenuEnumerationTest@@QEAAXAEAVoutput_archive@tson@@.c)
 * Callees:
 *     ??$process@V?$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@@Z @ 0x1800DDAAC (--$process@V-$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@@Z.c)
 *     ?startNode@output_archive@tson@@QEAAXXZ @ 0x1800DDF6C (-startNode@output_archive@tson@@QEAAXXZ.c)
 *     ?saveValue@output_archive@tson@@QEAAXK@Z @ 0x1800DE4B8 (-saveValue@output_archive@tson@@QEAAXK@Z.c)
 *     ?finishNode@output_archive@tson@@QEAAXXZ @ 0x1800DF23C (-finishNode@output_archive@tson@@QEAAXXZ.c)
 *     ??$?RUsize_tag@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAUsize_tag@1@@Z @ 0x1800E01C0 (--$-RUsize_tag@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAUsize_tag@1@@Z.c)
 */

char __fastcall tson::output_archive::process<tson::nvp<bool &>,tson::nvp<std::vector<unsigned long> &>,tson::nvp<long &>,tson::nvp<bool &>>(
        tson::output_archive *this,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        __int64 a5)
{
  char v8; // dl
  unsigned int **v9; // rbx
  __int64 v10; // r8
  unsigned int *v11; // rsi
  unsigned int *i; // rbx
  __int64 v14; // [rsp+30h] [rbp+8h] BYREF

  tson::output_archive::process<tson::nvp<bool &>>((__int64)this, a2);
  v8 = *(_BYTE *)(a3 + 8);
  *(_QWORD *)this = *(_QWORD *)a3;
  *((_BYTE *)this + 8) = v8;
  v9 = *(unsigned int ***)(a3 + 16);
  tson::output_archive::startNode(this);
  v14 = v9[1] - *v9;
  tson::output_archive::operator()<tson::size_tag>((__int64)this, (unsigned __int64 *)&v14);
  v11 = v9[1];
  for ( i = *v9; i != v11; ++i )
    tson::output_archive::saveValue(this, *i, v10);
  tson::output_archive::finishNode(this);
  return tson::output_archive::process<tson::nvp<long &>,tson::nvp<bool &>>((__int64)this, a4, a5);
}
