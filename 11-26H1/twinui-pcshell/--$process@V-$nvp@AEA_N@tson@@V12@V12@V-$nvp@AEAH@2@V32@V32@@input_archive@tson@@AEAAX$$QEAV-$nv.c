/*
 * XREFs of ??$process@V?$nvp@AEA_N@tson@@V12@V12@V?$nvp@AEAH@2@V32@V32@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@00$$QEAV?$nvp@AEAH@1@11@Z @ 0x1805F2B74
 * Callers:
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V12@V12@V?$nvp@AEAH@2@V32@V32@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@000$$QEAV?$nvp@AEAH@1@11@Z @ 0x1805F2AB0 (--$process@V-$nvp@AEA_N@tson@@V12@V12@V12@V-$nvp@AEAH@2@V32@V32@@input_archive@tson@@AEAAX$$QEAV.c)
 * Callees:
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x1801770A8 (-search@input_archive@tson@@AEAA_NXZ.c)
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x1801771BC (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 */

__int64 __fastcall tson::input_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<int &>,tson::nvp<int &>,tson::nvp<int &>>(
        tson::input_archive *this,
        __int64 a2,
        __int64 *a3,
        int a4,
        int a5,
        int a6,
        __int64 a7)
{
  char v7; // r10
  bool *v11; // rsi
  __int64 v12; // rdx
  char *v13; // rax
  char v14; // cl
  bool v15; // al
  __int64 v16; // rax
  bool *v17; // rdi
  __int64 v18; // rdx
  char *v19; // rax
  char v20; // cl
  bool v21; // al

  v7 = *(_BYTE *)(a2 + 8);
  *((_QWORD *)this + 2) = *(_QWORD *)a2;
  *((_BYTE *)this + 24) = v7;
  v11 = *(bool **)(a2 + 16);
  if ( tson::input_archive::search(this) )
  {
    tson::input_archive::consume_expected_marker(this, 10, -2147023267);
    v12 = *(_QWORD *)this;
    v13 = *(char **)(*(_QWORD *)this + 8LL);
    if ( (unsigned __int64)v13 >= *(_QWORD *)(*(_QWORD *)this + 16LL) )
    {
      *(_BYTE *)(v12 + 24) = 1;
      goto LABEL_7;
    }
    v14 = *v13;
    *(_QWORD *)(v12 + 8) = v13 + 1;
    v15 = v14 != 0;
  }
  else
  {
    v15 = 0;
  }
  *v11 = v15;
LABEL_7:
  v16 = *a3;
  *((_BYTE *)this + 24) = *((_BYTE *)a3 + 8);
  *((_QWORD *)this + 2) = v16;
  v17 = (bool *)a3[2];
  if ( !tson::input_archive::search(this) )
  {
    v21 = 0;
    goto LABEL_12;
  }
  tson::input_archive::consume_expected_marker(this, 10, -2147023267);
  v18 = *(_QWORD *)this;
  v19 = *(char **)(*(_QWORD *)this + 8LL);
  if ( (unsigned __int64)v19 < *(_QWORD *)(*(_QWORD *)this + 16LL) )
  {
    v20 = *v19;
    *(_QWORD *)(v18 + 8) = v19 + 1;
    v21 = v20 != 0;
LABEL_12:
    *v17 = v21;
    return tson::input_archive::process<tson::nvp<bool &>,tson::nvp<int &>,tson::nvp<int &>,tson::nvp<int &>>(
             (_DWORD)this,
             a4,
             a5,
             a6,
             a7);
  }
  *(_BYTE *)(v18 + 24) = 1;
  return tson::input_archive::process<tson::nvp<bool &>,tson::nvp<int &>,tson::nvp<int &>,tson::nvp<int &>>(
           (_DWORD)this,
           a4,
           a5,
           a6,
           a7);
}
