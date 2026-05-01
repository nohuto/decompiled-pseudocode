/*
 * XREFs of ??$process@V?$nvp@AEA_N@tson@@V12@V?$nvp@AEAJ@2@V12@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@0$$QEAV?$nvp@AEAJ@1@0@Z @ 0x18044BA14
 * Callers:
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V12@V12@V?$nvp@AEAJ@2@V12@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@000$$QEAV?$nvp@AEAJ@1@0@Z @ 0x18044B1F4 (--$process@V-$nvp@AEA_N@tson@@V12@V12@V12@V-$nvp@AEAJ@2@V12@@input_archive@tson@@AEAAX$$QEAV-$nv.c)
 * Callees:
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x1801852D0 (-search@input_archive@tson@@AEAA_NXZ.c)
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x1801853E4 (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 */

char __fastcall tson::input_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<long &>,tson::nvp<bool &>>(
        tson::input_archive *this,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5)
{
  char v5; // r10
  bool *v9; // rsi
  __int64 v10; // rdx
  char *v11; // rax
  char v12; // cl
  bool v13; // al
  __int64 v14; // rax
  bool *v15; // rdi
  __int64 v16; // rdx
  char *v17; // rax
  char v18; // cl
  bool v19; // al

  v5 = *(_BYTE *)(a2 + 8);
  *((_QWORD *)this + 2) = *(_QWORD *)a2;
  *((_BYTE *)this + 24) = v5;
  v9 = *(bool **)(a2 + 16);
  if ( tson::input_archive::search(this) )
  {
    tson::input_archive::consume_expected_marker(this, 10, -2147023267);
    v10 = *(_QWORD *)this;
    v11 = *(char **)(*(_QWORD *)this + 8LL);
    if ( (unsigned __int64)v11 >= *(_QWORD *)(*(_QWORD *)this + 16LL) )
    {
      *(_BYTE *)(v10 + 24) = 1;
      goto LABEL_7;
    }
    v12 = *v11;
    *(_QWORD *)(v10 + 8) = v11 + 1;
    v13 = v12 != 0;
  }
  else
  {
    v13 = 0;
  }
  *v9 = v13;
LABEL_7:
  v14 = *a3;
  *((_BYTE *)this + 24) = *((_BYTE *)a3 + 8);
  *((_QWORD *)this + 2) = v14;
  v15 = (bool *)a3[2];
  if ( !tson::input_archive::search(this) )
  {
    v19 = 0;
    goto LABEL_12;
  }
  tson::input_archive::consume_expected_marker(this, 10, -2147023267);
  v16 = *(_QWORD *)this;
  v17 = *(char **)(*(_QWORD *)this + 8LL);
  if ( (unsigned __int64)v17 < *(_QWORD *)(*(_QWORD *)this + 16LL) )
  {
    v18 = *v17;
    *(_QWORD *)(v16 + 8) = v17 + 1;
    v19 = v18 != 0;
LABEL_12:
    *v15 = v19;
    return tson::input_archive::process<tson::nvp<long &>,tson::nvp<bool &>>(this, a4, a5);
  }
  *(_BYTE *)(v16 + 24) = 1;
  return tson::input_archive::process<tson::nvp<long &>,tson::nvp<bool &>>(this, a4, a5);
}
