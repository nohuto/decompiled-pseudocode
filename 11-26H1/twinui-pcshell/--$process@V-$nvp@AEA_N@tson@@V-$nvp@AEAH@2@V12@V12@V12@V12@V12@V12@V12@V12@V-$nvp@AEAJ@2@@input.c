/*
 * XREFs of ??$process@V?$nvp@AEA_N@tson@@V?$nvp@AEAH@2@V12@V12@V12@V12@V12@V12@V12@V12@V?$nvp@AEAJ@2@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@$$QEAV?$nvp@AEAH@1@00000000$$QEAV?$nvp@AEAJ@1@@Z @ 0x180467268
 * Callers:
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V?$nvp@AEAH@2@V12@V12@V12@V12@V12@V12@V12@V12@V?$nvp@AEAJ@2@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@0$$QEAV?$nvp@AEAH@1@00000000$$QEAV?$nvp@AEAJ@1@@Z @ 0x180466F54 (--$process@V-$nvp@AEA_N@tson@@V12@V-$nvp@AEAH@2@V12@V12@V12@V12@V12@V12@V12@V12@V-$nvp@AEAJ@2@@i.c)
 * Callees:
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x1801770A8 (-search@input_archive@tson@@AEAA_NXZ.c)
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x1801771BC (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 *     ??$?RAEAH@input_archive@tson@@QEAAAEAV01@AEAH@Z @ 0x180463EC4 (--$-RAEAH@input_archive@tson@@QEAAAEAV01@AEAH@Z.c)
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V12@V12@V12@V12@V12@V12@V?$nvp@AEAJ@2@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@0000000$$QEAV?$nvp@AEAJ@1@@Z @ 0x180466B34 (--$process@V-$nvp@AEA_N@tson@@V12@V12@V12@V12@V12@V12@V12@V-$nvp@AEAJ@2@@input_archive@tson@@AEA.c)
 */

__int64 __fastcall tson::input_archive::process<tson::nvp<bool &>,tson::nvp<int &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<long &>>(
        tson::input_archive *this,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12)
{
  char v12; // r10
  bool *v16; // rdi
  __int64 v17; // rdx
  char *v18; // rax
  char v19; // cl
  bool v20; // al
  __int64 v21; // rax

  v12 = *(_BYTE *)(a2 + 8);
  *((_QWORD *)this + 2) = *(_QWORD *)a2;
  *((_BYTE *)this + 24) = v12;
  v16 = *(bool **)(a2 + 16);
  if ( !tson::input_archive::search(this) )
  {
    v20 = 0;
    goto LABEL_6;
  }
  tson::input_archive::consume_expected_marker(this, 10, -2147023267);
  v17 = *(_QWORD *)this;
  v18 = *(char **)(*(_QWORD *)this + 8LL);
  if ( (unsigned __int64)v18 < *(_QWORD *)(*(_QWORD *)this + 16LL) )
  {
    v19 = *v18;
    *(_QWORD *)(v17 + 8) = v18 + 1;
    v20 = v19 != 0;
LABEL_6:
    *v16 = v20;
    goto LABEL_7;
  }
  *(_BYTE *)(v17 + 24) = 1;
LABEL_7:
  v21 = *a3;
  *((_BYTE *)this + 24) = *((_BYTE *)a3 + 8);
  *((_QWORD *)this + 2) = v21;
  tson::input_archive::operator()<int &>(this, (_DWORD *)a3[2]);
  return tson::input_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<long &>>(
           this,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11,
           a12);
}
