/*
 * XREFs of ??$process@V?$nvp@AEA_N@tson@@V?$nvp@AEAH@2@V32@V32@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@$$QEAV?$nvp@AEAH@1@11@Z @ 0x1805CE804
 * Callers:
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V12@V?$nvp@AEAH@2@V32@V32@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@00$$QEAV?$nvp@AEAH@1@11@Z @ 0x1805CE704 (--$process@V-$nvp@AEA_N@tson@@V12@V12@V-$nvp@AEAH@2@V32@V32@@input_archive@tson@@AEAAX$$QEAV-$nv.c)
 * Callees:
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x1801852D0 (-search@input_archive@tson@@AEAA_NXZ.c)
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x1801853E4 (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 *     ??$?RAEAH@input_archive@tson@@QEAAAEAV01@AEAH@Z @ 0x1804577F8 (--$-RAEAH@input_archive@tson@@QEAAAEAV01@AEAH@Z.c)
 */

tson::input_archive *__fastcall tson::input_archive::process<tson::nvp<bool &>,tson::nvp<int &>,tson::nvp<int &>,tson::nvp<int &>>(
        __int64 *a1,
        __int64 a2,
        __int64 *a3,
        __int64 *a4,
        __int64 *a5)
{
  char v5; // r10
  bool *v9; // rdi
  __int64 v10; // rdx
  char *v11; // rax
  char v12; // cl
  bool v13; // al
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax

  v5 = *(_BYTE *)(a2 + 8);
  a1[2] = *(_QWORD *)a2;
  *((_BYTE *)a1 + 24) = v5;
  v9 = *(bool **)(a2 + 16);
  if ( !tson::input_archive::search((tson::input_archive *)a1) )
  {
    v13 = 0;
    goto LABEL_6;
  }
  tson::input_archive::consume_expected_marker(a1, 10, -2147023267);
  v10 = *a1;
  v11 = *(char **)(*a1 + 8);
  if ( (unsigned __int64)v11 < *(_QWORD *)(*a1 + 16) )
  {
    v12 = *v11;
    *(_QWORD *)(v10 + 8) = v11 + 1;
    v13 = v12 != 0;
LABEL_6:
    *v9 = v13;
    goto LABEL_7;
  }
  *(_BYTE *)(v10 + 24) = 1;
LABEL_7:
  v14 = *a3;
  *((_BYTE *)a1 + 24) = *((_BYTE *)a3 + 8);
  a1[2] = v14;
  tson::input_archive::operator()<int &>((tson::input_archive *)a1, (_DWORD *)a3[2]);
  v15 = *a4;
  *((_BYTE *)a1 + 24) = *((_BYTE *)a4 + 8);
  a1[2] = v15;
  tson::input_archive::operator()<int &>((tson::input_archive *)a1, (_DWORD *)a4[2]);
  v16 = *a5;
  *((_BYTE *)a1 + 24) = *((_BYTE *)a5 + 8);
  a1[2] = v16;
  return tson::input_archive::operator()<int &>((tson::input_archive *)a1, (_DWORD *)a5[2]);
}
