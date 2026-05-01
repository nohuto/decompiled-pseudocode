/*
 * XREFs of ??$process@V?$nvp@AEAV?$vector@HV?$allocator@H@std@@@std@@@tson@@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAV?$vector@HV?$allocator@H@std@@@std@@@1@$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@@Z @ 0x1805C6BD0
 * Callers:
 *     ??$serialize@Voutput_archive@tson@@@_tip_AppPrelaunch@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x18026CB9C (--$serialize@Voutput_archive@tson@@@_tip_AppPrelaunch@@QEAAXAEAVoutput_archive@tson@@@Z.c)
 * Callees:
 *     ?startNode@output_archive@tson@@QEAAXXZ @ 0x1800E00F0 (-startNode@output_archive@tson@@QEAAXXZ.c)
 *     ?finishNode@output_archive@tson@@QEAAXXZ @ 0x1800E0448 (-finishNode@output_archive@tson@@QEAAXXZ.c)
 *     ??$?RAEAH@output_archive@tson@@QEAAAEAV01@AEAH@Z @ 0x180180E4C (--$-RAEAH@output_archive@tson@@QEAAAEAV01@AEAH@Z.c)
 *     ??$?RUsize_tag@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAUsize_tag@1@@Z @ 0x180180E94 (--$-RUsize_tag@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAUsize_tag@1@@Z.c)
 */

char __fastcall tson::output_archive::process<tson::nvp<std::vector<int> &>,tson::nvp<std::wstring &>>(
        tson::output_archive *this,
        __int64 a2,
        __int64 *a3)
{
  char v3; // r9
  int **v6; // rbx
  int *v7; // rbp
  int *i; // rbx
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(_BYTE *)(a2 + 8);
  *(_QWORD *)this = *(_QWORD *)a2;
  *((_BYTE *)this + 8) = v3;
  v6 = *(int ***)(a2 + 16);
  tson::output_archive::startNode(this);
  v12 = v6[1] - *v6;
  tson::output_archive::operator()<tson::size_tag>((__int64)this, (unsigned __int64 *)&v12);
  v7 = v6[1];
  for ( i = *v6; i != v7; ++i )
    tson::output_archive::operator()<int &>((__int64)this, i);
  tson::output_archive::finishNode(this);
  v9 = *a3;
  *((_BYTE *)this + 8) = *((_BYTE *)a3 + 8);
  *(_QWORD *)this = v9;
  return tson::save_nothrow((__int64)this, (const void **)a3[2], v10);
}
